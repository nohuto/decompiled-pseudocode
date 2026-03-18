/*
 * XREFs of ?SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BCF18
 * Callers:
 *     ?SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BCE30 (-SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetRemarshalingFlags(
        DirectComposition::CScenePbrMaterialMarshaler *this)
{
  int v1; // eax
  int v2; // eax

  if ( *((float *)this + 10) != 0.5 )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_DWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x40u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 6) )
    v1 |= 0x80u;
  v2 = v1 | 0x100;
  *((_DWORD *)this + 4) = v2;
  if ( *((_BYTE *)this + 68) )
  {
    v2 |= 0x200u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v2 |= 0x400u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((float *)this + 20) != 1.0 )
  {
    v2 |= 0x800u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v2 |= 0x1000u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((float *)this + 24) != 1.0 )
    *((_DWORD *)this + 4) = v2 | 0x2000;
  return 1;
}
