/*
 * XREFs of ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18018DF5C
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x180158F0C (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180158F58 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x180158FB8 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18018DFD4 (-erase@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 */

void __fastcall CCaptureController::RemoveRenderTarget(
        CCaptureController *this,
        struct CCaptureRenderTarget *a2,
        bool a3)
{
  char *v3; // rdi
  CCaptureRenderTarget **i; // rbx
  CCaptureRenderTarget *v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 56;
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 7); i != *((CCaptureRenderTarget ***)this + 8); ++i )
  {
    if ( *i == a2 )
    {
      CCaptureRenderTarget::SetRootVisual(*i, 0LL, a3);
      *((_BYTE *)*i + 424) = 0;
      v5 = *i;
      *((_QWORD *)v5 + 73) = 0LL;
      *((_QWORD *)v5 + 45) = 0LL;
      CCaptureRenderTarget::SetTransform((struct CResource **)*i, 0LL);
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(v3, &v6, i);
      return;
    }
  }
}
