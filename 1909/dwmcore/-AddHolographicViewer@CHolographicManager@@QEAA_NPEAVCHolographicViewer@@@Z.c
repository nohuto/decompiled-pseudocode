/*
 * XREFs of ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x18023F6E4
 * Callers:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x180246930 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D626C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D6290 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x18023FE5C (-DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
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
  signed int v11; // eax
  __int64 v12; // rcx
  CHolographicInteropTaskQueue *v13; // rcx
  struct IUnknown *v14; // r8
  CMILCOMBase *v16; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v17[4]; // [rsp+68h] [rbp-40h]

  v16 = a2;
  v3 = *((_DWORD *)a2 + 18);
  *(_OWORD *)v17 = *(_OWORD *)((char *)a2 + 108);
  v5 = 0;
  if ( CompositorTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v4,
      (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicViewerAdd_(v6, v3, v17[3]);
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[28].Ptr;
  v9 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    goto LABEL_9;
  }
  if ( v9 > HIDWORD(this[27].Ptr) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[25], 8, 1, &v16);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC3u, 0LL);
LABEL_9:
      if ( v10 < 0 )
        goto LABEL_14;
    }
  }
  else
  {
    *((_QWORD *)this[25].Ptr + LODWORD(this[28].Ptr)) = v16;
    LODWORD(this[28].Ptr) = v9;
  }
  CMILCOMBase::InternalAddRef(v16);
  v13 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v13 )
  {
    v14 = (struct IUnknown *)((char *)v16 + 56);
    if ( !v16 )
      v14 = 0LL;
    v5 = CHolographicInteropTaskQueue::PostMessageW(v13, 0x18u, v14, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_14:
  ReleaseSRWLockExclusive(this + 13);
  return v5;
}
