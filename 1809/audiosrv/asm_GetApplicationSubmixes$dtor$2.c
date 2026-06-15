/*
 * XREFs of asm_GetApplicationSubmixes$dtor$2 @ 0x1800F32F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall asm_GetApplicationSubmixes_dtor_2(__int64 a1, __int64 a2)
{
  std::vector<CVADServer *>::~vector<CVADServer *>(a2 + 72);
}
