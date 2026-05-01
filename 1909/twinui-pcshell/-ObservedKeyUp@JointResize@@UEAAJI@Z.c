/*
 * XREFs of ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x1803EF930
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z @ 0x1803EF1A8 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z.c)
 */

__int64 __fastcall JointResize::ObservedKeyUp(JointResize *this, int a2)
{
  unsigned int v2; // eax

  if ( a2 == 17 )
  {
    v2 = 0;
    if ( !*((_QWORD *)this + 7) )
    {
      LOBYTE(v2) = *((_DWORD *)this + 44) != 10;
      JointResize::CreateGhostDivider((_QWORD *)this - 14, 1u, v2);
    }
  }
  return 0LL;
}
