/*
 * XREFs of ?ForceDDAFullRender@CRenderTargetManager@@QEAAXXZ @ 0x180152918
 * Callers:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180077360 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ForceDDAFullRender(CRenderTargetManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 v4; // rsi

  if ( *((_DWORD *)this + 24) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 76LL) )
      {
        v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
      }
    }
  }
}
