/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C010102C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 */

__int64 __fastcall xxxKeyboardCorrectionCallout(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm1
  unsigned int v4; // edi
  __int128 v5; // xmm0
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 **v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 ThreadWin32Thread; // rax
  _BOOL8 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD v25[3]; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v26[3]; // [rsp+70h] [rbp+Fh] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C8h] [rbp+67h] BYREF
  struct HWND__ v28; // [rsp+D0h] [rbp+6Fh] BYREF

  v28.unused = a2;
  v2 = *a1;
  LOBYTE(a2) = 1;
  v3 = a1[1];
  v4 = 0;
  v5 = a1[2];
  v6 = *(_QWORD *)a1;
  v26[0] = v2;
  v26[1] = v3;
  v26[2] = v5;
  v7 = HMValidateHandleNoSecure(v6, a2);
  if ( !v7 )
    return 87LL;
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned int)(*(_DWORD *)(v8 + 236) - 1) <= 1 && (*(_BYTE *)(v8 + 234) & 0x20) == 0 )
    return v4;
  v10 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( !v10 )
    return v4;
  v11 = (__int64 **)(v10 + 248);
  v12 = *(_QWORD *)(v10 + 248);
  if ( !v12 )
    return v4;
  v13 = *(_QWORD *)(v12 + 40);
  if ( *(char *)(v13 + 20) >= 0 && *(char *)(v13 + 19) >= 0 )
  {
    v14 = *(_QWORD *)(v12 + 16);
    if ( gptiCurrent == v14 )
      return 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 416) + 872LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v16 > (unsigned int)v15
      || (_DWORD)v16 == (_DWORD)v15
      && ((v17 = HIDWORD(v16), v15 >>= 32, (_DWORD)v17 == (_DWORD)v15) || (_DWORD)v17 == -1 || (_DWORD)v15 == -1) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
      v25[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v25;
      v25[1] = v12;
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v19 = xxxSendTransformableMessageTimeout(
              *v11,
              0x32Cu,
              &v28,
              (__int64)v26,
              2,
              guiKeyboardCorrectionCalloutTimeout,
              (__int64 *)&BugCheckParameter3,
              1,
              0) == 0;
      ThreadUnlock1(v21, v20, v22);
      if ( v19 )
      {
        v23 = HMAssignmentUnlock(v11);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 40);
          if ( *(char *)(v24 + 20) >= 0 && *(char *)(v24 + 19) >= 0 )
            PostMessage((struct tagWND *)v23, 0x32Du, 0LL, 0LL);
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
