/*
 * XREFs of ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C01E3D68
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
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
          SetOrClrWF(1, i, 264, 1);
          SetOrClrWF(1, i, 1664, 1);
        }
      }
    }
  }
}
