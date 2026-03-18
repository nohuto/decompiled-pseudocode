/*
 * XREFs of OffsetChildren @ 0x1C006F050
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C01052F0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     OffsetWindow @ 0x1C006F138 (OffsetWindow.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C006F2D8 (IsDpiBoundaryBetweenWindows.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01D2A2C (ScaleDpiOffsetWithSubpixel.c)
 */

void __fastcall OffsetChildren(struct tagWND *a1, unsigned int a2, unsigned int a3, int *a4, unsigned int a5)
{
  __int64 v5; // rbx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  int v12; // r14d
  float *v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  _DWORD v17[14]; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+64h] [rbp+Ch]

  v5 = *((_QWORD *)a1 + 11);
  v7 = a3;
  v8 = a2;
  if ( v5 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(v17, a4, (int *)(*(_QWORD *)(v5 + 40) + 88LL)) )
        goto LABEL_20;
      if ( (unsigned int)IsDpiBoundaryBetweenWindows(v5, a1) )
      {
        v18 = v8;
        v19 = v7;
        ScaleDpiOffsetWithSubpixel(&v18, v13, (struct tagWND *)v5, a1);
        v8 = v18;
        v12 = 1;
        v7 = v19;
      }
      else
      {
        *v13 = *((float *)a1 + 52);
        *(_DWORD *)(v5 + 212) = *((_DWORD *)a1 + 53);
      }
      OffsetWindow(v5, v8, v7, a5);
      v14 = a2;
      if ( !v12 )
        v14 = v8;
      v8 = v14;
      v15 = a3;
      if ( !v12 )
        v15 = v7;
      v12 = 0;
      v7 = v15;
      v16 = *(_QWORD *)(v5 + 88);
      if ( !v16 )
      {
LABEL_20:
        while ( 1 )
        {
          v16 = *(_QWORD *)(v5 + 64);
          if ( v16 )
            break;
          v5 = *(_QWORD *)(v5 + 80);
          if ( (struct tagWND *)v5 == a1 )
            return;
        }
      }
      v5 = v16;
    }
  }
}
