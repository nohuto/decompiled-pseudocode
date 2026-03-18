/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18005388C
 * Callers:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180053830 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800539BC (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800545C0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // ebx
  int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( a3[2] > 0 )
  {
    v4 = a1 + 232;
    LODWORD(v10) = a2;
    *((_QWORD *)&v10 + 1) = a3;
    v5 = *(unsigned int *)(v4 + 24);
    v6 = v5 + 1;
    v7 = (int)v5 + 1 < (unsigned int)v5 ? 0x80070216 : 0;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v7, 0xB5u);
    }
    else if ( v6 > *(_DWORD *)(v4 + 20) )
    {
      v9 = DynArrayImpl<1>::AddMultipleAndSet(v4, 16LL, a3, &v10);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v10;
      *(_DWORD *)(v4 + 24) = v6;
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v7, 0x323u);
      return (unsigned int)v7;
    }
    (*(void (__fastcall **)(int *))(*(_QWORD *)a3 + 8LL))(a3);
  }
  return 0;
}
