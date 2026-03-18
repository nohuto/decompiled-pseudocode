/*
 * XREFs of ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C00779CC
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0077888 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMinimizedSausageWindow(struct tagWND *const a1)
{
  __int64 v1; // r8
  unsigned int v2; // r9d

  v1 = *((_QWORD *)a1 + 5);
  v2 = 0;
  if ( (*(_BYTE *)(v1 + 31) & 0x20) != 0
    && *(_DWORD *)(v1 + 88) == -32000
    && *(_DWORD *)(v1 + 92) == -32000
    && *(_DWORD *)(v1 + 112) == *(_DWORD *)(v1 + 104) )
  {
    return *(_DWORD *)(v1 + 116) == *(_DWORD *)(v1 + 108);
  }
  return v2;
}
