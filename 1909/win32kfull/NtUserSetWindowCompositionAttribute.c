/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C00277B0
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowCompositionFreezeSWR @ 0x1C0015D14 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C0015E18 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00163E0 (SetWindowCompositionAccentPolicy.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0018E64 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0019118 (SetWindowCompositionNCRenderingExiled.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00191E8 (DwmAsyncSetCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0027C9C (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00689E4 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C00F2394 (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C010E928 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010FFA0 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0113E84 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C0161F8C (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0162054 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C0165CBC (SetWindowCompositionDarkModeColors.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C023B35C (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C023B430 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C023B504 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C023B5D8 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C023B688 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C023B75C (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C023B904 (SetWindowCompositionVisualOwner.c)
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
  __int64 v10; // rcx
  const struct tagWND *v11; // rsi
  int v12; // ebx
  unsigned int v13; // r15d
  struct tagWND *Host; // rax
  __int64 v15; // rcx
  NTSTATUS active; // eax
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  void *v27; // rax
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  bool v36; // sf
  ULONG v37; // eax
  __int128 v39; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-98h]
  int v41; // [rsp+38h] [rbp-90h]
  __m128i v42; // [rsp+50h] [rbp-78h]
  SIZE_T v43; // [rsp+60h] [rbp-68h]
  __m128i v44; // [rsp+68h] [rbp-60h]
  __m128i v45; // [rsp+80h] [rbp-48h]
  SIZE_T Length; // [rsp+90h] [rbp-38h]

  v3 = -1073741811;
  v41 = -1073741811;
  v42 = 0uLL;
  v43 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  v4 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v4 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v44 = *a2;
  v45 = v44;
  Length = a2[1].m128i_u64[0];
  v42 = v44;
  v43 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  v6 = (volatile void *)_mm_srli_si128(v44, 8).m128i_u64[0];
  ProbeForRead(v6, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v44.m128i_i32[0] - 1) <= 0x19 )
  {
    v7 = qword_1C02DF5F8[2 * v44.m128i_i32[0]];
    if ( (unsigned int)Length >= v7 )
    {
      memmove(&v39, (const void *)v6, v7);
      v8 = 0LL;
      v3 = 0;
      v41 = 0;
      goto LABEL_9;
    }
    v3 = -1073741789;
    v41 = -1073741789;
  }
  v8 = 0LL;
LABEL_9:
  if ( v3 < 0 )
  {
LABEL_78:
    v37 = RtlNtStatusToDosError(v3);
    UserSetLastError(v37);
    v36 = v3 < 0;
    goto LABEL_79;
  }
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwndIAMComponetUIAware(a1);
  v11 = (const struct tagWND *)v9;
  if ( !v9 )
    goto LABEL_76;
  v12 = v42.m128i_i32[0];
  if ( v42.m128i_i32[0] != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v9)
    || *(_DWORD *)(*((_QWORD *)v11 + 5) + 236LL) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v11) || v12 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v11) )
    {
      if ( v12 > 13 )
      {
        v28 = v12 - 15;
        if ( !v28 )
        {
          active = SetWindowCompositionForceActiveWindowAppearance(v11, &v39);
          goto LABEL_75;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          active = SetWindowCompositionDisallowPeek(v11, &v39);
          goto LABEL_75;
        }
        v30 = v29 - 3;
        if ( !v30 )
        {
          active = SetWindowCompositionAccentPolicy((__int64)v11, (__int64)&v39);
          goto LABEL_75;
        }
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 2;
          if ( !v32 )
          {
            active = SetWindowCompositionVisualOwner(v11, &v39);
            goto LABEL_75;
          }
          v33 = v32 - 1;
          if ( !v33 )
          {
            if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              v3 = -1073741790;
              goto LABEL_77;
            }
            active = SetWindowCompositionHolographic(v11, &v39);
            goto LABEL_75;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            active = SetWindowCompositionExcludedFromDDA(v11, &v39);
            goto LABEL_75;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            active = SetWindowCompositionPassiveUpdateMode(v11, &v39);
            goto LABEL_75;
          }
          if ( v35 == 1 )
          {
            active = SetWindowCompositionDarkModeColors(v11, &v39);
            goto LABEL_75;
          }
          goto LABEL_28;
        }
        SetWindowCompositionFreezeSWR(v11, (int *)&v39);
      }
      else
      {
        if ( v12 == 13 )
        {
          active = SetWindowCompositionExcludeFromLivePreview(v11, &v39);
          goto LABEL_75;
        }
        v17 = v12 - 2;
        if ( !v17 )
        {
          active = SetWindowCompositionNCRenderPolicy(v11, &v39);
          goto LABEL_75;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          active = SetWindowCompositionTransitions(v11, &v39);
          goto LABEL_75;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          active = SetWindowCompositionAllowNCPaint(v11, &v39);
          goto LABEL_75;
        }
        v20 = v19 - 2;
        if ( !v20 )
        {
          active = SetWindowCompositionNonClientRTLLayout(v11, &v39);
          goto LABEL_75;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          active = SetWindowCompositionForceIconicSWR(v11, &v39);
          goto LABEL_75;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          active = SetWindowExtendedBoundsMargin(v11, &v39);
          goto LABEL_75;
        }
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( !v24 )
          {
            if ( !(unsigned int)IsWindowDesktopComposed(v11) )
              goto LABEL_77;
            v27 = (void *)ReferenceDwmApiPort(v10, v25, v26);
            active = DwmAsyncSetCompositionAttribute(v27, a1, 10, &v39);
            goto LABEL_75;
          }
          if ( v24 == 1 )
          {
            active = SetWindowCompositionNCRenderingExiled((__int64)v11, &v39);
LABEL_75:
            v3 = active;
            goto LABEL_77;
          }
LABEL_28:
          v3 = -1073741811;
          goto LABEL_77;
        }
      }
      active = SetWindowCompositionHasIconicBitmap((__int64)v11, &v39);
      goto LABEL_75;
    }
LABEL_76:
    v3 = -1073741816;
    goto LABEL_77;
  }
  v13 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v13 = 2;
  }
  else
  {
    v10 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( *(_QWORD *)(*((_QWORD *)v11 + 2) + 416LL) == v10
      && ((*(_DWORD *)(v10 + 812) & 0x30) != 0x10 || !(unsigned int)IsTopLevelWindow(v11))
      || (unsigned int)CoreWindowProp::IsComponent(v11)
      && (Host = CoreWindowProp::GetHost(v11)) != 0LL
      && (v10 = *((_QWORD *)Host + 2), *(_QWORD *)(v10 + 416) == *(_QWORD *)(gptiCurrent + 416LL)) )
    {
      v13 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !(_DWORD)v39 )
    {
      v15 = *((_QWORD *)v11 + 15);
      if ( v15 )
      {
        if ( ((unsigned int)GetWindowCloakState(v15) & v13) != 0 )
          goto LABEL_28;
      }
    }
    active = zzzSetWindowCompositionCloak((__int64)v11, (__int64)&v39, v13);
    goto LABEL_75;
  }
LABEL_77:
  UserSessionSwitchLeaveCrit(v10);
  v36 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_78;
LABEL_79:
  LOBYTE(v8) = !v36;
  return v8;
}
