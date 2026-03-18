/*
 * XREFs of ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C000CD80
 * Callers:
 *     imp_WdfSpinLockCreate @ 0x1C000CC80 (imp_WdfSpinLockCreate.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000CE04 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C001B300 (memset.c)
 */

void __fastcall FxSpinLock::FxSpinLock(
        FxSpinLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ExtraSize)
{
  FxSpinLock *v4; // rcx
  unsigned __int16 m_ObjectSize; // di
  __int64 p_m_Globals; // rdx
  __int64 p_m_Type; // rcx

  FxObject::FxObject(this, 0x1024u, ((ExtraSize + 15) & 0xFFF0) + 128, FxDriverGlobals);
  this->__vftable = (FxSpinLock_vtbl *)FxSpinLock::`vftable';
  v4 = 0LL;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  m_ObjectSize = this->m_ObjectSize;
  *(_WORD *)&this->m_Irql = 0;
  if ( m_ObjectSize != 128 )
    v4 = this + 1;
  if ( v4 )
  {
    memset(v4, 0, 0x100uLL);
    p_m_Globals = 16LL;
    p_m_Type = 8LL;
    if ( m_ObjectSize != 128 )
    {
      p_m_Globals = (__int64)&this[1].m_Globals;
      p_m_Type = (__int64)&this[1].m_Type;
    }
    *(_QWORD *)p_m_Type = p_m_Globals;
  }
}
