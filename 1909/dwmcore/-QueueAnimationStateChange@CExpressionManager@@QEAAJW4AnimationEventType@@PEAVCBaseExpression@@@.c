/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800A85A8
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A761C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800A854C (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A8BC4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800AAD90 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  signed int v7; // ebx
  signed int v9; // eax
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  if ( a3[2] <= 0 )
    return 0;
  v4 = a1 + 232;
  LODWORD(v11) = a2;
  *((_QWORD *)&v11 + 1) = a3;
  v5 = *(unsigned int *)(v4 + 24);
  v6 = v5 + 1;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    goto LABEL_9;
  }
  if ( v6 > *(_DWORD *)(v4 + 20) )
  {
    v9 = DynArrayImpl<1>::AddMultipleAndSet(v4, 16LL, a3, &v11);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC3u, 0LL);
LABEL_9:
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x2DCu, 0LL);
      return (unsigned int)v7;
    }
    goto LABEL_5;
  }
  *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v11;
  *(_DWORD *)(v4 + 24) = v6;
LABEL_5:
  (*(void (__fastcall **)(int *))(*(_QWORD *)a3 + 8LL))(a3);
  return 0;
}
