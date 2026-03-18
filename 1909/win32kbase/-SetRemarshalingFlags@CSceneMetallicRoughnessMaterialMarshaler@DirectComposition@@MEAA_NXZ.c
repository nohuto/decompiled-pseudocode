/*
 * XREFs of ?SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAE90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BAF78 (-SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this)
{
  int v1; // eax
  char v2; // di
  float v4; // xmm0_4
  int v5; // eax

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( *((_QWORD *)this + 13) )
    v1 |= 0x4000u;
  v4 = *((float *)this + 32);
  v5 = v1 | 0x8000;
  *((_DWORD *)this + 4) = v5;
  if ( v4 != 1.0 )
  {
    v5 |= 0x10000u;
    *((_DWORD *)this + 4) = v5;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v5 |= 0x20000u;
    *((_DWORD *)this + 4) = v5;
  }
  if ( *((float *)this + 36) != 1.0 )
    *((_DWORD *)this + 4) = v5 | 0x40000;
  if ( DirectComposition::CScenePbrMaterialMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x7C000) != 0 )
  {
    return 1;
  }
  return v2;
}
