/*
 * XREFs of _CmGetDeviceInterfaceName @ 0x1406F971C
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     _CmValidateInstallerClassName @ 0x140597DE4 (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceName @ 0x1405C86D0 (_CmValidateDeviceName.c)
 */

__int64 __fastcall CmGetDeviceInterfaceName(
        size_t a1,
        const WCHAR *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned int *a8)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  NTSTATUS v17; // ecx
  NTSTRSAFE_PWSTR v18; // r14
  const wchar_t *v19; // r8
  __int16 *i; // rdx
  __int16 v21; // ax
  wchar_t v23; // ax
  const wchar_t *v24; // rdx
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+30h] [rbp-10h] BYREF
  size_t pcchRemaining; // [rsp+70h] [rbp+30h] BYREF

  pcchRemaining = a1;
  if ( (int)CmValidateInstallerClassName(a1, a2) < 0 || (int)CmValidateDeviceName(v11, a3) < 0 )
    return (unsigned int)-1073741811;
  v12 = -1LL;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    if ( (unsigned __int64)(v13 - 1) <= 0x102 )
    {
      v23 = *a4;
      v24 = a4;
      while ( v23 )
      {
        if ( v23 == 92 || v23 == 47 )
          return (unsigned int)-1073741773;
        v23 = *++v24;
      }
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  v13 = 0LL;
  do
LABEL_5:
    ++v12;
  while ( a3[v12] );
  v14 = v12 + 44;
  v15 = v13 + 2;
  v16 = -1;
  if ( !v13 )
    v15 = v14;
  if ( v15 <= 0xFFFFFFFF )
    v16 = v15;
  v17 = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v15 <= 0xFFFFFFFF )
  {
    if ( a8 )
      *a8 = v16;
    if ( v16 > (unsigned int)cchDest )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      v18 = pszDest;
      v19 = L"\\??\\";
      if ( !a5 )
        v19 = L"\\\\?\\";
      v17 = RtlStringCchCopyExW(pszDest, (unsigned int)cchDest, v19, ppszDestEnd, &pcchRemaining, 0x900u);
      if ( v17 >= 0 )
      {
        v17 = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a3, ppszDestEnd, &pcchRemaining, 0x900u);
        if ( v17 >= 0 )
        {
          v17 = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, L"#", ppszDestEnd, &pcchRemaining, 0x900u);
          if ( v17 >= 0 )
          {
            v17 = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a2, ppszDestEnd, &pcchRemaining, 0x900u);
            if ( v17 >= 0 )
            {
              for ( i = (__int16 *)(v18 + 4); ; ++i )
              {
                v21 = *i;
                if ( !*i )
                  break;
                if ( v21 == 92 || v21 == 47 )
                  *i = 35;
              }
              if ( v13 )
              {
                v17 = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, L"\\", ppszDestEnd, &pcchRemaining, 0x900u);
                if ( v17 >= 0 )
                  return (unsigned int)RtlStringCchCopyExW(
                                         ppszDestEnd[0],
                                         pcchRemaining,
                                         a4,
                                         ppszDestEnd,
                                         &pcchRemaining,
                                         0x900u);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v17;
}
