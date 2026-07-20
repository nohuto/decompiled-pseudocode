/*
 * XREFs of SmpCreatePagefileFromDescriptor @ 0x14000AF90
 * Callers:
 *     SmpProcessPagefileDescriptor @ 0x14000B028 (SmpProcessPagefileDescriptor.c)
 * Callees:
 *     SmpCreatePagefileOnVolume @ 0x14000A7F4 (SmpCreatePagefileOnVolume.c)
 */

__int64 __fastcall SmpCreatePagefileFromDescriptor(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  int PagefileOnVolume; // r8d
  __int64 v6; // rdx

  v2 = (__int64 *)SmpVolumeDescriptorList;
  PagefileOnVolume = -1073741772;
  while ( v2 != &SmpVolumeDescriptorList )
  {
    v6 = (__int64)v2;
    v2 = (__int64 *)*v2;
    if ( (*(_BYTE *)(a1 + 92) & 4) != 0 )
    {
      if ( (*(_BYTE *)(v6 + 16) & 0x12) == 0
        && ((*(_DWORD *)(v6 + 24) & 0x40000) == 0 || (*(_BYTE *)(v6 + 16) & 1) != 0) )
      {
        goto LABEL_8;
      }
    }
    else if ( *(_WORD *)(v6 + 28) == *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
    {
LABEL_8:
      PagefileOnVolume = SmpCreatePagefileOnVolume(a1, v6, a2);
      if ( PagefileOnVolume >= 0 )
        return (unsigned int)PagefileOnVolume;
    }
  }
  return (unsigned int)PagefileOnVolume;
}
