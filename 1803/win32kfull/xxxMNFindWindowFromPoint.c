/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C01E6A2C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C01E6574 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 *     _HasCaptionIcon @ 0x1C00C4988 (_HasCaptionIcon.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsMFMWFPWindow @ 0x1C01E5130 (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C01E5304 (MNItemHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3)
{
  __int16 v3; // bx
  __int16 v6; // r12
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // r14
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  __int64 v26; // rcx
  unsigned int WindowDpiLastNotify; // r12d
  __int64 v28; // rax
  int DpiDependentMetric; // ebx
  int v30; // edi
  __int64 v31; // r8
  __int64 v32; // r9
  int WindowBordersForDpi; // eax
  __int64 v34; // r9
  int v35; // ecx
  int v36; // edi
  bool v37; // zf
  unsigned __int64 v38; // r8
  int v39; // eax
  int v40; // eax
  __int64 v41; // rbx
  unsigned __int64 v42; // [rsp+38h] [rbp-38h]
  unsigned __int64 v43; // [rsp+38h] [rbp-38h]
  unsigned __int64 v44; // [rsp+38h] [rbp-38h]
  _DWORD v45[2]; // [rsp+40h] [rbp-30h] BYREF
  int v46; // [rsp+48h] [rbp-28h]
  int v47; // [rsp+4Ch] [rbp-24h]
  _QWORD v48[3]; // [rsp+50h] [rbp-20h] BYREF

  *a2 = 0;
  v3 = a3;
  v6 = HIWORD(a3);
  if ( *(_QWORD *)(**a1 + 24) )
  {
    v7 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), **a1);
    v48[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v48;
    v48[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v9 = xxxSendMessage(*(_QWORD *)(**a1 + 24));
    ThreadUnlock1(v11, v10, v12);
    if ( IsMFMWFPWindow(v9) )
    {
      LOBYTE(v13) = 1;
      v15 = HMValidateHandleNoSecure(v14, v13);
      v9 = v15;
      if ( !v15 )
        goto LABEL_14;
      v16 = safe_cast_fnid_to_PMENUWND(v15);
      v17 = v16;
      if ( !v16 )
        return 0LL;
      v18 = *(_QWORD *)(v16 + 8);
      if ( !v18 || !*(_QWORD *)(v18 + 40) )
        return 0LL;
      v19 = *(_QWORD *)(v17 + 8);
      if ( *(_QWORD *)(v19 + 64) != *(_QWORD *)(**a1 + 64) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      v20 = **a1;
      if ( !*(_QWORD *)(v20 + 16) || (v20 = *(_QWORD *)(*(_QWORD *)(**a1 + 16) + 16LL), *(_QWORD *)(v17 + 16) != v20) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
    }
    if ( v9 )
    {
      *a2 = 0;
      return v9;
    }
  }
LABEL_14:
  v22 = **a1;
  if ( (*(_DWORD *)v22 & 1) != 0 )
  {
    v23 = *(_QWORD *)(v22 + 8);
    if ( !v23 )
      return 0LL;
    v24 = v3;
    v25 = v6;
    LODWORD(v42) = v3;
    HIDWORD(v42) = v6;
    if ( (*(_DWORD *)**a1 & 4) != 0 )
    {
      if ( (unsigned int)HasCaptionIcon(v23) )
      {
        v26 = *(_QWORD *)(v23 + 40);
        if ( (*(_BYTE *)(v26 + 31) & 0x20) != 0 )
          return -PtInRect((_DWORD *)(v26 + 88), v42);
        if ( (*(_DWORD *)(v26 + 232) & 0x8000000) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(v23);
        }
        else if ( (*(_DWORD *)(v26 + 288) & 0xF) == 0
               && (v28 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 448LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 52LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 416LL) + 284LL);
        }
        DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
        v30 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
        WindowBordersForDpi = GetWindowBordersForDpi(
                                *(_DWORD *)(*(_QWORD *)(v23 + 40) + 28LL),
                                *(_DWORD *)(*(_QWORD *)(v23 + 40) + 24LL),
                                v31,
                                v32,
                                WindowDpiLastNotify);
        v34 = *(_QWORD *)(v23 + 40);
        v35 = *(_DWORD *)(v34 + 88);
        v36 = WindowBordersForDpi + *(_DWORD *)(v34 + 92) + v30;
        v45[1] = WindowBordersForDpi + *(_DWORD *)(v34 + 92);
        v37 = (*(_BYTE *)(v34 + 26) & 0x40) == 0;
        v45[0] = v35 + WindowBordersForDpi;
        v46 = v35 + WindowBordersForDpi + DpiDependentMetric;
        v47 = v36;
        if ( !v37 )
        {
          v46 = *(_DWORD *)(v34 + 96) - WindowBordersForDpi;
          v45[0] = v46 - DpiDependentMetric;
        }
        if ( PtInRect(v45, v42) )
        {
          *a2 = 0;
          return 0xFFFFFFFFLL;
        }
        if ( *(_QWORD *)(**a1 + 48) )
        {
          v39 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v23, v38);
          if ( v39 != -1 )
          {
            *a2 = v39;
            return 4294967291LL;
          }
        }
      }
      return 0LL;
    }
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) != 0 )
      return 0LL;
  }
  else
  {
    v23 = *(_QWORD *)(v22 + 16);
    LODWORD(v43) = v3;
    HIDWORD(v43) = v6;
    if ( !PtInRect((_DWORD *)(*(_QWORD *)(v23 + 40) + 88LL), v43) )
      return 0LL;
  }
  v44 = __PAIR64__(v25, v24);
  v40 = MNItemHitTest(*(_QWORD *)(**a1 + 40), v23, __PAIR64__(v25, v24));
  if ( (*(_DWORD *)**a1 & 1) != 0 )
  {
    v41 = 0xFFFFFFFFLL;
    if ( v40 == -1 )
    {
      if ( !*(_QWORD *)(**a1 + 48) )
        return 0LL;
      v40 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v23, v44);
      if ( v40 == -1 )
        return 0LL;
      v41 = 4294967291LL;
    }
  }
  else
  {
    v41 = v23;
  }
  *a2 = v40;
  return v41;
}
