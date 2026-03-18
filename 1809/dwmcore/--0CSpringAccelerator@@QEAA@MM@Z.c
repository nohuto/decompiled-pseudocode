/*
 * XREFs of ??0CSpringAccelerator@@QEAA@MM@Z @ 0x1801A80E4
 * Callers:
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801A88F4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 * Callees:
 *     <none>
 */

CSpringAccelerator *__fastcall CSpringAccelerator::CSpringAccelerator(CSpringAccelerator *this, float a2, float a3)
{
  __int64 v3; // rax
  CSpringAccelerator *result; // rax

  *((_DWORD *)this + 4) = 0;
  v3 = 2LL;
  do
  {
    *(_QWORD *)this = &CSpringAccelerator::`vftable'{for `IAccelerator'};
    *((_QWORD *)this + 1) = &CSpringAccelerator::`vftable'{for `CMILRefCountBase'};
    --v3;
  }
  while ( v3 );
  *((float *)this + 10) = a2;
  *((float *)this + 9) = a3;
  result = this;
  *((float *)this + 7) = a2 * a2;
  *((float *)this + 8) = (float)(a3 + a3) * a2;
  return result;
}
