/*
 * XREFs of _CmGetDeviceInterfaceReferenceString @ 0x1406D6914
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059CAB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     PiSwCompleteCreate @ 0x1406D930C (PiSwCompleteCreate.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C7810 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmGetDeviceInterfaceReferenceString(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // rsi
  NTSTATUS v8; // ebx
  wchar_t *v9; // rax
  const wchar_t *v10; // r8
  wchar_t v11; // ax
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx

  v5 = a4;
  v8 = CmValidateDeviceInterfaceName(a1, a2);
  if ( v8 >= 0 )
  {
    v9 = wcschr((const wchar_t *)(a2 + 8), 0x5Cu);
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = v9[1];
      v12 = v10;
      while ( v11 )
      {
        if ( v11 == 92 || v11 == 47 )
        {
          v8 = -1073741767;
          break;
        }
        v11 = *++v12;
      }
      if ( v8 >= 0 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( v10[v13] );
        v14 = v13 + 1;
        v15 = -1;
        if ( v14 <= 0xFFFFFFFF )
          v15 = v14;
        v8 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v14 <= 0xFFFFFFFF )
        {
          if ( a5 )
            *a5 = v15;
          if ( v15 > (unsigned int)v5 )
            return (unsigned int)-1073741789;
          else
            return (unsigned int)RtlStringCchCopyExW(a3, v5, v10, 0LL, 0LL, 0x900u);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  return (unsigned int)v8;
}
