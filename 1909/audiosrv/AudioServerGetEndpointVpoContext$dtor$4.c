/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$4 @ 0x1800E8121
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerGetEndpointVpoContext_dtor_4(__int64 a1, __int64 a2)
{
  std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((__int64 **)(a2 + 96));
}
