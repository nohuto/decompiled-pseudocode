/*
 * XREFs of KeInitializeEnumerationContextFromAffinity @ 0x140293440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeInitializeEnumerationContextFromAffinity(__int64 a1, __int16 a2, __int64 a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 8) = a3;
}
