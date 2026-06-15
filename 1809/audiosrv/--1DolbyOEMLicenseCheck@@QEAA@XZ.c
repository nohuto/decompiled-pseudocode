/*
 * XREFs of ??1DolbyOEMLicenseCheck@@QEAA@XZ @ 0x18001645C
 * Callers:
 *     _AtmosCheck::IsLicenseEvaluationRequired_::_1_::dtor$0 @ 0x18006AA59 (_AtmosCheck--IsLicenseEvaluationRequired_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall DolbyOEMLicenseCheck::~DolbyOEMLicenseCheck(DolbyOEMLicenseCheck *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    BCryptDestroyKey(v2);
  if ( *(_QWORD *)this )
  {
    BCryptCloseAlgorithmProvider(*(BCRYPT_ALG_HANDLE *)this, 0);
    *(_QWORD *)this = 0LL;
  }
}
