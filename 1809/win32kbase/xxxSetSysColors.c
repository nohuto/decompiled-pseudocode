/*
 * XREFs of xxxSetSysColors @ 0x1C0042B34
 * Callers:
 *     ?ResetSystemColors@@YAXXZ @ 0x1C004547C (-ResetSystemColors@@YAXXZ.c)
 *     xxxODI_ColorInit @ 0x1C00467D0 (xxxODI_ColorInit.c)
 *     NtUserSetSysColors @ 0x1C0048D20 (NtUserSetSysColors.c)
 * Callees:
 *     SetSysColor @ 0x1C0042D4C (SetSysColor.c)
 *     GreGetDeviceCaps @ 0x1C0045080 (GreGetDeviceCaps.c)
 */

__int64 __fastcall xxxSetSysColors(__int64 a1, unsigned int a2, char *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v9; // eax
  unsigned int *v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r9
  __int64 v19; // rcx

  v5 = a5;
  v6 = a2;
  if ( (a5 & 1) != 0
    && (int)IsCheckWinstaAttributeAccessSupported() >= 0
    && !(unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    return 0LL;
  }
  if ( (int)GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 24) <= 16 )
    v5 = a5 | 8;
  v9 = 1146882;
  if ( (v5 & 4) == 0 )
    goto LABEL_11;
  if ( (_DWORD)v6 )
  {
    v10 = (unsigned int *)a4;
    v11 = v6;
    do
    {
      v12 = *(unsigned int *)((char *)v10 + a3 - a4);
      if ( (unsigned int)v12 <= 0x14 && _bittest(&v9, v12) )
      {
        SetSysColor(v12, *v10, v5);
        v9 = 1146882;
      }
      ++v10;
      --v11;
    }
    while ( v11 );
LABEL_11:
    if ( (_DWORD)v6 )
    {
      do
      {
        v13 = *(unsigned int *)a3;
        a3 += 4;
        v14 = *(unsigned int *)a4;
        a4 += 4;
        if ( (unsigned int)v13 < 0x1F && ((v5 & 4) == 0 || (unsigned int)v13 > 0x14 || !_bittest(&v9, v13)) )
          SetSysColor(v13, v14, v5);
        v9 = 1146882;
        --v6;
      }
      while ( v6 );
    }
  }
  if ( (v5 & 1) != 0 )
  {
    if ( (int)IsRecolorDeskPatternSupported() >= 0 )
      RecolorDeskPattern();
    if ( (int)IsCreateBitmapStripSupported() >= 0 )
      CreateBitmapStrip();
    if ( (int)IsxxxSendNotifyMessageSupported() >= 0 )
      xxxSendNotifyMessage(-1LL, 21LL, 0LL);
    if ( (int)IsxxxInternalInvalidateSupported() >= 0 )
    {
      v16 = *((_QWORD *)gptiCurrent + 57);
      if ( v16 )
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL);
      else
        v17 = 0LL;
      xxxInternalInvalidate(v17, 1LL, 66693LL);
      if ( *((struct tagDESKTOP **)gptiCurrent + 57) != grpdeskRitInput )
      {
        v18 = (_QWORD *)*((_QWORD *)grpdeskRitInput + 1);
        if ( (*(_DWORD *)(*v18 + 64LL) & 1) == 0 )
        {
          v19 = v18[3];
          if ( v19 )
            xxxInternalInvalidate(v19, 1LL, 66693LL);
        }
      }
    }
  }
  return 1LL;
}
