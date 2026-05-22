/*
 * XREFs of ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800BE94C
 * Callers:
 *     ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800BDDD0 (-Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatial.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A83BC (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?SpatialObjectReadNextStateError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J_J@Z @ 0x1800BCBB4 (-SpatialObjectReadNextStateError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_G.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadNextState(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  int v2; // eax
  const char *v3; // r9
  int v4; // edi
  __int64 v5; // rax
  _QWORD *v6; // rdi
  unsigned int v7; // edx
  bool v8; // si
  const char *v9; // r9
  __int64 v10; // rax
  _BYTE *v11; // rdi
  unsigned int v12; // ecx
  const char *v13; // r9
  __int64 v14; // rax
  _BYTE *v15; // rdi
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v19; // rcx
  const struct _GUID *v20; // rsi
  _DWORD *v21; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v22; // rcx
  const char *v23; // [rsp+28h] [rbp-30h]
  const char *v24; // [rsp+28h] [rbp-30h]
  const char *v25; // [rsp+28h] [rbp-30h]
  unsigned __int64 v26; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v27[16]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int64 *))(**((_QWORD **)this + 17) + 24LL))(
         *((_QWORD *)this + 17),
         *((_QWORD *)this + 25),
         *((_QWORD *)this + 24),
         *((_QWORD *)this + 23),
         &v26);
  v4 = v2;
  if ( v2 >= 0 && v26 == *((_QWORD *)this + 23) )
  {
    v5 = *((_QWORD *)this + 20);
    if ( v5 )
    {
      v7 = *(_DWORD *)(v5 + 16);
      if ( v7 + *(_DWORD *)(v5 + 20) > v26 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x303,
          (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
          v3);
        __debugbreak();
      }
      v6 = (_QWORD *)(*((_QWORD *)this + 24) + v7);
    }
    else
    {
      v6 = 0LL;
    }
    v8 = v6 == 0LL;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x18D,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(v6 == 0LL),
      (unsigned __int16 *)"Timestamp reader failed",
      v23);
    *((_QWORD *)this + 25) = *v6;
    v10 = *((_QWORD *)this + 21);
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 16);
      if ( v12 + *(_DWORD *)(v10 + 20) > v26 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x303,
          (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
          v9);
        JUMPOUT(0x1800BEBB1LL);
      }
      v11 = (_BYTE *)(*((_QWORD *)this + 24) + v12);
    }
    else
    {
      v11 = 0LL;
    }
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x191,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)v8,
      (unsigned __int16 *)"Hand Pressed reader failed",
      v24);
    *((_BYTE *)this + 209) = *v11 != 0;
    v14 = *((_QWORD *)this + 22);
    if ( v14 )
    {
      v16 = *(_DWORD *)(v14 + 16);
      if ( v16 + *(_DWORD *)(v14 + 20) > v26 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x303,
          (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
          v13);
        __debugbreak();
      }
      v15 = (_BYTE *)(*((_QWORD *)this + 24) + v16);
    }
    else
    {
      v15 = 0LL;
    }
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x195,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(v15 == 0LL),
      (unsigned __int16 *)"Bloom reader failed",
      v25);
    v17 = *v15 == 0;
    *((_BYTE *)this + 208) = 1;
    ++*((_DWORD *)this + 36);
    *((_BYTE *)this + 210) = !v17;
    return 1;
  }
  else
  {
    if ( v2 != -2147024637 )
    {
      ++*((_DWORD *)this + 37);
      if ( v2 != *((_DWORD *)this + 54) )
      {
        v19 = *((_QWORD *)this + 15);
        *((_DWORD *)this + 54) = v2;
        v20 = (const struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 48LL))(v19, v27);
        v21 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
        if ( v21 )
        {
          if ( *v21 )
          {
            SpatialInteractionDevices::SpatialInteractionTrace::Instance();
            SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectReadNextStateError_(
              v22,
              v20,
              v4,
              *((_QWORD *)this + 25));
          }
        }
      }
    }
    return 0;
  }
}
