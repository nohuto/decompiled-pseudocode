/*
 * XREFs of ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C0055DDC
 * Callers:
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x1C0055DA0 (-Dispose@FxTimer@@UEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0055F40 (-Stop@FxTimer@@QEAAEE@Z.c)
 */

void __fastcall FxTimer::FlushAndRundown(FxTimer *this)
{
  const void *v2; // rdx
  bool v3; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxObject *m_Object; // rcx
  _KTHREAD *volatile m_CallbackThread; // [rsp+30h] [rbp-18h]

  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    m_CallbackThread = this->m_CallbackThread;
    v2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v3 = this->m_ObjectSize == 0;
    m_Globals = this->m_Globals;
    if ( v3 )
      v2 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxTimer_cpp_Traceguids, v2, m_CallbackThread);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxTimer::Stop(this, 1u);
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 547, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  this->Release(this, this, 553, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
}
