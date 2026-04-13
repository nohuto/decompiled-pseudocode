/*
 * XREFs of ?_InitializeFromRegistry@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEAUHKEY__@@PEBG_N@Z @ 0x180030C68
 * Callers:
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180027C6C (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeFromRegistry(
        __int64 a1,
        HKEY a2,
        __int64 a3)
{
  BYTE *lpData; // rdi
  unsigned int v6; // esi
  LSTATUS Value; // eax
  signed int v8; // ebx
  LSTATUS v9; // eax
  DWORD v10; // eax
  DWORD v11; // r15d
  WCHAR *v12; // rax
  WCHAR *v13; // rbp
  DWORD v14; // eax
  DWORD v15; // r13d
  __int64 v16; // rsi
  __int64 Type; // [rsp+80h] [rbp+18h] BYREF
  SIZE_T cb; // [rsp+88h] [rbp+20h] BYREF

  Type = a3;
  LODWORD(cb) = 0;
  lpData = 0LL;
  v6 = 0;
  Value = RegQueryValueExW(a2, L"LoggedOnUserSID", 0LL, (LPDWORD)&Type, 0LL, (LPDWORD)&cb);
  v8 = (unsigned __int16)Value | 0x80070000;
  if ( Value <= 0 )
    v8 = Value;
  if ( v8 >= 0 )
  {
    if ( (unsigned int)(Type - 1) > 1 || !(_DWORD)cb || (cb & 1) != 0 )
      v8 = -2147024883;
    if ( v8 >= 0 )
    {
      lpData = (BYTE *)CoTaskMemAlloc((unsigned int)cb);
      v8 = lpData == 0LL ? 0x8007000E : 0;
      if ( !lpData )
        goto LABEL_20;
      v9 = RegQueryValueExW(a2, L"LoggedOnUserSID", 0LL, (LPDWORD)&Type, lpData, (LPDWORD)&cb);
      v8 = (unsigned __int16)v9 | 0x80070000;
      if ( v9 <= 0 )
        v8 = v9;
      if ( v8 >= 0 )
      {
        v6 = ((unsigned int)cb >> 1) - 1;
        if ( (_DWORD)Type == 2 )
        {
          v10 = ExpandEnvironmentStringsW((LPCWSTR)lpData, 0LL, 0);
          v11 = v10;
          if ( v10 )
          {
            v12 = (WCHAR *)CoTaskMemAlloc(2LL * v10);
            v13 = v12;
            v8 = v12 == 0LL ? 0x8007000E : 0;
            if ( v12 )
            {
              v14 = ExpandEnvironmentStringsW((LPCWSTR)lpData, v12, v11);
              v15 = v14;
              if ( v14 && v14 <= v11 )
              {
                v8 = 0;
                CoTaskMemFree(lpData);
                lpData = (BYTE *)v13;
                v6 = v15 - 1;
LABEL_21:
                if ( *(_WORD *)&lpData[2 * v6] )
                {
                  v8 = -2147024883;
                }
                else
                {
                  v16 = v6 + 1;
                  if ( *(_QWORD *)a1 )
                  {
                    CoTaskMemFree(*(LPVOID *)a1);
                    *(_QWORD *)a1 = 0LL;
                  }
                  *(_QWORD *)(a1 + 8) = 0LL;
                  *(_QWORD *)(a1 + 16) = 0LL;
                  if ( lpData && v16 )
                  {
                    *(_QWORD *)a1 = lpData;
                    *(_QWORD *)(a1 + 8) = v16 - 1;
                    *(_QWORD *)(a1 + 16) = v16;
                    *(_WORD *)&lpData[2 * v16 - 2] = 0;
                  }
                  lpData = 0LL;
                }
                goto LABEL_29;
              }
              v8 = -2147024774;
              CoTaskMemFree(v13);
            }
          }
        }
LABEL_20:
        if ( v8 < 0 )
          goto LABEL_29;
        goto LABEL_21;
      }
    }
  }
LABEL_29:
  CoTaskMemFree(lpData);
  return (unsigned int)v8;
}
