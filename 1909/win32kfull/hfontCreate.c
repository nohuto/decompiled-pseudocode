/*
 * XREFs of hfontCreate @ 0x1C0090AD0
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C0090888 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00D93F0 (NtGdiHfontCreate.c)
 *     bInitStockFontsInternal @ 0x1C0380404 (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C03807D8 (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C0380A90 (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C0381200 (bInitSystemFont.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0090C08 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     cCapString @ 0x1C0093C18 (cCapString.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

struct HOBJ__ *__fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // esi
  _DWORD *Object; // rax
  struct OBJECT *v12; // rbx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // r9d
  struct HOBJ__ *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  if ( !Src )
    return 0LL;
  v9 = Src[88];
  if ( v9 > 0x10 )
    return 0LL;
  v10 = 4 * v9 + 356;
  Object = (_DWORD *)AllocateObject(4 * v9 + 632, 10LL, 0LL);
  v12 = (struct OBJECT *)Object;
  if ( !Object )
    return 0LL;
  Object[6] = a2;
  Object[7] = a3;
  Object[68] = v10;
  memmove(Object + 69, Src, v10);
  *((_DWORD *)v12 + 8) = 0;
  *((_DWORD *)v12 + 9) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  cCapString((char *)v12 + 208, Src + 7, 32LL, v13);
  v14 = lNormAngle((unsigned int)Src[3]);
  v15 = a5;
  v20 = 0LL;
  Src[3] = v14;
  v16 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v20, v12, 0xAu, v15);
  if ( !v16 )
  {
    FreeObject(v12, 10LL);
    if ( v20 )
      _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
    return 0LL;
  }
  v17 = HmgPentryFromPobj(v12);
  v18 = v20;
  *(_QWORD *)(v17 + 16) = a4;
  if ( v18 )
    _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
  return v16;
}
