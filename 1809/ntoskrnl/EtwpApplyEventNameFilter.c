/*
 * XREFs of EtwpApplyEventNameFilter @ 0x1403143B8
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     EtwpEventNameFilterSearch @ 0x14031489C (EtwpEventNameFilterSearch.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x140314B38 (EtwpGetEventNameFromEventMetadata.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // r12
  void **v11; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  PVOID *v16; // rdx
  unsigned int v17; // ecx
  char *v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  void *v21; // rsp
  void *v22; // rsp
  __int64 v23; // rsi
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int8 v28; // al
  __int64 EventNameFromEventMetadata; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  bool v31; // zf
  struct _KPRCB *v32; // rcx
  char v34; // [rsp+20h] [rbp+0h] BYREF
  char v35; // [rsp+21h] [rbp+1h]
  unsigned __int16 v36; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  int v38; // [rsp+30h] [rbp+10h]
  void **v39; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v9 = a2;
  P = 0LL;
  v11 = 0LL;
  v39 = 0LL;
  CurrentIrql = 0;
  v35 = 0;
  v34 = 1;
  if ( a5 )
  {
    v13 = 16LL * a3;
    if ( v13 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + a4 > 0x7FFFFFFF0000LL || v13 + a4 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v14 = 0;
  v38 = 0;
  while ( v14 < a3 )
  {
    v15 = 16LL * v14;
    v16 = (PVOID *)(v15 + a4);
    if ( *(_BYTE *)(v15 + a4 + 12) == 1 )
    {
      if ( a6 >= 2u )
      {
        v11 = (void **)(v15 + a4);
        v39 = (void **)(v15 + a4);
        P = *v16;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v16;
        v11 = Src;
        v39 = Src;
        v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
        if ( v17 >= 0xFFFF )
        {
          v34 = 0;
          goto LABEL_73;
        }
        if ( a5 )
        {
          if ( v17 )
          {
            v18 = (char *)Src[0] + v17;
            if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v17 = (unsigned int)Src[1];
            }
          }
        }
        if ( v17 <= 0x100 )
        {
          v19 = v17 + 15LL;
          if ( v19 <= v17 )
            v19 = 0xFFFFFFFFFFFFFF0LL;
          v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
          v21 = alloca(v20);
          v22 = alloca(v20);
          P = &v34;
        }
        else
        {
          P = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x74777445u);
          if ( !P )
          {
            v34 = 1;
            goto LABEL_73;
          }
          v35 = 1;
          v17 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v17);
      }
      break;
    }
    v38 = ++v14;
  }
  if ( !v11 || !P )
    goto LABEL_61;
  if ( a6 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  v23 = *(_QWORD *)(a1 + 384);
  if ( v23 )
  {
    v24 = 104 * v9;
    v25 = a9 ? *(_BYTE **)(v23 + v24 + 56) : *(_BYTE **)(v23 + v24 + 96);
    if ( v25 )
    {
      v26 = 0LL;
      v27 = *(_QWORD *)(a1 + 384);
      if ( v27 )
      {
        if ( a9 )
        {
          if ( (*(_DWORD *)(v27 + 104 * v9) & 0x80002000) == 0x80002000 )
            v26 = *(_QWORD *)(v27 + v24 + 56);
        }
        else if ( (*(_DWORD *)(v27 + 104 * v9) & 0x80000400) == 0x80000400 )
        {
          v26 = *(_QWORD *)(v27 + v24 + 96);
        }
        if ( v26 )
        {
          v28 = *(_BYTE *)(v26 + 1);
          if ( (a7 <= v28 || !v28)
            && (!a8 || (*(_QWORD *)(v26 + 8) & a8) != 0 && (a8 & *(_QWORD *)(v26 + 16)) == *(_QWORD *)(v26 + 16)) )
          {
            EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(P, *((unsigned int *)v39 + 2), &v36);
            if ( !EventNameFromEventMetadata )
            {
              if ( a6 < 2u )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                __writecr8(CurrentIrql);
              }
LABEL_61:
              v34 = 1;
              goto LABEL_73;
            }
            if ( v36 )
              v31 = *v25 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v36, v25);
            else
              v31 = *v25 == 0;
            v34 = v31;
          }
        }
      }
    }
  }
  if ( a6 < 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v32 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v32);
    }
    __writecr8(CurrentIrql);
  }
LABEL_73:
  if ( v35 )
    ExFreePoolWithTag(P, 0);
  return v34;
}
