/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C020C99C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C020C4CC (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C002142C (_HasCaptionIcon.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C00AC334 (GetWindowBordersForDpi.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C020B230 (MNItemHitTest.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3)
{
  __int16 v3; // bx
  __int16 v6; // r15
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int WindowDpiLastNotify; // r15d
  __int64 v24; // rax
  int DpiDependentMetric; // ebx
  __int64 v26; // r8
  int v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  int WindowBordersForDpi; // eax
  __int64 v31; // r9
  int v32; // ecx
  int v33; // edi
  bool v34; // zf
  unsigned __int64 v35; // r8
  int v36; // eax
  int v37; // [rsp+30h] [rbp-40h]
  unsigned __int64 v38; // [rsp+38h] [rbp-38h]
  unsigned __int64 v39; // [rsp+38h] [rbp-38h]
  unsigned __int64 v40; // [rsp+38h] [rbp-38h]
  _DWORD v41[2]; // [rsp+40h] [rbp-30h] BYREF
  int v42; // [rsp+48h] [rbp-28h]
  int v43; // [rsp+4Ch] [rbp-24h]
  _QWORD v44[3]; // [rsp+50h] [rbp-20h] BYREF

  *a2 = 0;
  v3 = a3;
  v37 = 0;
  v6 = HIWORD(a3);
  if ( *(_QWORD *)(**a1 + 24) )
  {
    v7 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), **a1);
    v44[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v44;
    v44[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v9 = xxxSendMessage(*(_QWORD *)(**a1 + 24));
    ThreadUnlock1(v11, v10);
    if ( IsMFMWFPWindow(v9) )
    {
      LOBYTE(v12) = 1;
      v14 = HMValidateHandleNoSecure(v13, v12);
      v9 = v14;
      if ( !v14 )
        goto LABEL_8;
      v15 = safe_cast_fnid_to_PMENUWND(v14);
      if ( !v15 )
        return 0LL;
      v16 = *(_QWORD *)(v15 + 8);
      if ( !v16 || !*(_QWORD *)(v16 + 40) )
        return 0LL;
    }
    if ( v9 )
      goto LABEL_39;
  }
LABEL_8:
  v17 = **a1;
  if ( (*(_DWORD *)v17 & 1) == 0 )
  {
    v9 = *(_QWORD *)(v17 + 16);
    LODWORD(v39) = v3;
    HIDWORD(v39) = v6;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL), v39) )
      return 0LL;
LABEL_32:
    v40 = __PAIR64__(v19, v18);
    v37 = MNItemHitTest(*(_QWORD *)(**a1 + 40), v9, __PAIR64__(v19, v18));
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      v36 = v37;
      if ( v37 != -1 )
      {
        v9 = 0xFFFFFFFFLL;
        goto LABEL_40;
      }
      if ( *(_QWORD *)(**a1 + 48) )
      {
        v36 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v9, v40);
        goto LABEL_36;
      }
      return 0LL;
    }
LABEL_39:
    v36 = v37;
    goto LABEL_40;
  }
  v9 = *(_QWORD *)(v17 + 8);
  if ( !v9 )
    return 0LL;
  v18 = v3;
  v19 = v6;
  LODWORD(v38) = v3;
  HIDWORD(v38) = v6;
  if ( (*(_DWORD *)**a1 & 4) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
    goto LABEL_32;
  }
  if ( !(unsigned int)HasCaptionIcon(v9) )
    return 0LL;
  v21 = *(_QWORD *)(v9 + 40);
  if ( (*(_BYTE *)(v21 + 31) & 0x20) != 0 )
  {
    if ( PtInRect((_DWORD *)(v21 + 88), v38) )
      return 0xFFFFFFFFLL;
    return 0LL;
  }
  if ( (*(_DWORD *)(v21 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v9);
  }
  else if ( (*(_DWORD *)(v21 + 288) & 0xF) == 0
         && (v24 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) + 284LL);
  }
  DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify, v20);
  v27 = GetDpiDependentMetric(13LL, WindowDpiLastNotify, v26);
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(*(_QWORD *)(v9 + 40) + 28LL),
                          *(_DWORD *)(*(_QWORD *)(v9 + 40) + 24LL),
                          v28,
                          v29,
                          WindowDpiLastNotify);
  v31 = *(_QWORD *)(v9 + 40);
  v32 = *(_DWORD *)(v31 + 88);
  v33 = WindowBordersForDpi + *(_DWORD *)(v31 + 92) + v27;
  v41[1] = WindowBordersForDpi + *(_DWORD *)(v31 + 92);
  v34 = (*(_BYTE *)(v31 + 26) & 0x40) == 0;
  v41[0] = v32 + WindowBordersForDpi;
  v42 = v32 + WindowBordersForDpi + DpiDependentMetric;
  v43 = v33;
  if ( !v34 )
  {
    v42 = *(_DWORD *)(v31 + 96) - WindowBordersForDpi;
    v41[0] = v42 - DpiDependentMetric;
  }
  if ( PtInRect(v41, v38) )
  {
    *a2 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(**a1 + 48) )
    return 0LL;
  v36 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v9, v35);
LABEL_36:
  if ( v36 == -1 )
    return 0LL;
  v9 = 4294967291LL;
LABEL_40:
  *a2 = v36;
  return v9;
}
