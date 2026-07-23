/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1405CC1A0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  __int64 v9; // rdi
  int started; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-41h] BYREF
  PPRIVILEGE_SET v15[4]; // [rsp+28h] [rbp-39h] BYREF
  PVOID v16[2]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v17[48]; // [rsp+58h] [rbp-9h] BYREF

  CmpInitializeThreadInfo(v16);
  memset(v15, 0, sizeof(v15));
  v14 = 0LL;
  WORD1(v15[0]) = -1;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !a1 || a5 )
    goto LABEL_17;
  v9 = *(_QWORD *)(a2 + 8);
  if ( a3 )
    *a3 = v9;
  if ( !a4 )
  {
    started = 0;
    goto LABEL_18;
  }
  if ( (v9 & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v17);
    CmpLockRegistry(v11);
    started = CmpStartKcbStackForTopLayerKcb(v15, v9);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(v15);
      if ( *(_QWORD *)(v9 + 72) && (int)CmpConstructNameWithStatus(v9, &v14) >= 0 )
      {
        started = 0;
        *a4 = v14;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(v15);
    }
    CmpUnlockRegistry(v12);
    KiUnstackDetachProcess((__int64)v17, 0LL);
  }
  else
  {
LABEL_17:
    started = -1073741811;
  }
LABEL_18:
  if ( v15[3] )
    CmSiFreeMemory(v15[3]);
  CmCleanupThreadInfo(v16);
  return (unsigned int)started;
}
