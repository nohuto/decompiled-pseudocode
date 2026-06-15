/*
 * XREFs of ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18006BD2C
 * Callers:
 *     ?RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ @ 0x18013FB88 (-RegisterForShellWnfNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall AtmosCheck::IsRunningOnXbox(AtmosCheck *this)
{
  int v1; // eax
  char v2; // cl

  v1 = *((_DWORD *)this + 48);
  v2 = 1;
  if ( v1 != 5 )
    return (unsigned int)(v1 - 11) <= 1;
  return v2;
}
