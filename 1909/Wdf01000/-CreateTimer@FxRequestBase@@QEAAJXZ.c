/*
 * XREFs of ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0055030
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00019F0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestAllocateTimer @ 0x1C004B460 (imp_WdfRequestAllocateTimer.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C001410C (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C0054F3C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxRequestBase::CreateTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxRequestTimer *v3; // rax
  FxRequestTimer *v4; // rbx
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( !this->m_Timer )
  {
    v3 = (FxRequestTimer *)FxPoolAllocator(
                             m_Globals,
                             &m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             0x98uLL,
                             m_Globals->Tag,
                             retaddr);
    v4 = v3;
    if ( v3 )
      memset(v3, 0, sizeof(FxRequestTimer));
    else
      v4 = 0LL;
    if ( !v4 )
      return 3221225626LL;
    v7 = MxTimer::Initialize(&v4->Timer, this, FxRequestBase::_TimerDPC, 0);
    if ( v7 < 0 )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x13u, WPP_FxRequestBase_cpp_Traceguids, this);
      FxRequestTimer::`scalar deleting destructor'(v4, v8);
      return (unsigned int)v7;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Timer, (signed __int64)v4, 0LL) )
      FxRequestTimer::`scalar deleting destructor'(v4, v6);
  }
  return 0LL;
}
