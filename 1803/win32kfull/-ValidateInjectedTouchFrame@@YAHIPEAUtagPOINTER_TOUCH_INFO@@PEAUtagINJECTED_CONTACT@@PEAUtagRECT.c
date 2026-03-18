/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01A8AA0
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01A9474 (xxxInjectTouchInput.c)
 * Callees:
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 */

__int64 __fastcall ValidateInjectedTouchFrame(
        unsigned int a1,
        struct tagPOINTER_TOUCH_INFO *a2,
        struct tagINJECTED_CONTACT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int v9; // ebx
  unsigned __int64 *v10; // r11
  __int64 v11; // r11
  unsigned int v12; // ecx
  _DWORD *v13; // r8
  unsigned int v14; // edx
  _DWORD *i; // rax
  unsigned int *j; // rcx
  unsigned int v18; // edx
  unsigned int v19; // edx
  int v20; // r8d
  bool v21; // zf

  v5 = 0;
  v9 = 0;
  if ( !a1 )
  {
LABEL_5:
    v12 = v5;
    if ( a5 > v5 )
    {
      v13 = (_DWORD *)((char *)a3 + 8);
      do
      {
        if ( ((*v13 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          v14 = v5;
          if ( !a1 )
            return 0LL;
          for ( i = (_DWORD *)((char *)a2 + 4); *i != v12; i += 36 )
          {
            if ( ++v14 >= a1 )
              return 0LL;
          }
        }
        ++v12;
        v13 += 3;
      }
      while ( v12 < a5 );
    }
    if ( !a1 )
      return 1LL;
    for ( j = (unsigned int *)((char *)a2 + 4); ; j += 36 )
    {
      v18 = j[2];
      if ( (v18 & 0x8000) != 0 && ((v18 - 163840) & 0xFFFDFFFF) != 0 )
        return 0LL;
      v19 = v18 & 0xFFFF7FFF;
      v20 = *((_DWORD *)a3 + 3 * *j + 2);
      switch ( v19 )
      {
        case 0x10006u:
          goto LABEL_26;
        case 0x20000u:
          v21 = ((v20 - 131074) & 0xFFFDFFFF) == 0;
          break;
        case 0x20002u:
LABEL_26:
          v21 = ((v20 - 0x20000) & 0xFFFDFFFD) == 0;
          break;
        case 0x20006u:
        case 0x40000u:
        case 0x40002u:
          v21 = ((v20 - 65542) & 0xFFFEFFFF) == 0;
          break;
        default:
          goto LABEL_28;
      }
      if ( !v21 )
        return 0LL;
LABEL_28:
      if ( ((v19 & 2) == 0 || v19 == 262146)
        && (j[7] != *((_DWORD *)a3 + 3 * *j) || j[8] != *((_DWORD *)a3 + 3 * *j + 1)) )
      {
        return 0LL;
      }
      if ( ++v5 >= a1 )
        return 1LL;
    }
  }
  v10 = (unsigned __int64 *)((char *)a2 + 32);
  while ( PtInRect(a4, *v10) )
  {
    ++v9;
    v10 = (unsigned __int64 *)(v11 + 144);
    if ( v9 >= a1 )
      goto LABEL_5;
  }
  return 0LL;
}
