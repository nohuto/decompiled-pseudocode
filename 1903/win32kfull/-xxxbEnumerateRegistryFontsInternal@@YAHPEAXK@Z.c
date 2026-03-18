/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00B4984
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00E8AD0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00E8C78 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00E8DD8 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxAddFontResourceW @ 0x1C00B4934 (xxxAddFontResourceW.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C00B4B24 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01D7264 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle, int a2)
{
  ULONG v4; // r14d
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  ULONG i; // esi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int16 v14; // bx
  WCHAR *v15; // rbx
  __int64 v16; // rax
  void *v17; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-51h] BYREF
  _DWORD v20[20]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v21[4]; // [rsp+A0h] [rbp+17h] BYREF
  wchar_t v22; // [rsp+A8h] [rbp+1Fh]

  memset(v20, 0, 0x48uLL);
  v4 = 1074;
  v22 = aFon[4];
  *(_QWORD *)v21 = *(_QWORD *)L".FON";
  memset(v19, 0, sizeof(v19));
  ResultLength = 0;
  result = Win32AllocPool(1074LL, 1919972181LL);
  v7 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v19, (__int64)Win32FreePool, v6);
    for ( i = 0; ; ++i )
    {
      v9 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v7, v4 - 10, &ResultLength);
      if ( v9 != -2147483643 && v9 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v16 = Win32AllocPool(ResultLength, 1919972181LL);
      v17 = (void *)v16;
      if ( v16 )
      {
        ThreadLockExchange(v16, v19);
        Win32FreePool(v7);
        v4 = ResultLength;
        v7 = (__int64)v17;
        v9 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v17, ResultLength - 10, &ResultLength);
        if ( v9 != -2147483643 && v9 != -1073741789 )
        {
LABEL_5:
          if ( v9 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock((__int64)v19, v10, v11, v12);
            return 1LL;
          }
          if ( *(_DWORD *)(v7 + 4) == 1 )
          {
            v13 = (unsigned __int64)*(unsigned int *)(v7 + 16) >> 1;
            v14 = *(_WORD *)(v7 + 2 * v13 + 20);
            *(_WORD *)(v7 + 2 * v13 + 20) = 0;
            vCheckMMInstance((unsigned __int16 *)(v7 + 20), (struct tagDESIGNVECTOR *)v20);
            *(_WORD *)(v7 + 2 * ((unsigned __int64)*(unsigned int *)(v7 + 16) >> 1) + 20) = v14;
            v15 = (WCHAR *)(v7 + *(unsigned int *)(v7 + 8));
            if ( wcschr(v15, 0x2Eu) )
              xxxAddFontResourceW(v15, a2, (unsigned __int64)v20 & -(__int64)(v20[1] != 0));
            else
              RtlStringCchCatW(v15, (unsigned __int64)(v4 - *(_DWORD *)(v7 + 8)) >> 1, v21);
          }
        }
      }
    }
  }
  return result;
}
