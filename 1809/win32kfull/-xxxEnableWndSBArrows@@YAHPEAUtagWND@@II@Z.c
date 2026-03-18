/*
 * XREFs of ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0078BA4
 * Callers:
 *     xxxSetScrollBar @ 0x1C00784FC (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C0078B70 (xxxEnableScrollBar.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     _InitPwSB @ 0x1C002150C (_InitPwSB.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     xxxDrawScrollBar @ 0x1C0106138 (xxxDrawScrollBar.c)
 */

__int64 __fastcall xxxEnableWndSBArrows(struct tagWND *a1, int a2, int a3)
{
  unsigned int *inited; // rdi
  unsigned int v4; // esi
  int v8; // r12d
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HDC DCEx; // r15
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v18; // rcx
  struct tagWND *v19; // rcx
  __int64 v20; // rcx
  struct tagWND *v21; // rcx

  inited = (unsigned int *)*((_QWORD *)a1 + 16);
  v4 = 0;
  v8 = 0;
  if ( inited )
  {
    v9 = *inited;
  }
  else
  {
    if ( !a3 )
      return 0LL;
    v9 = 0;
    inited = (unsigned int *)InitPwSB((__int64)a1);
    if ( !inited )
      return 0LL;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  if ( DCEx )
  {
    if ( !a2 || a2 == 3 )
    {
      v14 = *inited & 0xFFFFFFFC;
      if ( a3 )
        v14 = *inited | a3;
      *inited = v14;
      if ( v14 != v9 )
      {
        v9 = v14;
        v8 = 1;
        v20 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v20 + 16) & 4) != 0 && (*(_BYTE *)(v20 + 31) & 0x20) == 0 )
        {
          if ( (unsigned int)IsVisible(a1, v10, v11, v12) )
          {
            xxxDrawScrollBar(v21, DCEx, 0);
            if ( inited != *((unsigned int **)a1 + 16) )
              goto LABEL_16;
          }
        }
      }
      if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 1) != 0 )
      {
        xxxWindowEvent(0x800Au, (__int64)a1, -6, 1, 1u);
        if ( inited != *((unsigned int **)a1 + 16) )
          goto LABEL_16;
      }
      if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 2) != 0 )
      {
        xxxWindowEvent(0x800Au, (__int64)a1, -6, 5, 1u);
        if ( inited != *((unsigned int **)a1 + 16) )
          goto LABEL_16;
      }
    }
    if ( ((a2 - 1) & 0xFFFFFFFD) == 0 )
    {
      v15 = *inited;
      v16 = a3 ? (4 * a3) | v15 : v15 & 0xFFFFFFF3;
      *inited = v16;
      if ( v16 != v9 )
      {
        v18 = *((_QWORD *)a1 + 5);
        v8 = 1;
        if ( (*(_BYTE *)(v18 + 16) & 2) != 0 && (*(_BYTE *)(v18 + 31) & 0x20) == 0 )
        {
          if ( (unsigned int)IsVisible(a1, v10, v11, v12) )
          {
            xxxDrawScrollBar(v19, DCEx, 1);
            if ( inited != *((unsigned int **)a1 + 16) )
              goto LABEL_16;
          }
        }
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 4) != 0 )
        {
          xxxWindowEvent(0x800Au, (__int64)a1, -5, 1, 1u);
          if ( inited != *((unsigned int **)a1 + 16) )
            goto LABEL_16;
        }
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 8) != 0 )
          xxxWindowEvent(0x800Au, (__int64)a1, -5, 5, 1u);
      }
    }
    v4 = v8;
LABEL_16:
    _ReleaseDC(DCEx);
    return v4;
  }
  return 0LL;
}
