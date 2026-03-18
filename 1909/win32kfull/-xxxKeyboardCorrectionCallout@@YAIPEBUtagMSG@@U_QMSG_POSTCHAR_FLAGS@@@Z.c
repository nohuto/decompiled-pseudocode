/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0016FD4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 */

__int64 __fastcall xxxKeyboardCorrectionCallout(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm0
  unsigned int v4; // edi
  __int128 v5; // xmm1
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 ThreadWin32Thread; // rax
  _BOOL8 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+50h] [rbp-9h] BYREF
  __int64 v20; // [rsp+58h] [rbp-1h]
  __int64 v21; // [rsp+60h] [rbp+7h]
  __int128 v22; // [rsp+68h] [rbp+Fh]
  __int128 v23; // [rsp+78h] [rbp+1Fh]
  __int128 v24; // [rsp+88h] [rbp+2Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+67h] BYREF
  int v26; // [rsp+C8h] [rbp+6Fh]

  v26 = a2;
  v2 = *a1;
  LOBYTE(a2) = 1;
  v3 = a1[1];
  v4 = 0;
  v5 = a1[2];
  v6 = *(_QWORD *)a1;
  v22 = v2;
  v23 = v3;
  v24 = v5;
  v7 = HMValidateHandleNoSecure(v6, a2);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !v7 )
    return 87LL;
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned int)(*(_DWORD *)(v8 + 236) - 1) <= 1 && (*(_BYTE *)(v8 + 234) & 0x20) == 0 )
    return v4;
  v10 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( !v10 )
    return v4;
  v11 = *(_QWORD *)(v10 + 248);
  if ( !v11 )
    return v4;
  v12 = *(_QWORD *)(v11 + 40);
  if ( *(char *)(v12 + 20) >= 0 && *(char *)(v12 + 19) >= 0 )
  {
    v13 = *(_QWORD *)(v11 + 16);
    if ( gptiCurrent == v13 )
      return 0LL;
    if ( (unsigned __int8)CheckAccess(*(_QWORD *)(v13 + 416) + 872LL, *(_QWORD *)(gptiCurrent + 416LL) + 872LL) )
    {
      v14 = *(_QWORD *)(v10 + 248);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v19 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
      v20 = v14;
      if ( v14 )
        HMLockObject(v14);
      v16 = xxxSendTransformableMessageTimeout(
              *(_QWORD *)(v10 + 248),
              2,
              guiKeyboardCorrectionCalloutTimeout,
              (ULONG_PTR)&BugCheckParameter3,
              1,
              0) == 0;
      ThreadUnlock1();
      if ( v16 )
      {
        v17 = HMAssignmentUnlock(v10 + 248);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 40);
          if ( *(char *)(v18 + 20) >= 0 && *(char *)(v18 + 19) >= 0 )
            PostMessage(v17, 813LL, 0LL);
        }
        return 1460;
      }
      else if ( BugCheckParameter3 == 255 )
      {
        return 1296;
      }
      return v4;
    }
  }
  return 5LL;
}
