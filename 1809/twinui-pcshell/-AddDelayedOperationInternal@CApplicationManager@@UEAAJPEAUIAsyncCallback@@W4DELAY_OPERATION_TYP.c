/*
 * XREFs of ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x180065D70
 * Callers:
 *     ?AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180065D10 (-AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___ @ 0x180065E14 (CDelayIAMOperations--AddOperation__lambda_408d293201316df79a8620e012e4c791___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::AddDelayedOperationInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = (unsigned int)CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___(
                       *(_QWORD *)(a1 + 560),
                       &v8,
                       a3) == 0
     ? 0x8007000E
     : 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v6;
}
