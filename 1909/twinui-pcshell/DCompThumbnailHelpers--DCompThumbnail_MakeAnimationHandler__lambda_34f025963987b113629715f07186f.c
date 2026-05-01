/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x1803A4AD8
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x1803A4B88 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x1803A4CC0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lamb.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rbx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rdi
  unsigned int v10; // ebx

  *a4 = 0LL;
  v5 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v7 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___(
                                                               v7,
                                                               v8,
                                                               a2,
                                                               0LL);
    v9 = v5;
  }
  if ( v9 )
    v10 = (**v5)(v5, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
  else
    v10 = -2147024882;
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v10;
}
