/*
 * XREFs of InternalMapVirtualKeyEx @ 0x1C002F250
 * Callers:
 *     NtUserMapVirtualKeyEx @ 0x1C002F0E0 (NtUserMapVirtualKeyEx.c)
 *     _GetKeyNameText @ 0x1C0091600 (_GetKeyNameText.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017C3CC (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C0180594 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C0185670 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C0185990 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 */

unsigned int __fastcall InternalMapVirtualKeyEx(unsigned int a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r11d
  int v5; // edi
  unsigned int v6; // r10d
  unsigned __int16 v7; // dx
  unsigned __int8 *v8; // rcx
  unsigned int result; // eax
  unsigned __int8 v10; // dl
  char *v11; // rcx
  _BYTE *v12; // rax
  unsigned __int8 *v13; // rcx
  unsigned __int8 *v14; // rcx

  v3 = 0;
  v4 = a1;
  v5 = a2;
  v6 = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
    {
      if ( (_DWORD)a2 == 2 )
      {
        if ( a1 - 65 <= 0x19 )
          return a1;
        a2 = *(_QWORD *)(a3 + 8);
        if ( a2 )
        {
LABEL_56:
          v14 = *(unsigned __int8 **)a2;
          if ( *(_QWORD *)a2 )
          {
            while ( 1 )
            {
              if ( !*v14 )
              {
                a2 += 16LL;
                goto LABEL_56;
              }
              if ( *v14 == v4 )
                break;
              v14 += *(unsigned __int8 *)(a2 + 9);
            }
            LOWORD(result) = *((_WORD *)v14 + 1);
            if ( (_WORD)result == 0xF001 )
              return *(unsigned __int16 *)&v14[*(unsigned __int8 *)(a2 + 9) + 2] | 0x80000000;
            if ( (_WORD)result != 0xF000 )
              return (unsigned __int16)result;
            return 0;
          }
        }
        goto LABEL_51;
      }
      if ( (_DWORD)a2 != 3 )
      {
        if ( (_DWORD)a2 == 4 )
          goto LABEL_2;
LABEL_51:
        UserSetLastError(87LL, a2);
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
        v12 = *(_BYTE **)(a3 + 64);
        goto LABEL_29;
      }
      if ( (a1 & 0xFFFFFF00) == 0xE100 )
      {
        v12 = *(_BYTE **)(a3 + 72);
LABEL_29:
        if ( v12 )
        {
          while ( *((_WORD *)v12 + 1) )
          {
            if ( *v12 == (_BYTE)a1 )
            {
              v6 = (unsigned __int8)v12[2];
              break;
            }
            v12 += 4;
          }
        }
      }
    }
    if ( (_DWORD)a2 == 1 && v6 - 160 <= 5 )
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
      while ( *((_WORD *)v8 + 1) )
      {
        if ( v8[2] == v4 )
        {
          result = *v8;
          if ( v5 == 4 )
            result |= 0xE000u;
          return result;
        }
        v8 += 4;
      }
    }
    if ( v5 == 4 )
    {
      v13 = *(unsigned __int8 **)(a3 + 72);
      if ( v13 )
      {
        while ( *((_WORD *)v13 + 1) )
        {
          if ( v13[2] == v4 )
            return *v13 | 0xE100;
          v13 += 4;
          if ( !v13 )
            break;
        }
      }
    }
    v10 = aVkNumpad;
    v11 = &aVkNumpad;
    if ( aVkNumpad )
    {
      while ( v10 != v4 )
      {
        v10 = *++v11;
        if ( !*v11 )
          return 0;
      }
      return (_DWORD)v11 - (unsigned int)&aVkNumpad + 71;
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
