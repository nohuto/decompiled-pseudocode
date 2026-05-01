/*
 * XREFs of ?GetAccessibleObject@CMultitaskingViewElementBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180364730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x180361E9C (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::GetAccessibleObject(
        CMultitaskingViewElementBase *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 *v3; // r14
  __int64 (__fastcall ***v6)(_QWORD, const struct _GUID *, void **); // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  CMultitaskingViewElementBase *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CMultitaskingViewElementBase *v14; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (__int64 *)((char *)this + 192);
  v6 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 24);
  if ( !v6 )
  {
    if ( *((_QWORD *)this + 23) )
    {
      v9 = 0;
    }
    else
    {
      v14 = this;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
             (_QWORD *)this + 23,
             &v14);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
          (const char *)(unsigned int)v8);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
          (const char *)(unsigned int)v9);
      }
    }
    if ( v9 < 0 )
    {
      v10 = 651LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3);
    v14 = (CMultitaskingViewElementBase *)*((_QWORD *)this + 23);
    v11 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v9 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, CMultitaskingViewElementBase *, GUID *, __int64 *))(*(_QWORD *)this + 584LL))(
           this,
           v11,
           &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
           v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    if ( v9 < 0 )
    {
      v10 = 653LL;
      goto LABEL_13;
    }
    v6 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*v3;
  }
  v9 = (**v6)(v6, a2, a3);
  if ( v9 < 0 )
  {
    v10 = 656LL;
    goto LABEL_13;
  }
  return (unsigned int)v9;
}
