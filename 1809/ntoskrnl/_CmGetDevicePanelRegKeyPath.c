/*
 * XREFs of _CmGetDevicePanelRegKeyPath @ 0x1408FD224
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x1406DB1C0 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FCB04 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FD468 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     _CmValidateDevicePanelName @ 0x14074ACE0 (_CmValidateDevicePanelName.c)
 */

__int64 __fastcall CmGetDevicePanelRegKeyPath(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned int *a8)
{
  signed int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // edx

  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmValidateDevicePanelName(a1, a2);
    if ( v9 >= 0 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a2[v10] );
      v11 = v10 + 47;
      v12 = -1;
      if ( v11 <= 0xFFFFFFFF )
        v12 = v11;
      v9 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v11 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v12;
        if ( v12 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"System\\CurrentControlSet\\Control\\DevicePanels\\%s",
                                 a2);
        else
          return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)v9;
}
