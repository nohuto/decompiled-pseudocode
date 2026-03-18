/*
 * XREFs of MiDemotePfnListChain @ 0x1402DF518
 * Callers:
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiMakeLargePageTable @ 0x1402CA748 (MiMakeLargePageTable.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWriteNewContainingFrame @ 0x1402E0658 (MiWriteNewContainingFrame.c)
 */

__int64 __fastcall MiDemotePfnListChain(__int64 a1, int a2)
{
  int v2; // r15d
  __int64 result; // rax
  unsigned __int64 v5; // r9
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v14; // r12d
  __int64 v15; // r13
  unsigned __int64 v16; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  int v18; // [rsp+90h] [rbp+8h]
  __int64 v20; // [rsp+A0h] [rbp+18h]

  v2 = a2;
  result = (unsigned int)(a2 - 1);
  v5 = 0x140000000uLL;
  do
  {
    v6 = *(_QWORD **)(a1 + 8 * result);
    v7 = (unsigned int)result;
    while ( !v6 )
    {
      if ( !(_DWORD)v7 )
        return result;
      v7 = (unsigned int)(v7 - 1);
      v6 = *(_QWORD **)(a1 + 8LL * (unsigned int)v7);
    }
    *(_QWORD *)(a1 + 8 * v7) = *v6;
    v8 = (unsigned int)v7;
    if ( (_DWORD)v7 == 1 )
    {
      MiUpdateLargePageBitMap(
        *(_QWORD *)(qword_140466188 + 8 * ((v6[5] >> 40) & 0x3FFLL)),
        (__int64)(v6 + 0xB000000000LL) / 48,
        0x200uLL,
        0,
        1);
      v5 = 0x140000000uLL;
    }
    v9 = (unsigned int)(v7 + 1);
    v18 = v9;
    if ( (unsigned int)v9 > 3 )
    {
      v10 = 1LL;
      v11 = 0LL;
    }
    else
    {
      v10 = MiLargePageSizes[v9];
      v11 = MiLargePageContainingFrames[v9];
    }
    v20 = v11;
    v12 = MiLargePageSizes[v8] / v10;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v14 = 0;
    if ( v12 )
    {
      v15 = (unsigned int)v9;
      v16 = v12;
      do
      {
        *v6 = *(_QWORD *)(a1 + 8 * v15);
        *(_QWORD *)(a1 + 8 * v15) = v6;
        MiWriteNewContainingFrame(v6, v10, v20, v5);
        ++v14;
        v6 += 6 * v10;
      }
      while ( v14 < v16 );
      LODWORD(v9) = v18;
      v2 = a2;
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    result = (unsigned int)(v2 - 1);
    v5 = 0x140000000uLL;
  }
  while ( (_DWORD)v9 != v2 );
  return result;
}
