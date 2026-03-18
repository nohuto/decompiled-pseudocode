/*
 * XREFs of ??1?$com_ptr_t@VCRenderTargetImageSource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D9008
 * Callers:
 *     _dynamic_atexit_destructor_for__CDropShadow::ShadowIntermediates::s_cpFastShadowBlur__ @ 0x1800EDC60 (_dynamic_atexit_destructor_for__CDropShadow--ShadowIntermediates--s_cpFastShadowBlur__.c)
 *     _dynamic_atexit_destructor_for__CDropShadow::ShadowIntermediates::s_cpFastShadowMask__ @ 0x1800EDC70 (_dynamic_atexit_destructor_for__CDropShadow--ShadowIntermediates--s_cpFastShadowMask__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<CRenderTargetImageSource,wil::err_returncode_policy>::~com_ptr_t<CRenderTargetImageSource,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
