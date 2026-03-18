/*
 * XREFs of ?GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z @ 0x1C004DFA0
 * Callers:
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028445C (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNTARGET *__fastcall DMMVIDPNTARGETSET::GetNextTarget(
        DMMVIDPNTARGETSET *this,
        const struct DMMVIDPNTARGET *const a2)
{
  __int64 v4; // rax
  DMMVIDPNTARGETSET *v5; // rdx
  struct DMMVIDPNTARGET *result; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (DMMVIDPNTARGETSET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNTARGETSET *)((char *)v5 - 8);
  if ( v5 == (DMMVIDPNTARGETSET *)((char *)this + 24) )
    return 0LL;
  return result;
}
