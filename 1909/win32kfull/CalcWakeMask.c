/*
 * XREFs of CalcWakeMask @ 0x1C003E910
 * Callers:
 *     AdjustPwndPtiPqForDelegation @ 0x1C002BDB0 (AdjustPwndPtiPqForDelegation.c)
 *     TransferWakeBit @ 0x1C003B44C (TransferWakeBit.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00EBE74 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6; // eax
  int v7; // r8d
  int v8; // r10d
  unsigned int v9; // edx
  int v10; // r10d
  unsigned int v11; // eax
  int v12; // r10d
  unsigned int v13; // edx
  unsigned int v14; // r8d

  if ( a3 )
  {
    v14 = a3 | 0x3C07;
    if ( (a3 & 0x1C07) == 0 )
      v14 = a3;
    result = v14 | 0x98;
    if ( (v14 & 0x98) == 0 )
      result = v14;
  }
  else
  {
    result = 15871LL;
  }
  if ( a1 || a2 != -1 )
  {
    v6 = result & 0xFFFFFEFF;
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 > 0xA0 || a1 < 0xA0 )
          goto LABEL_12;
LABEL_8:
        if ( a1 )
        {
          if ( a1 > a2 )
          {
            if ( a2 <= 0x200 && a1 >= 0x200 )
              goto LABEL_11;
            goto LABEL_12;
          }
          if ( a1 > 0x200 )
          {
LABEL_11:
            v6 &= ~2u;
            goto LABEL_12;
          }
        }
        else if ( a2 == -1 )
        {
          goto LABEL_79;
        }
        if ( a2 < 0x200 )
          goto LABEL_11;
LABEL_12:
        if ( a1 > a2 )
        {
          if ( a2 < 0xA9 && a1 > 0xA1 )
            goto LABEL_18;
          goto LABEL_14;
        }
        if ( a1 > 0xA9 )
        {
LABEL_14:
          if ( a1 > a2 )
          {
            if ( a2 >= 0x20E || a1 <= 0x201 )
              goto LABEL_17;
          }
          else if ( a1 > 0x20E || a2 < 0x201 )
          {
LABEL_17:
            v6 &= ~4u;
          }
LABEL_18:
          v7 = 0;
          if ( a1 > a2 )
          {
            if ( a2 < 0x109 && a1 > 0x100 )
              goto LABEL_76;
          }
          else if ( a1 <= 0x109 && a2 >= 0x100 )
          {
LABEL_76:
            v8 = 1;
LABEL_21:
            v9 = v6 & 0xFFFFFFFE;
            if ( v8 )
              v9 = v6;
            if ( a1 > a2 )
            {
              if ( a2 < 0xFF && a1 > 0xFF )
                goto LABEL_78;
            }
            else if ( a1 <= 0xFF && a2 >= 0xFF )
            {
LABEL_78:
              v10 = 1;
LABEL_26:
              v11 = v9 & 0xFFFFFBFF;
              if ( v10 )
                v11 = v9;
              if ( a1 > a2 )
              {
                if ( a2 >= 0x240 || a1 <= 0x240 )
                  goto LABEL_31;
              }
              else if ( a1 > 0x240 || a2 < 0x240 )
              {
LABEL_31:
                v12 = 0;
                goto LABEL_32;
              }
              v12 = 1;
LABEL_32:
              v13 = v11;
              if ( v12 )
                goto LABEL_38;
              if ( a1 )
              {
                if ( a1 > a2 )
                {
                  if ( a2 <= 0x11B && a1 >= 0x11B )
                  {
LABEL_36:
                    v13 = v11;
                    if ( !v7 )
                      v13 = v11 & 0xFFFFF7FF;
LABEL_38:
                    if ( a1 > a2 )
                    {
                      if ( a2 < 0x257 && a1 > 0x245 )
                        goto LABEL_47;
                      goto LABEL_41;
                    }
                    if ( a1 > 0x257 )
                    {
LABEL_41:
                      if ( a1 > a2 )
                      {
                        if ( a2 < 0x244 && a1 > 0x241 )
                          goto LABEL_47;
                      }
                      else if ( a1 <= 0x244 && a2 >= 0x241 )
                      {
                        goto LABEL_47;
                      }
                      if ( a1 <= a2 )
                      {
                        if ( a1 <= 0x238 && a2 >= 0x238 )
                          goto LABEL_47;
LABEL_46:
                        v13 &= ~0x1000u;
                        goto LABEL_47;
                      }
                      if ( a2 >= 0x238 || a1 <= 0x238 )
                        goto LABEL_46;
LABEL_47:
                      if ( a1 )
                      {
                        if ( a1 > a2 )
                        {
                          if ( a2 <= 0xF && a1 >= 0xF )
                            goto LABEL_50;
                          goto LABEL_51;
                        }
                        if ( a1 > 0xF )
                        {
LABEL_50:
                          v13 &= ~0x20u;
                          goto LABEL_51;
                        }
                      }
                      else if ( a2 == -1 )
                      {
                        goto LABEL_58;
                      }
                      if ( a2 < 0xF )
                        goto LABEL_50;
LABEL_51:
                      if ( a1 )
                      {
                        if ( a1 > a2 )
                        {
                          if ( a2 > 0x113 || a1 < 0x113 )
                            goto LABEL_58;
                          goto LABEL_54;
                        }
                        if ( a1 > 0x113 )
                        {
LABEL_54:
                          if ( a1 )
                          {
                            if ( a1 > a2 )
                            {
                              if ( a2 > 0x118 || a1 < 0x118 )
                                goto LABEL_58;
                              goto LABEL_57;
                            }
                            if ( a1 > 0x118 )
                            {
LABEL_57:
                              v13 &= ~0x10u;
                              goto LABEL_58;
                            }
                          }
                          else if ( a2 == -1 )
                          {
                            goto LABEL_58;
                          }
                          if ( a2 < 0x118 )
                            goto LABEL_57;
LABEL_58:
                          result = v13 | 0x3C07;
                          if ( a1 != 35 )
                            return v13;
                          return result;
                        }
                      }
                      else if ( a2 == -1 )
                      {
                        goto LABEL_58;
                      }
                      if ( a2 >= 0x113 )
                        goto LABEL_58;
                      goto LABEL_54;
                    }
LABEL_40:
                    if ( a2 >= 0x245 )
                      goto LABEL_47;
                    goto LABEL_41;
                  }
LABEL_68:
                  v7 = 1;
                  goto LABEL_36;
                }
                if ( a1 > 0x11B )
                  goto LABEL_36;
              }
              else if ( a2 == -1 )
              {
                goto LABEL_40;
              }
              if ( a2 < 0x11B )
                goto LABEL_36;
              goto LABEL_68;
            }
            v10 = 0;
            goto LABEL_26;
          }
          v8 = 0;
          goto LABEL_21;
        }
LABEL_79:
        if ( a2 >= 0xA1 )
          goto LABEL_18;
        goto LABEL_14;
      }
      if ( a1 > 0xA0 )
        goto LABEL_8;
    }
    else if ( a2 == -1 )
    {
      goto LABEL_79;
    }
    if ( a2 >= 0xA0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  return result;
}
