/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C012B0CC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxKeyboardCorrectionCallout(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm0
  unsigned int v6; // edi
  __int128 v7; // xmm1
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 ThreadWin32Thread; // rax
  _BOOL8 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // [rsp+50h] [rbp-9h] BYREF
  __int64 v28; // [rsp+58h] [rbp-1h]
  __int64 v29; // [rsp+60h] [rbp+7h]
  _OWORD v30[4]; // [rsp+68h] [rbp+Fh] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+67h] BYREF
  struct HWND__ v32; // [rsp+C8h] [rbp+6Fh] BYREF

  v32.unused = a2;
  v4 = *a1;
  LOBYTE(a2) = 1;
  v5 = a1[1];
  v6 = 0;
  v7 = a1[2];
  v8 = *(_QWORD *)a1;
  v30[0] = v4;
  v30[1] = v5;
  v30[2] = v7;
  v9 = HMValidateHandleNoSecure(v8, a2, a3, a4);
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( !v9 )
    return 87LL;
  v10 = *(_QWORD *)(v9 + 40);
  if ( (unsigned int)(*(_DWORD *)(v10 + 236) - 1) <= 1 && (*(_BYTE *)(v10 + 234) & 0x20) == 0 )
    return v6;
  v12 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( !v12 )
    return v6;
  v13 = *(_QWORD *)(v12 + 248);
  if ( !v13 )
    return v6;
  v14 = *(_QWORD *)(v13 + 40);
  if ( *(char *)(v14 + 20) >= 0 && *(char *)(v14 + 19) >= 0 )
  {
    v15 = *(_QWORD *)(v13 + 16);
    if ( gptiCurrent == v15 )
      return 0LL;
    if ( (unsigned __int8)CheckAccess(*(_QWORD *)(v15 + 416) + 872LL, *(_QWORD *)(gptiCurrent + 416LL) + 872LL) )
    {
      v19 = *(_QWORD *)(v12 + 248);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
      v27 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v27;
      v28 = v19;
      if ( v19 )
        HMLockObject(v19);
      v21 = xxxSendTransformableMessageTimeout(
              *(__int64 **)(v12 + 248),
              0x32Cu,
              &v32,
              (struct _LARGE_STRING *)v30,
              2u,
              guiKeyboardCorrectionCalloutTimeout,
              (__int64 *)&BugCheckParameter3,
              1u,
              0) == 0;
      ThreadUnlock1(v23, v22, v24);
      if ( v21 )
      {
        v25 = HMAssignmentUnlock(v12 + 248);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 40);
          if ( *(char *)(v26 + 20) >= 0 && *(char *)(v26 + 19) >= 0 )
            PostMessage(v25, 813, 0, 0);
        }
        return 1460;
      }
      else if ( BugCheckParameter3 == 255 )
      {
        return 1296;
      }
      return v6;
    }
  }
  return 5LL;
}
