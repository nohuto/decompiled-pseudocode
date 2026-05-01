/*
 * XREFs of ??1RoInitializeWrapper@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18027C268
 * Callers:
 *     __lambda_74683e00bb44ac1c285a2f54870ed16f_::operator()_::_1_::dtor$1 @ 0x18027C348 (__lambda_74683e00bb44ac1c285a2f54870ed16f_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper(
        Microsoft::WRL::Wrappers::RoInitializeWrapper *this)
{
  if ( *(int *)this >= 0 )
    RoUninitialize();
}
