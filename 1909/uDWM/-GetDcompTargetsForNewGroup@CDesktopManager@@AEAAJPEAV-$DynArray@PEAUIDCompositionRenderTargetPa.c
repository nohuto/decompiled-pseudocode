/*
 * XREFs of ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18002AA24
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002A878 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002AF20 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18002AFC8 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x18002B01C (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B054 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002C3EC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18002C528 (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18002C8C8 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18002CA8C (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18004CD04 (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x18007918C (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x1800792A8 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
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
  __int64 v12; // r14
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int AllDisplaysNoRef; // eax
  int v17; // eax
  char v18; // dl
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r14
  char v22; // cl
  CDWMDisplay *v23; // rbx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  int v30; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // [rsp+28h] [rbp-C1h]
  void *v35; // [rsp+30h] [rbp-B9h]
  char v36; // [rsp+78h] [rbp-71h]
  char v37; // [rsp+79h] [rbp-70h]
  struct IDCompositionRenderTargetPartner *v38; // [rsp+80h] [rbp-69h] BYREF
  __int64 v39; // [rsp+88h] [rbp-61h] BYREF
  CDWMDisplaySet *v40; // [rsp+90h] [rbp-59h] BYREF
  int v41; // [rsp+98h] [rbp-51h] BYREF
  int v42; // [rsp+9Ch] [rbp-4Dh] BYREF
  __int64 v43; // [rsp+A0h] [rbp-49h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-31h]
  unsigned int v46; // [rsp+C0h] [rbp-29h]
  __int128 v47; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-11h]
  unsigned int v49; // [rsp+E0h] [rbp-9h]

  v36 = 1;
  v7 = 0LL;
  v40 = 0LL;
  v48 = 0LL;
  v8 = 0;
  v49 = 0;
  DcompTarget = 0LL;
  v45 = 0LL;
  v46 = 0;
  v41 = 0;
  v42 = 0;
  v12 = a2;
  v37 = 0;
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v47 = 0LL;
  v44 = 0LL;
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 26))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
          &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0,
          &v43);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x44Fu, v35);
    goto LABEL_41;
  }
  v15 = CDesktopManager::EnumerateMonitors((CDesktopManager *)this, &v40);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x451u, v35);
    v7 = v40;
    goto LABEL_41;
  }
  v7 = v40;
  if ( v40 )
  {
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v40, &v47);
    v14 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllDisplaysNoRef, 0x455u, v35);
      goto LABEL_41;
    }
    v8 = v49;
  }
  v17 = CDWMDisplaySet::GetAllDisplaysNoRef(this[20], &v44);
  v14 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x458u, v35);
  }
  else
  {
    if ( v7 && CDWMDisplaySet::IsEquivalentRotated(this[20], v7) )
    {
      CDWMDisplaySet::GetPrimaryDisplay(this[20], a3);
      CDWMDisplaySet::CalculateRotationAngles(v7, this[20], &v41, &v42);
      v18 = 0;
      v37 = 1;
      v36 = 0;
    }
    else
    {
      v18 = 1;
    }
    v19 = 0LL;
    LODWORD(v40) = 0;
    if ( v46 )
    {
      while ( 1 )
      {
        v20 = 0LL;
        v21 = *(_QWORD *)(v44 + 8 * v19);
        v22 = 0;
        if ( v8 )
        {
          while ( !v22 )
          {
            v23 = *(CDWMDisplay **)(v47 + 8 * v20);
            if ( *(_DWORD *)(v21 + 176) == *((_DWORD *)v23 + 44)
              && *(_DWORD *)(v21 + 196) == *((_DWORD *)v23 + 49)
              && *(_DWORD *)(v21 + 212) == *((_DWORD *)v23 + 53)
              && !*(_BYTE *)(v21 + 164) )
            {
              DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v47 + 8 * v20));
              CDWMDisplay::SetDcompTarget((CDWMDisplay *)v21, DcompTarget);
              CDWMDisplay::SetDcompTarget(v23, 0LL);
              v24 = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))DcompTarget)(
                      DcompTarget,
                      &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
                      &v39);
              v14 = v24;
              if ( v24 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x480u, v35);
                goto LABEL_41;
              }
              if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v21 + 88) + 16LL)) )
              {
                v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
                v14 = v33;
                if ( v33 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x484u, v35);
                  goto LABEL_41;
                }
              }
              if ( !v37 || !*(_BYTE *)(v21 + 220) || !*(_BYTE *)(v21 + 221) )
              {
                v25 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, __int64, __int64, _QWORD))(*(_QWORD *)DcompTarget + 24LL))(
                        DcompTarget,
                        v21 + 56,
                        v21 + 40,
                        *(unsigned int *)(v21 + 208));
                v14 = v25;
                if ( v25 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x490u, v35);
                  goto LABEL_41;
                }
              }
              (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
              if ( v39 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
                v39 = 0LL;
              }
              v22 = 1;
            }
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= v8 )
              break;
          }
        }
        if ( *(_QWORD *)(v21 + 8) )
        {
          v18 = v36;
        }
        else
        {
          CDWMDXGIEnumeration::IsWarpAdapterLuid(this[19], *(struct _LUID *)(v21 + 168));
          LODWORD(v35) = *(_DWORD *)(v21 + 196);
          v32 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v43 + 624LL))(
                  v43,
                  74776LL,
                  *(_QWORD *)(*(_QWORD *)(v21 + 88) + 16LL),
                  *(_QWORD *)(v21 + 168),
                  *(_DWORD *)(v21 + 176));
          v30 = FailFastIfAccessDenied(v32);
          v14 = v30;
          if ( v30 < 0 )
          {
            v34 = 1207;
            goto LABEL_76;
          }
          v30 = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))v38)(
                  v38,
                  &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
                  &v39);
          v14 = v30;
          if ( v30 < 0 )
          {
            v34 = 1209;
            goto LABEL_76;
          }
          if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v21 + 88) + 16LL)) )
          {
            v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
            v14 = v30;
            if ( v30 < 0 )
            {
              v34 = 1213;
              goto LABEL_76;
            }
          }
          CDWMDisplay::SetDcompTarget((CDWMDisplay *)v21, v38);
          if ( v39 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            v39 = 0LL;
          }
          v8 = v49;
          v18 = 1;
          v36 = 1;
        }
        v19 = (unsigned int)((_DWORD)v40 + 1);
        LODWORD(v40) = v19;
        if ( (unsigned int)v19 >= v46 )
        {
          v12 = a2;
          break;
        }
      }
    }
    if ( v18 && (v26 = 0LL, v46) )
    {
      while ( 1 )
      {
        v38 = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v44 + 8 * v26));
        v27 = *(_DWORD *)(v12 + 24);
        v28 = v27 + 1;
        if ( v27 + 1 < v27 )
          break;
        if ( v28 <= *(_DWORD *)(v12 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 24)) = v38;
          *(_DWORD *)(v12 + 24) = v28;
        }
        else
        {
          v29 = DynArrayImpl<0>::AddMultipleAndSet(v12, 8, 1, &v38);
          v14 = v29;
          if ( v29 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u, v35);
          if ( v14 < 0 )
            goto LABEL_74;
        }
        if ( v38 )
        {
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v38 + 16LL))(v38);
          v38 = 0LL;
        }
        v26 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v26 >= v46 )
          goto LABEL_39;
      }
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v35);
LABEL_74:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4CEu, v35);
    }
    else
    {
LABEL_39:
      v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
      v14 = v30;
      if ( v30 < 0 )
      {
        v34 = 1235;
LABEL_76:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, v34, v35);
      }
    }
    DcompTarget = 0LL;
  }
LABEL_41:
  *a6 = v41;
  *a7 = v42;
  *a5 = v37;
  *a4 = v36;
  if ( DcompTarget )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v7 )
    CDWMDisplaySet::Release(v7);
  if ( v38 )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v38 + 16LL))(v38);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v44);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v47);
  return (unsigned int)v14;
}
