/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C0038C1C
 * Callers:
 *     imp_WdfCommonBufferCreate @ 0x1C0032260 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0032400 (imp_WdfCommonBufferCreateWithConfig.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00329E4 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     WPP_IFR_SF_qi @ 0x1C0033B94 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C0033C5C (WPP_IFR_SF_qii.c)
 */

__int64 __fastcall FxCommonBuffer::AllocateCommonBuffer(FxCommonBuffer *this, unsigned __int64 Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  unsigned int v6; // r8d
  unsigned int v7; // esi
  __int64 *p_m_Alignment; // r14
  unsigned __int64 m_Alignment; // rdx
  _LARGE_INTEGER *p_m_BufferRawLA; // r15
  char *m_BufferRawVA; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 QuadPart; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rdi
  unsigned __int16 v20; // ax
  const void *v21; // rdi
  unsigned __int16 v22; // ax
  const void *v23; // rdi

  m_Globals = this->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  v7 = result;
  if ( (int)result >= 0 )
  {
    p_m_Alignment = (__int64 *)&this->m_Alignment;
    this->m_Length = Length;
    m_Alignment = this->m_Alignment;
    if ( m_Alignment <= 0xFFF && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, m_Alignment, 0xBu) )
    {
      this->m_RawLength = Length;
    }
    else
    {
      v17 = -1LL;
      if ( m_Alignment + Length >= Length )
        v17 = m_Alignment + Length;
      v7 = m_Alignment + Length < Length ? 0xC0000095 : 0;
      this->m_RawLength = v17;
      if ( m_Alignment + Length < Length )
      {
        m_ObjectSize = this->m_ObjectSize;
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qii(m_Globals, 2u, v6, 0xAu, WPP_FxCommonBuffer_cpp_Traceguids, _a2, Length, *p_m_Alignment);
        goto LABEL_23;
      }
    }
    p_m_BufferRawLA = &this->m_BufferRawLA;
    FxDmaEnabler::AllocateCommonBuffer(
      this->m_DmaEnabler,
      this->m_RawLength,
      &this->m_BufferRawVA,
      &this->m_BufferRawLA);
    m_BufferRawVA = (char *)this->m_BufferRawVA;
    if ( m_BufferRawVA )
    {
      v12 = *p_m_Alignment;
      QuadPart = p_m_BufferRawLA->QuadPart;
      v14 = ~*p_m_Alignment;
      v15 = v14 & (p_m_BufferRawLA->QuadPart + *p_m_Alignment);
      this->m_BufferAlignedVA = (void *)(v14 & (unsigned __int64)&m_BufferRawVA[*p_m_Alignment]);
      this->m_BufferAlignedLA.QuadPart = v15;
      if ( v12 <= 0xFFF )
        return v7;
      if ( v15 < QuadPart )
      {
        v22 = this->m_ObjectSize;
        v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v22 )
          v23 = 0LL;
        WPP_IFR_SF_qii(m_Globals, 2u, v15, 0xBu, WPP_FxCommonBuffer_cpp_Traceguids, v23, QuadPart, v15);
      }
      else
      {
        v16 = v15 - QuadPart;
        if ( v16 <= 0xFFFFFFFF )
        {
          v7 = 0;
          this->m_BufferAlignedVA = &m_BufferRawVA[(unsigned int)v16];
          return v7;
        }
        v20 = this->m_ObjectSize;
        v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v20 )
          v21 = 0LL;
        WPP_IFR_SF_qi(m_Globals, v12, v16, 0xCu, WPP_FxCommonBuffer_cpp_Traceguids, v21, v16);
      }
      v7 = -1073741675;
LABEL_23:
      FxVerifierDbgBreakPoint(m_Globals);
      return v7;
    }
    this->m_Length = 0LL;
    result = 3221225626LL;
    this->m_RawLength = 0LL;
    this->m_BufferAlignedVA = 0LL;
    this->m_BufferAlignedLA.QuadPart = 0LL;
  }
  return result;
}
