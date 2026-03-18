/*
 * XREFs of ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801A74C0
 * Callers:
 *     ??1CManipulation@@UEAA@XZ @ 0x1801A5550 (--1CManipulation@@UEAA@XZ.c)
 *     ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x1801A5E44 (-ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1801A56D0 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801E97C4 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyExperienceInput(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  int updated; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-C8h] BYREF
  int v19; // [rsp+38h] [rbp-C0h]
  __int128 v20; // [rsp+40h] [rbp-B8h]
  __int128 v21; // [rsp+50h] [rbp-A8h]
  __int128 v22; // [rsp+60h] [rbp-98h]
  __int128 v23; // [rsp+70h] [rbp-88h]
  __int128 v24; // [rsp+80h] [rbp-78h]
  __int128 v25; // [rsp+90h] [rbp-68h]
  __int128 v26; // [rsp+A0h] [rbp-58h]
  __int128 v27; // [rsp+B0h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-38h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v3 = 0;
  if ( a2 == 2 )
  {
    if ( !*(_DWORD *)(a1 + 572) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !*(_QWORD *)(a1 + 752) )
    {
      v5 = CWeakReference<CInteractionTracker>::Create(
             (struct CResource *)a1,
             (struct CWeakResourceReference **)(a1 + 752));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x48Bu);
        return v3;
      }
    }
  }
  else if ( a2 != 3 )
  {
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  }
  v7 = *(_QWORD *)(a1 + 752);
  if ( v7 )
  {
    memset_0(&v18, 0, 0x98uLL);
    v18 = v7;
    v19 = a2;
    v8 = *(_OWORD *)(a1 + 588);
    v20 = *(_OWORD *)(a1 + 572);
    v9 = *(_OWORD *)(a1 + 604);
    v21 = v8;
    v10 = *(_OWORD *)(a1 + 620);
    v22 = v9;
    v11 = *(_OWORD *)(a1 + 636);
    v23 = v10;
    v12 = *(_OWORD *)(a1 + 652);
    v24 = v11;
    v13 = *(_OWORD *)(a1 + 668);
    v25 = v12;
    v26 = v13;
    v14 = *(_QWORD *)(a1 + 700);
    v27 = *(_OWORD *)(a1 + 684);
    v28 = v14;
    LODWORD(v20) = *(_DWORD *)(a1 + 708);
    updated = CInputManager::UpdateEdgyInput(
                *(CInputManager **)(*(_QWORD *)(a1 + 16) + 88LL),
                (const struct EdgyCompositionConfigurationUpdateEx *)&v18);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x4A6u);
  }
  return v3;
}
