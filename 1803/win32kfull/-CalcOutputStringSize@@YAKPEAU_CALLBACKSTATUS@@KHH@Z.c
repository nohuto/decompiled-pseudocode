/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0053670
 * Callers:
 *     SfnOUTSTRING @ 0x1C001FAA0 (SfnOUTSTRING.c)
 *     xxxClientExpandStringW @ 0x1C0052778 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0052BB4 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0052F70 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientGetListboxString @ 0x1C012CAF8 (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C01D9F10 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01DA4C0 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // edx
  ULONG v12; // ecx
  ULONG BytesInMultiByteString; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  v6 = *((_DWORD *)a1 + 2);
  if ( v6 )
    ProbeForRead(*((volatile void **)a1 + 2), v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  v9 = *((unsigned int *)a1 + 2);
  if ( a3 )
  {
    v11 = *((_DWORD *)a1 + 2);
    if ( a4 )
    {
      result = (unsigned int)v5;
      if ( (unsigned int)v5 >= v11 )
        return v11;
    }
    else
    {
      v12 = 2 * v5;
      if ( 2 * v5 >= v9 )
        v12 = *((_DWORD *)a1 + 2);
      RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 2), v12);
      return BytesInMultiByteString;
    }
  }
  else if ( a4 )
  {
    if ( (unsigned int)v5 < (unsigned int)v9 )
      LODWORD(v9) = v5;
    RtlMultiByteToUnicodeSize(&BytesInMultiByteString, *((const CHAR **)a1 + 2), v9);
    return BytesInMultiByteString >> 1;
  }
  else
  {
    result = (unsigned int)v9 >> 1;
    if ( (unsigned int)v5 < (unsigned int)result )
      return (unsigned int)v5;
  }
  return result;
}
