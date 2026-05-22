/*
 * XREFs of ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800F6380
 * Callers:
 *     ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800F5E90 (-Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatial.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800E2AF0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E70A4 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ??$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPATIAL_GAZE_CALIBRATION_STATE@@PEAXIPEBDPEBW43@1ZZ @ 0x1800F0290 (--$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPA.c)
 *     ??$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEAJAEA_J@Z @ 0x1800F0454 (--$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionD.c)
 *     ?TryGetFromPayload@?$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEBAPEBUHAND_POSE_OFFSET@@PEBX_K@Z @ 0x1800F2048 (-TryGetFromPayload@-$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEBAPE.c)
 *     _lambda_831c036b4ad6511f8a8292a9f8f911ac_::operator() @ 0x1800F3918 (_lambda_831c036b4ad6511f8a8292a9f8f911ac_--operator().c)
 *     ?HandStateRead_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_J_N2H22@Z @ 0x1800F4E18 (-HandStateRead_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_J_N2H.c)
 */

char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadNextState(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  __int64 *v2; // rbx
  signed int v3; // eax
  const char *v4; // r9
  __int64 *v5; // rdi
  const char *v6; // r9
  bool v7; // r12
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  int v12; // ebx
  bool v13; // r15
  char v14; // r13
  const char *v15; // r9
  _OWORD *v16; // rbx
  _OWORD *v17; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned int v22; // ecx
  __int64 v23; // rcx
  struct _GUID *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // rcx
  struct _GUID *v29; // rax
  bool v30; // [rsp+40h] [rbp-40h]
  unsigned __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  struct _GUID v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v33; // [rsp+60h] [rbp-20h]
  _BYTE v34[16]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v2 = (__int64 *)((char *)this + 240);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int64 *))(**((_QWORD **)this + 17) + 24LL))(
         *((_QWORD *)this + 17),
         *((_QWORD *)this + 30),
         *((_QWORD *)this + 29),
         *((_QWORD *)this + 28),
         &v31);
  v32.Data1 = v3;
  if ( v3 >= 0 && v31 == *((_QWORD *)this + 28) )
  {
    v5 = (__int64 *)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
                      (__int64 *)this + 20,
                      *((_QWORD *)this + 29),
                      v31,
                      v4);
    v33 = v5;
    wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
      retaddr,
      687LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (__int64)v5);
    *v2 = *v5;
    *(_QWORD *)&v32.Data1 = this;
    *(_QWORD *)v32.Data4 = &v31;
    if ( *((_BYTE *)this + 377)
      || (v7 = 1, !lambda_831c036b4ad6511f8a8292a9f8f911ac_::operator()((unsigned __int64 **)&v32, (__int64 *)this + 22)) )
    {
      v7 = 0;
    }
    v8 = *((_BYTE *)this + 377);
    if ( !v8 )
    {
      v9 = *((_QWORD *)this + 23);
      v8 = 0;
      if ( v9 )
      {
        v10 = *(unsigned int *)(v9 + 16);
        if ( (unsigned int)(v10 + *(_DWORD *)(v9 + 20)) > v31 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            785LL,
            (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
            v6);
          __debugbreak();
        }
        v11 = (_DWORD *)(*((_QWORD *)this + 29) + v10);
        wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
          retaddr,
          710LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (__int64)v11);
        *((_DWORD *)this + 63) = *v11;
        v8 = *((_BYTE *)this + 377);
      }
    }
    v12 = *((_DWORD *)this + 63);
    if ( v8
      || (v13 = 1, !lambda_831c036b4ad6511f8a8292a9f8f911ac_::operator()(
                      (unsigned __int64 **)&v32,
                      (__int64 *)this + 24)) )
    {
      v13 = 0;
    }
    v14 = lambda_831c036b4ad6511f8a8292a9f8f911ac_::operator()((unsigned __int64 **)&v32, (__int64 *)this + 21);
    v30 = lambda_831c036b4ad6511f8a8292a9f8f911ac_::operator()((unsigned __int64 **)&v32, (__int64 *)this + 25);
    *((_DWORD *)this + 65) = 0;
    if ( v30 )
      *((_DWORD *)this + 65) = 16;
    if ( v7 )
    {
      *((_DWORD *)this + 62) = 2;
    }
    else if ( v13 )
    {
      *((_DWORD *)this + 62) = 5;
    }
    else if ( v12 && *((_BYTE *)this + 158) )
    {
      *((_DWORD *)this + 62) = 4;
    }
    else if ( v14 )
    {
      *((_DWORD *)this + 62) = 3;
      *((_DWORD *)this + 65) |= 8u;
    }
    else
    {
      *((_DWORD *)this + 62) = 1;
    }
    if ( *((_QWORD *)this + 26) )
    {
      v16 = (_OWORD *)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
                        (__int64 *)this + 26,
                        *((_QWORD *)this + 29),
                        v31,
                        v15);
      wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
        retaddr,
        750LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (__int64)v16);
      *(_OWORD *)((char *)this + 268) = *v16;
      *(_OWORD *)((char *)this + 284) = v16[1];
    }
    if ( *((_QWORD *)this + 27) )
    {
      v17 = (_OWORD *)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
                        (__int64 *)this + 27,
                        *((_QWORD *)this + 29),
                        v31,
                        v15);
      wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
        retaddr,
        757LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (__int64)v17);
      *(_OWORD *)((char *)this + 300) = *v17;
      *(_OWORD *)((char *)this + 316) = v17[1];
    }
    v18 = (__int64 *)*((_QWORD *)this + 42);
    v19 = *v18;
    *(_QWORD *)&v32.Data1 = *v18;
    while ( (__int64 *)v19 != v18 )
    {
      v20 = *(_QWORD *)(v19 + 40);
      if ( v20 )
      {
        v22 = *(_DWORD *)(v20 + 16);
        if ( v22 + *(_DWORD *)(v20 + 20) > v31 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            785LL,
            (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
            (const char *)retaddr);
          __debugbreak();
        }
        v21 = *((_QWORD *)this + 29) + v22;
      }
      else
      {
        v21 = 0LL;
      }
      wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
        retaddr,
        766LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        v21);
      *(_OWORD *)(v19 + 48) = *(_OWORD *)v21;
      *(_OWORD *)(v19 + 64) = *(_OWORD *)(v21 + 16);
      *(_DWORD *)(v19 + 80) = *(_DWORD *)(v21 + 32);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v32);
      v19 = *(_QWORD *)&v32.Data1;
    }
    v23 = *((_QWORD *)this + 15);
    ++*((_DWORD *)this + 36);
    v24 = (struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 48LL))(v23, v34);
    if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(v25) )
    {
      v32 = *v24;
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
        v26,
        (void (__cdecl *)())lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandStateRead_(
        (SpatialInteractionDevices::SpatialInteractionTraceContinuous *)*((unsigned int *)this + 63),
        &v32,
        *v33,
        v14,
        v7,
        *((_DWORD *)this + 63),
        v13,
        v30);
    }
    return 1;
  }
  else
  {
    if ( v3 != -2147024637 )
    {
      ++*((_DWORD *)this + 37);
      if ( v3 != *((_DWORD *)this + 83) )
      {
        v28 = *((_QWORD *)this + 15);
        *((_DWORD *)this + 83) = v3;
        v29 = (struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 48LL))(v28, v34);
        SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectReadNextStateError<_GUID,long &,__int64 &>(
          v29,
          (int *)&v32,
          (__int64 *)this + 30);
      }
    }
    return 0;
  }
}
