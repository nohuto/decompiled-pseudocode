/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003983C
 * Callers:
 *     imp_WdfCommonBufferCreate @ 0x1C0032E30 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0032FD0 (imp_WdfCommonBufferCreateWithConfig.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00335F4 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     WPP_IFR_SF_qi @ 0x1C00347B4 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C003487C (WPP_IFR_SF_qii.c)
 */

__int64 __fastcall FxCommonBuffer::AllocateCommonBuffer(FxCommonBuffer *this, unsigned __int64 Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 result; // rax
  unsigned int v6; // r8d
  unsigned int v7; // esi
  __int64 *p_m_Alignment; // r15
  unsigned __int64 m_Alignment; // rdx
  _LARGE_INTEGER *p_m_BufferRawLA; // r12
  char *m_BufferRawVA; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 _a3; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int16 v16; // ax
  const void *_a2; // rdi
  unsigned __int64 v18; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v20; // rdi
  __int64 v21; // rax
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
      v18 = -1LL;
      if ( m_Alignment + Length >= Length )
        v18 = m_Alignment + Length;
      v7 = m_Alignment + Length < Length ? 0xC0000095 : 0;
      this->m_RawLength = v18;
      if ( m_Alignment + Length < Length )
      {
        m_ObjectSize = this->m_ObjectSize;
        v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v20 = 0LL;
        WPP_IFR_SF_qii(m_Globals, 2u, v6, 0xAu, WPP_FxCommonBuffer_cpp_Traceguids, v20, Length, *p_m_Alignment);
LABEL_18:
        FxVerifierDbgBreakPoint(m_Globals);
        return v7;
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
      _a3 = p_m_BufferRawLA->QuadPart;
      v14 = ~v12 & (p_m_BufferRawLA->QuadPart + v12);
      this->m_BufferAlignedVA = (void *)(~v12 & (unsigned __int64)&m_BufferRawVA[v12]);
      this->m_BufferAlignedLA.QuadPart = v14;
      if ( v12 <= 0xFFF )
        return v7;
      if ( v14 >= _a3 )
      {
        v15 = v14 - _a3;
        v21 = 0xFFFFFFFFLL;
        if ( v15 <= 0xFFFFFFFF )
          v21 = (unsigned int)v15;
        v7 = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v15 <= 0xFFFFFFFF )
        {
          this->m_BufferAlignedVA = &m_BufferRawVA[v21];
          return v7;
        }
        v22 = this->m_ObjectSize;
        v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v22 )
          v23 = 0LL;
        WPP_IFR_SF_qi(
          m_Globals,
          v12,
          (unsigned int)m_BufferRawVA,
          0xCu,
          WPP_FxCommonBuffer_cpp_Traceguids,
          v23,
          v14 - _a3);
        goto LABEL_18;
      }
      v16 = this->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v16 )
        _a2 = 0LL;
      WPP_IFR_SF_qii(m_Globals, 2u, (unsigned int)m_BufferRawVA, 0xBu, WPP_FxCommonBuffer_cpp_Traceguids, _a2, _a3, v14);
      FxVerifierDbgBreakPoint(m_Globals);
      return v14 < _a3 ? 0xC0000095 : 0;
    }
    else
    {
      this->m_Length = 0LL;
      result = 3221225626LL;
      this->m_RawLength = 0LL;
      this->m_BufferAlignedVA = 0LL;
      this->m_BufferAlignedLA.QuadPart = 0LL;
    }
  }
  return result;
}
