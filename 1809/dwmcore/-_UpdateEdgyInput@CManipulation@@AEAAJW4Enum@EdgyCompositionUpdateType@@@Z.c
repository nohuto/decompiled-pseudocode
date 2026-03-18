/*
 * XREFs of ?_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801A7630
 * Callers:
 *     ??1CManipulation@@UEAA@XZ @ 0x1801A5550 (--1CManipulation@@UEAA@XZ.c)
 *     ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x1801A5CC0 (-ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1801A56D0 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x1801E9738 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyInput(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int128 v10; // xmm1
  int updated; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+38h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-48h]
  __int128 v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+60h] [rbp-28h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 724) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !*(_QWORD *)(a1 + 752) )
    {
      v5 = CWeakReference<CInteractionTracker>::Create(
             (struct CResource *)a1,
             (struct CWeakResourceReference **)(a1 + 752));
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x459u);
        return v2;
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 752);
  if ( v7 )
  {
    memset_0(&v14, 0, 0x38uLL);
    v8 = *(_OWORD *)(a1 + 712);
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_OWORD *)(a1 + 728);
    v14 = v7;
    v16 = v8;
    v15 = a2;
    v18 = *(_QWORD *)(a1 + 744);
    v17 = v10;
    updated = CInputManager::UpdateEdgyInput(
                *(CInputManager **)(v9 + 88),
                (const struct EdgyCompositionConfigurationUpdate *)&v14);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, 0x46Fu);
  }
  return v2;
}
