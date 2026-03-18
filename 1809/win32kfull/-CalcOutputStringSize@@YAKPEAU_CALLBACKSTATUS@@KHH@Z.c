/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00B01B4
 * Callers:
 *     SfnOUTSTRING @ 0x1C00AF100 (SfnOUTSTRING.c)
 *     xxxClientLoadStringW @ 0x1C00BEB60 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C00DAF0C (xxxClientExpandStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C01022C0 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientGetListboxString @ 0x1C014F55C (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C01FF1F0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FF7E0 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  ULONG v11; // ecx
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
    if ( a4 )
    {
      if ( (unsigned int)v5 >= (unsigned int)v9 )
        LODWORD(v5) = *((_DWORD *)a1 + 2);
      return (unsigned int)v5;
    }
    else
    {
      v11 = 2 * v5;
      if ( 2 * v5 >= v9 )
        v11 = *((_DWORD *)a1 + 2);
      RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 2), v11);
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
