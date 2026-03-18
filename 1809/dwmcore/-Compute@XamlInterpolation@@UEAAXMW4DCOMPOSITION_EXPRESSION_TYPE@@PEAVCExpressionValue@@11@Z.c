/*
 * XREFs of ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005D940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlInterpolation::Compute(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  double (*v7)(void); // rax
  __int64 v8; // rdx

  v7 = *(double (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( a1[6] )
    v7();
  else
    v7();
  return KeyframeInterpolation::Interpolate(a1, v8, a3, a4);
}
