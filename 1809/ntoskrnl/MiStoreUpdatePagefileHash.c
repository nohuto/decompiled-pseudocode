/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x14014FC2C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 *v6; // r13
  int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // esi
  __int64 v13; // r14
  int v14; // r12d
  unsigned int PagingFileOffset; // eax
  unsigned __int8 v16; // r10
  __int64 v17; // rcx
  unsigned int v18; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v20; // [rsp+30h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+8h]
  unsigned __int8 v23; // [rsp+98h] [rbp+10h]

  result = (__int64)&retaddr;
  v5 = 0;
  v6 = (__int64 *)(a3 + 48);
  v7 = 0;
  v22 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = a3;
  v12 = 16;
  if ( a4 )
  {
    do
    {
      result = *v6;
      if ( *v6 == qword_14043BE88 )
      {
        v14 = 16;
        v18 = v8;
      }
      else
      {
        v13 = 48 * result - 0x58000000000LL;
        v20 = v13;
        v23 = MiLockPageInline(v13);
        v14 = (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 16)) >> 4;
        PagingFileOffset = MiGetPagingFileOffset(v13 + 16);
        v17 = v13;
        v18 = PagingFileOffset;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          if ( KeGetCurrentIrql() >= 2u && v16 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v16 = v23;
          }
          v17 = v20;
        }
        result = v16;
        __writecr8(v16);
        v5 = v22;
        v11 = a3;
        if ( !v9 )
        {
          result = qword_14043B808;
          v9 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v17 + 40) >> 40) & 0x3FFLL));
        }
      }
      if ( v12 == v14 && v18 == v8 )
      {
        ++v7;
      }
      else
      {
        if ( v12 != 16 )
          result = MiMapPageFileHash(*(_QWORD *)(v9 + 8LL * v12 + 7136), v11, v10 - v7, v5, v7);
        v5 = v18;
        v12 = v14;
        v22 = v18;
        v8 = v18;
        v7 = 1;
      }
      v11 = a3;
      ++v10;
      ++v6;
      ++v8;
    }
    while ( v10 < a4 );
    if ( v12 != 16 )
      return MiMapPageFileHash(*(_QWORD *)(v9 + 8LL * v12 + 7136), a3, v10 - v7, v5, v7);
  }
  return result;
}
