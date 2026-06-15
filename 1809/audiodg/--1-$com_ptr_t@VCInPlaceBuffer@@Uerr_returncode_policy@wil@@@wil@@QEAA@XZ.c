/*
 * XREFs of ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140039B54
 * Callers:
 *     _CPipeInstance::CreateAPOConnections_::_1_::dtor$0 @ 0x14001FEE0 (_CPipeInstance--CreateAPOConnections_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14003AE94 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<CInPlaceBuffer,wil::err_returncode_policy>::~com_ptr_t<CInPlaceBuffer,wil::err_returncode_policy>(
        CInPlaceBuffer **a1)
{
  CInPlaceBuffer *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return CInPlaceBuffer::Release(v1);
  return result;
}
