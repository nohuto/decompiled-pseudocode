/*
 * XREFs of KiStartProfileTarget @ 0x1402962A0
 * Callers:
 *     KeStartProfile @ 0x140295E1C (KeStartProfile.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeOrAffinityEx @ 0x1400DC970 (KeOrAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1400ED8C0 (KeSubtractAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

ULONG_PTR __fastcall KiStartProfileTarget(__int64 *Argument)
{
  __int64 v1; // rsi
  char v3; // cl
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int16 *v12; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  struct _KPRCB *v14; // rcx
  ULONG_PTR result; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int16 *v17[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v18; // [rsp+30h] [rbp-38h]
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v1 = *Argument;
  v3 = KiProfileIrql;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v3 >= 2u && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 )
  {
    if ( *(_BYTE *)(v1 + 242) )
    {
      *((_BYTE *)Argument + 192) = 0;
      goto LABEL_9;
    }
    v5 = *(_QWORD *)(v1 + 24);
    v6 = (_QWORD *)(v1 + 8);
    *(_BYTE *)(v1 + 242) = 1;
    if ( v5 )
    {
      v7 = *(_QWORD **)(v5 + 32);
      v8 = v5 + 24;
      if ( *v7 != v8 )
        goto LABEL_26;
      *v6 = v8;
      *(_QWORD *)(v1 + 16) = v7;
      *v7 = v6;
      *(_QWORD *)(v8 + 8) = v6;
    }
    else
    {
      v9 = (_QWORD *)qword_1404230A8;
      if ( *(__int64 **)qword_1404230A8 != &KiProfileListHead )
        goto LABEL_26;
      *v6 = &KiProfileListHead;
      *(_QWORD *)(v1 + 16) = v9;
      *v9 = v6;
      qword_1404230A8 = v1 + 8;
    }
    v10 = KiProfileSourceListHead;
    if ( (__int64 *)KiProfileSourceListHead != &KiProfileSourceListHead )
    {
      while ( *(_DWORD *)(v10 + 16) != *(__int16 *)(v1 + 240) )
      {
        v10 = *(_QWORD *)v10;
        if ( (__int64 *)v10 == &KiProfileSourceListHead )
          goto LABEL_20;
      }
      goto LABEL_22;
    }
LABEL_20:
    v10 = Argument[23];
    Argument[23] = 0LL;
    *(_DWORD *)(v10 + 16) = *(__int16 *)(v1 + 240);
    *(_QWORD *)(v10 + 24) = 1310721LL;
    memset((void *)(v10 + 32), 0, 0xA0uLL);
    v11 = KiProfileSourceListHead;
    if ( *(__int64 **)(KiProfileSourceListHead + 8) == &KiProfileSourceListHead )
    {
      *(_QWORD *)v10 = KiProfileSourceListHead;
      *(_QWORD *)(v10 + 8) = &KiProfileSourceListHead;
      *(_QWORD *)(v11 + 8) = v10;
      KiProfileSourceListHead = v10;
LABEL_22:
      v18 = 0;
      v17[1] = *(unsigned __int16 **)(v1 + 80);
      v17[0] = (unsigned __int16 *)(v1 + 72);
      while ( !(unsigned int)KeEnumerateNextProcessor(&v19, v17) )
        ++*(_DWORD *)(v10 + 4LL * v19 + 192);
      v12 = (unsigned __int16 *)(v10 + 24);
      KeSubtractAffinityEx((unsigned __int16 *)(v1 + 72), v12, (_BYTE *)Argument + 16);
      _InterlockedOr(v16, 0);
      KeOrAffinityEx(v12, (unsigned __int16 *)(v1 + 72), v12);
      *((_BYTE *)Argument + 192) = 1;
      goto LABEL_9;
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)Argument + 3);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
    HalStartProfileInterrupt((unsigned int)*(__int16 *)(v1 + 240));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v14);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
