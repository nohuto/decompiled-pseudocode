/*
 * XREFs of ?ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C002A600
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0028118 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00FAA00 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C012A498 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01AF2E8 (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall ExcludeWindowRects(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagRECT *a4,
        struct _CalcVisRgnData *a5)
{
  BOOL v9; // r14d
  __int64 v10; // rcx
  LONG *v11; // rbx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int16 WindowCoordinateSpaceDpi; // bx

  v9 = 0;
  if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
    v9 = WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)a1 + 10));
  }
  for ( ; a2; a2 = (struct tagWND *)*((_QWORD *)a2 + 8) )
  {
    if ( a2 == a3 )
      return 1LL;
    v10 = *((_QWORD *)a2 + 5);
    v11 = (LONG *)(v10 + 88);
    if ( (*(_BYTE *)(v10 + 31) & 0x10) != 0 && (*(_BYTE *)(v10 + 26) & 8) == 0 && (*(_BYTE *)(v10 + 24) & 0x20) == 0 )
    {
      if ( v9 )
      {
        if ( !(unsigned int)DpiRectIntersectsRectWithSubpixel(v10 + 88, (char *)a2 + 208, a2, a4, (char *)a1 + 208, a1) )
          continue;
      }
      else if ( a4->left >= *(_DWORD *)(v10 + 96)
             || *v11 >= a4->right
             || a4->top >= *(_DWORD *)(v10 + 100)
             || *(_DWORD *)(v10 + 92) >= a4->bottom )
      {
        continue;
      }
      if ( *v11 < v11[2] && v11[1] < v11[3] )
      {
        if ( *((_DWORD *)a5 + 1) == *((_DWORD *)a5 + 2) )
        {
          result = ResizeVisExcludeMemory(a5);
          if ( !(_DWORD)result )
            return result;
        }
        v13 = *((int *)a5 + 1);
        *(_QWORD *)(*((_QWORD *)a5 + 2) + 8 * v13) = a2;
        *((_DWORD *)a5 + 1) = v13 + 1;
      }
    }
  }
  return 1LL;
}
