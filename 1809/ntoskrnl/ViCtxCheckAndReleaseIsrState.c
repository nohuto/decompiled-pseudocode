/*
 * XREFs of ViCtxCheckAndReleaseIsrState @ 0x140942CD8
 * Callers:
 *     ViCtxIsr @ 0x140942EF0 (ViCtxIsr.c)
 *     ViCtxIsrMessageBased @ 0x140942F50 (ViCtxIsrMessageBased.c)
 * Callees:
 *     RtlXSave @ 0x14012E84C (RtlXSave.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     VfErrorStoreTriageInformation @ 0x1409370D8 (VfErrorStoreTriageInformation.c)
 *     ViCtxEqualExtendedState @ 0x140942DD4 (ViCtxEqualExtendedState.c)
 */

__int64 __fastcall ViCtxCheckAndReleaseIsrState(__int64 a1, const void *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v6; // si
  __int64 v7; // r8
  __int64 result; // rax
  unsigned __int8 v9; // al
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax

  CurrentIrql = KeGetCurrentIrql();
  v6 = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a1 + 9) = CurrentIrql;
  if ( v6 != CurrentIrql
    || ((*(_DWORD *)(a1 + 4) & 2) == 0
      ? (result = 1LL)
      : (RtlXSave(*(_DWORD **)(a1 + 64), ViCtxXStateEnabledMask, a3),
         v6 = *(_BYTE *)(a1 + 8),
         LOBYTE(v7) = v6 == 0,
         result = (unsigned __int8)ViCtxEqualExtendedState(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 64), v7)),
        !(_DWORD)result) )
  {
    v9 = *(_BYTE *)(a1 + 9);
    if ( v6 == v9 )
    {
      VfUtilDbgPrint(
        "Interrupt Service Routine %p has changed extended thread context.\n"
        "Context saved before executing ISR: 0x%p. Context saved after executing ISR: 0x%p.\n",
        a2,
        *(const void **)(a1 + 32),
        *(const void **)(a1 + 64));
      v10 = *(_QWORD *)(a1 + 32);
      v11 = 272LL;
      v12 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      VfUtilDbgPrint(
        "Interrupt Service Routine %p has changed IRQL.\nIRQL before executing ISR: %d. IRQL after executing ISR: %d.\n",
        a2,
        v6,
        v9);
      v10 = *(unsigned __int8 *)(a1 + 8);
      v11 = 273LL;
      v12 = *(unsigned __int8 *)(a1 + 9);
    }
    VfErrorStoreTriageInformation(196LL, v11, (__int64)a2, v10, v12);
    NT_ASSERT("
Interrupt Service Routine has changed IRQL.
Please run !analyze for additional information.
");
  }
  *(_DWORD *)(a1 + 4) &= ~2u;
  _InterlockedExchange((volatile __int32 *)a1, 0);
  return result;
}
