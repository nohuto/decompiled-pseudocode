/*
 * XREFs of _lambda_9e93575117fc73f27611926629c080cf_::operator() @ 0x18009E9D0
 * Callers:
 *     CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND______CDefaultKeyCompare_HWND______CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_9e93575117fc73f27611926629c080cf___ @ 0x180371CB4 (CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase--ThumbnailData_CDefaultHashPo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18034F840 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18034F8C4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_9e93575117fc73f27611926629c080cf_::operator()(_QWORD **a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // rcx
  int WindowThumbnailSourceSize; // eax
  __int64 v8; // rdx
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v11[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a3 + 8) + 208LL))(*(_QWORD *)(a3 + 8), **a1) )
  {
    v10 = a1[1][4];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v12, &v10, &GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = a1[1];
    v13[0] = 0LL;
    v13[1] = 0LL;
    v11[0] = 0;
    v11[1] = 0;
    WindowThumbnailSourceSize = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD *))(*v6 + 152LL))(
                                  v6,
                                  *(_QWORD *)a3,
                                  v13);
    if ( WindowThumbnailSourceSize >= 0 )
    {
      WindowThumbnailSourceSize = DwmpQueryWindowThumbnailSourceSize(*a2, 0LL, v11);
      if ( WindowThumbnailSourceSize >= 0 )
      {
        WindowThumbnailSourceSize = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD *, _DWORD, _QWORD))(**(_QWORD **)(a3 + 8) + 120LL))(
                                      *(_QWORD *)(a3 + 8),
                                      **a1,
                                      v11,
                                      v13,
                                      *((_DWORD *)a1[1] + 37),
                                      0LL);
        if ( WindowThumbnailSourceSize >= 0 )
        {
LABEL_9:
          DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v12);
          return 0LL;
        }
        v8 = 289LL;
      }
      else
      {
        v8 = 287LL;
      }
    }
    else
    {
      v8 = 286LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)WindowThumbnailSourceSize);
    goto LABEL_9;
  }
  return 1LL;
}
