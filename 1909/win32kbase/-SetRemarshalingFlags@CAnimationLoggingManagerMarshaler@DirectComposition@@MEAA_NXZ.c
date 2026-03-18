/*
 * XREFs of ?SetRemarshalingFlags@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A7340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  char v1; // dl
  bool result; // al

  v1 = *((_BYTE *)this + 240) & 0xFD;
  *((_DWORD *)this + 20) = 0;
  result = 1;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_BYTE *)this + 240) = v1;
  if ( *((_QWORD *)this + 29) )
    *((_BYTE *)this + 240) = v1 | 1;
  *((_DWORD *)this + 4) &= ~0x20u;
  return result;
}
