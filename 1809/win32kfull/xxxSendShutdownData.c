/*
 * XREFs of xxxSendShutdownData @ 0x1C0208490
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     SfnCOPYDATA @ 0x1C01191C0 (SfnCOPYDATA.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _GetWindowIcon @ 0x1C02214D8 (_GetWindowIcon.c)
 */

__int64 __fastcall xxxSendShutdownData(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ecx
  size_t v8; // rdx
  const wchar_t *Prop; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h]
  __int64 *v14; // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 WindowIcon; // [rsp+70h] [rbp-98h]
  wchar_t v17[261]; // [rsp+78h] [rbp-90h] BYREF
  wchar_t pszDest[267]; // [rsp+282h] [rbp+17Ah] BYREF

  v2 = a2;
  if ( gspwndBSDR )
  {
    if ( a1 == 0xFFFF )
    {
LABEL_19:
      v14 = &v15;
      v15 = a1;
      v12 = 0LL;
      LODWORD(v13) = 1064;
      SfnCOPYDATA(
        (volatile signed __int32 *)gspwndBSDR,
        809LL,
        v2,
        (__int64)&v12,
        *(_QWORD *)(*(_QWORD *)(gspwndBSDR + 40) + 120LL),
        *(_QWORD *)(gpsi + 752LL));
      return 0LL;
    }
    if ( !a2 )
    {
      WindowIcon = 0LL;
      pszDest[0] = 0;
      v17[0] = 0;
      v10 = ValidateHwndEx(a1, 0LL, 0LL);
      if ( v10 )
        *(_DWORD *)(*(_QWORD *)(v10 + 40) + 232LL) &= ~0x4000u;
      goto LABEL_19;
    }
    v4 = ValidateHwndEx(a1, 0LL, 0LL);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 40);
      if ( *(_QWORD *)v5 == ghwndBlocking )
      {
        v2 = 2LL;
LABEL_9:
        *(_DWORD *)(v6 + 232) |= 0x4000u;
        WindowIcon = GetWindowIcon(v5, 1LL);
        v7 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 184LL);
        if ( v7 )
        {
          v8 = ((unsigned __int64)v7 >> 1) + 1;
          if ( v8 > 0x105 )
            v8 = 261LL;
          RtlStringCchCopyW(pszDest, v8, *(NTSTRSAFE_PCWSTR *)(v5 + 168));
        }
        else
        {
          pszDest[0] = 0;
        }
        Prop = (const wchar_t *)GetProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
        if ( Prop )
          RtlStringCchCopyW(v17, 0x105uLL, Prop);
        else
          v17[0] = 0;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v6 + 236) == 1 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
