/*
 * XREFs of ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800CE230
 * Callers:
 *     ??_EEdgyProcessor@@UEAAPEAXI@Z @ 0x1800CA818 (--_EEdgyProcessor@@UEAAPEAXI@Z.c)
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CA970 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CD2A0 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800CD630 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 *     ?StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1800CE1C0 (-StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall EdgyImpl::Reset(EdgyImpl *this)
{
  void *v1; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    std::wstring::~wstring(*((_QWORD *)this + 1));
    operator delete(v1, (const struct std::nothrow_t *)0x28);
  }
  *((_QWORD *)this + 1) = 0LL;
  v3 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    v4 = (_QWORD *)*v3;
    if ( *v3 )
    {
      v5 = (_QWORD *)v3[1];
      if ( v4 != v5 )
      {
        do
        {
          std::wstring::~wstring((__int64)v4);
          v4 += 5;
        }
        while ( v4 != v5 );
        v4 = (_QWORD *)*v3;
      }
      v6 = 40 * ((v3[2] - (_QWORD)v4) / 40LL);
      if ( v6 >= 0x1000 )
      {
        v7 = *(v4 - 1);
        v6 += 39LL;
        if ( (unsigned __int64)v4 - v7 - 8 > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v7, v6);
          JUMPOUT(0x1800CE32CLL);
        }
        v4 = (_QWORD *)*(v4 - 1);
      }
      operator delete(v4, (const struct std::nothrow_t *)v6);
      *v3 = 0LL;
      v3[1] = 0LL;
      v3[2] = 0LL;
    }
    operator delete(v3, (const struct std::nothrow_t *)0x18);
    *(_QWORD *)this = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
