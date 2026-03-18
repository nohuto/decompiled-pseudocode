/*
 * XREFs of ulIndexToRGB @ 0x1C0067DB0
 * Callers:
 *     GreGetNearestColor @ 0x1C00508E0 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x1C00B0790 (ulColorRefToRGB.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0067E00 (-ulIndexToRGB@XEPALOBJ@@QEAAKK@Z.c)
 */

unsigned int __fastcall ulIndexToRGB(struct _ERESOURCE *a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  char v4; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _BYTE *v10; // rcx
  unsigned int v11; // eax
  struct _ERESOURCE *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v3 = 0;
  v4 = a3;
  if ( a1 )
    return XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&v12, a3);
  if ( a3 < 0xA )
    return *((_DWORD *)&logDefaultPal + a3 + 1);
  if ( a3 > 0xF5 )
    return *((_DWORD *)&logDefaultPal + a3 - 235);
  v12 = (struct _ERESOURCE *)ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  v9 = *(_QWORD *)(a2 + 72);
  if ( v9 )
  {
    v7 = *(unsigned int *)(a2 + 28);
    v10 = (_BYTE *)(v9 + 4);
    v11 = 0;
    if ( (_DWORD)v7 )
    {
      while ( *v10 != v4 )
      {
        ++v11;
        ++v10;
        if ( v11 >= (unsigned int)v7 )
          goto LABEL_13;
      }
      v3 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v11);
    }
  }
LABEL_13:
  SEMOBJ::vUnlock(&v12, v7, v8);
  return v3;
}
