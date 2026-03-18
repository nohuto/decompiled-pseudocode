/*
 * XREFs of CalcWakeMask @ 0x1C00488C0
 * Callers:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00ED278 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00F2D20 (TransferWakeBit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v5; // eax
  int v6; // r8d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // r10d
  unsigned int v12; // edx
  int v13; // r10d
  unsigned int v14; // eax
  int v15; // r10d
  unsigned int v16; // edx
  int v17; // r10d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // r10d
  unsigned int v22; // eax
  int v23; // r10d

  if ( a3 )
  {
    if ( (a3 & 0x1C07) != 0 )
      a3 |= 0x3C07u;
    result = a3 | 0x98;
    if ( (a3 & 0x98) == 0 )
      result = a3;
  }
  else
  {
    result = 15871LL;
  }
  if ( a1 || a2 != -1 )
  {
    v5 = result & 0xFFFFFEFF;
    v6 = 0;
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 <= 0xA0 && a1 >= 0xA0 )
          goto LABEL_8;
        v7 = 1;
        goto LABEL_9;
      }
      if ( a1 > 0xA0 )
      {
LABEL_8:
        v7 = 0;
        goto LABEL_9;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_99;
    }
    if ( a2 < 0xA0 )
      goto LABEL_8;
    v7 = 1;
LABEL_9:
    if ( v7 )
    {
LABEL_16:
      if ( a1 > a2 )
      {
        if ( a2 >= 0xA9 || a1 <= 0xA1 )
          goto LABEL_18;
        goto LABEL_100;
      }
      if ( a1 > 0xA9 )
      {
LABEL_18:
        v9 = 0;
        goto LABEL_19;
      }
LABEL_99:
      if ( a2 < 0xA1 )
        goto LABEL_18;
LABEL_100:
      v9 = 1;
LABEL_19:
      if ( v9 )
        goto LABEL_25;
      if ( a1 > a2 )
      {
        if ( a2 < 0x20E && a1 > 0x201 )
          goto LABEL_86;
      }
      else if ( a1 <= 0x20E && a2 >= 0x201 )
      {
LABEL_86:
        v10 = 1;
LABEL_23:
        if ( !v10 )
          v5 &= ~4u;
LABEL_25:
        if ( a1 > a2 )
        {
          if ( a2 < 0x109 && a1 > 0x100 )
            goto LABEL_96;
        }
        else if ( a1 <= 0x109 && a2 >= 0x100 )
        {
LABEL_96:
          v11 = 1;
LABEL_28:
          v12 = v5 & 0xFFFFFFFE;
          if ( v11 )
            v12 = v5;
          if ( a1 > a2 )
          {
            if ( a2 < 0xFF && a1 > 0xFF )
              goto LABEL_98;
          }
          else if ( a1 <= 0xFF && a2 >= 0xFF )
          {
LABEL_98:
            v13 = 1;
LABEL_33:
            v14 = v12 & 0xFFFFFBFF;
            if ( v13 )
              v14 = v12;
            if ( a1 > a2 )
            {
              if ( a2 < 0x240 && a1 > 0x240 )
                goto LABEL_134;
            }
            else if ( a1 <= 0x240 && a2 >= 0x240 )
            {
LABEL_134:
              v15 = 1;
LABEL_38:
              v16 = v14;
              if ( v15 )
              {
LABEL_45:
                if ( a1 > a2 )
                {
                  if ( a2 >= 0x257 || a1 <= 0x245 )
                    goto LABEL_47;
                  goto LABEL_78;
                }
                if ( a1 > 0x257 )
                {
LABEL_47:
                  v18 = 0;
                  goto LABEL_48;
                }
LABEL_77:
                if ( a2 < 0x245 )
                  goto LABEL_47;
LABEL_78:
                v18 = 1;
LABEL_48:
                if ( v18 )
                  goto LABEL_58;
                if ( a1 > a2 )
                {
                  if ( a2 < 0x244 && a1 > 0x241 )
                    goto LABEL_145;
                }
                else if ( a1 <= 0x244 && a2 >= 0x241 )
                {
LABEL_145:
                  v19 = 1;
LABEL_52:
                  if ( v19 )
                    goto LABEL_58;
                  if ( a1 > a2 )
                  {
                    if ( a2 < 0x238 && a1 > 0x238 )
                      goto LABEL_148;
                  }
                  else if ( a1 <= 0x238 && a2 >= 0x238 )
                  {
LABEL_148:
                    v20 = 1;
LABEL_56:
                    if ( !v20 )
                      v16 &= ~0x1000u;
LABEL_58:
                    if ( a1 )
                    {
                      if ( a1 > a2 )
                      {
                        if ( a2 <= 0xF && a1 >= 0xF )
                          goto LABEL_61;
                        v21 = 1;
                        goto LABEL_62;
                      }
                      if ( a1 > 0xF )
                      {
LABEL_61:
                        v21 = 0;
                        goto LABEL_62;
                      }
                    }
                    else if ( a2 == -1 )
                    {
                      goto LABEL_74;
                    }
                    if ( a2 < 0xF )
                      goto LABEL_61;
                    v21 = 1;
LABEL_62:
                    v22 = v16 & 0xFFFFFFDF;
                    if ( v21 )
                      v22 = v16;
                    if ( a1 )
                    {
                      if ( a1 > a2 )
                      {
                        if ( a2 <= 0x113 && a1 >= 0x113 )
                          goto LABEL_67;
                        v23 = 1;
                        goto LABEL_68;
                      }
                      if ( a1 > 0x113 )
                      {
LABEL_67:
                        v23 = 0;
                        goto LABEL_68;
                      }
                    }
                    else
                    {
                      v16 = v22;
                      if ( a2 == -1 )
                        goto LABEL_74;
                    }
                    if ( a2 < 0x113 )
                      goto LABEL_67;
                    v23 = 1;
LABEL_68:
                    v16 = v22;
                    if ( !v23 )
                    {
                      if ( a1 )
                      {
                        if ( a1 > a2 )
                        {
                          if ( a2 <= 0x118 && a1 >= 0x118 )
                          {
LABEL_72:
                            v16 = v22;
                            if ( !v6 )
                              v16 = v22 & 0xFFFFFFEF;
                            goto LABEL_74;
                          }
LABEL_94:
                          v6 = 1;
                          goto LABEL_72;
                        }
                        if ( a1 > 0x118 )
                          goto LABEL_72;
LABEL_93:
                        if ( a2 < 0x118 )
                          goto LABEL_72;
                        goto LABEL_94;
                      }
                      if ( a2 != -1 )
                        goto LABEL_93;
                    }
LABEL_74:
                    result = v16 | 0x3C07;
                    if ( a1 != 35 )
                      return v16;
                    return result;
                  }
                  v20 = 0;
                  goto LABEL_56;
                }
                v19 = 0;
                goto LABEL_52;
              }
              if ( a1 )
              {
                if ( a1 > a2 )
                {
                  if ( a2 <= 0x11B && a1 >= 0x11B )
                    goto LABEL_42;
                  v17 = 1;
                  goto LABEL_43;
                }
                if ( a1 > 0x11B )
                {
LABEL_42:
                  v17 = 0;
                  goto LABEL_43;
                }
              }
              else if ( a2 == -1 )
              {
                goto LABEL_77;
              }
              if ( a2 < 0x11B )
                goto LABEL_42;
              v17 = 1;
LABEL_43:
              v16 = v14;
              if ( !v17 )
                v16 = v14 & 0xFFFFF7FF;
              goto LABEL_45;
            }
            v15 = 0;
            goto LABEL_38;
          }
          v13 = 0;
          goto LABEL_33;
        }
        v11 = 0;
        goto LABEL_28;
      }
      v10 = 0;
      goto LABEL_23;
    }
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 <= 0x200 && a1 >= 0x200 )
          goto LABEL_13;
        v8 = 1;
        goto LABEL_14;
      }
      if ( a1 > 0x200 )
      {
LABEL_13:
        v8 = 0;
        goto LABEL_14;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_99;
    }
    if ( a2 < 0x200 )
      goto LABEL_13;
    v8 = 1;
LABEL_14:
    if ( !v8 )
      v5 &= ~2u;
    goto LABEL_16;
  }
  return result;
}
