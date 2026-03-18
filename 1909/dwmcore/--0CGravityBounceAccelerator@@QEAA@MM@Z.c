/*
 * XREFs of ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x1801E3698
 * Callers:
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E3EC4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 * Callees:
 *     <none>
 */

CGravityBounceAccelerator *__fastcall CGravityBounceAccelerator::CGravityBounceAccelerator(
        CGravityBounceAccelerator *this,
        float a2,
        float a3)
{
  CGravityBounceAccelerator *result; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CGravityBounceAccelerator::`vftable'{for `IAccelerator'};
  *((_QWORD *)this + 1) = &CGravityBounceAccelerator::`vftable'{for `CMILRefCountBase'};
  result = this;
  *((float *)this + 7) = a2;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((float *)this + 8) = v4 / 0.0099999998;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a3) & _xmm);
  *((float *)this + 9) = v5;
  *((float *)this + 10) = (float)((float)(v5 + 1.0) * -1.0) / 0.0099999998;
  return result;
}
