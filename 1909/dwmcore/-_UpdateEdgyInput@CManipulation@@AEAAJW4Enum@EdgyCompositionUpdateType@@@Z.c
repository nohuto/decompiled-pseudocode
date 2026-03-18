/*
 * XREFs of ?_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801E30B8
 * Callers:
 *     ??1CManipulation@@UEAA@XZ @ 0x1801E0F98 (--1CManipulation@@UEAA@XZ.c)
 *     ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x1801E1690 (-ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1801A51D8 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyInput(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+3Ch] [rbp-3Ch]
  __int128 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-18h]
  const void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 724) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( !*(_QWORD *)(a1 + 752) )
    {
      v5 = CWeakReference<CInteractionTracker>::Create(
             (struct CResource *)a1,
             (struct CWeakResourceReference **)(a1 + 752));
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x450u, 0LL);
        return v2;
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 752);
  if ( v7 )
  {
    v8 = *(_OWORD *)(a1 + 712);
    v16 = 0;
    v9 = *(_OWORD *)(a1 + 728);
    v14 = v7;
    v10 = *(_QWORD *)(a1 + 16);
    v17 = v8;
    v15 = a2;
    v19 = *(_QWORD *)(a1 + 744);
    v18 = v9;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v10 + 80) + 56LL))(*(_QWORD *)(v10 + 80), &v14);
    v2 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x466u, 0LL);
  }
  return v2;
}
