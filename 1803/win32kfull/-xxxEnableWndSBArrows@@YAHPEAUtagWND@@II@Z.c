/*
 * XREFs of ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D997C
 * Callers:
 *     xxxSetScrollBar @ 0x1C00D9304 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C00D9948 (xxxEnableScrollBar.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     _InitPwSB @ 0x1C0038CEC (_InitPwSB.c)
 *     xxxDrawScrollBar @ 0x1C012F578 (xxxDrawScrollBar.c)
 */

__int64 __fastcall xxxEnableWndSBArrows(struct tagWND *a1, int a2, int a3)
{
  unsigned int *inited; // rbx
  unsigned int v4; // edi
  int v8; // r12d
  unsigned int v9; // r14d
  HDC DCEx; // rbp
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 v16; // rcx
  struct tagWND *v17; // rcx
  __int64 v18; // rcx
  struct tagWND *v19; // rcx

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
    if ( a2 && a2 != 3 )
      goto LABEL_44;
    v11 = *inited;
    v12 = a3 ? a3 | v11 : v11 & 0xFFFFFFFC;
    *inited = v12;
    if ( v12 == v9
      || (v18 = *((_QWORD *)a1 + 5), v8 = 1, v9 = v12, (*(_BYTE *)(v18 + 16) & 4) == 0)
      || (*(_BYTE *)(v18 + 31) & 0x20) != 0
      || !(unsigned int)IsVisible((__int64)a1)
      || (xxxDrawScrollBar(v19, DCEx, 0), inited == *((unsigned int **)a1 + 16)) )
    {
      if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 1) == 0
        || (xxxWindowEvent(0x800Au, (__int64)a1, -6, 1, 1), inited == *((unsigned int **)a1 + 16)) )
      {
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 2) == 0
          || (xxxWindowEvent(0x800Au, (__int64)a1, -6, 5, 1), inited == *((unsigned int **)a1 + 16)) )
        {
LABEL_44:
          if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
            goto LABEL_15;
          v13 = *inited;
          v14 = a3 ? (4 * a3) | v13 : v13 & 0xFFFFFFF3;
          *inited = v14;
          if ( v14 == v9 )
            goto LABEL_15;
          v16 = *((_QWORD *)a1 + 5);
          v8 = 1;
          if ( (*(_BYTE *)(v16 + 16) & 2) == 0
            || (*(_BYTE *)(v16 + 31) & 0x20) != 0
            || !(unsigned int)IsVisible((__int64)a1)
            || (xxxDrawScrollBar(v17, DCEx, 1), inited == *((unsigned int **)a1 + 16)) )
          {
            if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 4) != 0 )
            {
              xxxWindowEvent(0x800Au, (__int64)a1, -5, 1, 1);
              if ( inited != *((unsigned int **)a1 + 16) )
                goto LABEL_16;
            }
            if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 8) != 0 )
              xxxWindowEvent(0x800Au, (__int64)a1, -5, 5, 1);
LABEL_15:
            v4 = v8;
LABEL_16:
            _ReleaseDC(DCEx);
            return v4;
          }
        }
      }
    }
    _ReleaseDC(DCEx);
  }
  return 0LL;
}
