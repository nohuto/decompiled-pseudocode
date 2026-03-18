/*
 * XREFs of ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01BB03C
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01BB928 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01BBEE4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     RtlInitLargeUnicodeString @ 0x1C0022154 (RtlInitLargeUnicodeString.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     DrawFrame @ 0x1C0130CD8 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     TextCopy @ 0x1C022BAB8 (TextCopy.c)
 *     DrawTextExWorker @ 0x1C022C45C (DrawTextExWorker.c)
 */

void __fastcall DrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v10; // r9d
  int v11; // edx
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v32[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h]
  RECT v34; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  _QWORD v37[3]; // [rsp+A8h] [rbp-58h] BYREF
  RECT v38; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v39[16]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v40[256]; // [rsp+E0h] [rbp-20h] BYREF

  DCEx = a2;
  if ( !a2 )
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  v10 = *((_DWORD *)a1 + 29);
  v11 = v10 * a4 + *((_DWORD *)a1 + 22);
  v30[0] = v10 * a3 + *((_DWORD *)a1 + 21);
  v30[1] = v11;
  v30[2] = v30[0] + v10;
  v30[3] = v11 + v10;
  DrawFrame(DCEx, v30, 2, a5 != 0 ? 104 : 120);
  v12 = 0;
  if ( a5 )
  {
    BugCheckParameter3[0] = 0LL;
    v13 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 4640LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4628LL));
    GetDPIServerInfo(v16, v15);
    v17 = GreSelectFont(DCEx);
    v18 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    LOBYTE(v19) = 1;
    BugCheckParameter3[1] = v17;
    v20 = HMValidateHandleNoSecure(*v18, v19);
    v21 = v20;
    if ( v20 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v20 + 40) + 184LL) )
      {
        v22 = *(_QWORD *)(v20 + 40);
        v33 = *(_QWORD *)(v20 + 168);
        v32[0] = *(_DWORD *)(v22 + 184);
        v32[1] = *(_DWORD *)(v22 + 188);
        v12 = TextCopy(v32, v40, 256LL);
      }
      else
      {
        v40[0] = 0;
      }
      v34 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v34, *(HBRUSH *)(gpsi + 4816LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 752LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 480) & 1) != 0 )
      {
        v35 = 20;
        v36 = 0LL;
        DrawTextExWorker(DCEx, v40, v12, &v34, 0x8820u, (struct tagDRAWTEXTPARAMS *)&v35);
      }
      else
      {
        RtlInitLargeUnicodeString((__int64)v39, (__int64)v40);
        v38 = v34;
        v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
        v37[0] = *(_QWORD *)(v26 + 408);
        *(_QWORD *)(v26 + 408) = v37;
        v37[1] = v21;
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
        xxxSendTransformableMessageTimeout(
          (__int64 *)v21,
          0x8Cu,
          (HWND)DCEx,
          (__int64)&v38,
          2,
          100,
          (__int64 *)BugCheckParameter3,
          1,
          0);
        ThreadUnlock1(v28, v27, v29);
      }
    }
    GreSelectFont(DCEx);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor(DCEx, v13);
  }
  if ( !a2 )
    _ReleaseDC(DCEx);
}
