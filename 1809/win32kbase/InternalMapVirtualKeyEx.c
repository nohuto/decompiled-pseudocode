/*
 * XREFs of InternalMapVirtualKeyEx @ 0x1C002BAC0
 * Callers:
 *     NtUserMapVirtualKeyEx @ 0x1C002B980 (NtUserMapVirtualKeyEx.c)
 *     _GetKeyNameText @ 0x1C0066750 (_GetKeyNameText.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C014E124 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01521F0 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01524E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

unsigned int __fastcall InternalMapVirtualKeyEx(unsigned int a1, int a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r11d
  unsigned int v6; // r10d
  unsigned __int16 v7; // dx
  unsigned __int8 *v8; // rcx
  __int16 v9; // dx
  __int16 v10; // ax
  unsigned __int8 v11; // dl
  __int64 *v12; // rcx
  unsigned int result; // eax
  _BYTE *v14; // rax
  unsigned __int8 *i; // rcx
  __int16 v16; // ax
  unsigned __int8 **v17; // rdx
  unsigned __int8 *v18; // rcx

  v3 = 0;
  v4 = a1;
  v6 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        if ( a1 - 65 <= 0x19 )
          return a1;
        v17 = *(unsigned __int8 ***)(a3 + 8);
        if ( v17 )
        {
LABEL_56:
          v18 = *v17;
          if ( *v17 )
          {
            while ( 1 )
            {
              if ( !*v18 )
              {
                v17 += 2;
                goto LABEL_56;
              }
              if ( *v18 == v4 )
                break;
              v18 += *((unsigned __int8 *)v17 + 9);
            }
            LOWORD(result) = *((_WORD *)v18 + 1);
            if ( (_WORD)result == 0xF001 )
              return *(unsigned __int16 *)&v18[*((unsigned __int8 *)v17 + 9) + 2] | 0x80000000;
            if ( (_WORD)result != 0xF000 )
              return (unsigned __int16)result;
            return 0;
          }
        }
        goto LABEL_51;
      }
      if ( a2 != 3 )
      {
        if ( a2 == 4 )
          goto LABEL_2;
LABEL_51:
        UserSetLastError(87LL);
        return 0;
      }
    }
    if ( a1 < *(unsigned __int8 *)(a3 + 56) )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * a1);
    }
    else
    {
      if ( (a1 & 0xFFFFFF00) == 0xE000 )
      {
        v14 = *(_BYTE **)(a3 + 64);
        goto LABEL_29;
      }
      if ( (a1 & 0xFFFFFF00) == 0xE100 )
      {
        v14 = *(_BYTE **)(a3 + 72);
LABEL_29:
        if ( v14 )
        {
          while ( *((_WORD *)v14 + 1) )
          {
            if ( *v14 == (_BYTE)a1 )
            {
              v6 = (unsigned __int8)v14[2];
              break;
            }
            v14 += 4;
          }
        }
      }
    }
    if ( a2 == 1 && v6 - 160 <= 5 )
      v6 = ((v6 - 160) >> 1) + 16;
    if ( v6 != 255 )
      return v6;
    return v3;
  }
LABEL_2:
  if ( a1 - 16 <= 2 )
    v4 = 2 * a1 + 128;
  v7 = 0;
  if ( !*(_BYTE *)(a3 + 56) )
  {
LABEL_7:
    v8 = *(unsigned __int8 **)(a3 + 64);
    if ( v8 )
    {
      v9 = *((_WORD *)v8 + 1);
      if ( v9 )
      {
        while ( (unsigned __int8)v9 != v4 )
        {
          v10 = *((_WORD *)v8 + 3);
          v8 += 4;
          LOBYTE(v9) = v10;
          if ( !v10 )
            goto LABEL_11;
        }
        result = *v8;
        if ( a2 == 4 )
          result |= 0xE000u;
        return result;
      }
    }
LABEL_11:
    if ( a2 == 4 )
    {
      for ( i = *(unsigned __int8 **)(a3 + 72); i; i += 4 )
      {
        v16 = *((_WORD *)i + 1);
        if ( !v16 )
          break;
        if ( (unsigned __int8)v16 == v4 )
          return *i | 0xE100;
      }
    }
    v11 = aVkNumpad;
    v12 = &aVkNumpad;
    if ( (_BYTE)aVkNumpad )
    {
      while ( v11 != v4 )
      {
        v12 = (__int64 *)((char *)v12 + 1);
        v11 = *(_BYTE *)v12;
        if ( !*(_BYTE *)v12 )
          return 0;
      }
      return (_DWORD)v12 - (unsigned int)&aVkNumpad + 71;
    }
    return 0;
  }
  while ( *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * v7) != v4 )
  {
    if ( ++v7 >= *(unsigned __int8 *)(a3 + 56) )
      goto LABEL_7;
  }
  return (unsigned __int8)v7;
}
