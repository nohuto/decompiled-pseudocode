/*
 * XREFs of ?InitializeStreamReaderHelpers@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800F4F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Init@?$PayloadFieldHelper@E@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F0928 (-Init@-$PayloadFieldHelper@E@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@23.c)
 *     ?Init@?$PayloadFieldHelper@UPERCEPTION_STATE_STREAM_TIMESTAMPS@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F098C (-Init@-$PayloadFieldHelper@UPERCEPTION_STATE_STREAM_TIMESTAMPS@@@Holographic@Internal@Windows@@Q.c)
 *     ??$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEB_N111AEA_N@Z @ 0x1800F27C8 (--$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialI.c)
 *     ??$_Try_emplace@AEBW4HandJointKind@People@Perception@Windows@@$$V@?$map@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@@std@@_N@1@AEBW4HandJointKind@People@Perception@Windows@@@Z @ 0x1800F31CC (--$_Try_emplace@AEBW4HandJointKind@People@Perception@Windows@@$$V@-$map@W4HandJointKind@People@P.c)
 *     ?Init@?$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F4DEC (-Init@-$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPa.c)
 *     ?Init@?$PayloadFieldHelper@UJOINT_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F4E50 (-Init@-$PayloadFieldHelper@UJOINT_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloa.c)
 *     ?Init@?$PayloadFieldHelper@W4SPATIAL_SYSTEM_READY_STATE@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F4EB4 (-Init@-$PayloadFieldHelper@W4SPATIAL_SYSTEM_READY_STATE@@@Holographic@Internal@Windows@@QEAAJPEA.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@$0A@@std@@@std@@QEAA_KAEBW4HandJointKind@People@Perception@Windows@@@Z @ 0x1800F75DC (-erase@-$_Tree@V-$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHel_ea_1800F75DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::InitializeStreamReaderHelpers(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  const char *v5; // r9
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // edi
  char v9; // di
  bool v10; // al
  char v11; // cl
  __int64 v12; // rcx
  bool v13; // r14
  unsigned int i; // esi
  char *v15; // rdi
  __int64 v16; // r13
  size_t v17; // rax
  void *v18; // rax
  const struct std::nothrow_t *v19; // rdx
  void *v20; // rcx
  struct _GUID *v21; // rax
  __int64 v22; // rcx
  char v23; // [rsp+30h] [rbp-58h] BYREF
  bool v24; // [rsp+31h] [rbp-57h] BYREF
  bool v25; // [rsp+32h] [rbp-56h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  bool v27; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+48h] [rbp-40h]
  _QWORD v29[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v28 = -2LL;
  v26 = 0LL;
  v2 = *((_QWORD *)this + 16);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2);
    v3 = Windows::Internal::Holographic::PayloadFieldHelper<PERCEPTION_STATE_STREAM_TIMESTAMPS>::Init(
           (__int64 *)this + 20,
           v26);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v7 = Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
             (__int64 *)this + 21,
             v26,
             (__int64)&SPATIALFIELD_Hand_Pressed);
      v8 = v7;
      if ( v7 >= 0 )
      {
        *((_DWORD *)this + 64) = 8;
        v9 = (int)Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
                    (__int64 *)this + 22,
                    v26,
                    (__int64)&SPATIALFIELD_Hand_Bloom) >= 0;
        if ( (int)Windows::Internal::Holographic::PayloadFieldHelper<enum SPATIAL_SYSTEM_READY_STATE>::Init(
                    (__int64 *)this + 23,
                    v26) < 0
          || (int)Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
                    (__int64 *)this + 24,
                    v26,
                    (__int64)&SPATIALFIELD_SystemGesture_Completed) < 0 )
        {
          v10 = 0;
          v11 = 0;
        }
        else
        {
          v10 = 1;
          v11 = 1;
        }
        v24 = v10;
        if ( v9 == v11 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xE8,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
            (const char *)0x8000FFFFLL);
          v12 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          result = 2147549183LL;
        }
        else
        {
          *((_BYTE *)this + 158) = v10;
          if ( (int)Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
                      (__int64 *)this + 25,
                      v26,
                      (__int64)&SPATIALFIELD_Hand_Grasp) < 0 )
          {
            v23 = 0;
          }
          else
          {
            v23 = 1;
            *((_DWORD *)this + 64) |= 0x10u;
          }
          v27 = (int)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::Init(
                       (__int64 *)this + 26,
                       v26,
                       (__int64)&SPATIALFIELD_HoldingPoseOffset) >= 0;
          v13 = *((_BYTE *)this + 376)
             && (int)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::Init(
                       (__int64 *)this + 27,
                       v26,
                       (__int64)&SPATIALFIELD_PointingPoseOffset) >= 0;
          v25 = v13;
          if ( *((_BYTE *)this + 376) )
          {
            for ( i = 0; i < 0x1A; ++i )
            {
              v15 = (char *)&unk_1801E0090 + 32 * i;
              std::map<enum Windows::Perception::People::HandJointKind,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>::_Try_emplace<enum Windows::Perception::People::HandJointKind const &,>(
                (__int64 *)this + 42,
                (__int64)v29,
                v15);
              v16 = v29[0];
              if ( (int)Windows::Internal::Holographic::PayloadFieldHelper<JOINT_OFFSET>::Init(
                          (__int64 *)(v29[0] + 40LL),
                          v26,
                          (__int64)(v15 + 4)) >= 0 )
                *(_QWORD *)(v16 + 88) = *((_QWORD *)v15 + 3);
              else
                std::_Tree<std::_Tmap_traits<enum Windows::Perception::People::HandJointKind,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper,std::less<enum Windows::Perception::People::HandJointKind>,std::allocator<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>>,0>>::erase(
                  (char *)this + 336,
                  v15);
            }
          }
          *((_BYTE *)this + 156) = v13;
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
          *((_QWORD *)this + 28) = v17;
          v18 = operator new[](v17);
          v20 = (void *)*((_QWORD *)this + 29);
          *((_QWORD *)this + 29) = v18;
          if ( v20 )
            operator delete(v20, v19);
          v21 = (struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 15) + 48LL))(
                                  *((_QWORD *)this + 15),
                                  v29);
          SpatialInteractionDevices::SpatialInteractionTrace::HandStateReaderInitialized<_GUID,bool const &,bool const &,bool const &,bool const &,bool &>(
            v21,
            &v25,
            &v27,
            &v24,
            (bool *)&v23,
            (bool *)this + 377);
          v22 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          result = 0LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDE,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (const char *)(unsigned int)v7);
        result = v8;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)(unsigned int)v3);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x11B,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                           v5);
  }
  return result;
}
