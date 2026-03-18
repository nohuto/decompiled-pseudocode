/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x140824E80
 * Callers:
 *     EtwpRegTraceCallback @ 0x1408F8840 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1405F93E0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpConstructAndCacheName @ 0x1406E9118 (CmpConstructAndCacheName.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  unsigned __int64 v8; // rdi
  NTSTATUS started; // ebx
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  const UNICODE_STRING *v13; // [rsp+20h] [rbp-78h] BYREF
  PPRIVILEGE_SET v14[4]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v15[48]; // [rsp+48h] [rbp-50h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  WORD1(v14[0]) = -1;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !Cookie )
    goto LABEL_16;
  v8 = *((_QWORD *)Object + 1);
  if ( ObjectID )
    *ObjectID = v8;
  if ( !ObjectName )
  {
    started = 0;
    goto LABEL_17;
  }
  if ( (v8 & 1) == 0 )
  {
    CmpAttachToRegistryProcess((__int64)v15);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)v14, v8, v10, v11);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)v14);
      if ( *(_QWORD *)(v8 + 80) && (int)CmpConstructAndCacheName(v8, &v13) >= 0 )
      {
        started = 0;
        *ObjectName = v13;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)v14);
    }
    CmpUnlockRegistry();
    KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
  }
  else
  {
LABEL_16:
    started = -1073741811;
  }
LABEL_17:
  if ( v14[3] )
    CmSiFreeMemory(v14[3]);
  return started;
}
