/*
 * XREFs of ?ExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800AFDE0
 * Callers:
 *     ?StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800AFDD0 (-StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::ExecuteWorkItems(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rax
  __int64 *v4; // rbp
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rbp
  volatile signed __int32 *v7; // r14
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_BYTE *)this + 536) || !*((_QWORD *)this + 72) )
      break;
    v3 = (_QWORD *)*((_QWORD *)this + 68);
    if ( v3 )
      v3 = (_QWORD *)*v3;
    v4 = *(__int64 **)(v3[1] + 8 * (*((_QWORD *)this + 71) & (v3[2] - 1LL)));
    v5 = (volatile signed __int32 *)v4[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)v4[1];
    }
    v6 = *v4;
    v7 = *(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 69)
                                                 + 8 * (*((_QWORD *)this + 71) & (*((_QWORD *)this + 70) - 1LL)))
                                     + 8LL);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    if ( (*((_QWORD *)this + 72))-- == 1LL )
      v9 = 0LL;
    else
      v9 = *((_QWORD *)this + 71) + 1LL;
    *((_QWORD *)this + 71) = v9;
    if ( v2 )
      LeaveCriticalSection(v2);
    v10 = *(_QWORD *)(v6 + 72);
    if ( !v10 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800AFFB4LL);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v6);
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
