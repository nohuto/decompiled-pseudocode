/*
 * XREFs of _SpatialPolicy::DetectComboEndpoint_::_1_::dtor$3 @ 0x180074785
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x1800DCAB4 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 */

__int64 __fastcall SpatialPolicy::DetectComboEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::_Func_class<void,>::~_Func_class<void,>(a2 + 96);
  }
  return result;
}
