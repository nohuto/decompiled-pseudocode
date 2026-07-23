/*
 * XREFs of _CmGetDeviceContainerRegKeyPath @ 0x1406EB848
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x1406DB1C0 (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EB628 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F9D10 (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     _CmValidateDeviceContainerName @ 0x1406EBC14 (_CmValidateDeviceContainerName.c)
 */

__int64 __fastcall CmGetDeviceContainerRegKeyPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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

  if ( !(_DWORD)a3 || (a3 & 0xFFFFFEAF) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmValidateDeviceContainerName(a1, a2, a3);
    if ( v9 >= 0 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)(a2 + 2 * v10) );
      v11 = v10 + 51;
      v12 = -1;
      if ( v11 <= 0xFFFFFFFF )
        v12 = v11;
      v9 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v11 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v12;
        if ( v12 > (unsigned int)cchDest )
          return (unsigned int)-1073741789;
        else
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"System\\CurrentControlSet\\Control\\DeviceContainers\\%s",
                                 a2);
      }
    }
  }
  return (unsigned int)v9;
}
