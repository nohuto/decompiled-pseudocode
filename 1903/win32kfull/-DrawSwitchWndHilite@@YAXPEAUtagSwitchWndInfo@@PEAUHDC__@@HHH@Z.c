/*
 * XREFs of ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3A20
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F435C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4980 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0020520 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C002062C (TextCopy.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     RtlInitLargeUnicodeString @ 0x1C0090188 (RtlInitLargeUnicodeString.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     DrawFrame @ 0x1C0156770 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     DrawTextExWorker @ 0x1C025B19C (DrawTextExWorker.c)
 */

void __fastcall DrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // r14d
  int v10; // r8d
  int v11; // ecx
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 DPIServerInfo; // rax
  __int64 v16; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 *v22; // rbx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+6Ch] [rbp-94h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  RECT v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  _QWORD v45[2]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v46[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v47[256]; // [rsp+E0h] [rbp-20h] BYREF

  DCEx = a2;
  if ( a2 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  }
  v10 = *((_DWORD *)a1 + 29);
  v11 = v10 * a4 + *((_DWORD *)a1 + 22);
  v35[0] = v10 * a3 + *((_DWORD *)a1 + 21);
  v35[1] = v11;
  v35[2] = v35[0] + v10;
  v35[3] = v11 + v10;
  DrawFrame(DCEx, v35, 2, a5 != 0 ? 104 : 120);
  v12 = 0;
  if ( a5 )
  {
    BugCheckParameter3 = 0LL;
    v13 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 4640LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4628LL));
    DPIServerInfo = GetDPIServerInfo();
    v16 = GreSelectFont((__int64)DCEx, *(_QWORD *)(DPIServerInfo + 8));
    v17 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    LOBYTE(v18) = 1;
    v40 = v16;
    v21 = HMValidateHandleNoSecure(*v17, v18, v19, v20);
    v22 = (__int64 *)v21;
    if ( v21 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v21 + 40) + 184LL) )
      {
        v45[0] = 0LL;
        v45[1] = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v21 + 184),
                    (struct _LARGE_UNICODE_STRING *)v45);
        v12 = TextCopy((__int64)StrName, (char *)v47, 0x100u);
      }
      else
      {
        v47[0] = 0;
      }
      v41 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v41, *(HBRUSH *)(gpsi + 4816LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 752LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 480) & 1) != 0 )
      {
        v36 = 20LL;
        v38 = 0LL;
        v37 = 0;
        DrawTextExWorker(DCEx, v47, v12, &v41, 0x8820u, (struct tagDRAWTEXTPARAMS *)&v36);
      }
      else
      {
        v42 = 0LL;
        v43 = 0LL;
        v44 = 0LL;
        memset(v46, 0, sizeof(v46));
        RtlInitLargeUnicodeString((__int64)&v46[1], (__int64)v47);
        v46[0] = v41;
        v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30);
        v42 = *(_QWORD *)(v31 + 408);
        *(_QWORD *)(v31 + 408) = &v42;
        v43 = v22;
        HMLockObject(v22);
        xxxSendTransformableMessageTimeout(
          v22,
          0x8Cu,
          (HWND)DCEx,
          (struct _LARGE_STRING *)v46,
          2u,
          0x64u,
          (__int64 *)&BugCheckParameter3,
          1u,
          0);
        ThreadUnlock1(v33, v32, v34);
      }
    }
    GreSelectFont((__int64)DCEx, v40);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor(DCEx, v13);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
