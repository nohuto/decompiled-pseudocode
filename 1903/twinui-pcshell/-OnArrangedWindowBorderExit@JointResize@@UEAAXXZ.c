/*
 * XREFs of ?OnArrangedWindowBorderExit@JointResize@@UEAAXXZ @ 0x1803D05E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1803CF960 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1803CFCF0 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1803D0C1C (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowBorderExit(JointResize *this)
{
  JointResize *v1; // rdi

  v1 = (JointResize *)((char *)this - 88);
  JointResize::RegisterRawInput((JointResize *)((char *)this - 88), 0);
  if ( !*((_BYTE *)this + 136) )
  {
    JointResize::DestroyGhostDivider(v1);
    JointResize::Cleanup(v1);
  }
}
