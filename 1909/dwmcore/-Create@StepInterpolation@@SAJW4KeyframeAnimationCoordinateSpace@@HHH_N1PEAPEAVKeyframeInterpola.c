/*
 * XREFs of ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x1800A8404
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A5C94 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x180079540 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StepInterpolation::Create(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        _QWORD *a7)
{
  int v8; // ebp
  unsigned __int8 v9; // si
  unsigned __int8 v10; // di
  int v11; // r14d
  int v12; // r15d
  _DWORD *v13; // rax
  _DWORD *v14; // rbx

  v8 = 1;
  if ( a2 >= 1 )
    v8 = a2;
  if ( a3 < 0 )
  {
    a3 = 0;
  }
  else if ( v8 < a3 )
  {
    a3 = v8;
  }
  if ( a4 < a3 )
  {
    a4 = a3;
  }
  else if ( v8 < a4 )
  {
    a4 = v8;
  }
  v9 = a5;
  if ( a4 - a3 == 1 )
  {
    v10 = a6;
    if ( a5 && a6 )
      goto LABEL_26;
  }
  else if ( a4 == a3 )
  {
    if ( a5 || (v10 = a6) != 0 )
    {
      v9 = 0;
LABEL_26:
      v10 = 0;
    }
  }
  else
  {
    v10 = a6;
  }
  v11 = a3 + 1;
  v12 = a4 - 1;
  if ( !v9 )
    v11 = a3;
  if ( !v10 )
    v12 = a4;
  v13 = KeyframeInterpolation::operator new(0x30uLL);
  v14 = v13;
  if ( v13 )
  {
    memset_0(v13, 0, 0x30uLL);
    v14[2] = 0;
    *(_QWORD *)v14 = &StepInterpolation::`vftable';
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
    (**(void (__fastcall ***)(void *))v14)(v14);
  v14[4] = a1;
  v14[9] = v9;
  v14[10] = v10;
  *((float *)v14 + 11) = 1.0 / (float)(v12 - v11 + 1);
  v14[6] = v8;
  v14[7] = v11;
  v14[8] = v12;
  *a7 = v14;
  return 0LL;
}
