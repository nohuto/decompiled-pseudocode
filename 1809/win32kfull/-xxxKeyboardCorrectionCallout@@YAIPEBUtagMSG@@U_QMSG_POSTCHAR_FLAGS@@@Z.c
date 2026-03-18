/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C000C028
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
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
  __int64 v10; // rax
  ULONG_PTR *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 ThreadWin32Thread; // rax
  _BOOL8 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD v23[3]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v24; // [rsp+70h] [rbp+Fh]
  __int128 v25; // [rsp+80h] [rbp+1Fh]
  __int128 v26; // [rsp+90h] [rbp+2Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+C8h] [rbp+67h] BYREF
  int v28; // [rsp+D0h] [rbp+6Fh]

  v28 = a2;
  v2 = *a1;
  LOBYTE(a2) = 1;
  v3 = a1[1];
  v4 = 0;
  v5 = a1[2];
  v6 = *(_QWORD *)a1;
  v24 = v2;
  v25 = v3;
  v26 = v5;
  v7 = HMValidateHandleNoSecure(v6, a2);
  if ( !v7 )
    return 87LL;
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned int)(*(_DWORD *)(v8 + 236) - 1) <= 1 && (*(_BYTE *)(v8 + 234) & 0x20) == 0 )
    return v4;
  v10 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v10 )
    return v4;
  v11 = (ULONG_PTR *)(v10 + 248);
  v12 = *(_QWORD *)(v10 + 248);
  if ( !v12 )
    return v4;
  v13 = *(_QWORD *)(v12 + 40);
  if ( *(char *)(v13 + 20) >= 0 && *(char *)(v13 + 19) >= 0 )
  {
    v14 = *(_QWORD *)(v12 + 16);
    if ( gptiCurrent == v14 )
      return 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 424) + 880LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v16 > (unsigned int)v15
      || (_DWORD)v16 == (_DWORD)v15
      && ((v17 = HIDWORD(v16), v18 = HIDWORD(v15), (_DWORD)v17 == (_DWORD)v18) || (_DWORD)v17 == -1 || (_DWORD)v18 == -1) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v23;
      v23[1] = v12;
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v20 = xxxSendTransformableMessageTimeout(
              *v11,
              2,
              guiKeyboardCorrectionCalloutTimeout,
              (ULONG_PTR)&BugCheckParameter3,
              1,
              0) == 0;
      ThreadUnlock1();
      if ( v20 )
      {
        v21 = HMAssignmentUnlock(v11);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 40);
          if ( *(char *)(v22 + 20) >= 0 && *(char *)(v22 + 19) >= 0 )
            PostMessage(v21, 813LL, 0LL, 0LL);
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
