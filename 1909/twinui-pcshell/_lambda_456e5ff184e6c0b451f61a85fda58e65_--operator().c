/*
 * XREFs of _lambda_456e5ff184e6c0b451f61a85fda58e65_::operator() @ 0x180365DE8
 * Callers:
 *     CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::IconLoaded @ 0x180366BA0 (CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___--IconLoaded.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAAAEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@AEBV123@@Z @ 0x180365D60 (--4-$ObservableProperty@V-$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAAAEBV-$ComPtr@UIWICBitmap@@@.c)
 */

int __fastcall lambda_456e5ff184e6c0b451f61a85fda58e65_::operator()(_QWORD *a1, void *a2)
{
  __int64 v2; // rbx
  int v5; // eax
  __int64 *v6; // rax
  int result; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[1];
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, __int64, __int64 *))(*(_QWORD *)v2 + 168LL))(
         v2,
         a2,
         0LL,
         1LL,
         &v9);
  if ( v5 >= 0 )
  {
    v6 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>::operator=(v6, &v9);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v5);
  }
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( a2 )
    return DeleteObject(a2);
  return result;
}
