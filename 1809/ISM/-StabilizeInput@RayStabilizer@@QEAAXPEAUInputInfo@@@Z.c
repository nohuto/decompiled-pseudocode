/*
 * XREFs of ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x180102EA8
 * Callers:
 *     ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z @ 0x1801009F0 (-StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1801030F4 (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x1801033C4 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1801038DC (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

void __fastcall RayStabilizer::StabilizeInput(RayStabilizer *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int32 v6; // r14d
  unsigned __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // xmm1_8
  __int128 v28; // [rsp+20h] [rbp-69h] BYREF
  __int64 v29; // [rsp+30h] [rbp-59h]
  __m256i v30; // [rsp+40h] [rbp-49h] BYREF
  __int128 v31; // [rsp+60h] [rbp-29h]
  __int128 v32; // [rsp+70h] [rbp-19h]
  __int128 v33; // [rsp+80h] [rbp-9h]
  __int128 v34; // [rsp+90h] [rbp+7h]
  int v35; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = *(_OWORD *)((char *)a2 + 540);
  v5 = *((_QWORD *)this + 4);
  v6 = 1;
  *(__int64 *)((char *)&v30.m256i_i64[2] + 4) = *(_QWORD *)((char *)a2 + 556);
  v30.m256i_i32[0] = 1;
  *(_OWORD *)((char *)v30.m256i_i64 + 4) = v4;
  if ( v5 && (*((_BYTE *)this + 44) & 1) != 0 )
  {
    RayStabilizer::PerformLowPassFilterStabilization(this, (struct RayStabilizationResult *)&v30);
    v5 = *((_QWORD *)this + 4);
    v6 = v30.m256i_i32[0];
  }
  v9 = *((_QWORD *)this + 2);
  if ( v9 <= v5 + 1 )
  {
    std::deque<RayStabilizationResult>::_Growmap(this);
    v9 = *((_QWORD *)this + 2);
  }
  v10 = ((v9 - 1) & *((_QWORD *)this + 3)) == 0;
  *((_QWORD *)this + 3) &= v9 - 1;
  v11 = *((_QWORD *)this + 3);
  if ( v10 )
    v11 = *((_QWORD *)this + 2);
  v12 = *((_QWORD *)this + 1);
  v13 = v11 - 1;
  v14 = v13 & (*((_QWORD *)this + 2) - 1LL);
  if ( !*(_QWORD *)(v12 + 8 * v14) )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v14) = operator new(0x64uLL);
    v12 = *((_QWORD *)this + 1);
  }
  v15 = *(_QWORD *)(v12 + 8 * v14);
  v16 = *(_OWORD *)&v30.m256i_u64[2];
  v17 = v35;
  *(_OWORD *)v15 = *(_OWORD *)v30.m256i_i8;
  v18 = v31;
  *(_OWORD *)(v15 + 16) = v16;
  v19 = v32;
  *(_OWORD *)(v15 + 32) = v18;
  v20 = v33;
  *(_OWORD *)(v15 + 48) = v19;
  v21 = v34;
  *(_OWORD *)(v15 + 64) = v20;
  *(_OWORD *)(v15 + 80) = v21;
  *(_DWORD *)(v15 + 96) = v17;
  *((_QWORD *)this + 3) = v13;
  v22 = *((_QWORD *)this + 4) + 1LL;
  *((_QWORD *)this + 4) = v22;
  v23 = *((unsigned int *)this + 10);
  if ( v22 > v23 )
  {
    for ( ; v22 < v23; v22 = *((_QWORD *)this + 4) )
    {
      v24 = *((_QWORD *)this + 2);
      if ( v24 <= v22 + 1 )
      {
        std::deque<RayStabilizationResult>::_Growmap(this);
        v24 = *((_QWORD *)this + 2);
      }
      *((_QWORD *)this + 3) &= v24 - 1;
      v25 = (*((_QWORD *)this + 2) - 1LL) & (*((_QWORD *)this + 4) + *((_QWORD *)this + 3));
      v26 = *((_QWORD *)this + 1);
      if ( !*(_QWORD *)(v26 + 8 * v25) )
      {
        *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v25) = operator new(0x64uLL);
        v26 = *((_QWORD *)this + 1);
      }
      **(_DWORD **)(v26 + 8 * v25) = 0;
      ++*((_QWORD *)this + 4);
    }
    while ( v23 < v22 )
    {
      *((_QWORD *)this + 4) = --v22;
      if ( !v22 )
        *((_QWORD *)this + 3) = 0LL;
    }
  }
  if ( !v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      a4);
    JUMPOUT(0x1801030AALL);
  }
  RayStabilizationResult::GetAtStep(&v30, &v28, (unsigned int)(v6 - 1));
  v27 = v29;
  *(_OWORD *)((char *)a2 + 540) = v28;
  *(_QWORD *)((char *)a2 + 556) = v27;
}
