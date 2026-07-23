/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1407EBE30
 * Callers:
 *     EtwpRegTraceCallback @ 0x1408BD4F0 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpConstructAndCacheName @ 0x1406C9D48 (CmpConstructAndCacheName.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  unsigned __int64 v8; // rdi
  NTSTATUS started; // ebx
  const UNICODE_STRING *v11; // [rsp+20h] [rbp-39h] BYREF
  PPRIVILEGE_SET v12[4]; // [rsp+28h] [rbp-31h] BYREF
  PVOID v13[2]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v14[48]; // [rsp+58h] [rbp-1h] BYREF

  CmpInitializeThreadInfo(v13);
  memset(v12, 0, sizeof(v12));
  WORD1(v12[0]) = -1;
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
    CmpAttachToRegistryProcess((__int64)v14);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)v12, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)v12);
      if ( *(_QWORD *)(v8 + 72) && (int)CmpConstructAndCacheName(v8, &v11) >= 0 )
      {
        started = 0;
        *ObjectName = v11;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)v12);
    }
    CmpUnlockRegistry();
    KiUnstackDetachProcess((__int64)v14, 0LL);
  }
  else
  {
LABEL_16:
    started = -1073741811;
  }
LABEL_17:
  if ( v12[3] )
    CmSiFreeMemory(v12[3]);
  CmCleanupThreadInfo(v13);
  return started;
}
