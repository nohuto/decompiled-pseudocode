/*
 * XREFs of ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x18000AD64
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180006508 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180006C80 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180007EE8 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x18000AFE8 (-CreateInputSink@MPCFocusTarget@@IEAAXXZ.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18000B6D4 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCFocusTarget::MPCFocusTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  char v10; // bp
  const char *v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rcx
  char v14; // di
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  LODWORD(v17) = 0;
  MPCTarget::MPCTarget(a1, a3, a5, a6, -2LL);
  *(_QWORD *)a1 = &MPCFocusTarget::`vftable'{for `IMPCTarget'};
  *(_QWORD *)(a1 + 8) = &MPCFocusTarget::`vftable'{for `RefCountedObject'};
  *(_QWORD *)(a1 + 72) = &MPCFocusTarget::`vftable';
  *(_QWORD *)(a1 + 80) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_BYTE *)(a1 + 96) = a7;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcfocustarget.cpp",
      v11);
    JUMPOUT(0x18000AED8LL);
  }
  v12 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( !*(_BYTE *)(a1 + 48) )
  {
    v13 = v17;
    goto LABEL_18;
  }
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 80);
    if ( v13 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v13)(v13, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v17);
      v13 = v17;
    }
    else
    {
      v17 = 0LL;
    }
    v10 = 1;
    if ( v13 )
      goto LABEL_16;
LABEL_18:
    v14 = 0;
    goto LABEL_19;
  }
  v13 = v17;
LABEL_16:
  v14 = 1;
LABEL_19:
  if ( (v10 & 1) != 0 && v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    MPCFocusTarget::CreateInputSink((MPCFocusTarget *)a1);
  return a1;
}
