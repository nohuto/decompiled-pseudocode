/*
 * XREFs of VfSuspectDriversGetVerifierInformation @ 0x140938524
 * Callers:
 *     VfGetVerifierInformation @ 0x14094B8E4 (VfGetVerifierInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     VfAvlCleanupLockContext @ 0x1400F5708 (VfAvlCleanupLockContext.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     VfAvlInitializeLockContext @ 0x14030B7A4 (VfAvlInitializeLockContext.c)
 *     VfDriverLock @ 0x1409226E0 (VfDriverLock.c)
 *     VfTargetDriversGetZeroCounters @ 0x140935A38 (VfTargetDriversGetZeroCounters.c)
 *     VfAvlEnumerateNodes @ 0x14093F0D8 (VfAvlEnumerateNodes.c)
 */

__int64 __fastcall VfSuspectDriversGetVerifierInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r14d
  __int64 *v9; // r15
  __int64 *v10; // r13
  int v11; // ebx
  int *v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  __int64 v17; // rcx
  void *v18; // rcx
  _BYTE v20[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  int v22; // [rsp+40h] [rbp-48h]

  v6 = a1;
  *a3 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  v9 = (__int64 *)VfSuspectDriversList;
  if ( (__int64 *)VfSuspectDriversList != &VfSuspectDriversList )
  {
    while ( 1 )
    {
      v10 = v9;
      v9 = (__int64 *)*v9;
      v6 += v7;
      v11 = *((unsigned __int16 *)v10 + 12);
      v7 = (v11 + (a5 != 0 ? 281 : 153)) & 0xFFFFFFF8;
      *a3 += v7;
      if ( *a3 > a2 )
        break;
      *(_DWORD *)v6 = v7;
      v12 = VfRuleClasses;
      *(_DWORD *)(v6 + 4) = MmVerifierData;
      v13 = 2LL;
      do
      {
        *(int *)((char *)v12 + v6 - (_QWORD)VfRuleClasses + 8) = *v12;
        ++v12;
        --v13;
      }
      while ( v13 );
      *(_DWORD *)(v6 + 16) = ViVerifyAllDrivers;
      *(_DWORD *)(v6 + 40) = dword_14041BA64;
      *(_DWORD *)(v6 + 44) = dword_14041BA68;
      *(_DWORD *)(v6 + 92) = dword_14041BA98;
      *(_DWORD *)(v6 + 48) = dword_14041BA6C;
      *(_DWORD *)(v6 + 52) = dword_14041BA70;
      *(_DWORD *)(v6 + 56) = dword_14041BA74;
      *(_DWORD *)(v6 + 60) = dword_14041BA78;
      *(_DWORD *)(v6 + 64) = dword_14041BA7C;
      *(_DWORD *)(v6 + 68) = dword_14041BA80;
      *(_DWORD *)(v6 + 72) = dword_14041BA84;
      *(_DWORD *)(v6 + 76) = dword_14041BA88;
      *(_DWORD *)(v6 + 80) = dword_14041BA8C;
      *(_DWORD *)(v6 + 84) = *((_DWORD *)v10 + 4);
      *(_DWORD *)(v6 + 88) = *((_DWORD *)v10 + 5);
      VfTargetDriversGetZeroCounters((_QWORD *)v6, a5);
      if ( v16 > v15 )
      {
        v22 = v14;
        v21[0] = v10;
        v21[1] = v6;
        VfAvlInitializeLockContext((__int64)v20, 1);
        VfAvlEnumerateNodes(v17, v20, ViTargetAddCountersCallback, v21);
        VfAvlCleanupLockContext((__int64)v20);
      }
      *(_WORD *)(v6 + 24) = v11;
      v18 = (void *)(v6 + (a5 != 0 ? 272 : 144));
      *(_WORD *)(v6 + 26) = v11 + 2;
      *(_QWORD *)(v6 + 32) = v18;
      memmove(v18, (const void *)v10[4], (unsigned __int16)v11);
      *(_WORD *)(*(_QWORD *)(v6 + 32) + 2 * ((unsigned __int64)(unsigned __int16)v11 >> 1)) = 0;
      *(_QWORD *)(v6 + 32) += a4 - a1;
      if ( v9 == &VfSuspectDriversList )
        goto LABEL_10;
    }
    v8 = -1073741820;
  }
LABEL_10:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v8 >= 0 )
    *(_DWORD *)v6 = 0;
  return (unsigned int)v8;
}
