/*
 * XREFs of ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x18020A71C
 * Callers:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x18020EDD0 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800785A0 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800785C4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x18020AE08 (-DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicViewer(RTL_SRWLOCK *this, struct CHolographicViewer *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  bool v5; // di
  CompositorTracing *v6; // rcx
  __int64 v7; // rcx
  unsigned int Ptr; // eax
  unsigned int v9; // edx
  int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  CHolographicInteropTaskQueue *v13; // rcx
  struct IUnknown *v14; // r8
  CMILCOMBase *v16; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v17[4]; // [rsp+68h] [rbp-30h]

  v16 = a2;
  v3 = *((_DWORD *)a2 + 18);
  *(_OWORD *)v17 = *(_OWORD *)((char *)a2 + 108);
  v5 = 0;
  if ( CompositorTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v4,
      (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicViewerAdd_(v6, v3, v17[2]);
  }
  AcquireSRWLockExclusive(this + 10);
  Ptr = (unsigned int)this[25].Ptr;
  v9 = Ptr + 1;
  v10 = Ptr + 1 < Ptr ? 0x80070216 : 0;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v10, 0xB5u);
  }
  else if ( v9 > HIDWORD(this[24].Ptr) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[22], 8, 1, &v16);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[22].Ptr + Ptr) = v16;
    LODWORD(this[25].Ptr) = v9;
  }
  if ( v10 >= 0 )
  {
    CMILCOMBase::InternalAddRef(v16);
    v13 = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( v13 )
    {
      v14 = (struct IUnknown *)((char *)v16 + 56);
      if ( !v16 )
        v14 = 0LL;
      v5 = CHolographicInteropTaskQueue::PostMessageW(v13, 0x18u, v14, 0LL, 0LL, 0LL, 0LL);
    }
  }
  ReleaseSRWLockExclusive(this + 10);
  return v5;
}
