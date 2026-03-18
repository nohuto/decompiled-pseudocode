/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001D8C8
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001D840 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18002BAE8 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x18002BBC8 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x18002C198 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DA48 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0xqq @ 0x18015BBB4 (McTemplateU0xqq.c)
 *     McTemplateU0xqqxxffffffffffffffff @ 0x1801E98E4 (McTemplateU0xqqxxffffffffffffffff.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1, int a2)
{
  struct CInputManager *v2; // r15
  int v3; // esi
  int v4; // r12d
  int v5; // edi
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  unsigned int v8; // ecx
  struct CVisualTree *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  struct CVisualTree *v15; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v16; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v17; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-68h] BYREF
  int v19; // [rsp+E0h] [rbp-60h] BYREF
  int v20; // [rsp+E4h] [rbp-5Ch]
  int v21; // [rsp+E8h] [rbp-58h]
  int v22; // [rsp+ECh] [rbp-54h]
  int v23; // [rsp+F0h] [rbp-50h]
  int v24; // [rsp+F4h] [rbp-4Ch]
  int v25; // [rsp+F8h] [rbp-48h]
  int v26; // [rsp+FCh] [rbp-44h]
  int v27; // [rsp+100h] [rbp-40h]
  int v28; // [rsp+104h] [rbp-3Ch]
  int v29; // [rsp+108h] [rbp-38h]
  int v30; // [rsp+10Ch] [rbp-34h]
  int v31; // [rsp+110h] [rbp-30h]
  int v32; // [rsp+114h] [rbp-2Ch]
  int v33; // [rsp+118h] [rbp-28h]
  int v34; // [rsp+11Ch] [rbp-24h]
  int v35; // [rsp+120h] [rbp-20h]
  char v36; // [rsp+178h] [rbp+38h] BYREF
  int v37; // [rsp+180h] [rbp+40h] BYREF
  char v38; // [rsp+188h] [rbp+48h] BYREF

  v2 = CInputManager::s_pInputManager;
  v3 = 0;
  v17 = 0LL;
  v4 = 0;
  v37 = 0;
  v5 = 0;
  v35 = 0;
  v18 = 0LL;
  v36 = 0;
  v16 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(
      (_DWORD)a1,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 1),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
  if ( v2 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v15);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              *((CComposition **)v2 + 2),
                                              *((HMONITOR *)a1 + 1),
                                              *((_DWORD *)a1 + 7),
                                              &v15);
    v3 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802925E8, 1u, TreeWithWorkspaceOrMonitorAssociation, 0xE2u);
    }
    else
    {
      v9 = v15;
      v10 = CVisualTree::PreComputeAndLockForRead(v15);
      v3 = v10;
      if ( v10 >= 0 )
      {
        v12 = CHitTestContext::HitTestPoint(
                (char *)v2 + 24,
                v9,
                *((unsigned int *)a1 + 4),
                *((unsigned int *)a1 + 5),
                *(_DWORD *)a1,
                0,
                *((_QWORD *)a1 + 1),
                *((_DWORD *)a1 + 7),
                0LL,
                0,
                &v38,
                &v18,
                &v17,
                &v16,
                &v19,
                &v37,
                &v36);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802925E8, 1u, v12, 0xF8u);
        ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v9 + 2) + 552LL));
        Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v15);
        v4 = v18;
        v5 = v16;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802925E8, 1u, v10, 0xE5u);
    }
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v15);
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0xqqxxffffffffffffffff(
      v5,
      a2,
      v4,
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      v17,
      v5,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  if ( v17 )
    NtCloseCompositionInputSink();
  return v3 >= 0;
}
