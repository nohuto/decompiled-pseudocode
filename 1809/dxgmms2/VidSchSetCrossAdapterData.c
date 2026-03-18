/*
 * XREFs of VidSchSetCrossAdapterData @ 0x1C007F1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetCrossAdapterData(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1640) = a2;
}
