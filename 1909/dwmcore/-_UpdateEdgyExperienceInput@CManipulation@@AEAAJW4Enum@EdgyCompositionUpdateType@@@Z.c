/*
 * XREFs of ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801E2F3C
 * Callers:
 *     ??1CManipulation@@UEAA@XZ @ 0x1801E0F98 (--1CManipulation@@UEAA@XZ.c)
 *     ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x1801E1824 (-ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPUL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1801A51D8 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyExperienceInput(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  signed int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-B8h] BYREF
  int v19; // [rsp+38h] [rbp-B0h]
  int v20; // [rsp+3Ch] [rbp-ACh]
  __int128 v21; // [rsp+40h] [rbp-A8h]
  __int128 v22; // [rsp+50h] [rbp-98h]
  __int128 v23; // [rsp+60h] [rbp-88h]
  __int128 v24; // [rsp+70h] [rbp-78h]
  __int128 v25; // [rsp+80h] [rbp-68h]
  __int128 v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+A0h] [rbp-48h]
  __int128 v28; // [rsp+B0h] [rbp-38h]
  __int64 v29; // [rsp+C0h] [rbp-28h]
  const void *retaddr; // [rsp+E8h] [rbp+0h]

  v3 = 0;
  if ( a2 == 2 )
  {
    if ( !*(_DWORD *)(a1 + 572) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( !*(_QWORD *)(a1 + 752) )
    {
      v5 = CWeakReference<CInteractionTracker>::Create(
             (struct CResource *)a1,
             (struct CWeakResourceReference **)(a1 + 752));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x482u, 0LL);
        return v3;
      }
    }
  }
  else if ( a2 != 3 )
  {
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  if ( *(_QWORD *)(a1 + 752) )
  {
    v18 = *(_QWORD *)(a1 + 752);
    v20 = 0;
    v7 = *(_OWORD *)(a1 + 572);
    v19 = a2;
    v8 = *(_OWORD *)(a1 + 588);
    v21 = v7;
    v9 = *(_OWORD *)(a1 + 604);
    v22 = v8;
    v10 = *(_OWORD *)(a1 + 620);
    v23 = v9;
    v11 = *(_OWORD *)(a1 + 636);
    v24 = v10;
    v12 = *(_OWORD *)(a1 + 652);
    v25 = v11;
    v13 = *(_OWORD *)(a1 + 668);
    v26 = v12;
    v27 = v13;
    v14 = *(_QWORD *)(a1 + 700);
    v28 = *(_OWORD *)(a1 + 684);
    v29 = v14;
    LODWORD(v21) = *(_DWORD *)(a1 + 708);
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 80LL) + 48LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL),
            &v18);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x49Du, 0LL);
  }
  return v3;
}
