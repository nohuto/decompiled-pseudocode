/*
 * XREFs of ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801CF2CC
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18024FD30 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ?erase@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801CF340 (-erase@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18024FD7C (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x18024FDE0 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 */

void __fastcall CCaptureController::RemoveRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  char *v2; // rdi
  CCaptureRenderTarget **i; // rbx
  CCaptureRenderTarget *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 56;
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 7); i != *((CCaptureRenderTarget ***)this + 8); ++i )
  {
    if ( *i == a2 )
    {
      CCaptureRenderTarget::SetRootVisual(*i, 0LL);
      *((_BYTE *)*i + 416) = 0;
      v4 = *i;
      *((_QWORD *)v4 + 73) = 0LL;
      *((_QWORD *)v4 + 11) = 0LL;
      CCaptureRenderTarget::SetTransform(*i, 0LL);
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(v2, &v5, i);
      return;
    }
  }
}
