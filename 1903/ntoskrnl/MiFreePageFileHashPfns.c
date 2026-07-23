/*
 * XREFs of MiFreePageFileHashPfns @ 0x1400F23D4
 * Callers:
 *     MiScanPagefiles @ 0x1400F23A0 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x14088CDE0 (MiDeletePagefile.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedFlushSList @ 0x1401CBA70 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 __fastcall MiFreePageFileHashPfns(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rdi
  _SLIST_HEADER **v3; // r14
  __int64 v4; // rbp
  _SLIST_HEADER *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r13
  unsigned __int8 v8; // r12
  __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12; // [rsp+68h] [rbp+10h]

  result = *(unsigned int *)(a1 + 7896);
  v2 = 0LL;
  if ( (_DWORD)result )
  {
    v3 = (_SLIST_HEADER **)(a1 + 7904);
    v12 = *(unsigned int *)(a1 + 7896);
    v4 = (unsigned int)result;
    do
    {
      v5 = *v3 + 5;
      if ( LOWORD(v5->Alignment) )
      {
        result = (unsigned __int64)RtlpInterlockedFlushSList(v5);
        v6 = result;
        if ( result )
        {
          do
          {
            v7 = *(_QWORD *)v6;
            v8 = MiLockPageInline(v6);
            v9 = 6 * ((v6 + 0x58000000000LL) / 48);
            *(_WORD *)(8 * v9 - 0x58000000000LL + 32) = 0;
            *(_QWORD *)(8 * v9 - 0x58000000000LL + 24) &= 0xC000000000000000uLL;
            MiInsertPageInFreeOrZeroedList((v6 + 0x58000000000LL) / 48, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            result = v8;
            __writecr8(v8);
            ++v2;
            v6 = v7;
          }
          while ( v7 );
          v4 = v12;
        }
      }
      ++v3;
      v12 = --v4;
    }
    while ( v4 );
    if ( v2 )
    {
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        MiReturnResidentAvailable(v2);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), v2);
      result = MiReturnCommit(a1, v2);
      _InterlockedExchangeAdd64(&qword_1404672A8, -(__int64)v2);
    }
  }
  return result;
}
