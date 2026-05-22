/*
 * XREFs of ??1?$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A7178
 * Callers:
 *     _WGIRawInputProvider::Create_::_1_::dtor$0 @ 0x18003D50C (_WGIRawInputProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WGIRawInputProvider>::~ComPtr<WGIRawInputProvider>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return RefCountedObject::Release((RefCountedObject *)(result + 16));
  }
  return result;
}
