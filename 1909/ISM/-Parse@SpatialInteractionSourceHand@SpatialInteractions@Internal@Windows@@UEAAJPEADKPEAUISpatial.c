/*
 * XREFs of ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800F5C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800E28C0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E6E74 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ??$HandStateIgnored@U_GUID@@AEA_JII@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2@Z @ 0x1800F2758 (--$HandStateIgnored@U_GUID@@AEA_JII@SpatialInteractionTraceContinuous@SpatialInteractionDevices@.c)
 *     ?AddDefaultHandReport_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JH@Z @ 0x1800F37CC (-AddDefaultHandReport_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800F3890 (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatia.c)
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800F6150 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::Parse(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        char *a2,
        __int64 a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        __int64 a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6,
        __m128 *a7,
        bool *a8,
        enum MPCAugmentedInputGestureType *a9,
        bool *a10,
        bool *a11)
{
  const struct Windows::Foundation::Numerics::Matrix4x4 *v13; // rbx
  __m128 *v14; // r15
  char v15; // al
  char v16; // r12
  int v17; // esi
  bool v18; // bp
  bool v19; // r15
  __int64 v20; // rcx
  struct _GUID *v21; // rax
  int v22; // ebx
  char v23; // al
  bool NextState; // al
  struct _GUID *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v28; // rcx
  __int64 v29; // rdx
  int v31; // [rsp+40h] [rbp-98h] BYREF
  int v32; // [rsp+44h] [rbp-94h] BYREF
  int v33[2]; // [rsp+48h] [rbp-90h]
  const struct Windows::Foundation::Numerics::Matrix4x4 *v34; // [rsp+50h] [rbp-88h]
  bool *v35; // [rsp+58h] [rbp-80h]
  struct _GUID v36; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v37[16]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v38[16]; // [rsp+80h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v13 = a6;
  v14 = a7;
  *a10 = 0;
  v35 = a8;
  v15 = *((_BYTE *)this + 105);
  *((_BYTE *)this + 105) = 0;
  v34 = a6;
  *(_QWORD *)v33 = a7;
  *a11 = v15 != 0;
  *(_DWORD *)a9 = 0;
  if ( !*((_QWORD *)this + 11) || !a4 )
    goto LABEL_19;
  v16 = 1;
  v17 = *((_DWORD *)this + 62);
  v18 = *((_BYTE *)this + 264) != 0;
  if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadNextState(this) )
  {
    v19 = v17 == 0;
    do
    {
      if ( v19 || v17 != *((_DWORD *)this + 62) )
      {
        v22 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
                (__int64)this,
                *((_QWORD *)this + 30),
                (__int64)a4,
                v13,
                *(__m128 **)v33,
                v18,
                v17);
        if ( v22 < 0 )
        {
          v29 = 324LL;
          goto LABEL_18;
        }
        v23 = *((_BYTE *)this + 264);
        v16 = 0;
        v17 = *((_DWORD *)this + 62);
        *a10 = 1;
        v18 = v23 != 0;
        v19 = v17 == 0;
      }
      else
      {
        v20 = *((_QWORD *)this + 15);
        v32 = *((_DWORD *)this + 62);
        v31 = v17;
        v21 = (struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 48LL))(v20, v37);
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandStateIgnored<_GUID,__int64 &,unsigned int,unsigned int>(
          v21,
          (__int64 *)this + 30,
          &v32,
          &v31);
      }
      NextState = Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadNextState(this);
      v13 = v34;
    }
    while ( NextState );
    if ( !v16 )
      goto LABEL_19;
    v14 = *(__m128 **)v33;
  }
  v25 = (struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 48LL))(
                          *((_QWORD *)this + 15),
                          v38);
  if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(v26) )
  {
    v36 = *v25;
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
      v27,
      (void (__cdecl *)())lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::AddDefaultHandReport_(v28, &v36, a5, v17);
  }
  v22 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
          (__int64)this,
          a5,
          (__int64)a4,
          v34,
          v14,
          v18,
          v17);
  if ( v22 < 0 )
  {
    v29 = 350LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v22);
    return (unsigned int)v22;
  }
  else
  {
LABEL_19:
    *v35 = *((_DWORD *)this + 62) == 3;
    return 0LL;
  }
}
