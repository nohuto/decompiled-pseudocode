/*
 * XREFs of ?SetRemarshalingFlags@CGenericInkMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01A8120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGenericInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CGenericInkMarshaler *this)
{
  int v1; // edx
  unsigned int v2; // edx
  bool v3; // zf

  v1 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 33) = 0;
  v2 = v1 & 0xFFFFFF9F;
  v3 = *((_QWORD *)this + 18) == 0LL;
  *((_DWORD *)this + 4) = v2;
  *((_BYTE *)this + 136) = 1;
  if ( !v3 )
    *((_DWORD *)this + 4) = v2 & 0xFFFFFF7F;
  return 1;
}
