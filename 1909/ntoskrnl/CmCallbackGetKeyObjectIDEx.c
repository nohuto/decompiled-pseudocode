/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1406608E0
 * Callers:
 *     <none>
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
 *     CmpConstructNameWithStatus @ 0x140668850 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, int a5)
{
  __int64 v9; // rdi
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  int started; // ebx
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  PPRIVILEGE_SET v15[4]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v16[48]; // [rsp+48h] [rbp-38h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v14 = 0LL;
  WORD1(v15[0]) = -1;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !a1 || a5 )
    goto LABEL_20;
  v9 = *(_QWORD *)(a2 + 8);
  if ( a3 )
    *a3 = v9;
  if ( !a4 )
  {
    started = 0;
    goto LABEL_15;
  }
  if ( (v9 & 1) == 0 )
  {
    CmpAttachToRegistryProcess((__int64)v16);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)v15, v9, v10, v11);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)v15);
      if ( *(_QWORD *)(v9 + 80) && (int)CmpConstructNameWithStatus(v9, &v14) >= 0 )
      {
        started = 0;
        *a4 = v14;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)v15);
    }
    CmpUnlockRegistry();
    KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  }
  else
  {
LABEL_20:
    started = -1073741811;
  }
LABEL_15:
  if ( v15[3] )
    CmSiFreeMemory(v15[3]);
  return (unsigned int)started;
}
