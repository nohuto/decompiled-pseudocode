/*
 * XREFs of ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1400346CC
 * Callers:
 *     _CPipeInstance::CreateAPOConnections_::_1_::dtor$0 @ 0x14001AC50 (_CPipeInstance--CreateAPOConnections_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14000B370 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CInPlaceBuffer,wil::err_returncode_policy>::~com_ptr_t<CInPlaceBuffer,wil::err_returncode_policy>(
        CInPlaceBuffer **a1,
        unsigned int a2)
{
  CInPlaceBuffer *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return CInPlaceBuffer::Release(v2, a2);
  return result;
}
