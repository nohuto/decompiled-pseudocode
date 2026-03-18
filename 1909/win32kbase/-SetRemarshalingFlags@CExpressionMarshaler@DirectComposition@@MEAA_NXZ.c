/*
 * XREFs of ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB240
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A77D0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CExpressionMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= ~0x400u;
  v1 = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 51) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 14) && *((_QWORD *)this + 16) )
  {
    return 1;
  }
  return v1;
}
