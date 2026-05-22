/*
 * XREFs of ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18003CCD4 (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z @ 0x1800F3C58 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@PEBG@Z.c)
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x1800F62D0 (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 *     ?ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCTarget@@0@Z @ 0x1800F7204 (-ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCTarget@@0@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180100964 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x180100CA0 (-OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x180100D80 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct IMPCTarget *v4; // rbx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  int v10; // eax
  unsigned int **Instance; // rax
  struct IMPCTarget *v12; // rcx
  MPCHolographicInputManager *v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  struct IMPCTarget *v17; // rcx
  int v18; // eax
  const char *v19; // r9
  unsigned int v21; // edx
  unsigned int *v22; // rax
  unsigned int v23; // r8d
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  bool v26; // [rsp+70h] [rbp+30h] BYREF
  struct IMPCTarget *v27; // [rsp+78h] [rbp+38h] BYREF
  struct IMPCTarget *v28; // [rsp+80h] [rbp+40h]

  v4 = *(struct IMPCTarget **)(this + 3704);
  v28 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 8LL))(v4);
  v27 = 0LL;
  v26 = 0;
  v5 = *((_DWORD *)a2 + 130);
  if ( v5 == 9 )
  {
    v21 = *((_DWORD *)a2 + 300);
    goto LABEL_39;
  }
  if ( v5 == 10 )
  {
    v21 = 0;
LABEL_39:
    v22 = *(unsigned int **)(this + 24);
    v23 = 0x40000;
    if ( v5 != 10 )
      v23 = v22[1];
    MPCManager::SendHomeGesture(MPCManager::s_instance, *v22, v23, *((_QWORD *)a2 + 2), v21);
    goto LABEL_42;
  }
  MPCProcessor::CacheHandInput((MPCProcessor *)(this - 24), a2, &v26);
  *(_BYTE *)(this + 3753) = *((_DWORD *)a2 + 130) == 7;
  if ( v26 )
  {
LABEL_42:
    v15 = 0;
    goto LABEL_43;
  }
  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    v10 = *((_DWORD *)a2 + 130);
    if ( v10 == 2
      || *(_QWORD *)(this + 3696)
      || v10 == 7
      || (unsigned int)(v10 - 3) <= 3
      && (Instance = (unsigned int **)MPCConstantManager::GetInstance(v7, v6, v8, v9),
          *((float *)a2 + 304) >= MPCConstantManager::GetConstant<float>(
                                    Instance,
                                    (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
                                    L"HandGuidanceScoreForPrimary").m128_f32[0]) )
    {
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    }
  }
  v12 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = MPCHolographicInputManager::GetInstance();
  v14 = MPCHolographicInputManager::Process3DInput(
          v13,
          a2,
          (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
          &v27);
  v15 = v14;
  if ( v14 >= 0 )
  {
    MPCProcessor::ProcessSourceDetectedAndLostForAllHands((MPCProcessor *)(this - 24), v4, v27);
    v16 = *((_DWORD *)a2 + 130);
    if ( v16 == 5 )
    {
      MPCInputProviderBase::ProcessSourceDetectedAndLost(
        (MPCInputProviderBase *)(this - 24),
        0LL,
        v27,
        0LL,
        *((_DWORD *)a2 + 300));
    }
    else
    {
      v17 = v27;
      if ( v16 == 4 )
      {
        if ( v27 )
        {
          (*(void (__fastcall **)(struct IMPCTarget *, struct InputInfo *))(*(_QWORD *)v27 + 24LL))(v27, a2);
          MPCInputProviderBase::OnSuccessfulDetach((MPCInputProviderBase *)(this - 24), v4, *((_DWORD *)a2 + 300));
          v17 = v27;
        }
        if ( !*(_QWORD *)(this + 3744) )
          *(_BYTE *)(this + 3640) = 0;
        goto LABEL_36;
      }
      if ( !v27 || !*(_BYTE *)(this + 3640) && v16 != 7 )
      {
LABEL_36:
        v15 = 0;
        goto LABEL_44;
      }
      v18 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *))(*(_QWORD *)v27 + 24LL))(v27, a2);
      if ( v18 == -2147417853 )
      {
        *(_BYTE *)(this + 3640) = 0;
      }
      else
      {
        if ( (int)(v18 + 0x80000000) >= 0 && v18 != -2147417828 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xA0,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
            v19);
          JUMPOUT(0x1800F62A7LL);
        }
        *(_BYTE *)(this + 3640) = 1;
      }
    }
    v17 = v27;
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
    (const char *)(unsigned int)v14);
LABEL_43:
  v17 = v27;
LABEL_44:
  if ( v17 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v4 + 16LL))(v4);
  return v15;
}
