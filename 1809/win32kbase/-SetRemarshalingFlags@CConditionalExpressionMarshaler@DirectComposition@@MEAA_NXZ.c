/*
 * XREFs of ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0177D30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016C8F0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CConditionalExpressionMarshaler *this)
{
  char v1; // bl
  unsigned int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) & 0xFFFFF7FF;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) = v2 & 0xFFFFFBFF;
  *((_DWORD *)this + 31) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_DWORD *)this + 30)
    || *((_QWORD *)this + 16) )
  {
    return 1;
  }
  return v1;
}
