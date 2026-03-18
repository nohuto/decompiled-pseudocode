/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00601CC
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C005FCF0 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C0060140 (--0CRIMBase@@IEAA@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v7; // rdi

  v7 = 16LL;
  do
  {
    a4(a1);
    a1 += a2;
    --v7;
  }
  while ( v7 );
}
