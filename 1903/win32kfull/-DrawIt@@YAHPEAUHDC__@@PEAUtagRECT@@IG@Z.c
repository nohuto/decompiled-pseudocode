/*
 * XREFs of ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C008DBBC
 * Callers:
 *     DrawFrameControl @ 0x1C008CAFC (DrawFrameControl.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C012ED38 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 */

__int64 __fastcall DrawIt(HDC a1, struct tagRECT *a2, __int16 a3, unsigned __int16 a4)
{
  LONG top; // r11d
  int v6; // eax
  int v7; // ecx
  int v8; // r9d
  int v9; // r15d
  LONG v10; // ebp
  int v11; // r12d
  int v12; // edx
  int v13; // edi
  LONG v14; // esi
  int v15; // r14d
  LONG v16; // ebp
  unsigned __int16 v18; // [rsp+98h] [rbp+20h] BYREF

  v18 = a4;
  top = a2->top;
  v6 = a2->right - a2->left;
  v7 = v6;
  v8 = a2->bottom - top;
  if ( v6 >= v8 )
    v7 = a2->bottom - top;
  v9 = (v6 - v7) / 2 + a2->left;
  v10 = (v8 - v7) / 2 + top;
  v11 = a3 & 0x100;
  if ( (a3 & 0x100) != 0 )
  {
    v12 = *(_DWORD *)(gpsi + 4648LL);
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v12 = *(_DWORD *)(gpsi + 4672LL);
  }
  else
  {
    v12 = *(_DWORD *)(gpsi + 4640LL);
  }
  v13 = a3 & 0x300;
  v14 = v10 + 1;
  v15 = GreSetTextColor(a1, v12);
  if ( !v13 )
    v14 = v10;
  v16 = v9 + 1;
  if ( !v13 )
    v16 = v9;
  GreExtTextOutWInternal(a1, v16, v14, 0, 0LL, &v18, 1u, 0LL, 0LL, 0);
  if ( v11 )
  {
    GreSetTextColor(a1, *(_DWORD *)(gpsi + 4632LL));
    GreExtTextOutWInternal(a1, v16 - 1, v14 - 1, 0, 0LL, &v18, 1u, 0LL, 0LL, 0);
  }
  GreSetTextColor(a1, v15);
  return 1LL;
}
