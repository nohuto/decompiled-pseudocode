/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C0223FC0
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0223A90 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C004AB30 (_HasCaptionIcon.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetWindowBordersForDpi @ 0x1C012DCF8 (GetWindowBordersForDpi.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsMFMWFPWindow @ 0x1C0222630 (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C0222818 (MNItemHitTest.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3)
{
  __int16 v3; // bx
  __int16 v4; // r15
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  __int64 v23; // rcx
  unsigned int WindowDpiLastNotify; // r15d
  __int64 v26; // rax
  int DpiDependentMetric; // ebx
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // r9
  int WindowBordersForDpi; // eax
  __int64 v32; // r9
  int v33; // ecx
  int v34; // edi
  bool v35; // zf
  unsigned __int64 v36; // r8
  int v37; // eax
  int v38; // [rsp+30h] [rbp-40h]
  unsigned __int64 v39; // [rsp+38h] [rbp-38h]
  unsigned __int64 v40; // [rsp+38h] [rbp-38h]
  unsigned __int64 v41; // [rsp+38h] [rbp-38h]
  _DWORD v42[2]; // [rsp+40h] [rbp-30h] BYREF
  int v43; // [rsp+48h] [rbp-28h]
  int v44; // [rsp+4Ch] [rbp-24h]
  __int64 v45; // [rsp+50h] [rbp-20h] BYREF
  __int64 v46; // [rsp+58h] [rbp-18h]
  __int64 v47; // [rsp+60h] [rbp-10h]

  v38 = 0;
  *a2 = 0;
  v3 = a3;
  v4 = HIWORD(a3);
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v7 = **a1;
  if ( *(_QWORD *)(v7 + 24) )
  {
    v8 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, v7);
    v45 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v45;
    v46 = v8;
    HMLockObject(v8);
    v10 = xxxSendMessage(*(_QWORD *)(**a1 + 24));
    ThreadUnlock1(v12, v11, v13);
    if ( IsMFMWFPWindow(v10) )
    {
      LOBYTE(v14) = 1;
      v17 = HMValidateHandleNoSecure(v15, v14, v16);
      v10 = v17;
      if ( !v17 )
        goto LABEL_8;
      v18 = safe_cast_fnid_to_PMENUWND(v17);
      if ( !v18 )
        return 0LL;
      v19 = *(_QWORD *)(v18 + 8);
      if ( !v19 || !*(_QWORD *)(v19 + 40) )
        return 0LL;
    }
    if ( v10 )
      goto LABEL_39;
  }
LABEL_8:
  v20 = **a1;
  if ( (*(_DWORD *)v20 & 1) == 0 )
  {
    v10 = *(_QWORD *)(v20 + 16);
    LODWORD(v40) = v3;
    HIDWORD(v40) = v4;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL), v40) )
      return 0LL;
LABEL_32:
    v41 = __PAIR64__(v22, v21);
    v38 = MNItemHitTest(*(_QWORD *)(**a1 + 40), v10, __PAIR64__(v22, v21));
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      v37 = v38;
      if ( v38 != -1 )
      {
        v10 = 0xFFFFFFFFLL;
        goto LABEL_40;
      }
      if ( *(_QWORD *)(**a1 + 48) )
      {
        v37 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v10, v41);
        goto LABEL_36;
      }
      return 0LL;
    }
LABEL_39:
    v37 = v38;
    goto LABEL_40;
  }
  v10 = *(_QWORD *)(v20 + 8);
  if ( !v10 )
    return 0LL;
  v21 = v3;
  v22 = v4;
  LODWORD(v39) = v3;
  HIDWORD(v39) = v4;
  if ( (*(_DWORD *)**a1 & 4) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
    goto LABEL_32;
  }
  if ( !(unsigned int)HasCaptionIcon(v10) )
    return 0LL;
  v23 = *(_QWORD *)(v10 + 40);
  if ( (*(_BYTE *)(v23 + 31) & 0x20) != 0 )
  {
    if ( PtInRect((_DWORD *)(v23 + 88), v39) )
      return 0xFFFFFFFFLL;
    return 0LL;
  }
  if ( (*(_DWORD *)(v23 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
  }
  else if ( (*(_DWORD *)(v23 + 288) & 0xF) == 0
         && (v26 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL) + 284LL);
  }
  DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
  v28 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(*(_QWORD *)(v10 + 40) + 28LL),
                          *(_DWORD *)(*(_QWORD *)(v10 + 40) + 24LL),
                          v29,
                          v30,
                          WindowDpiLastNotify);
  v32 = *(_QWORD *)(v10 + 40);
  v33 = *(_DWORD *)(v32 + 88);
  v34 = WindowBordersForDpi + *(_DWORD *)(v32 + 92) + v28;
  v42[1] = WindowBordersForDpi + *(_DWORD *)(v32 + 92);
  v35 = (*(_BYTE *)(v32 + 26) & 0x40) == 0;
  v42[0] = v33 + WindowBordersForDpi;
  v43 = v33 + WindowBordersForDpi + DpiDependentMetric;
  v44 = v34;
  if ( !v35 )
  {
    v43 = *(_DWORD *)(v32 + 96) - WindowBordersForDpi;
    v42[0] = v43 - DpiDependentMetric;
  }
  if ( PtInRect(v42, v39) )
  {
    *a2 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( !*(_QWORD *)(**a1 + 48) )
    return 0LL;
  v37 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v10, v36);
LABEL_36:
  if ( v37 == -1 )
    return 0LL;
  v10 = 4294967291LL;
LABEL_40:
  *a2 = v37;
  return v10;
}
