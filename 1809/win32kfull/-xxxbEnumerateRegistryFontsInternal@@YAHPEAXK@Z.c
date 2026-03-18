/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00C324C
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00C2DC0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00C2F90 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00C30E0 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxAddFontResourceW @ 0x1C00C33D0 (xxxAddFontResourceW.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C00C361C (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     RtlStringCchCatW @ 0x1C01C40B0 (RtlStringCchCatW.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle)
{
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rdi
  ULONG i; // esi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int16 v9; // bx
  WCHAR *v10; // rbx
  __int64 v11; // rax
  void *v12; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v15[4]; // [rsp+50h] [rbp-39h] BYREF
  wchar_t pszSrc[8]; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 1074;
  wcscpy(pszSrc, L".FON");
  ResultLength = 0;
  result = Win32AllocPool(1074LL, 1919972181LL);
  v4 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v14, (__int64)Win32FreePool);
    for ( i = 0; ; ++i )
    {
      v6 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v4, v2 - 10, &ResultLength);
      if ( v6 != -2147483643 && v6 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v11 = Win32AllocPool(ResultLength, 1919972181LL);
      v12 = (void *)v11;
      if ( v11 )
      {
        ThreadLockExchange(v11, v14);
        Win32FreePool(v4);
        v2 = ResultLength;
        v4 = (__int64)v12;
        v6 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v12, ResultLength - 10, &ResultLength);
        if ( v6 != -2147483643 && v6 != -1073741789 )
        {
LABEL_5:
          if ( v6 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock((__int64)v14, v7);
            return 1LL;
          }
          if ( *(_DWORD *)(v4 + 4) == 1 )
          {
            v8 = (unsigned __int64)*(unsigned int *)(v4 + 16) >> 1;
            v9 = *(_WORD *)(v4 + 2 * v8 + 20);
            *(_WORD *)(v4 + 2 * v8 + 20) = 0;
            vCheckMMInstance((STRSAFE_PCNZWCH)(v4 + 20), (struct tagDESIGNVECTOR *)v15);
            *(_WORD *)(v4 + 2 * ((unsigned __int64)*(unsigned int *)(v4 + 16) >> 1) + 20) = v9;
            v10 = (WCHAR *)(v4 + *(unsigned int *)(v4 + 8));
            if ( wcschr(v10, 0x2Eu) )
              xxxAddFontResourceW(v10);
            else
              RtlStringCchCatW(v10, (unsigned __int64)(v2 - *(_DWORD *)(v4 + 8)) >> 1, pszSrc);
          }
        }
      }
    }
  }
  return result;
}
