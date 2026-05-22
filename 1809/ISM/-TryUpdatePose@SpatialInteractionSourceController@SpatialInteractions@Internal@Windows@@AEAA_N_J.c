/*
 * XREFs of ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x18012632C
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1801259F0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800BC964 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     ?UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x180122428 (-UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x1801268C0 (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a3,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a4,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a5)
{
  RTL_SRWLOCK *v9; // rbx
  char v10; // di
  __int64 v11; // rcx
  int v12; // ebp
  _DWORD *v13; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v14; // rcx
  bool v15; // al
  __m128 v16; // xmm5
  int v17; // ebp
  _DWORD *v18; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v19; // rcx
  _BYTE v21[36]; // [rsp+40h] [rbp-198h] BYREF
  __m128 v22; // [rsp+64h] [rbp-174h]
  __m128 v23; // [rsp+74h] [rbp-164h]
  __m128 v24; // [rsp+84h] [rbp-154h]
  _BYTE v25[160]; // [rsp+E0h] [rbp-F8h] BYREF

  v9 = (RTL_SRWLOCK *)(((unsigned __int64)this + 80) & -(__int64)(TryAcquireSRWLockShared((PSRWLOCK)this + 10) != 0));
  if ( v9 )
  {
    memset_0((char *)this + 1024, 0, 0x40uLL);
    memset_0((char *)this + 1148, 0, 0x20uLL);
    v11 = *((_QWORD *)this + 11);
    v10 = 1;
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v11 + 32LL))(v11, a2, 0LL, v21);
      if ( v12 >= 0 )
      {
        v15 = (v21[16] & 2) != 0;
        *((_BYTE *)this + 1144) = v15;
        if ( v15 )
        {
          v16 = _mm_shuffle_ps(v23, v22, 244);
          *(__m128 *)((char *)this + 1128) = DirectX::XMQuaternionRotationMatrix(
                                               COERCE_DOUBLE(v22.m128_u64[0] & DirectX::g_XMMask3),
                                               COERCE_DOUBLE(_mm_shuffle_ps(v16, v16, 82).m128_u64[0] & DirectX::g_XMMask3),
                                               COERCE_DOUBLE(_mm_shuffle_ps(v23, v24, 14).m128_u64[0] & DirectX::g_XMMask3));
        }
        if ( a3 )
        {
          v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _BYTE *))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  0LL,
                  v25);
          if ( v17 >= 0 )
          {
            Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ComputeControllerPoses(
              this,
              (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v25,
              (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v21,
              a4,
              a5);
          }
          else
          {
            v18 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
            if ( v18 && *v18 )
            {
              SpatialInteractionDevices::SpatialInteractionTrace::Instance();
              SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
                v19,
                v17,
                *((_DWORD *)this + 2),
                L"No HMD Pose");
            }
          }
        }
      }
      else
      {
        v13 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
        if ( v13 && *v13 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
            v14,
            v12,
            *((_DWORD *)this + 2),
            L"No controller Pose");
        }
        *((_BYTE *)this + 1144) = 0;
      }
    }
  }
  else
  {
    v10 = 0;
  }
  if ( v9 )
    ReleaseSRWLockShared(v9);
  return v10;
}
