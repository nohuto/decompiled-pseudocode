/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140700010
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14070282C (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14093C5C4 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     _RegRtlQueryValue @ 0x1405C37B4 (_RegRtlQueryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C3CAC (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromCoInstallers(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        int a6,
        _DWORD *a7)
{
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  int v12; // edi
  int CachedContextBaseKey; // eax
  unsigned int v14; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+48h] BYREF

  v17 = a3;
  v7 = a7;
  v8 = 0;
  v9 = a5;
  KeyHandle = 0LL;
  *a4 = 0;
  *v7 = 0;
  if ( v9 )
  {
    v12 = a6;
    v9 &= -(__int64)(a6 != 0);
  }
  else
  {
    v12 = 0;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 13, (__int64)&KeyHandle);
  if ( CachedContextBaseKey < 0 )
  {
    return (unsigned int)CachedContextBaseKey;
  }
  else
  {
    LODWORD(v17) = v12;
    v14 = RegRtlQueryValue(KeyHandle, a2, &a7, (void *)v9, (unsigned int *)&v17);
    if ( v14 == -1073741772 || v14 == -1073741444 )
    {
      return (unsigned int)-1073741275;
    }
    else if ( !v14 || v14 == -1073741789 )
    {
      if ( (_DWORD)a7 == 7 )
      {
        *v7 = v17;
        *a4 = 8210;
        if ( v14 || !v12 )
          return (unsigned int)-1073741789;
      }
      else
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
          ZwDeleteValueKey(KeyHandle, &DestinationString);
      }
    }
    else
    {
      return v14;
    }
  }
  return v8;
}
