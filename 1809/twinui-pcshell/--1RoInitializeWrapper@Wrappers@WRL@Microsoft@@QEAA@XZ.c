/*
 * XREFs of ??1RoInitializeWrapper@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1802045A4
 * Callers:
 *     __lambda_6cab718d8d37c13432cde215a0f80823_::operator()_::_1_::dtor$1 @ 0x18020477C (__lambda_6cab718d8d37c13432cde215a0f80823_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper(
        Microsoft::WRL::Wrappers::RoInitializeWrapper *this)
{
  if ( *(int *)this >= 0 )
    RoUninitialize();
}
