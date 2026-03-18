/*
 * XREFs of ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C010D890
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsMouseInPointerActive @ 0x1C00D5CEC (IsMouseInPointerActive.c)
 */

__int64 __fastcall MiPCheckMsgFilter(struct tagQMSG *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  bool v14; // cf
  bool v15; // cf
  unsigned int v16; // eax
  unsigned int v17; // eax

  if ( !a3 && a4 == -1 )
    return 1LL;
  if ( a3 <= a4 )
  {
    if ( a2 > a4 || a2 < a3 )
      goto LABEL_7;
    return 1LL;
  }
  if ( a2 < a4 || a2 > a3 )
    return 1LL;
LABEL_7:
  if ( !IsMouseInPointerActive(gptiCurrent, (__int64)a1) || (*((_DWORD *)a1 + 25) & 0x800) == 0 )
    return 0LL;
  if ( v8 <= v7 )
  {
    if ( v8 <= 0x257 && v7 >= 0x245 )
      goto LABEL_25;
  }
  else if ( v7 < 0x257 && v8 > 0x245 )
  {
    goto LABEL_25;
  }
  if ( v8 <= v7 )
  {
    if ( v8 > 0x244 || v7 < 0x241 )
      return 0LL;
  }
  else if ( v7 >= 0x244 || v8 <= 0x241 )
  {
    return 0LL;
  }
LABEL_25:
  if ( a2 <= 0x200 )
  {
    if ( a2 != 512 )
    {
      if ( a2 > 0xA7 )
      {
        v10 = a2 - 168;
        if ( !v10 )
          goto LABEL_34;
        v11 = v10 - 1;
        if ( !v11 )
          goto LABEL_45;
        v12 = v11 - 2;
        if ( !v12 )
          goto LABEL_45;
        v13 = v12 - 1;
        if ( !v13 )
        {
LABEL_34:
          if ( !v8 && v7 == -1 )
            return 1;
          if ( v8 <= v7 )
          {
            if ( v8 <= 0x247 && v7 >= 0x247 )
              return 1;
          }
          else if ( v7 > 0x247 || v8 < 0x247 )
          {
            return 1;
          }
          if ( !v8 && v7 == -1 )
            return 1;
          v17 = 579;
          goto LABEL_81;
        }
        if ( v13 == 1 )
        {
LABEL_45:
          if ( !v8 && v7 == -1 )
            return 1;
          if ( v8 <= v7 )
          {
            if ( v8 <= 0x246 && v7 >= 0x246 )
              return 1;
          }
          else if ( v7 > 0x246 || v8 < 0x246 )
          {
            return 1;
          }
          if ( !v8 && v7 == -1 )
            return 1;
          v17 = 578;
LABEL_81:
          if ( v8 <= v7 )
          {
            if ( v8 <= v17 && v7 >= v17 )
              return 1;
          }
          else if ( v7 > v17 || v8 < v17 )
          {
            return 1;
          }
          goto LABEL_51;
        }
        return 0LL;
      }
      if ( a2 >= 0xA6 )
        goto LABEL_45;
      if ( a2 != 160 )
      {
        if ( a2 == 161 )
          goto LABEL_45;
        if ( a2 == 162 )
          goto LABEL_34;
        if ( a2 > 0xA2 )
        {
          if ( a2 > 0xA4 )
            goto LABEL_34;
          goto LABEL_45;
        }
        return 0LL;
      }
    }
LABEL_51:
    if ( !v8 && v7 == -1 )
      return 1;
    if ( v8 <= v7 )
    {
      if ( v8 <= 0x245 && v7 >= 0x245 )
        return 1;
    }
    else if ( v7 > 0x245 || v8 < 0x245 )
    {
      return 1;
    }
    if ( !v8 && v7 == -1 )
      return 1;
    if ( v8 > v7 )
    {
      if ( v7 <= 0x241 )
      {
        v14 = v8 < 0x241;
        goto LABEL_64;
      }
      return 1;
    }
    if ( v8 > 0x241 )
      return v9;
    v15 = v7 < 0x241;
LABEL_68:
    if ( v15 )
      return v9;
    return 1;
  }
  switch ( a2 )
  {
    case 0x201u:
    case 0x203u:
    case 0x204u:
    case 0x206u:
    case 0x207u:
    case 0x209u:
    case 0x20Bu:
    case 0x20Du:
      goto LABEL_45;
    case 0x202u:
    case 0x205u:
    case 0x208u:
    case 0x20Cu:
      goto LABEL_34;
    case 0x20Au:
      if ( !v8 && v7 == -1 )
        return 1;
      v16 = 590;
      break;
    case 0x20Eu:
      if ( !v8 && v7 == -1 )
        return 1;
      v16 = 591;
      break;
    default:
      return 0LL;
  }
  if ( v8 <= v7 )
  {
    if ( v8 > v16 )
      return v9;
    v15 = v7 < v16;
    goto LABEL_68;
  }
  if ( v7 > v16 )
    return 1;
  v14 = v8 < v16;
LABEL_64:
  if ( v14 )
    return 1;
  return v9;
}
