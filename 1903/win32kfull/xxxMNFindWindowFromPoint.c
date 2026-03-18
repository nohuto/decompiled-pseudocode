/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C0224500
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0223FD0 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetWindowBordersForDpi @ 0x1C0092084 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00A9D50 (_HasCaptionIcon.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsMFMWFPWindow @ 0x1C0222B70 (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C0222D58 (MNItemHitTest.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3, __int64 a4)
{
  __int16 v4; // bx
  __int16 v5; // r15
  _DWORD *v6; // r12
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int WindowDpiLastNotify; // r15d
  __int64 v27; // rax
  int DpiDependentMetric; // ebx
  int v29; // edi
  __int64 v30; // r8
  __int64 v31; // r9
  int WindowBordersForDpi; // eax
  __int64 v33; // r9
  int v34; // ecx
  int v35; // edi
  bool v36; // zf
  unsigned __int64 v37; // r8
  int v38; // eax
  int v39; // [rsp+30h] [rbp-40h]
  unsigned __int64 v40; // [rsp+38h] [rbp-38h]
  unsigned __int64 v41; // [rsp+38h] [rbp-38h]
  unsigned __int64 v42; // [rsp+38h] [rbp-38h]
  _DWORD v43[2]; // [rsp+40h] [rbp-30h] BYREF
  int v44; // [rsp+48h] [rbp-28h]
  int v45; // [rsp+4Ch] [rbp-24h]
  __int64 v46; // [rsp+50h] [rbp-20h] BYREF
  __int64 v47; // [rsp+58h] [rbp-18h]
  __int64 v48; // [rsp+60h] [rbp-10h]

  v39 = 0;
  *a2 = 0;
  v4 = a3;
  v5 = HIWORD(a3);
  v6 = a2;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v8 = **a1;
  if ( *(_QWORD *)(v8 + 24) )
  {
    v9 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, v8, a4);
    v46 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v46;
    v47 = v9;
    HMLockObject(v9);
    v11 = xxxSendMessage(*(_QWORD *)(**a1 + 24));
    ThreadUnlock1(v13, v12, v14);
    if ( IsMFMWFPWindow(v11) )
    {
      LOBYTE(a2) = 1;
      v18 = HMValidateHandleNoSecure(v15, (__int64)a2, v16, v17);
      v11 = v18;
      if ( !v18 )
        goto LABEL_8;
      v19 = safe_cast_fnid_to_PMENUWND(v18);
      if ( !v19 )
        return 0LL;
      v20 = *(_QWORD *)(v19 + 8);
      if ( !v20 || !*(_QWORD *)(v20 + 40) )
        return 0LL;
    }
    if ( v11 )
      goto LABEL_39;
  }
LABEL_8:
  v21 = **a1;
  if ( (*(_DWORD *)v21 & 1) == 0 )
  {
    v11 = *(_QWORD *)(v21 + 16);
    LODWORD(v41) = v4;
    HIDWORD(v41) = v5;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v11 + 40) + 88LL), v41) )
      return 0LL;
LABEL_32:
    v42 = __PAIR64__(v23, v22);
    v39 = MNItemHitTest(*(_QWORD *)(**a1 + 40), v11, __PAIR64__(v23, v22));
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      v38 = v39;
      if ( v39 != -1 )
      {
        v11 = 0xFFFFFFFFLL;
        goto LABEL_40;
      }
      if ( *(_QWORD *)(**a1 + 48) )
      {
        v38 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v11, v42);
        goto LABEL_36;
      }
      return 0LL;
    }
LABEL_39:
    v38 = v39;
    goto LABEL_40;
  }
  v11 = *(_QWORD *)(v21 + 8);
  if ( !v11 )
    return 0LL;
  v22 = (unsigned int)v4;
  v23 = (unsigned int)v5;
  LODWORD(v40) = v4;
  HIDWORD(v40) = v5;
  if ( (*(_DWORD *)**a1 & 4) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
    goto LABEL_32;
  }
  if ( !(unsigned int)HasCaptionIcon(v11, (__int64)a2, v22, v23) )
    return 0LL;
  v24 = *(_QWORD *)(v11 + 40);
  if ( (*(_BYTE *)(v24 + 31) & 0x20) != 0 )
  {
    if ( PtInRect((_DWORD *)(v24 + 88), v40) )
      return 0xFFFFFFFFLL;
    return 0LL;
  }
  if ( (*(_DWORD *)(v24 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v11);
  }
  else if ( (*(_DWORD *)(v24 + 288) & 0xF) == 0
         && (v27 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) + 284LL);
  }
  DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
  v29 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(*(_QWORD *)(v11 + 40) + 28LL),
                          *(unsigned int *)(*(_QWORD *)(v11 + 40) + 24LL),
                          v30,
                          v31,
                          WindowDpiLastNotify);
  v33 = *(_QWORD *)(v11 + 40);
  v34 = *(_DWORD *)(v33 + 88);
  v35 = WindowBordersForDpi + *(_DWORD *)(v33 + 92) + v29;
  v43[1] = WindowBordersForDpi + *(_DWORD *)(v33 + 92);
  v36 = (*(_BYTE *)(v33 + 26) & 0x40) == 0;
  v43[0] = v34 + WindowBordersForDpi;
  v44 = v34 + WindowBordersForDpi + DpiDependentMetric;
  v45 = v35;
  if ( !v36 )
  {
    v44 = *(_DWORD *)(v33 + 96) - WindowBordersForDpi;
    v43[0] = v44 - DpiDependentMetric;
  }
  if ( PtInRect(v43, v40) )
  {
    *v6 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(**a1 + 48) )
    return 0LL;
  v38 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v11, v37);
LABEL_36:
  if ( v38 == -1 )
    return 0LL;
  v11 = 4294967291LL;
LABEL_40:
  *v6 = v38;
  return v11;
}
