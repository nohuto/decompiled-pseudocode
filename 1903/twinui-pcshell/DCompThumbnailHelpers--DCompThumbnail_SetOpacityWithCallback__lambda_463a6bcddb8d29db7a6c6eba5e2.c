/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x1803D6FAC
 * Callers:
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1803D7D90 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x1802C14A4 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x1803D701C (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159f.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF

  v6 = lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(&v14, a4);
  v10 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
          a1,
          v7,
          v8,
          v9,
          0,
          (__int64)v6);
  v11 = *a4;
  v12 = v10;
  if ( *a4 )
  {
    *a4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v12;
}
