/*
 * XREFs of _GetAltTabInfo @ 0x1C01DEEC4
 * Callers:
 *     NtUserGetAltTabInfo @ 0x1C0213EB0 (NtUserGetAltTabInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F9CCC (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00F9DD0 (TextCopy.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01DDE24 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall GetAltTabInfo(int a1, __int64 a2, CHAR *a3, __int64 a4, int a5)
{
  ULONG v5; // r14d
  __int64 v8; // rdi
  struct tagSwitchWndInfo *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  ULONG BytesInMultiByteString[4]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v15[24]; // [rsp+40h] [rbp-18h] BYREF

  v5 = a4;
  v8 = a1;
  if ( gspwndAltTab && (v9 = Getpswi((struct tagWND *)gspwndAltTab)) != 0LL )
  {
    v10 = *((unsigned int *)v9 + 10);
    *(_DWORD *)(a2 + 4) = v10;
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v9 + 14);
    *(_DWORD *)(a2 + 12) = *((_DWORD *)v9 + 15);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v9 + 17);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v9 + 18);
    *(_DWORD *)(a2 + 24) = *((_DWORD *)v9 + 29);
    *(_DWORD *)(a2 + 28) = *((_DWORD *)v9 + 29);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)v9 + 84);
    if ( v5 && (int)v8 >= 0 )
    {
      if ( (int)v8 < *((_DWORD *)v9 + 10)
        && (_mm_lfence(),
            LOBYTE(v10) = 1,
            (v11 = HMValidateHandleNoSecure(*(_QWORD *)(*((_QWORD *)v9 + 2) + 8 * v8 + 32), v10)) != 0) )
      {
        if ( a5 )
        {
          RtlUnicodeToMultiByteN(
            a3,
            v5 - 1,
            BytesInMultiByteString,
            *(PCWCH *)(v11 + 168),
            *(_DWORD *)(*(_QWORD *)(v11 + 40) + 184LL));
          if ( BytesInMultiByteString[0] >= v5 )
          {
            *a3 = 0;
            return 0LL;
          }
          a3[BytesInMultiByteString[0]] = 0;
        }
        else
        {
          StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                      (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v11 + 168),
                      (struct _LARGE_UNICODE_STRING *)v15);
          TextCopy((__int64)StrName, a3, v5);
        }
      }
      else if ( a5 )
      {
        *a3 = 0;
      }
      else
      {
        *(_WORD *)a3 = 0;
      }
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(1168LL, a2, (__int64)a3, a4);
    return 0LL;
  }
}
