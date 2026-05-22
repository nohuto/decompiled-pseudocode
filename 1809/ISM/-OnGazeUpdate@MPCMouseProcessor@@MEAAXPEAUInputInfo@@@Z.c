/*
 * XREFs of ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z @ 0x1800FD850
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180042018 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCMouseProcessor::OnGazeUpdate(MPCMouseProcessor *this, struct InputInfo *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  MPCHolographicInputManager *Instance; // rax
  __int64 v10; // r8
  const char *v11; // r9
  struct MPCHolographicInputManager *v12; // rax
  const char *v13; // r9
  int v14; // eax
  __m256i v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *((_BYTE *)this + 4880) = 1;
  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v4 = *(_OWORD *)((char *)this + 5464);
    v5 = *(_OWORD *)((char *)this + 5480);
    *((_QWORD *)this + 618) = *((_QWORD *)a2 + 2);
    v6 = *((_DWORD *)this + 1380);
    *(_OWORD *)&v15.m256i_u64[2] = v5;
    v18 = v6;
    *(_QWORD *)&v5 = *((_QWORD *)this + 689);
    *(_OWORD *)v15.m256i_i8 = v4;
    v7 = *(_OWORD *)((char *)this + 5496);
    v17 = v5;
    LODWORD(v5) = *((_DWORD *)this + 1372);
    v16 = v7;
    v8 = *(_OWORD *)((char *)this + 5468);
    v15.m256i_i32[6] = v5;
    *(_OWORD *)((char *)v15.m256i_i64 + 4) = v8;
    v15.m256i_i32[5] = *((_DWORD *)this + 1371);
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::TransformRayToHeadFromWorld(
      Instance,
      (struct TargetingRay *)((char *)v15.m256i_i64 + 4),
      v10,
      v11);
    v12 = MPCHolographicInputManager::GetInstance();
    if ( !*((_BYTE *)v12 + 1872) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
        v13);
      __debugbreak();
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, __m256i *, char *))(**((_QWORD **)v12 + 236) + 40LL))(
            *((_QWORD *)v12 + 236),
            &v15,
            (char *)this + 5528);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x370,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v14);
      JUMPOUT(0x1800FD97FLL);
    }
  }
}
