/*
 * XREFs of sub_1800FCDA4 @ 0x1800FCDA4
 * Callers:
 *     sub_1800FCB30 @ 0x1800FCB30 (sub_1800FCB30.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

_QWORD *__fastcall sub_1800FCDA4(_QWORD *a1, _QWORD *a2, int *a3, int *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  int v10; // xmm0_4
  int v11; // xmm1_4
  __int64 v12; // rax
  _QWORD *result; // rax

  v8 = operator new(0x38uLL);
  v9 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x38uLL);
    v10 = *a4;
    v11 = *a3;
    *v9 = &Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>::`vftable';
    v9[1] = 0LL;
    v9[2] = 0LL;
    v12 = a2[1];
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
    v9[1] = *a2;
    v9[2] = a2[1];
    v9[3] = 0LL;
    v9[4] = 0LL;
    *((_DWORD *)v9 + 10) = v11;
    *((_DWORD *)v9 + 11) = v10;
  }
  else
  {
    v9 = 0LL;
  }
  result = a1;
  *a1 = v9;
  return result;
}
