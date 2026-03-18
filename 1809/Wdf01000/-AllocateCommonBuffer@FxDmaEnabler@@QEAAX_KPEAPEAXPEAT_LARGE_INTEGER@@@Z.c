/*
 * XREFs of ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00335F4
 * Callers:
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003983C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qi @ 0x1C00347B4 (WPP_IFR_SF_qi.c)
 */

void __fastcall FxDmaEnabler::AllocateCommonBuffer(
        FxDmaEnabler *this,
        unsigned __int64 Length,
        void **BufferVA,
        _LARGE_INTEGER *BufferPA)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int v5; // r10d
  _LARGE_INTEGER *v6; // r11
  unsigned __int16 m_ObjectSize; // ax
  const void *globals; // rcx

  m_Globals = this->m_Globals;
  v5 = -1;
  v6 = BufferPA;
  *BufferVA = 0LL;
  if ( Length <= 0xFFFFFFFF )
    v5 = Length;
  BufferPA->QuadPart = 0LL;
  if ( Length <= 0xFFFFFFFF )
  {
    LOBYTE(BufferPA) = 1;
    *BufferVA = this->m_SimplexAdapterInfo.AdapterObject->DmaOperations->AllocateCommonBuffer(
                  this->m_SimplexAdapterInfo.AdapterObject,
                  v5,
                  v6,
                  BufferPA);
  }
  else
  {
    m_ObjectSize = this->m_ObjectSize;
    globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      globals = 0LL;
    WPP_IFR_SF_qi(m_Globals, Length, 0, 0x1Cu, WPP_FxDmaEnabler_cpp_Traceguids, globals, Length);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
