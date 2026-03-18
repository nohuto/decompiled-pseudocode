/*
 * XREFs of ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801A98A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BD68 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180053830 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x1801A89C8 (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x1801A90E8 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBindingBroken(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 StopValue; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+40h] [rbp-21h]
  _BYTE v16[16]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v17[64]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v18; // [rsp+98h] [rbp+37h]
  int v19; // [rsp+A0h] [rbp+3Fh]
  char v20; // [rsp+A4h] [rbp+43h]

  v3 = 0;
  if ( (*((_BYTE *)this + 208) & 2) != 0 )
  {
    v6 = CBaseExpression::NotifyAnimationDisconnected(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x212u);
    }
    else if ( *((_DWORD *)a3 + 2) )
    {
      memset_0(v17, 0, sizeof(v17));
      v18 = 0LL;
      v19 = 18;
      v20 = 0;
      StopValue = CNaturalAnimation::GetStopValue((__int64)this, (__int64)v16);
      v9 = *(_QWORD *)StopValue;
      LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
      v14 = v9;
      v15 = StopValue;
      CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, &v14, (__int64)v17);
      v11 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)v17, v10);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x218u);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  return v3;
}
