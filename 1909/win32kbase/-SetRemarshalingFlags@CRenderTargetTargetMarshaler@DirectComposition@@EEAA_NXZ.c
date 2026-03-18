/*
 * XREFs of ?SetRemarshalingFlags@CRenderTargetTargetMarshaler@DirectComposition@@EEAA_NXZ @ 0x1C01A98D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRenderTargetTargetMarshaler *this)
{
  int v1; // eax
  bool v2; // zf

  v1 = *((_DWORD *)this + 4) | 0x60;
  v2 = *((_DWORD *)this + 16) == 0;
  *((_DWORD *)this + 4) = v1;
  if ( !v2 )
  {
    v1 |= 0x80u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((float *)this + 30) != 1.0 )
  {
    v1 |= 0x100u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((float *)this + 31) != 1.0 )
  {
    v1 |= 0x200u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_DWORD *)this + 32) )
    *((_DWORD *)this + 4) = v1 | 0x400;
  return 1;
}
