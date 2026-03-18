/*
 * XREFs of ?GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ @ 0x1C004E1E4
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D386C (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTTARGETSET *__fastcall DMMVIDEOPRESENTTARGET::GetContainingVideoPresentTargetSet(
        DMMVIDEOPRESENTTARGET *this)
{
  struct DMMVIDEOPRESENTTARGETSET *result; // rax
  __int64 v3; // rax

  result = (struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 5);
  if ( !result )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
    return (struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 5);
  }
  return result;
}
