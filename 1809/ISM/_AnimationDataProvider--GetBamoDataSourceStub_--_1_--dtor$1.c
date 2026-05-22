/*
 * XREFs of _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x180132D7F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@QEAA@XZ @ 0x18001E0CC (--1-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<DataProviderPrincipal>::~ComPtr<DataProviderPrincipal>(*(_QWORD **)(a2 + 104));
  }
  return result;
}
