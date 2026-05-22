/*
 * XREFs of ??1?$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x18006C0BC
 * Callers:
 *     _WGIRawInputProvider::Create_::_1_::dtor$0 @ 0x1801316F7 (_WGIRawInputProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@EdgyInputTarget@@UEAAKXZ @ 0x1800036E0 (-Release@EdgyInputTarget@@UEAAKXZ.c)
 */

EdgyInputTarget *__fastcall Microsoft::WRL::ComPtr<WGIRawInputProvider>::~ComPtr<WGIRawInputProvider>(
        EdgyInputTarget **a1)
{
  EdgyInputTarget *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (EdgyInputTarget *)EdgyInputTarget::Release(result);
  }
  return result;
}
