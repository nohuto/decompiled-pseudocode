/*
 * XREFs of EtwpApplyEventIdPayloadFilter @ 0x1403141D0
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1408C2DB0 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpPerfectHashFunctionSearch @ 0x140314BA4 (EtwpPerfectHashFunctionSearch.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140318368 (EtwpApplyPayloadFilterInternal.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpApplyEventIdPayloadFilter(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  __int64 v9; // rsi
  __int64 v11; // r10
  volatile signed __int32 *v12; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v14; // r11
  char v15; // al
  _BYTE *v16; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v18; // rbx
  char v19; // al
  _BYTE *v20; // rdx
  int v21; // eax
  char v22; // dl
  bool v24; // [rsp+20h] [rbp-48h]
  char v25[16]; // [rsp+40h] [rbp-28h] BYREF

  v9 = a4;
  v25[0] = 1;
  v11 = a1;
  v12 = 0LL;
  if ( a9 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v14 = 104LL * a2;
    if ( *(_QWORD *)(v14 + *(_QWORD *)(a1 + 384) + 72) )
    {
      v15 = EtwpPerfectHashFunctionSearch(a5);
      if ( *v16 != v15 )
      {
        v25[0] = 0;
LABEL_11:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        goto LABEL_22;
      }
      v25[0] = 1;
    }
    v12 = *(volatile signed __int32 **)(v14 + *(_QWORD *)(v11 + 384) + 80);
    if ( v12 )
      _InterlockedAdd(v12, 1u);
    goto LABEL_11;
  }
  v18 = 104LL * a2;
  if ( *(_QWORD *)(v18 + *(_QWORD *)(a1 + 384) + 72) )
  {
    v19 = EtwpPerfectHashFunctionSearch(a5);
    if ( *v20 != v19 )
    {
      v25[0] = 0;
      return v25[0];
    }
    v25[0] = 1;
  }
  v12 = *(volatile signed __int32 **)(v18 + *(_QWORD *)(v11 + 384) + 80);
LABEL_22:
  if ( v12 )
  {
    LOBYTE(a4) = a8;
    v24 = a3 == 0;
    v21 = EtwpApplyPayloadFilterInternal(v9, a6, a7, a4, v24, v12 + 2, v25);
    v22 = v25[0];
    if ( v21 < 0 )
      v22 = 1;
    v25[0] = v22;
    if ( a9 < 2u && _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v12, 0);
  }
  return v25[0];
}
