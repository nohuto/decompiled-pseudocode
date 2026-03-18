/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0148DA4
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C0148700 (NtGdiTransparentBlt.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278848 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rdi
  char *v7; // rbx

  v5 = a3;
  v7 = &a1[a3 * a2];
  do
  {
    v7 -= a2;
    a4(v7);
    --v5;
  }
  while ( v5 );
}
