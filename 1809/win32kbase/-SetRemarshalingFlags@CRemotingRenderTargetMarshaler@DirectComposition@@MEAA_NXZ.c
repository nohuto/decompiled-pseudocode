/*
 * XREFs of ?SetRemarshalingFlags@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016D8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRemotingRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRemotingRenderTargetMarshaler *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 6) && *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 7) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    v1 = 1;
  }
  if ( *((_DWORD *)this + 18) > *((_DWORD *)this + 16) || *((_DWORD *)this + 19) > *((_DWORD *)this + 17) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    return 1;
  }
  return v1;
}
