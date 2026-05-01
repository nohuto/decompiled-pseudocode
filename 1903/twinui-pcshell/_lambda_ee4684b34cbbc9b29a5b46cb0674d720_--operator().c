/*
 * XREFs of _lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator() @ 0x1803A98F0
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1800789B0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(__int64 *a1, HWND a2, _BYTE *a3, _BYTE *a4)
{
  __int64 result; // rax
  HWND Window; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

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
        v10 = *a1;
        v12 = 0LL;
        *a4 = 0;
        v11 = *(_QWORD *)(v10 + 336);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        if ( (*(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, Window, &v12) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 248) + 184LL))(
                 *(_QWORD *)(*a1 + 248),
                 v12) )
          {
            break;
          }
        }
        Window = GetWindow(Window, 4u);
        result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        if ( !Window )
          return result;
      }
      *a3 = 0;
      return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
  }
  return result;
}
