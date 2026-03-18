/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00556F4
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C011D440 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C011D5E8 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C011D748 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxAddFontResourceW @ 0x1C00556A4 (xxxAddFontResourceW.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C0055894 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01D70E4 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle, int a2)
{
  ULONG v4; // r14d
  __int64 result; // rax
  __int64 v6; // rdi
  ULONG i; // esi
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int16 v12; // bx
  WCHAR *v13; // rbx
  __int64 v14; // rax
  void *v15; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-51h] BYREF
  _DWORD v18[20]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v19[4]; // [rsp+A0h] [rbp+17h] BYREF
  wchar_t v20; // [rsp+A8h] [rbp+1Fh]

  memset(v18, 0, 0x48uLL);
  v4 = 1074;
  v20 = aFon[4];
  *(_QWORD *)v19 = *(_QWORD *)L".FON";
  memset(v17, 0, sizeof(v17));
  ResultLength = 0;
  result = Win32AllocPool(1074LL, 1919972181LL);
  v6 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v17, (__int64)Win32FreePool);
    for ( i = 0; ; ++i )
    {
      v8 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v6, v4 - 10, &ResultLength);
      if ( v8 != -2147483643 && v8 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v14 = Win32AllocPool(ResultLength, 1919972181LL);
      v15 = (void *)v14;
      if ( v14 )
      {
        ThreadLockExchange(v14, v17);
        Win32FreePool(v6);
        v4 = ResultLength;
        v6 = (__int64)v15;
        v8 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v15, ResultLength - 10, &ResultLength);
        if ( v8 != -2147483643 && v8 != -1073741789 )
        {
LABEL_5:
          if ( v8 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock((__int64)v17, v9, v10);
            return 1LL;
          }
          if ( *(_DWORD *)(v6 + 4) == 1 )
          {
            v11 = (unsigned __int64)*(unsigned int *)(v6 + 16) >> 1;
            v12 = *(_WORD *)(v6 + 2 * v11 + 20);
            *(_WORD *)(v6 + 2 * v11 + 20) = 0;
            vCheckMMInstance((unsigned __int16 *)(v6 + 20), (struct tagDESIGNVECTOR *)v18);
            *(_WORD *)(v6 + 2 * ((unsigned __int64)*(unsigned int *)(v6 + 16) >> 1) + 20) = v12;
            v13 = (WCHAR *)(v6 + *(unsigned int *)(v6 + 8));
            if ( wcschr(v13, 0x2Eu) )
              xxxAddFontResourceW(v13, a2, (unsigned __int64)v18 & -(__int64)(v18[1] != 0));
            else
              RtlStringCchCatW(v13, (unsigned __int64)(v4 - *(_DWORD *)(v6 + 8)) >> 1, v19);
          }
        }
      }
    }
  }
  return result;
}
