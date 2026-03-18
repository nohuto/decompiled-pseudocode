/*
 * XREFs of hfontCreate @ 0x1C007E170
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C007DE28 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00F3540 (NtGdiHfontCreate.c)
 *     bInitStockFontsInternal @ 0x1C036D21C (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C036D5FC (bInitOneStockFontInternal.c)
 *     hfontInitDefaultGuiFont @ 0x1C036D8B4 (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C036F190 (bInitSystemFont.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E2DC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0251748 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // esi
  _DWORD *Object; // rax
  struct OBJECT *v12; // rbx
  __int64 v13; // r9
  struct HOBJ__ *v14; // rdi
  _BYTE v16[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]

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
  Src[3] = lNormAngle((unsigned int)Src[3]);
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v16);
  v14 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v16, v12, 0xAu, a5);
  if ( !v14 )
  {
    FreeObject(v12, 10LL);
    if ( v17 )
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v16);
    return 0LL;
  }
  *(_QWORD *)(HmgPentryFromPobj(v12) + 16) = a4;
  if ( v17 )
    _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v16);
  return v14;
}
