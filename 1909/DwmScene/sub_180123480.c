/*
 * XREFs of sub_180123480 @ 0x180123480
 * Callers:
 *     sub_180134571 @ 0x180134571 (sub_180134571.c)
 *     sub_18013459B @ 0x18013459B (sub_18013459B.c)
 *     sub_180134AEF @ 0x180134AEF (sub_180134AEF.c)
 *     sub_180134B93 @ 0x180134B93 (sub_180134B93.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180123480(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(176 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 176 * a3 + 39);
      JUMPOUT(0x1801234C1LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
