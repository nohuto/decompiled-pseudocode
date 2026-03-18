/*
 * XREFs of OffsetChildren @ 0x1C0025BAC
 * Callers:
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00ED4B0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 * Callees:
 *     OffsetWindow @ 0x1C0025CA0 (OffsetWindow.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C00C6554 (IsDpiBoundaryBetweenWindows.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01E761C (ScaleDpiOffsetWithSubpixel.c)
 */

__int64 __fastcall OffsetChildren(struct tagWND *a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v8; // esi
  unsigned int v9; // ebp
  int v12; // r14d
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-44h]
  _QWORD v17[3]; // [rsp+28h] [rbp-40h] BYREF

  v5 = *((_QWORD *)a1 + 14);
  result = 0LL;
  v17[0] = 0LL;
  v8 = a3;
  v17[1] = 0LL;
  v9 = a2;
  if ( v5 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(v17, a4, *(_QWORD *)(v5 + 40) + 88LL) )
        goto LABEL_20;
      if ( (unsigned int)IsDpiBoundaryBetweenWindows(v5, a1) )
      {
        v15 = v9;
        v16 = v8;
        ScaleDpiOffsetWithSubpixel(&v15, (float *)(v5 + 224), (struct tagWND *)v5, a1);
        v9 = v15;
        v12 = 1;
        v8 = v16;
      }
      else
      {
        *(_DWORD *)(v5 + 224) = *((_DWORD *)a1 + 56);
        *(_DWORD *)(v5 + 228) = *((_DWORD *)a1 + 57);
      }
      OffsetWindow(v5, v9, v8, a5);
      v13 = a2;
      if ( !v12 )
        v13 = v9;
      v9 = v13;
      v14 = a3;
      if ( !v12 )
        v14 = v8;
      v12 = 0;
      v8 = v14;
      result = *(_QWORD *)(v5 + 112);
      if ( !result )
      {
LABEL_20:
        while ( 1 )
        {
          result = *(_QWORD *)(v5 + 88);
          if ( result )
            break;
          v5 = *(_QWORD *)(v5 + 104);
          if ( (struct tagWND *)v5 == a1 )
            return result;
        }
      }
      v5 = result;
    }
  }
  return result;
}
