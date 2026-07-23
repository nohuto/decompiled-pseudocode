/*
 * XREFs of AlpcpCaptureIdMessage @ 0x140638B00
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140615880 (NtAlpcQueryInformationMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140638760 (NtAlpcImpersonateClientOfPort.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14084B180 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureIdMessage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char PreviousMode; // r9
  __int64 result; // rax

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (a1 & 3) != 0 )
    goto LABEL_8;
  if ( (*(_WORD *)(a1 + 4) & 0x1000) == 0 )
  {
    if ( !PreviousMode || (a1 & 3) == 0 )
    {
      *a2 = *(_DWORD *)(a1 + 24);
      result = *(unsigned int *)(a1 + 32);
      *a3 = result;
      return result;
    }
LABEL_8:
    ExRaiseDatatypeMisalignment();
  }
  *a2 = *(_DWORD *)(a1 + 16);
  result = *(unsigned int *)(a1 + 20);
  *a3 = result;
  return result;
}
