/*
 * XREFs of ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x180240A30
 * Callers:
 *     ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z @ 0x180244738 (--0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180240774 (--$_Emplace_reallocate@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802485CC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::AddExclusiveModeProxy(
        CHolographicManager *this,
        struct CHolographicExclusiveMode *a2)
{
  struct CHolographicExclusiveMode **i; // rax
  __int64 *v5; // rdx
  CHolographicInteropTaskQueue *v6; // rcx
  CGdiSpriteBitmap *v7; // [rsp+50h] [rbp+8h] BYREF

  for ( i = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 10);
        i != *((struct CHolographicExclusiveMode ***)this + 11) && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == *((struct CHolographicExclusiveMode ***)this + 11) )
  {
    v7 = a2;
    if ( a2 )
      CMILCOMBase::InternalAddRef(a2);
    v5 = (__int64 *)*((_QWORD *)this + 11);
    if ( *((__int64 **)this + 12) == v5 )
    {
      std::vector<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>(
        (__int64)this + 80,
        v5,
        (__int64 *)&v7);
      if ( v7 )
        CGdiSpriteBitmap::Release(v7);
    }
    else
    {
      *v5 = (__int64)a2;
      *((_QWORD *)this + 11) += 8LL;
    }
    v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v6 )
    {
      if ( *((_BYTE *)this + 240) )
        CHolographicInteropTaskQueue::PostMessageW(
          v6,
          0x1Du,
          (struct IUnknown *)(((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
