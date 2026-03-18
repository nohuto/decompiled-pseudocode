/*
 * XREFs of ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015DFE8
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01DE44C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01DEA84 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     RtlInitLargeUnicodeString @ 0x1C00B068C (RtlInitLargeUnicodeString.c)
 *     TextCopy @ 0x1C00F9DD0 (TextCopy.c)
 *     DrawFrame @ 0x1C014FA18 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     DrawTextExWorker @ 0x1C024239C (DrawTextExWorker.c)
 */

void __fastcall xxxDrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
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
  int v29[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v31[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  RECT v33; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h]
  _QWORD v36[3]; // [rsp+A8h] [rbp-58h] BYREF
  RECT v37; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v38[16]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v39[256]; // [rsp+E0h] [rbp-20h] BYREF

  DCEx = a2;
  if ( !a2 )
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  v10 = *((_DWORD *)a1 + 29);
  v11 = v10 * a4 + *((_DWORD *)a1 + 22);
  v29[0] = v10 * a3 + *((_DWORD *)a1 + 21);
  v29[1] = v11;
  v29[2] = v29[0] + v10;
  v29[3] = v11 + v10;
  DrawFrame(DCEx, v29, 2, a5 != 0 ? 104 : 120);
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
        v32 = *(_QWORD *)(v20 + 168);
        v31[0] = *(_DWORD *)(v22 + 184);
        v31[1] = *(_DWORD *)(v22 + 188);
        v12 = TextCopy((__int64)v31, (char *)v39, 0x100u);
      }
      else
      {
        v39[0] = 0;
      }
      v33 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v33, *(HBRUSH *)(gpsi + 4816LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 760LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 488) & 1) != 0 )
      {
        v34 = 20;
        v35 = 0LL;
        DrawTextExWorker(DCEx, v39, v12, &v33, 0x8820u, (struct tagDRAWTEXTPARAMS *)&v34);
      }
      else
      {
        RtlInitLargeUnicodeString((__int64)v38, (__int64)v39);
        v37 = v33;
        v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
        v36[0] = *(_QWORD *)(v26 + 416);
        *(_QWORD *)(v26 + 416) = v36;
        v36[1] = v21;
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
        xxxSendTransformableMessageTimeout(
          (__int64 *)v21,
          0x8Cu,
          (unsigned __int64)DCEx,
          (__int64)&v37,
          2,
          100,
          (__int64 *)BugCheckParameter3,
          1,
          0);
        ThreadUnlock1(v28, v27);
      }
    }
    GreSelectFont(DCEx);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor(DCEx, v13);
  }
  if ( !a2 )
    _ReleaseDC(DCEx);
}
