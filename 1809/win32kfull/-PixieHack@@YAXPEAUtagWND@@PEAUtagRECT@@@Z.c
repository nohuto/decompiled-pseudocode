/*
 * XREFs of ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0209C38
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 */

void __fastcall PixieHack(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  __int64 v5; // r8
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != (struct tagWND *)GetThreadDesktopWindow(0LL, (__int64)a2)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x22) == 2 )
  {
    for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
    {
      v5 = *(_QWORD *)(i + 40);
      if ( (*(_BYTE *)(v5 + 17) & 8) == 0 && (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
      {
        if ( (unsigned int)IntersectRect(v6, &a2->left, (int *)(v5 + 88)) )
        {
          SetOrClrWF(1, i, 0x108u, 1);
          SetOrClrWF(1, i, 0x680u, 1);
        }
      }
    }
  }
}
