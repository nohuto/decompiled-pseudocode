/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEBU_CERT_CONTEXT@@P6AHPEBU1@@Z$1?CertFreeCertificateContext@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEBU1@PEBU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BEBF0
 * Callers:
 *     _TryGetCertSubjectName_::_1_::dtor$3 @ 0x1800BF2D2 (_TryGetCertSubjectName_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>>(
        const CERT_CONTEXT **a1)
{
  const CERT_CONTEXT *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CertFreeCertificateContext(v1);
  return result;
}
