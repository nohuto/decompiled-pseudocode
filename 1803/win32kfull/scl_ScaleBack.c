/*
 * XREFs of scl_ScaleBack @ 0x1C02B52B8
 * Callers:
 *     scl_CalcComponentOffset @ 0x1C02B3E84 (scl_CalcComponentOffset.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C02B532C (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C02B53E8 (scl_ScaleBackCurrentPhantomPoints.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 */

void __fastcall scl_ScaleBack(int *a1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // rbx
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h]

  v5 = a4;
  v6 = a5;
  v7 = *a1 >> 6;
  if ( a5 > 0 )
  {
    v8 = a3 - (_QWORD)a4;
    do
    {
      v9 = *(_DWORD *)((char *)v5 + v8);
      LODWORD(v10) = v9 << 16;
      HIDWORD(v10) = v9 >> 16;
      *v5++ = CompDiv(v7, v10);
      --v6;
    }
    while ( v6 );
  }
}
