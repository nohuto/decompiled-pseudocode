/*
 * XREFs of ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800D6E90
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800D59A8 (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall SipcEndpoint::UnmapBuffer(SipcPort **this, void *a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = SipcPort::FreeSection(this[10], a2);
  v3 = 0;
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v3;
}
