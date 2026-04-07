/*
 * XREFs of ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000C8A0
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18000C3A0 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18009DADC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18000CC48 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::StopAnimations(CAnimationEngine *this)
{
  unsigned int v1; // esi
  int v2; // edi
  __int64 i; // r14
  __int64 v5; // rbx
  int v7; // ebp
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 16) - 1;
  if ( v2 < 0 )
    return v1;
  for ( i = 8LL * v2; ; i -= 8LL )
  {
    v5 = *(_QWORD *)(i + *((_QWORD *)this + 5));
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    if ( !*(_BYTE *)(v5 + 49) )
      goto LABEL_6;
    v7 = 0;
    if ( *(_DWORD *)(v5 + 20) )
      break;
LABEL_16:
    v10 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, v2);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x117u);
      goto LABEL_14;
    }
LABEL_6:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
    if ( --v2 < 0 )
      return v1;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v5 + 32);
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
      v1 = v9;
      if ( v9 < 0 )
        break;
    }
    if ( (unsigned int)++v7 >= *(_DWORD *)(v5 + 20) )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x113u);
LABEL_14:
  CBaseObject::Release((CBaseObject *)v5);
  return v1;
}
