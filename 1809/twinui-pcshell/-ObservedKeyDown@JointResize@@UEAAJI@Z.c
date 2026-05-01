/*
 * XREFs of ?ObservedKeyDown@JointResize@@UEAAJI@Z @ 0x18036A460
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x180369E30 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 */

__int64 __fastcall JointResize::ObservedKeyDown(JointResize *this, int a2)
{
  if ( a2 == 17 && *((_QWORD *)this + 7) )
    JointResize::DestroyGhostDivider((JointResize *)((char *)this - 112));
  return 0LL;
}
