/*
 * XREFs of ?OnArrangedWindowBorderExit@JointResize@@UEAAXXZ @ 0x18036A720
 * Callers:
 *     <none>
 * Callees:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x180369A98 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x180369E30 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18036AD5C (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
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
