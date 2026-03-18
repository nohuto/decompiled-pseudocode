/*
 * XREFs of ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C004B038
 * Callers:
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x1C004B4F0 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 */

__int64 __fastcall FxRequest::CompleteWithPriority(
        FxRequest *this,
        unsigned int Status,
        __int64 PriorityBoost,
        unsigned __int16 a4)
{
  char v4; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r10

  v4 = PriorityBoost;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqqd(
      m_Globals,
      5u,
      0x10u,
      0xCu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      Status);
  }
  this->m_PriorityBoost = v4;
  return FxRequest::CompleteInternal(this, (_FX_DRIVER_GLOBALS *)Status, PriorityBoost, a4);
}
