/*
 * XREFs of ?vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A6AF0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C0094450 (XLATEOBJ_iXlate.c)
 */

int __fastcall vConvertAndSaveBGRATo32Bitfields(__int64 a1, ULONG *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  __int64 v5; // rsi
  ULONG *v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi

  v5 = 0LL;
  v6 = a2;
  v7 = 4LL * a3;
  v8 = a1 + 4LL * a4;
  v9 = v7 + v8;
  v10 = v7 >> 2;
  if ( v8 > v9 )
    v10 = 0LL;
  if ( v10 )
  {
    v11 = v8 - (_QWORD)a2;
    do
    {
      LODWORD(v9) = XLATEOBJ_iXlate(pxlo, *v6);
      ++v5;
      *(ULONG *)((char *)v6++ + v11) = v9;
    }
    while ( v5 != v10 );
  }
  return v9;
}
