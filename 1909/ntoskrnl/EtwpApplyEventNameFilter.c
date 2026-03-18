/*
 * XREFs of EtwpApplyEventNameFilter @ 0x140331FAC
 * Callers:
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     EtwpEventNameFilterSearch @ 0x140332498 (EtwpEventNameFilterSearch.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x1403326F8 (EtwpGetEventNameFromEventMetadata.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int32 v17; // xmm0_4
  unsigned int v18; // ecx
  char *v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  void *v22; // rsp
  void *v23; // rsp
  __int64 v24; // rsi
  __int64 v25; // rdx
  _BYTE *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int8 v29; // al
  __int64 EventNameFromEventMetadata; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  bool v32; // zf
  struct _KPRCB *v33; // rcx
  char v35; // [rsp+20h] [rbp+0h] BYREF
  char v36; // [rsp+21h] [rbp+1h]
  unsigned __int16 v37; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  int v39; // [rsp+30h] [rbp+10h]
  void **v40; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v9 = a2;
  P = 0LL;
  Src[0] = 0LL;
  Src[1] = 0LL;
  v11 = 0LL;
  v40 = 0LL;
  CurrentIrql = 0;
  v36 = 0;
  v35 = 1;
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
  v39 = 0;
  while ( v14 < a3 )
  {
    v15 = 16LL * v14;
    v16 = (PVOID *)(v15 + a4);
    if ( *(_BYTE *)(v15 + a4 + 12) == 1 )
    {
      if ( a6 >= 2u )
      {
        v11 = (void **)(v15 + a4);
        v40 = (void **)(v15 + a4);
        P = *v16;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v16;
        v11 = Src;
        v40 = Src;
        v17 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u32[0];
        v18 = v17;
        if ( v17 >= 0xFFFF )
        {
          v35 = 0;
          goto LABEL_74;
        }
        if ( a5 )
        {
          if ( v17 )
          {
            v19 = (char *)Src[0] + v17;
            if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v18 = (unsigned int)Src[1];
            }
          }
        }
        if ( v18 <= 0x100 )
        {
          v20 = v18 + 15LL;
          if ( v20 <= v18 )
            v20 = 0xFFFFFFFFFFFFFF0LL;
          v21 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
          v22 = alloca(v21);
          v23 = alloca(v21);
          P = &v35;
        }
        else
        {
          P = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x74777445u);
          if ( !P )
          {
            v35 = 1;
            goto LABEL_74;
          }
          v36 = 1;
          v18 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v18);
      }
      break;
    }
    v39 = ++v14;
  }
  if ( !v11 || !P )
    goto LABEL_62;
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
  v24 = *(_QWORD *)(a1 + 384);
  if ( v24 )
  {
    v25 = 104 * v9;
    v26 = a9 ? *(_BYTE **)(v25 + v24 + 56) : *(_BYTE **)(v25 + v24 + 96);
    if ( v26 )
    {
      v27 = 0LL;
      v28 = *(_QWORD *)(a1 + 384);
      if ( v28 )
      {
        if ( a9 )
        {
          if ( (*(_DWORD *)(v25 + v28) & 0x80002000) == 0x80002000 )
            v27 = *(_QWORD *)(v25 + v28 + 56);
        }
        else if ( (*(_DWORD *)(v25 + v28) & 0x80000400) == 0x80000400 )
        {
          v27 = *(_QWORD *)(v25 + v28 + 96);
        }
        if ( v27 )
        {
          v29 = *(_BYTE *)(v27 + 1);
          if ( (a7 <= v29 || !v29)
            && (!a8 || (*(_QWORD *)(v27 + 8) & a8) != 0 && (a8 & *(_QWORD *)(v27 + 16)) == *(_QWORD *)(v27 + 16)) )
          {
            EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(P, *((unsigned int *)v40 + 2), &v37);
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
LABEL_62:
              v35 = 1;
              goto LABEL_74;
            }
            if ( v37 )
              v32 = *v26 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v37, v26);
            else
              v32 = *v26 == 0;
            v35 = v32;
          }
        }
      }
    }
  }
  if ( a6 < 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v33 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v33);
    }
    __writecr8(CurrentIrql);
  }
LABEL_74:
  if ( v36 )
    ExFreePoolWithTag(P, 0);
  return v35;
}
