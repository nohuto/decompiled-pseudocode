/*
 * XREFs of _CmGetDeviceInterfaceSymbolicLinkName @ 0x140711208
 * Callers:
 *     IopBuildGlobalSymbolicLinkString @ 0x14071106C (IopBuildGlobalSymbolicLinkString.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140015A04 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C7810 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmGetDeviceInterfaceSymbolicLinkName(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // rdi
  NTSTATUS v8; // ecx
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  size_t v11; // r9
  unsigned __int64 v12; // rax
  unsigned int v13; // edx

  v5 = a4;
  v8 = CmValidateDeviceInterfaceName(a1, a2);
  if ( v8 >= 0 )
  {
    v9 = (const wchar_t *)(a2 + 8);
    v10 = wcschr(v9, 0x5Cu);
    if ( v10 )
    {
      v11 = v10 - v9;
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
    }
    if ( v11 <= 0x27 )
    {
      return (unsigned int)-1073741773;
    }
    else
    {
      v12 = v11 + 1;
      v13 = -1;
      if ( v11 + 1 <= 0xFFFFFFFF )
        v13 = v11 + 1;
      v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v12 <= 0xFFFFFFFF )
      {
        if ( a5 )
          *a5 = v13;
        if ( v13 > (unsigned int)v5 )
          return (unsigned int)-1073741789;
        else
          return (unsigned int)RtlStringCchCopyNExW(a3, v5, v9, v11, 0LL, 0LL, 0x800u);
      }
    }
  }
  return (unsigned int)v8;
}
