/*
 * XREFs of ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x18007F7D0
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007EF20 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 * Callees:
 *     <none>
 */

char __fastcall HidLampAttributesResponseReportParser::IsParserValid(
        const struct HidLampAttributesResponseReportParser *a1)
{
  char v2; // dl
  __int64 v3; // r10

  if ( !*((_BYTE *)a1 + 888) && !*((_BYTE *)a1 + 889) && !*((_BYTE *)a1 + 890) )
    return 0;
  if ( *((_BYTE *)a1 + 17) != 2 )
    return 0;
  if ( !*((_DWORD *)a1 + 7) )
    return 0;
  if ( !*((_DWORD *)a1 + 6) )
    return 0;
  if ( *((_QWORD *)a1 + 6) )
    return 0;
  v2 = 1;
  if ( (unsigned __int64)(*((_QWORD *)a1 + 7) - 1LL) > 0x7FFFFFFE )
    return 0;
  if ( !*((_DWORD *)a1 + 25) )
    return 0;
  if ( !*((_DWORD *)a1 + 24) )
    return 0;
  if ( *((_QWORD *)a1 + 15) )
    return 0;
  if ( (unsigned __int64)(*((_QWORD *)a1 + 16) - 1LL) > 0x7FFFFFFE )
    return 0;
  if ( !*((_DWORD *)a1 + 43) )
    return 0;
  if ( !*((_DWORD *)a1 + 42) )
    return 0;
  if ( *((_QWORD *)a1 + 24) )
    return 0;
  if ( (unsigned __int64)(*((_QWORD *)a1 + 25) - 1LL) > 0x7FFFFFFE )
    return 0;
  if ( !*((_DWORD *)a1 + 61) )
    return 0;
  if ( !*((_DWORD *)a1 + 60) )
    return 0;
  if ( *((_QWORD *)a1 + 33) )
    return 0;
  if ( (unsigned __int64)(*((_QWORD *)a1 + 34) - 1LL) > 0x7FFFFFFE )
    return 0;
  if ( !*((_DWORD *)a1 + 79) )
    return 0;
  if ( !*((_DWORD *)a1 + 78) )
    return 0;
  if ( *((_QWORD *)a1 + 42) )
    return 0;
  if ( (unsigned __int64)(*((_QWORD *)a1 + 43) - 1LL) > 0x7FFFFFFE )
    return 0;
  if ( !*((_DWORD *)a1 + 97) )
    return 0;
  if ( !*((_DWORD *)a1 + 96) )
    return 0;
  if ( *((_QWORD *)a1 + 51) )
    return 0;
  v3 = *((_QWORD *)a1 + 52);
  if ( (unsigned __int64)(v3 - 1) > 0x7FFFFFFE
    || !*((_DWORD *)a1 + 115)
    || !*((_DWORD *)a1 + 114)
    || *((_QWORD *)a1 + 60)
    || (unsigned __int64)(*((_QWORD *)a1 + 61) - 1LL) > 0x7FFFFFFE
    || (unsigned __int64)(v3 - 1) > 0x7FFFFFFE )
  {
    return 0;
  }
  return v2;
}
