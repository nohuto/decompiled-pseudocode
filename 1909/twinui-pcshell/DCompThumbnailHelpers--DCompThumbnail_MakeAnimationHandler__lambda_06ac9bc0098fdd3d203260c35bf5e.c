/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x180412804
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x180412960 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_06.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___::CAnimationCallbackHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x180412D04 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lamb.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rbx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rdi
  unsigned int v10; // ebx
  __int64 v11; // rcx

  *a4 = 0LL;
  v6 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v7 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___::CAnimationCallbackHandler__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___(
                                                               v7,
                                                               v8,
                                                               a2,
                                                               0LL,
                                                               -2LL);
    v9 = v6;
  }
  if ( v9 )
    v10 = (**v6)(v6, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
  else
    v10 = -2147024882;
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  v11 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
