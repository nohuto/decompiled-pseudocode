/*
 * XREFs of ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C0040C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qddq @ 0x1C004159C (WPP_IFR_SF_qddq.c)
 */

__int64 __fastcall FxWmiInstanceExternal::QueryInstance(
        FxWmiInstanceExternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  char *v4; // rbx
  unsigned int _a4; // r10d
  unsigned __int16 m_ObjectSize; // r9
  unsigned int v10; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rax
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, void *, unsigned int *); // rax
  unsigned __int16 v14; // r8
  const void *v15; // rbp
  unsigned __int8 *v16; // r12
  unsigned int _a3; // r15d
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // dl
  unsigned __int16 v20; // r9
  int v21; // eax
  FxWmiProvider *m_Provider; // rdx
  unsigned int m_MinInstanceBufferSize; // r8d
  unsigned __int16 v24; // ax
  const void *v25; // rdx
  int (__fastcall *v26)(WDFWMIINSTANCE__ *, unsigned int, unsigned int, unsigned int, void *, unsigned int *); // rax
  _FX_DRIVER_GLOBALS *v27; // rcx
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  unsigned __int8 dummy[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( this->m_UseContextForQuery )
  {
    *BufferUsed = this->m_ContextLength;
    _a4 = this->m_ContextLength;
    m_ObjectSize = this->m_ObjectSize;
    if ( OutBufferSize >= _a4 )
    {
      v10 = 0;
      if ( m_ObjectSize )
        v4 = (char *)this + m_ObjectSize;
      memmove(OutBuffer, v4 + 48, this->m_ContextLength);
    }
    else
    {
      v10 = -1073741789;
      m_Globals = this->m_Globals;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qddd(
        m_Globals,
        OutBufferSize,
        0x12u,
        0x12u,
        WPP_FxWmiInstance_cpp_Traceguids,
        _a2,
        OutBufferSize,
        _a4,
        -1073741789);
    }
    return v10;
  }
  m_Method = this->m_QueryInstanceCallback.m_Method;
  v14 = this->m_ObjectSize;
  v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_Method )
  {
    v26 = this->m_ExecuteMethodCallback.m_Method;
    v27 = this->m_Globals;
    if ( !v14 )
      v15 = 0LL;
    WPP_IFR_SF_qq(v27, 2u, 0xCu, 0x17u, WPP_FxWmiInstance_cpp_Traceguids, v15, v26);
    v10 = 0;
    goto LABEL_37;
  }
  v16 = dummy;
  _a3 = 1;
  v18 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( OutBufferSize )
  {
    _a3 = OutBufferSize;
    v16 = (unsigned __int8 *)OutBuffer;
  }
  if ( !v14 )
    v18 = 0LL;
  v10 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, unsigned __int8 *))m_Method)(v18, _a3, v16);
  if ( v10 == 259 )
  {
    if ( !this->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiInstance_cpp_Traceguids, v15, 0x103u);
LABEL_18:
    FxVerifierDbgBreakPoint(this->m_Globals);
    v10 = -1073741823;
LABEL_37:
    *BufferUsed = 0;
    return v10;
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    if ( v10 == -1073741789 )
    {
      m_Provider = this->m_Provider;
      m_MinInstanceBufferSize = m_Provider->m_MinInstanceBufferSize;
      if ( m_MinInstanceBufferSize )
      {
        v24 = m_Provider->m_ObjectSize;
        v25 = (const void *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v24 )
          v25 = 0LL;
        if ( !this->m_ObjectSize )
          v15 = 0LL;
        WPP_IFR_SF_qddq(
          this->m_Globals,
          (unsigned __int8)v25,
          m_MinInstanceBufferSize,
          v20,
          _a1,
          v15,
          -1073741789,
          m_MinInstanceBufferSize,
          v25);
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiInstance_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  else
  {
    v21 = *BufferUsed;
    if ( *BufferUsed > _a3 )
    {
      if ( !this->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qddd(this->m_Globals, v19, 0xCu, 0x14u, WPP_FxWmiInstance_cpp_Traceguids, v15, _a3, v21, v10);
      goto LABEL_18;
    }
    if ( v16 == dummy && v21 )
      return (unsigned int)-1073741789;
  }
  return v10;
}
