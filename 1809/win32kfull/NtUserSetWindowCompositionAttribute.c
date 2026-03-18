/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C0071350
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C000B638 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0071834 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C007239C (IsTopLevelOrLayeredChildWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00B93A0 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C00B9534 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C00B9FFC (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C00BA2A4 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C00BA674 (SetWindowCompositionNCRenderingExiled.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00BA730 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C00BCE58 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C010F804 (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0129D48 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C015E720 (SetWindowCompositionDarkModeColors.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C02233C0 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0223480 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0223540 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C02235FC (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C02236BC (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C022375C (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C022381C (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C02238D8 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0223A58 (SetWindowCompositionVisualOwner.c)
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
  __int64 v13; // r9
  __int64 v14; // rsi
  int v15; // ebx
  unsigned int v16; // r15d
  struct tagWND *Host; // rax
  __int64 v18; // rcx
  NTSTATUS active; // eax
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  void *v28; // rax
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  bool v37; // sf
  ULONG v38; // eax
  _QWORD v40[3]; // [rsp+20h] [rbp-A8h] BYREF
  int v41; // [rsp+38h] [rbp-90h]
  __m128i v42; // [rsp+50h] [rbp-78h]
  SIZE_T v43; // [rsp+60h] [rbp-68h]
  __m128i v44; // [rsp+68h] [rbp-60h]
  SIZE_T Length; // [rsp+90h] [rbp-38h]

  v3 = -1073741811;
  v41 = -1073741811;
  v42 = 0uLL;
  v43 = 0LL;
  memset(v40, 0, sizeof(v40));
  v4 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v4 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v44 = *a2;
  Length = a2[1].m128i_u64[0];
  v42 = v44;
  v43 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  v6 = (volatile void *)_mm_srli_si128(v44, 8).m128i_u64[0];
  ProbeForRead(v6, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v44.m128i_i32[0] - 1) <= 0x19 )
  {
    v7 = qword_1C02CDEF8[2 * v44.m128i_i32[0]];
    if ( (unsigned int)Length >= v7 )
    {
      memmove(v40, (const void *)v6, v7);
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
    v38 = RtlNtStatusToDosError(v3);
    UserSetLastError(v38);
    v37 = v3 < 0;
    goto LABEL_79;
  }
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwndIAMComponetUIAware(a1);
  v14 = v9;
  if ( !v9 )
    goto LABEL_76;
  v15 = v42.m128i_i32[0];
  if ( v42.m128i_i32[0] != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v9)
    || *(_DWORD *)(*(_QWORD *)(v14 + 40) + 236LL) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v14) || v15 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v14) )
    {
      if ( v15 > 13 )
      {
        v29 = v15 - 15;
        if ( !v29 )
        {
          active = SetWindowCompositionForceActiveWindowAppearance(v14, v40);
          goto LABEL_75;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          active = SetWindowCompositionDisallowPeek(v14, v40);
          goto LABEL_75;
        }
        v31 = v30 - 3;
        if ( !v31 )
        {
          active = SetWindowCompositionAccentPolicy(v14, v40);
          goto LABEL_75;
        }
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 2;
          if ( !v33 )
          {
            active = SetWindowCompositionVisualOwner(v14, v40);
            goto LABEL_75;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              v3 = -1073741790;
              goto LABEL_77;
            }
            active = SetWindowCompositionHolographic(v14, v40);
            goto LABEL_75;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            active = SetWindowCompositionExcludedFromDDA(v14, v40);
            goto LABEL_75;
          }
          v36 = v35 - 1;
          if ( !v36 )
          {
            active = SetWindowCompositionPassiveUpdateMode(v14, v40);
            goto LABEL_75;
          }
          if ( v36 == 1 )
          {
            active = SetWindowCompositionDarkModeColors(v14, v40);
            goto LABEL_75;
          }
          goto LABEL_28;
        }
        SetWindowCompositionFreezeSWR(v14, v40);
      }
      else
      {
        if ( v15 == 13 )
        {
          active = SetWindowCompositionExcludeFromLivePreview(v14, v40);
          goto LABEL_75;
        }
        v20 = v15 - 2;
        if ( !v20 )
        {
          active = SetWindowCompositionNCRenderPolicy(v14, v40);
          goto LABEL_75;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          active = SetWindowCompositionTransitions(v14, v40);
          goto LABEL_75;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          active = SetWindowCompositionAllowNCPaint(v14, v40);
          goto LABEL_75;
        }
        v23 = v22 - 2;
        if ( !v23 )
        {
          active = SetWindowCompositionNonClientRTLLayout(v14, v40);
          goto LABEL_75;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          active = SetWindowCompositionForceIconicSWR(v14, v40);
          goto LABEL_75;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          active = SetWindowExtendedBoundsMargin(v14, v40);
          goto LABEL_75;
        }
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            if ( !(unsigned int)IsWindowDesktopComposed(v14) )
              goto LABEL_77;
            v28 = (void *)ReferenceDwmApiPort(v11, v10);
            active = DwmAsyncSetCompositionAttribute(v28);
            goto LABEL_75;
          }
          if ( v27 == 1 )
          {
            active = SetWindowCompositionNCRenderingExiled(v14, v40);
LABEL_75:
            v3 = active;
            goto LABEL_77;
          }
LABEL_28:
          v3 = -1073741811;
          goto LABEL_77;
        }
      }
      active = SetWindowCompositionHasIconicBitmap(v14, v40);
      goto LABEL_75;
    }
LABEL_76:
    v3 = -1073741816;
    goto LABEL_77;
  }
  v16 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v16 = 2;
  }
  else
  {
    v11 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) == v11
      && ((*(_DWORD *)(v11 + 820) & 0x30) != 0x10 || !(unsigned int)IsTopLevelWindow(v14))
      || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v14)
      && (Host = CoreWindowProp::GetHost((const struct tagWND *)v14)) != 0LL
      && (v11 = *((_QWORD *)Host + 2), *(_QWORD *)(v11 + 424) == *(_QWORD *)(gptiCurrent + 424LL)) )
    {
      v16 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !LODWORD(v40[0]) )
    {
      v18 = *(_QWORD *)(v14 + 96);
      if ( v18 )
      {
        if ( ((unsigned int)GetWindowCloakState(v18) & v16) != 0 )
          goto LABEL_28;
      }
    }
    active = zzzSetWindowCompositionCloak(v14, v40, v16);
    goto LABEL_75;
  }
LABEL_77:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  v37 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_78;
LABEL_79:
  LOBYTE(v8) = !v37;
  return v8;
}
