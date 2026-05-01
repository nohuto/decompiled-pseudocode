/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18039E0B4
 * Callers:
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18039E15C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18039E3CC (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413_____lambda_0688f707641f84dad399f01864cccda0__&__lambda_b0b710aa7dd78fb14938fbcb95e31413__&_IDCompBatchAnimationCallback___&_ @ 0x18039E258 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f7076.c)
 *     _lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_ @ 0x18039E47C (_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_--_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v9; // edi
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  v5 = lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_(&v11, a1);
  *a3 = 0LL;
  v6 = (__int64 *)v5;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413_____lambda_0688f707641f84dad399f01864cccda0_____lambda_b0b710aa7dd78fb14938fbcb95e31413____IDCompBatchAnimationCallback_____(
    &v12,
    v7,
    v5,
    &v13);
  v8 = v12;
  if ( v12 )
  {
    v9 = (**v12)(v12, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a3);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return v9;
}
