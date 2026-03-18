/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00077C0
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0005FE0 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C0007730 (--0CRIMBase@@IEAA@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}
