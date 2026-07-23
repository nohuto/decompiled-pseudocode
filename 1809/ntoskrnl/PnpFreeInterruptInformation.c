/*
 * XREFs of PnpFreeInterruptInformation @ 0x140654A0C
 * Callers:
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpFreeInterruptInformation(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rcx

  result = *(_QWORD *)(a1 + 312);
  v3 = *(void **)(result + 88);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x47706E50u);
    result = *(_QWORD *)(a1 + 312);
    *(_QWORD *)(result + 88) = 0LL;
  }
  return result;
}
