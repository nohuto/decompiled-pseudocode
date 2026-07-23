/*
 * XREFs of MiDrainZeroLookasides @ 0x14011AD10
 * Callers:
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiReturnPartitionPagesToParent @ 0x1402D27C4 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 */

_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  _QWORD *result; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebp
  unsigned __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rbp
  _WORD *v16; // rdi
  PSLIST_ENTRY v17; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  _QWORD *v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  _SLIST_ENTRY *Next; // [rsp+40h] [rbp-48h]
  unsigned __int8 v24; // [rsp+98h] [rbp+10h]
  unsigned int v25; // [rsp+A0h] [rbp+18h]

  v4 = dword_14043B14C;
  if ( a2 )
    v4 = a4 + 1;
  v25 = v4;
  result = (_QWORD *)(a1 + 4136);
  v7 = 2LL;
  v21 = (_QWORD *)(a1 + 4136);
  v8 = a2 != 0 ? a4 : 0;
  v19 = v8;
  v9 = a2 + 48 * a3;
  v10 = 513;
  v22 = 2LL;
  do
  {
    v11 = *result;
    v12 = v8;
    v20 = *result;
    if ( v8 < v4 )
    {
      v13 = v25;
      v14 = v8;
      v15 = v11;
      v16 = (_WORD *)(v11 + 16 * v14);
      do
      {
        if ( *v16 )
        {
          v17 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v15 + 16LL * v12));
          if ( v17 )
          {
            do
            {
              Next = v17->Next;
              if ( a2 && ((unsigned __int64)v17 < a2 || (unsigned __int64)v17 >= v9) )
                v10 &= ~0x40u;
              else
                v10 |= 0x40u;
              v17[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte((__int64)v17[1].Next, 0LL);
              v24 = MiLockPageInline((__int64)v17);
              MiInsertPageInFreeOrZeroedList((__int64)&v17[0x5800000000LL] / 48, v10);
              _InterlockedAnd64((volatile signed __int64 *)&v17[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              __writecr8(v24);
              v17 = Next;
            }
            while ( Next );
            v15 = v20;
          }
          v13 = v25;
        }
        ++v12;
        v16 += 8;
      }
      while ( v12 < v13 );
      v8 = v19;
      v4 = v25;
      result = v21;
      v7 = v22;
    }
    ++result;
    v10 = v10 & 0xFFFFFFFC | 2;
    v21 = result;
    v22 = --v7;
  }
  while ( v7 );
  return result;
}
