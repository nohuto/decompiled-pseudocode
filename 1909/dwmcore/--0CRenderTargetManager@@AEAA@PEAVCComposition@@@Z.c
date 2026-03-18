/*
 * XREFs of ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x1800E2A98
 * Callers:
 *     ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E2A2C (-Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A560C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::CRenderTargetManager(
        CRenderTargetManager *this,
        struct CComposition *a2,
        __int64 a3,
        __int64 a4)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CRenderTargetManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 24, 0LL, 0, a4, 8);
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 19) = 1;
  return this;
}
