/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x1C0044E90
 * Callers:
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0044818 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C003034C (RtlUnicodeStringValidateSrcWorker.c)
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(
        wchar_t *pszDest,
        unsigned __int64 cbDest,
        const _UNICODE_STRING *SourceString)
{
  unsigned __int64 v3; // rbx
  int v5; // edx
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rdx
  wchar_t *v8; // rax
  unsigned __int64 cchSrcLength; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *pszSrc; // [rsp+58h] [rbp+20h] BYREF

  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v5 = RtlUnicodeStringValidateSrcWorker(SourceString, &pszSrc, &cchSrcLength, (const unsigned __int64)SourceString);
    if ( v5 < 0 )
    {
      *pszDest = 0;
    }
    else
    {
      if ( v3 )
      {
        v6 = cchSrcLength - v3;
        v7 = (char *)pszSrc - (char *)pszDest;
        do
        {
          if ( !(v6 + v3) )
            break;
          *pszDest = *(wchar_t *)((char *)pszDest + v7);
          ++pszDest;
          --v3;
        }
        while ( v3 );
      }
      v8 = pszDest - 1;
      if ( v3 )
        v8 = pszDest;
      v5 = v3 == 0 ? 0x80000005 : 0;
      *v8 = 0;
    }
  }
  return (unsigned int)v5;
}
