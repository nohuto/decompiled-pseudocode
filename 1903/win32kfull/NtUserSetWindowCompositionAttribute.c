/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C008A530
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowCompositionHasIconicBitmap @ 0x1C00867AC (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00868E8 (SetWindowCompositionAccentPolicy.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0088D5C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C008AA1C (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C008BB40 (SetWindowCompositionNCRenderingExiled.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008BE98 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C008BF7C (SetWindowExtendedBoundsMargin.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00C7314 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C012DCC4 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0133E28 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0135310 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0139E84 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C0160FBC (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0161084 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C01646EC (SetWindowCompositionDarkModeColors.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C023B97C (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C023BA50 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C023BB24 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C023BBF8 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C023BCA8 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C023BD7C (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C023BF24 (SetWindowCompositionVisualOwner.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  NTSTATUS v3; // edi
  ULONG64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v6; // xmm0_8
  size_t v7; // r8
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  int v14; // ebx
  unsigned int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // r8
  struct tagWND *Host; // rax
  __int64 v19; // rcx
  NTSTATUS active; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  void *v33; // rax
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  bool v42; // sf
  ULONG v43; // eax
  _QWORD v45[3]; // [rsp+20h] [rbp-A8h] BYREF
  int v46; // [rsp+38h] [rbp-90h]
  __m128i v47; // [rsp+50h] [rbp-78h]
  SIZE_T v48; // [rsp+60h] [rbp-68h]
  __m128i v49; // [rsp+68h] [rbp-60h]
  __m128i v50; // [rsp+80h] [rbp-48h]
  SIZE_T Length; // [rsp+90h] [rbp-38h]

  v3 = -1073741811;
  v46 = -1073741811;
  v47 = 0uLL;
  v48 = 0LL;
  memset(v45, 0, sizeof(v45));
  v4 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v4 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v49 = *a2;
  v50 = v49;
  Length = a2[1].m128i_u64[0];
  v47 = v49;
  v48 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  v6 = (volatile void *)_mm_srli_si128(v49, 8).m128i_u64[0];
  ProbeForRead(v6, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v49.m128i_i32[0] - 1) <= 0x19 )
  {
    v7 = qword_1C02E0428[2 * v49.m128i_i32[0]];
    if ( (unsigned int)Length >= v7 )
    {
      memmove(v45, (const void *)v6, v7);
      v8 = 0LL;
      v3 = 0;
      v46 = 0;
      goto LABEL_9;
    }
    v3 = -1073741789;
    v46 = -1073741789;
  }
  v8 = 0LL;
LABEL_9:
  if ( v3 < 0 )
  {
LABEL_78:
    v43 = RtlNtStatusToDosError(v3);
    UserSetLastError(v43);
    v42 = v3 < 0;
    goto LABEL_79;
  }
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwndIAMComponetUIAware(a1);
  v13 = v9;
  if ( !v9 )
    goto LABEL_76;
  v14 = v47.m128i_i32[0];
  if ( v47.m128i_i32[0] != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v9, v10, v12)
    || *(_DWORD *)(*(_QWORD *)(v13 + 40) + 236LL) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v13) || v14 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v13, v21, v22) )
    {
      if ( v14 > 13 )
      {
        v34 = v14 - 15;
        if ( !v34 )
        {
          active = SetWindowCompositionForceActiveWindowAppearance(v13, v45);
          goto LABEL_75;
        }
        v35 = v34 - 1;
        if ( !v35 )
        {
          active = SetWindowCompositionDisallowPeek(v13, v45);
          goto LABEL_75;
        }
        v36 = v35 - 3;
        if ( !v36 )
        {
          active = SetWindowCompositionAccentPolicy(v13, (__int64)v45);
          goto LABEL_75;
        }
        v37 = v36 - 1;
        if ( v37 )
        {
          v38 = v37 - 2;
          if ( !v38 )
          {
            active = SetWindowCompositionVisualOwner(v13, v45);
            goto LABEL_75;
          }
          v39 = v38 - 1;
          if ( !v39 )
          {
            if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              v3 = -1073741790;
              goto LABEL_77;
            }
            active = SetWindowCompositionHolographic(v13, v45);
            goto LABEL_75;
          }
          v40 = v39 - 1;
          if ( !v40 )
          {
            active = SetWindowCompositionExcludedFromDDA(v13, v45);
            goto LABEL_75;
          }
          v41 = v40 - 1;
          if ( !v41 )
          {
            active = SetWindowCompositionPassiveUpdateMode(v13, v45);
            goto LABEL_75;
          }
          if ( v41 == 1 )
          {
            active = SetWindowCompositionDarkModeColors(v13, v45);
            goto LABEL_75;
          }
          goto LABEL_28;
        }
        SetWindowCompositionFreezeSWR(v13, v45);
      }
      else
      {
        if ( v14 == 13 )
        {
          active = SetWindowCompositionExcludeFromLivePreview(v13, v45);
          goto LABEL_75;
        }
        v23 = v14 - 2;
        if ( !v23 )
        {
          active = SetWindowCompositionNCRenderPolicy(v13, v45);
          goto LABEL_75;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          active = SetWindowCompositionTransitions(v13, v45);
          goto LABEL_75;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          active = SetWindowCompositionAllowNCPaint(v13, v45);
          goto LABEL_75;
        }
        v26 = v25 - 2;
        if ( !v26 )
        {
          active = SetWindowCompositionNonClientRTLLayout(v13, v45);
          goto LABEL_75;
        }
        v27 = v26 - 1;
        if ( !v27 )
        {
          active = SetWindowCompositionForceIconicSWR(v13, v45);
          goto LABEL_75;
        }
        v28 = v27 - 1;
        if ( !v28 )
        {
          active = SetWindowExtendedBoundsMargin(v13, v45);
          goto LABEL_75;
        }
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( !v30 )
          {
            if ( !(unsigned int)IsWindowDesktopComposed(v13) )
              goto LABEL_77;
            v33 = (void *)ReferenceDwmApiPort(v11, v31, v32);
            active = DwmAsyncSetCompositionAttribute(v33);
            goto LABEL_75;
          }
          if ( v30 == 1 )
          {
            active = SetWindowCompositionNCRenderingExiled(v13, v45);
LABEL_75:
            v3 = active;
            goto LABEL_77;
          }
LABEL_28:
          v3 = -1073741811;
          goto LABEL_77;
        }
      }
      active = SetWindowCompositionHasIconicBitmap(v13, v45);
      goto LABEL_75;
    }
LABEL_76:
    v3 = -1073741816;
    goto LABEL_77;
  }
  v15 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v15 = 2;
  }
  else
  {
    v11 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL) == v11
      && ((*(_DWORD *)(v11 + 812) & 0x30) != 0x10 || !(unsigned int)IsTopLevelWindow(v13))
      || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v13)
      && (Host = CoreWindowProp::GetHost((const struct tagWND *)v13)) != 0LL
      && (v11 = *((_QWORD *)Host + 2), *(_QWORD *)(v11 + 416) == *(_QWORD *)(gptiCurrent + 416LL)) )
    {
      v15 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !LODWORD(v45[0]) )
    {
      v19 = *(_QWORD *)(v13 + 120);
      if ( v19 )
      {
        if ( ((unsigned int)GetWindowCloakState(v19, v16, v17) & v15) != 0 )
          goto LABEL_28;
      }
    }
    active = zzzSetWindowCompositionCloak(v13, v45, v15);
    goto LABEL_75;
  }
LABEL_77:
  UserSessionSwitchLeaveCrit(v11);
  v42 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_78;
LABEL_79:
  LOBYTE(v8) = !v42;
  return v8;
}
