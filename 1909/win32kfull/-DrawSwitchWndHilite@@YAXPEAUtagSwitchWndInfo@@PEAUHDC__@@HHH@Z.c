/*
 * XREFs of ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F38A0
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F41DC (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4800 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C001BF88 (RtlInitLargeUnicodeString.c)
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00DE040 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00DE14C (TextCopy.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     DrawFrame @ 0x1C0157530 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     DrawTextExWorker @ 0x1C025AA5C (DrawTextExWorker.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 *v23; // rbx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+6Ch] [rbp-94h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-88h] BYREF
  RECT v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  _QWORD v43[2]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v44[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v45[256]; // [rsp+E0h] [rbp-20h] BYREF

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
  v34[0] = v10 * a3 + *((_DWORD *)a1 + 21);
  v34[1] = v11;
  v34[2] = v34[0] + v10;
  v34[3] = v11 + v10;
  DrawFrame(DCEx, v34, 2, a5 != 0 ? 104 : 120);
  v12 = 0;
  if ( a5 )
  {
    BugCheckParameter3[0] = 0LL;
    v13 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 4640LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4628LL));
    GetDPIServerInfo(v16, v15, v17);
    v18 = GreSelectFont(DCEx);
    v19 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    LOBYTE(v20) = 1;
    BugCheckParameter3[1] = v18;
    v22 = HMValidateHandleNoSecure(*v19, v20, v21);
    v23 = (__int64 *)v22;
    if ( v22 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v22 + 40) + 184LL) )
      {
        v43[0] = 0LL;
        v43[1] = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v22 + 184),
                    (struct _LARGE_UNICODE_STRING *)v43);
        v12 = TextCopy((__int64)StrName, (char *)v45, 0x100u);
      }
      else
      {
        v45[0] = 0;
      }
      v39 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v39, *(HBRUSH *)(gpsi + 4816LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26);
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 752LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 480) & 1) != 0 )
      {
        v35 = 20LL;
        v37 = 0LL;
        v36 = 0;
        DrawTextExWorker(DCEx, v45, v12, &v39, 0x8820u, (struct tagDRAWTEXTPARAMS *)&v35);
      }
      else
      {
        v40 = 0LL;
        v41 = 0LL;
        v42 = 0LL;
        memset(v44, 0, sizeof(v44));
        RtlInitLargeUnicodeString((__int64)&v44[1], (__int64)v45);
        v44[0] = v39;
        v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29);
        v40 = *(_QWORD *)(v30 + 408);
        *(_QWORD *)(v30 + 408) = &v40;
        v41 = v23;
        HMLockObject(v23);
        xxxSendTransformableMessageTimeout(
          v23,
          0x8Cu,
          (unsigned __int64)DCEx,
          (struct _LARGE_STRING *)v44,
          2u,
          0x64u,
          (__int64 *)BugCheckParameter3,
          1u,
          0);
        ThreadUnlock1(v32, v31, v33);
      }
    }
    GreSelectFont(DCEx);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor(DCEx, v13);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
