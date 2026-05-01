/*
 * XREFs of _lambda_c83d19acf1b991dd1bcd5204dc87c22e_::operator() @ 0x180343E58
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18034B0F0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c83d19acf1b991dd1bcd5204dc87c22e_::operator()(__int64 *a1, HWND a2, _BYTE *a3, _BYTE *a4)
{
  __int64 result; // rax
  HWND Window; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 1;
  *a4 = 1;
  result = GetWindowLongPtrW(a2, -20);
  if ( (result & 0x40000) != 0 )
  {
    result = (__int64)GetWindow(a2, 4u);
    Window = (HWND)result;
    if ( result )
    {
      while ( 1 )
      {
        v8 = *a1;
        v10 = 0LL;
        v9 = *(_QWORD *)(v8 + 336);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        if ( (*(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, Window, &v10) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 248) + 184LL))(
                 *(_QWORD *)(*a1 + 248),
                 v10) )
          {
            break;
          }
        }
        Window = GetWindow(Window, 4u);
        result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        if ( !Window )
          return result;
      }
      return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
  }
  return result;
}
