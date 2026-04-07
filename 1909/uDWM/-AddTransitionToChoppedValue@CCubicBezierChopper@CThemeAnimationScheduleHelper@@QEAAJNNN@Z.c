/*
 * XREFs of ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z @ 0x1800A1D84
 * Callers:
 *     ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x1800A1FB0 (-ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3,
        double a4)
{
  unsigned int v4; // edi
  int v8; // edi
  __int64 v9; // rdx
  int v10; // r9d
  double v11; // xmm1_8
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r8
  double v15; // xmm2_8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  double v23[4]; // [rsp+38h] [rbp-60h] BYREF

  v4 = *((_DWORD *)this + 14);
  if ( v4 <= 4 )
  {
    memset_0(v23, 0, sizeof(v23));
    v9 = 0LL;
    if ( v4 )
    {
      v10 = *((_DWORD *)this + 24);
      do
      {
        if ( v10 == (_DWORD)v9 )
        {
          v11 = a3;
        }
        else
        {
          v12 = *((unsigned int *)this + 24);
          v13 = *((_QWORD *)this + 5);
          v14 = *((_QWORD *)this + 6);
          v15 = *(double *)(v13 + 8 * v12) - *(double *)(v14 + 8 * v12);
          if ( COERCE_DOUBLE(*(_QWORD *)&v15 & _xmm) >= 0.0001 )
            v11 = (*(double *)(v13 + 8 * v9) - *(double *)(v14 + 8 * v9)) * (a2 - *(double *)(v14 + 8 * v12)) / v15
                + *(double *)(v14 + 8 * v9);
          else
            v11 = *(double *)(v14 + 8 * v9);
        }
        v23[v9] = v11;
        v9 = (unsigned int)(v9 + 1);
        v4 = *((_DWORD *)this + 14);
      }
      while ( (unsigned int)v9 < v4 );
    }
    v16 = *((_QWORD *)this + 3);
    v22 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, double *, _QWORD, __int64 *))(*(_QWORD *)v16 + 72LL))(
           v16,
           &v22,
           v23,
           v4,
           &v22);
    if ( v8 >= 0 )
    {
      v17 = *((_QWORD *)this + 2);
      v18 = v22;
      v19 = *((_QWORD *)this + 4);
      if ( *((_QWORD *)this + 16) == -1LL )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, v19, v22);
      }
      else
      {
        *((_QWORD *)this + 16) = -1LL;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v17 + 48LL))(v17, v19, v18);
      }
      v8 = v20;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)v8;
}
