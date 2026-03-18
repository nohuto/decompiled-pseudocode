/*
 * XREFs of ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C0049AB0
 * Callers:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0294AB0 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DBB8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_EVIDPNSOURCEINFO@@QEAAPEAXI@Z @ 0x1C00499F8 (--_EVIDPNSOURCEINFO@@QEAAPEAXI@Z.c)
 *     ??4VIDPNSOURCEINFO@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0294944 (--4VIDPNSOURCEINFO@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

VIDPNSOURCEINFO *__fastcall CDynamicArray<VIDPNSOURCEINFO,8>::Ensure(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  VIDPNSOURCEINFO *result; // rax
  unsigned int *v5; // r14
  unsigned int v6; // eax
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  bool v9; // cf
  SIZE_T v10; // rax
  char *v11; // rax
  VIDPNSOURCEINFO *v12; // rbx
  VIDPNSOURCEINFO **v13; // rsi
  VIDPNSOURCEINFO *v14; // rcx
  unsigned int v15; // r10d
  int v16; // r10d
  VIDPNSOURCEINFO *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx

  v2 = 8LL;
  if ( a2 <= 8 )
    return (VIDPNSOURCEINFO *)a1;
  v5 = (unsigned int *)(a1 + 1800);
  v6 = *(_DWORD *)(a1 + 1800);
  if ( a2 <= v6 )
    return *(VIDPNSOURCEINFO **)(a1 + 1792);
  v7 = a2 + 4;
  if ( v6 < 8 )
    v6 = 8;
  if ( a2 != v6 + 1 )
    v7 = a2;
  v8 = 224 * v7;
  if ( !is_mul_ok(v7, 0xE0uLL) )
    v8 = -1LL;
  v9 = __CFADD__(v8, 8LL);
  v10 = v8 + 8;
  if ( v9 )
    v10 = -1LL;
  v11 = (char *)operator new[](v10, 0x4B677844u, PagedPool);
  if ( v11 )
  {
    v12 = (VIDPNSOURCEINFO *)(v11 + 8);
    *(_QWORD *)v11 = v7;
    `vector constructor iterator'(
      v11 + 8,
      224LL,
      (unsigned int)v7,
      (void (__fastcall *)(char *))VIDPNSOURCEINFO::VIDPNSOURCEINFO);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    return 0LL;
  v13 = (VIDPNSOURCEINFO **)(a1 + 1792);
  v14 = *(VIDPNSOURCEINFO **)(a1 + 1792);
  if ( v14 )
  {
    v15 = 0;
    if ( *v5 )
    {
      do
      {
        VIDPNSOURCEINFO::operator=((char *)v12 + 224 * v15, (char *)*v13 + 224 * v15);
        v15 = v16 + 1;
      }
      while ( v15 < *v5 );
      v14 = *v13;
    }
    if ( v14 )
      VIDPNSOURCEINFO::`vector deleting destructor'(v14);
  }
  else
  {
    v17 = v12;
    v18 = a1 - (_QWORD)v12;
    do
    {
      VIDPNSOURCEINFO::operator=(v17, (char *)v17 + v18);
      v17 = (VIDPNSOURCEINFO *)(v19 + 224);
      --v2;
    }
    while ( v2 );
  }
  *v13 = v12;
  result = v12;
  *v5 = v7;
  return result;
}
