/*
 * XREFs of KiStopProfileTarget @ 0x140296510
 * Callers:
 *     KeStopProfile @ 0x140295F30 (KeStopProfile.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeSubtractAffinityEx @ 0x1400ED8C0 (KeSubtractAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall KiStopProfileTarget(__int64 *Argument)
{
  __int64 v1; // rbp
  char v3; // cl
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  int v10; // edx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  struct _KPRCB *v15; // rcx
  ULONG_PTR result; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int16 *v18[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v19; // [rsp+30h] [rbp-28h]
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF

  v1 = *Argument;
  v3 = KiProfileIrql;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v3 >= 2u && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 && *(_BYTE *)(v1 + 242) )
  {
    v5 = v1 + 8;
    *(_BYTE *)(v1 + 242) = 0;
    v6 = *(_QWORD *)(v1 + 8);
    if ( v6 != v1 + 8 )
    {
      v7 = *(_QWORD **)(v1 + 16);
      if ( *(_QWORD *)(v6 + 8) != v5 || *v7 != v5 )
        goto LABEL_26;
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
    }
    v8 = (_QWORD *)KiProfileSourceListHead;
    do
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
    }
    while ( *((_DWORD *)v9 + 4) != *(__int16 *)(v1 + 240) );
    v19 = 0;
    v18[1] = *(unsigned __int16 **)(v1 + 80);
    v18[0] = (unsigned __int16 *)(v1 + 72);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v20, v18) )
    {
      v10 = v20;
      if ( (*((_DWORD *)v9 + v20 + 48))-- == 1 )
        KeAddProcessorAffinityEx((_WORD *)Argument + 8, v10);
    }
    _InterlockedOr(v17, 0);
    KeSubtractAffinityEx((unsigned __int16 *)v9 + 12, (unsigned __int16 *)Argument + 8, (_BYTE *)v9 + 24);
    if ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)v9 + 12) )
      goto LABEL_22;
    v12 = *v9;
    v13 = (_QWORD *)v9[1];
    if ( *(_QWORD **)(*v9 + 8LL) == v9 && (_QWORD *)*v13 == v9 )
    {
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      Argument[23] = (__int64)v9;
LABEL_22:
      *((_BYTE *)Argument + 192) = 1;
      goto LABEL_23;
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_23:
  _InterlockedDecrement((volatile signed __int32 *)Argument + 3);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
    HalStopProfileInterrupt((unsigned int)*(__int16 *)(v1 + 240));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v15);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
