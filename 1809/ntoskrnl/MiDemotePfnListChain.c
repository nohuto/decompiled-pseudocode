/*
 * XREFs of MiDemotePfnListChain @ 0x1402C55C0
 * Callers:
 *     MiMakeLargePageTable @ 0x1402B52D8 (MiMakeLargePageTable.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWriteNewContainingFrame @ 0x1402C6150 (MiWriteNewContainingFrame.c)
 */

__int64 __fastcall MiDemotePfnListChain(__int64 a1, int a2)
{
  int v2; // r14d
  __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int8 CurrentIrql; // bp
  unsigned int v13; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v16; // [rsp+90h] [rbp+18h]

  v2 = a2;
  result = (unsigned int)(a2 - 1);
  do
  {
    v5 = *(_QWORD **)(a1 + 8 * result);
    v6 = (unsigned int)result;
    while ( !v5 )
    {
      if ( !(_DWORD)v6 )
        return result;
      v6 = (unsigned int)(v6 - 1);
      v5 = *(_QWORD **)(a1 + 8LL * (unsigned int)v6);
    }
    v7 = (unsigned int)(v6 + 1);
    v8 = (unsigned int)v6;
    *(_QWORD *)(a1 + 8 * v6) = *v5;
    if ( (unsigned int)v7 <= 1 )
    {
      v11 = MiLargePageSizes[v7];
      v9 = 512LL;
      v10 = MiLargePageContainingFrames[v7];
    }
    else
    {
      MiUpdateLargePageBitMap(
        *(_QWORD *)(qword_14043B808 + 8 * ((v5[5] >> 40) & 0x3FFLL)),
        (__int64)(v5 + 0xB000000000LL) / 48,
        MiLargePageSizes[v6],
        0,
        1);
      v9 = MiLargePageSizes[v8];
      v10 = 0LL;
      v11 = 1LL;
    }
    v16 = v10;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v13 = 0;
    if ( v9 )
    {
      do
      {
        *v5 = *(_QWORD *)(a1 + 8LL * (unsigned int)v7);
        *(_QWORD *)(a1 + 8LL * (unsigned int)v7) = v5;
        MiWriteNewContainingFrame(v5, v11, v16);
        ++v13;
        v5 += 6 * v11;
      }
      while ( v13 < v9 );
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
  }
  while ( (_DWORD)v7 != v2 );
  return result;
}
