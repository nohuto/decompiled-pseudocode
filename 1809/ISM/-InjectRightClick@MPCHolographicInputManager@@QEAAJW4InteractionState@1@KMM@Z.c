/*
 * XREFs of ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800419C0
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F1820 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9C1C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x1800EE678 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectRightClick(__int64 a1, int a2, int a3, const char *a4, float a5)
{
  float v5; // xmm3_4
  int *v9; // rdi
  void *v10; // rsi
  const char *v11; // r9
  void *v12; // rbx
  _DWORD *v13; // rcx
  _DWORD *v14; // rbx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int16 v21; // ax
  int v22[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-D0h]
  __int64 v24; // [rsp+40h] [rbp-C8h]
  _DWORD v25[130]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+250h] [rbp+148h]
  int v27; // [rsp+260h] [rbp+158h]
  int v28; // [rsp+264h] [rbp+15Ch]
  char v29; // [rsp+680h] [rbp+578h]
  char v30; // [rsp+682h] [rbp+57Ah]
  wil::details::in1diag3 *retaddr; // [rsp+6E0h] [rbp+5D8h]

  if ( !*(_BYTE *)(a1 + 1872) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x318,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v9 = (int *)(a1 + 1904);
  if ( !*(_QWORD *)(a1 + 1904) )
  {
    *(_QWORD *)v22 = operator new(0x3D8uLL);
    v10 = *(void **)v22;
    memset_0(*(void **)v22, 0, 0x3D8uLL);
    *(_DWORD *)(*(_QWORD *)v22 + 8LL) = 984;
    v12 = v10;
    if ( v9 != v22 )
    {
      v13 = *(_DWORD **)v9;
      v12 = 0LL;
      *(_QWORD *)v9 = v10;
      if ( !v13 )
      {
LABEL_8:
        if ( !*(_QWORD *)v9 )
        {
          wil::details::in1diag3::_FailFast_NullAlloc(
            retaddr,
            (void *)0x31E,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            v11);
          JUMPOUT(0x180041C2DLL);
        }
        v14 = *(_DWORD **)v9;
        *v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1824) + 32LL))(*(_QWORD *)(a1 + 1824));
        *(_DWORD *)(*(_QWORD *)v9 + 4LL) = 2;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 1824) + 40LL))(
                *(_QWORD *)(a1 + 1824),
                *(_QWORD *)v9,
                0LL);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x323,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            (const char *)(unsigned int)v15);
          __debugbreak();
        }
        goto LABEL_10;
      }
      operator delete(v13, (const struct std::nothrow_t *)0x3D8);
    }
    if ( v12 )
      operator delete(v12, (const struct std::nothrow_t *)0x3D8);
    goto LABEL_8;
  }
LABEL_10:
  memset_0(v25, 0, 0x640uLL);
  v16 = *(_DWORD **)v9;
  v25[6] = 1600;
  v25[124] = a3;
  v25[0] = v16[1];
  v25[1] = *v16;
  *(_QWORD *)&v22[2] = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v26 = 0u;
  *(_DWORD *)((char *)&v26 + 2) = 1;
  v29 = 1;
  v30 = 1;
  v28 = 0;
  HIDWORD(v26) = (int)v5;
  v27 = (int)a5;
  v17 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v25);
  v18 = v17;
  if ( a2 == 1 )
  {
    if ( v17 < 0 )
    {
      v19 = 823LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v17);
      return v18;
    }
    v21 = 4;
  }
  else
  {
    if ( v17 < 0 )
    {
      v19 = 831LL;
      goto LABEL_13;
    }
    v21 = 8;
  }
  WORD2(v26) = v21;
  return MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v25);
}
