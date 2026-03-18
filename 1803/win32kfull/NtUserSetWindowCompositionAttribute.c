/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C00703F0
 * Callers:
 *     <none>
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1C002DE64 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C006EAEC (SetWindowCompositionNCRenderingExiled.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00702C4 (DwmAsyncSetCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C00707D0 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C00708E8 (SetWindowExtendedBoundsMargin.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C01009C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0104E0C (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C01050A0 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0105154 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C01079B8 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010C6CC (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C010E4C4 (SetWindowCompositionForceIconicSWR.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C01FA1F4 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C01FA2A8 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C01FA35C (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C01FA40C (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C01FA4C0 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C01FA554 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C01FA608 (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C01FA6B8 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C01FA820 (SetWindowCompositionVisualOwner.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  NTSTATUS v5; // edi
  ULONG64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v8; // xmm0_8
  size_t v9; // r8
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  int v17; // ebx
  bool v18; // sf
  ULONG v19; // eax
  __int64 v20; // rdx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  NTSTATUS active; // eax
  int v29; // ebx
  int v30; // ebx
  unsigned int v31; // r15d
  __int64 v32; // rcx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  struct tagWND *Host; // rax
  void *v38; // rax
  int v39; // eax
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  __int128 v43; // [rsp+28h] [rbp-90h] BYREF
  __int64 v44; // [rsp+38h] [rbp-80h]
  __m128i v45; // [rsp+50h] [rbp-68h]
  SIZE_T v46; // [rsp+60h] [rbp-58h]
  __m128i v47; // [rsp+68h] [rbp-50h]
  SIZE_T Length; // [rsp+78h] [rbp-40h]

  v5 = -1073741811;
  v45 = 0uLL;
  v46 = 0LL;
  v43 = 0uLL;
  v44 = 0LL;
  v6 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v6 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v47 = *a2;
  Length = a2[1].m128i_u64[0];
  v45 = v47;
  v46 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, a2, a3, a4);
  v8 = (volatile void *)_mm_srli_si128(v47, 8).m128i_u64[0];
  ProbeForRead(v8, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v47.m128i_i32[0] - 1) <= 0x18 )
  {
    v9 = qword_1C02DCE78[2 * v47.m128i_i32[0]];
    if ( (unsigned int)Length >= v9 )
    {
      memmove(&v43, (const void *)v8, v9);
      v10 = 0LL;
      v5 = 0;
      goto LABEL_9;
    }
    v5 = -1073741789;
  }
  v10 = 0LL;
LABEL_9:
  if ( v5 < 0 )
  {
LABEL_16:
    v19 = RtlNtStatusToDosError(v5);
    UserSetLastError(v19, v20);
    v18 = v5 < 0;
    goto LABEL_17;
  }
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwndIAMComponetUIAware(a1);
  v16 = v11;
  if ( !v11 )
    goto LABEL_14;
  v17 = v45.m128i_i32[0];
  if ( v45.m128i_i32[0] != 17
    || !IsTopLevelOrLayeredChildWindow(v11)
    || *(_DWORD *)(*(_QWORD *)(v16 + 40) + 236LL) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v16) || v17 == 20 && IsTopLevelOrLayeredChildWindow(v16) )
    {
      if ( v17 > 13 )
      {
        v33 = v17 - 15;
        if ( !v33 )
        {
          active = SetWindowCompositionForceActiveWindowAppearance(v16, &v43);
          goto LABEL_27;
        }
        v34 = v33 - 1;
        if ( !v34 )
        {
          active = SetWindowCompositionDisallowPeek(v16, &v43);
          goto LABEL_27;
        }
        v35 = v34 - 3;
        if ( !v35 )
        {
          active = SetWindowCompositionAccentPolicy(v16, &v43);
          goto LABEL_27;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          v40 = v36 - 2;
          if ( !v40 )
          {
            active = SetWindowCompositionVisualOwner(v16, &v43);
            goto LABEL_27;
          }
          v41 = v40 - 1;
          if ( !v41 )
          {
            if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              active = SetWindowCompositionHolographic(v16, &v43);
              goto LABEL_27;
            }
            v5 = -1073741790;
            goto LABEL_15;
          }
          v42 = v41 - 1;
          if ( !v42 )
          {
            active = SetWindowCompositionExcludedFromDDA(v16, &v43);
            goto LABEL_27;
          }
          if ( v42 == 1 )
          {
            active = SetWindowCompositionPassiveUpdateMode(v16, &v43);
            goto LABEL_27;
          }
LABEL_64:
          v5 = -1073741811;
          goto LABEL_15;
        }
        SetWindowCompositionFreezeSWR(v16, &v43);
      }
      else
      {
        if ( v17 == 13 )
        {
          active = SetWindowCompositionExcludeFromLivePreview(v16, &v43);
          goto LABEL_27;
        }
        v22 = v17 - 2;
        if ( !v22 )
        {
          active = SetWindowCompositionNCRenderPolicy(v16, &v43);
          goto LABEL_27;
        }
        v23 = v22 - 1;
        if ( !v23 )
        {
          active = SetWindowCompositionTransitions(v16, &v43);
          goto LABEL_27;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          active = SetWindowCompositionAllowNCPaint(v16, &v43);
          goto LABEL_27;
        }
        v25 = v24 - 2;
        if ( !v25 )
        {
          active = SetWindowCompositionNonClientRTLLayout(v16, &v43);
          goto LABEL_27;
        }
        v26 = v25 - 1;
        if ( !v26 )
        {
          active = SetWindowCompositionForceIconicSWR(v16, &v43);
          goto LABEL_27;
        }
        v27 = v26 - 1;
        if ( !v27 )
        {
          active = SetWindowExtendedBoundsMargin(v16, &v43);
          goto LABEL_27;
        }
        v29 = v27 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( !v30 )
          {
            if ( !(unsigned int)IsWindowDesktopComposed(v16) )
              goto LABEL_15;
            v38 = (void *)ReferenceDwmApiPort(v13, v12, v14);
            active = DwmAsyncSetCompositionAttribute(v38, a1, 10, &v43);
            goto LABEL_27;
          }
          if ( v30 == 1 )
          {
            active = SetWindowCompositionNCRenderingExiled(v16, &v43);
            goto LABEL_27;
          }
          goto LABEL_64;
        }
      }
      active = SetWindowCompositionHasIconicBitmap(v16, &v43);
      goto LABEL_27;
    }
LABEL_14:
    v5 = -1073741816;
    goto LABEL_15;
  }
  v31 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v31 = 2;
  }
  else
  {
    v13 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( *(_QWORD *)(*(_QWORD *)(v16 + 16) + 416LL) == v13
      && ((*(_DWORD *)(v13 + 812) & 0x30) != 0x10 || (v39 = IsTopLevelWindow(v16)) == 0)
      || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v16)
      && (Host = CoreWindowProp::GetHost((const struct tagWND *)v16)) != 0LL
      && (v13 = *((_QWORD *)Host + 2), *(_QWORD *)(v13 + 416) == *(_QWORD *)(gptiCurrent + 416LL)) )
    {
      v31 = 1;
    }
    else
    {
      v5 = -1073741790;
    }
  }
  if ( v5 >= 0 )
  {
    if ( !(_DWORD)v43 )
    {
      v32 = *(_QWORD *)(v16 + 96);
      if ( v32 )
      {
        if ( ((unsigned int)GetWindowCloakState(v32) & v31) != 0 )
          goto LABEL_64;
      }
    }
    active = zzzSetWindowCompositionCloak(v16, &v43, v31);
LABEL_27:
    v5 = active;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  v18 = v5 < 0;
  if ( v5 < 0 )
    goto LABEL_16;
LABEL_17:
  LOBYTE(v10) = !v18;
  return v10;
}
