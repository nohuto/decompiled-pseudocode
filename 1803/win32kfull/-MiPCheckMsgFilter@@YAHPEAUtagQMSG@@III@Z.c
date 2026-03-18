/*
 * XREFs of ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00EBEDC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsMouseInPointerActive @ 0x1C00EBF68 (IsMouseInPointerActive.c)
 */

__int64 __fastcall MiPCheckMsgFilter(struct tagQMSG *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  bool v20; // cf
  int v21; // eax
  bool v22; // cf
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // eax

  if ( !a3 && a4 == -1 )
    return 1LL;
  if ( a3 > a4 )
  {
    if ( a2 < a4 || a2 > a3 )
    {
      v7 = 1;
      goto LABEL_7;
    }
LABEL_10:
    v7 = 0;
    goto LABEL_7;
  }
  if ( a2 < a3 )
    goto LABEL_10;
  v7 = 1;
  if ( a2 > a4 )
    goto LABEL_10;
LABEL_7:
  if ( v7 )
    return 1LL;
  if ( !(unsigned int)IsMouseInPointerActive(gptiCurrent) || (*((_DWORD *)a1 + 25) & 0x800) == 0 )
    return 0LL;
  if ( v10 <= v8 )
  {
    if ( v10 > 0x257 || v8 < 0x245 )
      goto LABEL_18;
  }
  else if ( v8 >= 0x257 || v10 <= 0x245 )
  {
LABEL_18:
    v11 = v9;
    goto LABEL_19;
  }
  v11 = 1;
LABEL_19:
  if ( v11 )
    goto LABEL_25;
  if ( v10 <= v8 )
  {
    if ( v10 > 0x244 || v8 < 0x241 )
      goto LABEL_23;
  }
  else if ( v8 >= 0x244 || v10 <= 0x241 )
  {
LABEL_23:
    v12 = v9;
    goto LABEL_24;
  }
  v12 = 1;
LABEL_24:
  if ( !v12 )
    return 0LL;
LABEL_25:
  if ( a2 <= 0x200 )
  {
    if ( a2 == 512 )
      goto LABEL_57;
    if ( a2 > 0xA7 )
    {
      v14 = a2 - 168;
      if ( !v14 )
        goto LABEL_34;
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_51;
      v16 = v15 - 2;
      if ( !v16 )
        goto LABEL_51;
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_34;
      if ( v17 == 1 )
        goto LABEL_51;
    }
    else
    {
      if ( a2 >= 0xA6 )
        goto LABEL_51;
      switch ( a2 )
      {
        case 0xA0u:
          goto LABEL_57;
        case 0xA1u:
          goto LABEL_51;
        case 0xA2u:
LABEL_34:
          if ( !v10 && v8 == -1 )
            return 1;
          if ( v10 <= v8 )
          {
            if ( v10 <= 0x247 )
            {
              v13 = 1;
              if ( v8 >= 0x247 )
                goto LABEL_95;
            }
          }
          else if ( v8 > 0x247 || v10 < 0x247 )
          {
            v13 = 1;
            goto LABEL_95;
          }
          v13 = v9;
LABEL_95:
          if ( v13 || !v10 && v8 == -1 )
            return 1;
          v24 = 579;
LABEL_99:
          if ( v10 <= v8 )
          {
            if ( v10 <= v24 )
            {
              v20 = v8 < v24;
              v25 = 1;
              if ( !v20 )
              {
LABEL_106:
                if ( v25 )
                  return 1;
LABEL_57:
                if ( !v10 && v8 == -1 )
                  return 1;
                if ( v10 <= v8 )
                {
                  if ( v10 <= 0x245 )
                  {
                    v19 = 1;
                    if ( v8 >= 0x245 )
                    {
LABEL_66:
                      if ( v19 || !v10 && v8 == -1 )
                        return 1;
                      if ( v10 > v8 )
                      {
                        if ( v8 > 0x241 )
                        {
LABEL_73:
                          v21 = 1;
                          goto LABEL_78;
                        }
                        v20 = v10 < 0x241;
                        goto LABEL_72;
                      }
                      if ( v10 <= 0x241 )
                      {
                        v22 = v8 < 0x241;
                        goto LABEL_76;
                      }
                      goto LABEL_77;
                    }
                  }
                }
                else if ( v8 > 0x245 || v10 < 0x245 )
                {
                  v19 = 1;
                  goto LABEL_66;
                }
                v19 = v9;
                goto LABEL_66;
              }
            }
          }
          else if ( v8 > v24 || v10 < v24 )
          {
            v25 = 1;
            goto LABEL_106;
          }
          v25 = v9;
          goto LABEL_106;
      }
      if ( a2 > 0xA2 )
      {
        if ( a2 > 0xA4 )
          goto LABEL_34;
LABEL_51:
        if ( !v10 && v8 == -1 )
          return 1;
        if ( v10 <= v8 )
        {
          if ( v10 <= 0x246 )
          {
            v18 = 1;
            if ( v8 >= 0x246 )
              goto LABEL_88;
          }
        }
        else if ( v8 > 0x246 || v10 < 0x246 )
        {
          v18 = 1;
          goto LABEL_88;
        }
        v18 = v9;
LABEL_88:
        if ( v18 || !v10 && v8 == -1 )
          return 1;
        v24 = 578;
        goto LABEL_99;
      }
    }
    return 0LL;
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
      goto LABEL_51;
    case 0x202u:
    case 0x205u:
    case 0x208u:
    case 0x20Cu:
      goto LABEL_34;
    case 0x20Au:
      if ( !v10 && v8 == -1 )
        return 1;
      v23 = 590;
      break;
    case 0x20Eu:
      if ( !v10 && v8 == -1 )
        return 1;
      v23 = 591;
      break;
    default:
      return 0LL;
  }
  if ( v10 > v8 )
  {
    if ( v8 > v23 )
      goto LABEL_73;
    v20 = v10 < v23;
LABEL_72:
    if ( v20 )
      goto LABEL_73;
    goto LABEL_77;
  }
  if ( v10 <= v23 )
  {
    v22 = v8 < v23;
LABEL_76:
    v21 = 1;
    if ( !v22 )
      goto LABEL_78;
  }
LABEL_77:
  v21 = v9;
LABEL_78:
  if ( v21 )
    return 1;
  return v9;
}
