/*
 * XREFs of ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z @ 0x18013B460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180080EF0 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180083B0C (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D0D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCMouseProcessor::OnGazeUpdate(MPCMouseProcessor *this, struct InputInfo *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v15; // eax
  _OWORD v16[2]; // [rsp+20h] [rbp-60h] BYREF
  __m256i v17; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  *((_BYTE *)this + 6336) = 0;
  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v4 = *((_OWORD *)this + 404);
    v5 = *((_OWORD *)this + 405);
    *((_QWORD *)this + 800) = *((_QWORD *)a2 + 2);
    v16[0] = v4;
    v6 = *((_OWORD *)this + 406);
    v16[1] = v5;
    v7 = *((_OWORD *)this + 407);
    *(_OWORD *)v17.m256i_i8 = v6;
    v8 = *(_OWORD *)((char *)this + 6508);
    *(_OWORD *)&v17.m256i_u64[2] = v7;
    LODWORD(v7) = *((_DWORD *)this + 1632);
    *(_OWORD *)((char *)&v17.m256i_u64[1] + 4) = v8;
    v17.m256i_i32[7] = *((_DWORD *)this + 1631);
    v18 = v7;
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::TransformRayToHeadFromWorld(
      Instance,
      (struct TargetingRay *)((char *)&v17.m256i_u64[1] + 4));
    v10 = MPCHolographicInputManager::GetInstance();
    PostProcessor = MPCHolographicInputManager::GetPostProcessor(v10, v11, v12, v13);
    v15 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _OWORD *, char *))(*(_QWORD *)PostProcessor + 40LL))(
            PostProcessor,
            v16,
            (char *)this + 6536);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        896LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
  }
}
