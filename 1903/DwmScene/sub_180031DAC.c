/*
 * XREFs of sub_180031DAC @ 0x180031DAC
 * Callers:
 *     sub_1801295FF @ 0x1801295FF (sub_1801295FF.c)
 *     sub_18012966F @ 0x18012966F (sub_18012966F.c)
 *     sub_18012D343 @ 0x18012D343 (sub_18012D343.c)
 *     sub_18012E2CE @ 0x18012E2CE (sub_18012E2CE.c)
 *     sub_18012F3F2 @ 0x18012F3F2 (sub_18012F3F2.c)
 *     sub_18012FC63 @ 0x18012FC63 (sub_18012FC63.c)
 *     sub_18013461F @ 0x18013461F (sub_18013461F.c)
 *     sub_180134AE3 @ 0x180134AE3 (sub_180134AE3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180031DAC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(32 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x180031DEDLL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
