/*
 * XREFs of ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1800F0874
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F0670 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F304C (-TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x180100D80 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::DeliverInputToTarget(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget *a4)
{
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v11; // [rsp+48h] [rbp+10h] BYREF

  if ( a4 && !(*(unsigned __int8 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a4 + 32LL))(a4) )
    MPCSixDofProcessor::TreatTouchpadPressAsInteraction(this, a2);
  v11 = 0;
  MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a3, a4, &v11, 0);
  if ( a4 && !v11 && ((*((_DWORD *)a2 + 131) - 1) & 0xFFFFFFFB) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct LegacyInputInfo *))(*(_QWORD *)a4 + 24LL))(a4, a2);
    if ( v8 == -2147417853 )
    {
      *((_BYTE *)this + 3664) = 0;
    }
    else if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147417828 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x288,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        v9);
      JUMPOUT(0x1800F0953LL);
    }
  }
}
