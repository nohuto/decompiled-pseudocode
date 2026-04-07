/*
 * XREFs of ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800118F4
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x1800113E4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A1F18 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x1800098FC (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::StopAnimations(CAnimationEngine *this)
{
  unsigned int v1; // ebp
  signed int v2; // edi
  __int64 i; // r15
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rsi
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  void *v12; // [rsp+28h] [rbp-30h]

  v1 = 0;
  v2 = *((_DWORD *)this + 16) - 1;
  if ( v2 < 0 )
    return v1;
  for ( i = 8LL * v2; ; i -= 8LL )
  {
    v5 = *(_QWORD *)(i + *((_QWORD *)this + 5));
    v6 = (volatile signed __int32 *)(v5 + 8);
    if ( v5 )
      _InterlockedIncrement(v6);
    if ( !*(_BYTE *)(v5 + 49) )
      goto LABEL_6;
    v8 = 0;
    if ( *(_DWORD *)(v5 + 20) )
      break;
LABEL_17:
    v11 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, v2);
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x117u, v12);
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
    v9 = *(_QWORD *)(v5 + 32);
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 120LL))(v9);
      v1 = v10;
      if ( v10 < 0 )
        break;
    }
    if ( (unsigned int)++v8 >= *(_DWORD *)(v5 + 20) )
      goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x113u, v12);
LABEL_14:
  if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  return v1;
}
