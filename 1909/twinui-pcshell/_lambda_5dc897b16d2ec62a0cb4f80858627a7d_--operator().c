/*
 * XREFs of _lambda_5dc897b16d2ec62a0cb4f80858627a7d_::operator() @ 0x1803637F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5dc897b16d2ec62a0cb4f80858627a7d___::Run @ 0x180363AE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5dc897b16d2ec62a0cb4f80858627a7d___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V?$ComPtr@UIMultitaskingViewVisibilityNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803639AC (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V-.c)
 */

__int64 __fastcall lambda_5dc897b16d2ec62a0cb4f80858627a7d_::operator()(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  int *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 *v18; // [rsp+70h] [rbp+10h] BYREF

  v9 = *(_QWORD *)a1;
  v1 = v9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v10 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 24LL))(v1, &v10);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3);
  v11 = 0;
  v12 = 0LL;
  v13 = &v9;
  details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::GetCurrentObject(&v11);
  v4 = &v14;
  v15 = 0LL;
  v14 = v10;
  v16 = &v9;
  while ( 1 )
  {
    details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::GetCurrentObject(v4);
    if ( v11 == v14 && v13 == v16 )
      break;
    v5 = v12;
    v18 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
    v6 = *v5;
    v7 = *(unsigned int *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
      (*(void (__fastcall **)(__int64 *, __int64))(v6 + 24))(v5, v7);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v6 + 32))(v5, v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    ++v11;
    v4 = &v11;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
}
