/*
 * XREFs of _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x1800CFDB7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A510 (--1-$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<BamoDataSourceStub>::~ComPtr<BamoDataSourceStub>(*(_QWORD **)(a2 + 88));
  }
  return result;
}
