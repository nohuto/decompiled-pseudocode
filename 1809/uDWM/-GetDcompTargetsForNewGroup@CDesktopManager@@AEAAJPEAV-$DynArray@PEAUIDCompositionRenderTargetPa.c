/*
 * XREFs of ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x180028C1C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029128 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800292D4 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x180029EE4 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x180029F38 (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B7A4 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002BEF4 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18002C030 (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18002C3D0 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18002C5A0 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18004ACCC (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x18007295C (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x180072A78 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 */

__int64 __fastcall CDesktopManager::GetDcompTargetsForNewGroup(
        CDWMDXGIEnumeration **this,
        __int64 a2,
        const struct CDWMDisplay **a3,
        char *a4,
        char *a5,
        int *a6,
        int *a7)
{
  CDWMDisplaySet *v7; // r15
  unsigned int v8; // r12d
  struct IDCompositionRenderTargetPartner *DcompTarget; // rdi
  char v12; // r14
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int AllDisplaysNoRef; // eax
  int v17; // eax
  char v18; // dl
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r14
  char v23; // cl
  CDWMDisplay *v24; // rbx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rsi
  unsigned int v28; // edi
  __int64 v29; // rcx
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  int v34; // r12d
  int v35; // eax
  int v36; // eax
  unsigned int v37; // [rsp+28h] [rbp-B1h]
  char v38; // [rsp+78h] [rbp-61h]
  char v39; // [rsp+79h] [rbp-60h]
  struct IDCompositionRenderTargetPartner *v40; // [rsp+80h] [rbp-59h] BYREF
  __int64 v41; // [rsp+88h] [rbp-51h] BYREF
  CDWMDisplaySet *v42; // [rsp+90h] [rbp-49h] BYREF
  int v43; // [rsp+98h] [rbp-41h] BYREF
  int v44; // [rsp+9Ch] [rbp-3Dh] BYREF
  __int64 v45; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-21h]
  unsigned int v48; // [rsp+C0h] [rbp-19h]
  __int128 v49; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-1h]
  unsigned int v51; // [rsp+E0h] [rbp+7h]

  v7 = 0LL;
  v42 = 0LL;
  v50 = 0LL;
  v8 = 0;
  v51 = 0;
  DcompTarget = 0LL;
  v47 = 0LL;
  v48 = 0;
  v43 = 0;
  v44 = 0;
  v39 = 0;
  v12 = 1;
  v45 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v49 = 0LL;
  v38 = 1;
  v46 = 0LL;
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 26))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
          &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0,
          &v45);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x464u);
    goto LABEL_44;
  }
  v15 = CDesktopManager::EnumerateMonitors((CDesktopManager *)this, &v42);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x466u);
    v7 = v42;
    goto LABEL_44;
  }
  v7 = v42;
  if ( v42 )
  {
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v42, &v49);
    v14 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllDisplaysNoRef, 0x46Au);
      goto LABEL_44;
    }
    v8 = v51;
  }
  v17 = CDWMDisplaySet::GetAllDisplaysNoRef(this[20], &v46);
  v14 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x46Du);
  }
  else
  {
    if ( v7 && CDWMDisplaySet::IsEquivalentRotated(this[20], v7) )
    {
      CDWMDisplaySet::GetPrimaryDisplay(this[20], a3);
      CDWMDisplaySet::CalculateRotationAngles(v7, this[20], &v43, &v44);
      v18 = 0;
      v39 = 1;
      v38 = 0;
    }
    else
    {
      v18 = 1;
    }
    v19 = v48;
    v20 = 0LL;
    LODWORD(v42) = 0;
    while ( (unsigned int)v20 < v48 )
    {
      v21 = 0LL;
      v22 = *(_QWORD *)(v46 + 8 * v20);
      v23 = 0;
      if ( v8 )
      {
        while ( !v23 )
        {
          v24 = *(CDWMDisplay **)(v49 + 8 * v21);
          if ( *(_DWORD *)(v22 + 176) == *((_DWORD *)v24 + 44)
            && *(_DWORD *)(v22 + 196) == *((_DWORD *)v24 + 49)
            && *(_DWORD *)(v22 + 212) == *((_DWORD *)v24 + 53)
            && !*(_BYTE *)(v22 + 164) )
          {
            DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v49 + 8 * v21));
            CDWMDisplay::SetDcompTarget((CDWMDisplay *)v22, DcompTarget);
            CDWMDisplay::SetDcompTarget(v24, 0LL);
            v25 = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))DcompTarget)(
                    DcompTarget,
                    &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
                    &v41);
            v14 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x495u);
              goto LABEL_43;
            }
            if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v22 + 88) + 16LL)) )
            {
              v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
              v14 = v36;
              if ( v36 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x499u);
                goto LABEL_43;
              }
            }
            if ( !v39 || !*(_BYTE *)(v22 + 220) || !*(_BYTE *)(v22 + 221) )
            {
              v26 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, __int64, __int64, _QWORD))(*(_QWORD *)DcompTarget + 24LL))(
                      DcompTarget,
                      v22 + 56,
                      v22 + 40,
                      *(unsigned int *)(v22 + 208));
              v14 = v26;
              if ( v26 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x4A5u);
                goto LABEL_43;
              }
            }
            (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
            if ( v41 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
              v41 = 0LL;
            }
            v23 = 1;
          }
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= v8 )
            break;
        }
      }
      if ( *(_QWORD *)(v22 + 8) )
      {
        v18 = v38;
      }
      else
      {
        if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(this[19], *(struct _LUID *)(v22 + 168))
          || (v34 = 3, (unsigned int)(*((_DWORD *)this + 42) - 2) <= 1) )
        {
          v34 = 2;
        }
        v35 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, int, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v45 + 624LL))(
                v45,
                74776LL,
                *(_QWORD *)(*(_QWORD *)(v22 + 88) + 16LL),
                *(_QWORD *)(v22 + 168),
                *(_DWORD *)(v22 + 176),
                *(_DWORD *)(v22 + 196),
                *(_DWORD *)(v22 + 212),
                v22 + 56,
                v22 + 40,
                *(_DWORD *)(v22 + 208),
                v34,
                &v40);
        v32 = FailFastIfAccessDenied(v35);
        v14 = v32;
        if ( v32 < 0 )
        {
          v37 = 1227;
          goto LABEL_84;
        }
        v32 = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))v40)(
                v40,
                &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
                &v41);
        v14 = v32;
        if ( v32 < 0 )
        {
          v37 = 1229;
          goto LABEL_84;
        }
        if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v22 + 88) + 16LL)) )
        {
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
          v14 = v32;
          if ( v32 < 0 )
          {
            v37 = 1233;
            goto LABEL_84;
          }
        }
        CDWMDisplay::SetDcompTarget((CDWMDisplay *)v22, v40);
        if ( v40 )
        {
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v40 + 16LL))(v40);
          v40 = 0LL;
        }
        if ( v41 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          v41 = 0LL;
        }
        v8 = v51;
        v18 = 1;
        v38 = 1;
      }
      v19 = v48;
      v20 = (unsigned int)((_DWORD)v42 + 1);
      LODWORD(v42) = v20;
    }
    if ( v18 && (v27 = 0LL, v19) )
    {
      v28 = (unsigned int)a4;
      while ( 1 )
      {
        v40 = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v46 + 8 * v27));
        v29 = *(unsigned int *)(a2 + 24);
        v30 = v29 + 1;
        if ( (int)v29 + 1 >= (unsigned int)v29 )
          v28 = v29 + 1;
        v14 = v30 < (unsigned int)v29 ? 0x80070216 : 0;
        if ( v30 < (unsigned int)v29 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
        }
        else if ( v28 <= *(_DWORD *)(a2 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v29) = v40;
          *(_DWORD *)(a2 + 24) = v28;
        }
        else
        {
          v31 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v40);
          v14 = v31;
          if ( v31 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xC0u);
        }
        if ( v14 < 0 )
          break;
        if ( v40 )
        {
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v40 + 16LL))(v40);
          v40 = 0LL;
        }
        v27 = (unsigned int)(v27 + 1);
        if ( (unsigned int)v27 >= v19 )
          goto LABEL_41;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4E2u);
    }
    else
    {
LABEL_41:
      v32 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
      v14 = v32;
      if ( v32 < 0 )
      {
        v37 = 1255;
LABEL_84:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, v37);
      }
    }
    DcompTarget = 0LL;
LABEL_43:
    v12 = v38;
  }
LABEL_44:
  *a6 = v43;
  *a7 = v44;
  *a5 = v39;
  *a4 = v12;
  if ( DcompTarget )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v7 )
    CDWMDisplaySet::Release(v7);
  if ( v40 )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v40 + 16LL))(v40);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v46);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v49);
  return (unsigned int)v14;
}
