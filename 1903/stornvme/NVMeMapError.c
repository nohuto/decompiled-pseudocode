/*
 * XREFs of NVMeMapError @ 0x1C0015E8C
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0003C80 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     GetSrbScsiData @ 0x1C0002D68 (GetSrbScsiData.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C0004EA8 (NVMeIsAllowedWithinThrottleLimit.c)
 *     memmove @ 0x1C00050C0 (memmove.c)
 *     GetLunExtension @ 0x1C0013998 (GetLunExtension.c)
 */

void *__fastcall NVMeMapError(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // r13
  char v5; // si
  __int128 v6; // xmm2
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 LunExtension; // rax
  __int64 v10; // rdi
  unsigned int v11; // edx
  unsigned int v12; // r15d
  unsigned int v13; // edx
  unsigned int v14; // edx
  int v15; // ecx
  bool v16; // zf
  char v17; // al
  int v18; // ecx
  bool v19; // zf
  unsigned int v20; // edx
  void *result; // rax
  char *v22; // rdi
  unsigned __int8 v23; // bl
  char *v24; // [rsp+D0h] [rbp-80h] BYREF
  void *v25; // [rsp+D8h] [rbp-78h] BYREF
  __int64 Src; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-68h]
  __int16 v28; // [rsp+F0h] [rbp-60h]
  __int128 v29; // [rsp+100h] [rbp-50h]
  __int128 v30; // [rsp+120h] [rbp-30h]
  __int128 v31; // [rsp+130h] [rbp-20h]
  unsigned __int8 v32; // [rsp+190h] [rbp+40h] BYREF
  int v33; // [rsp+198h] [rbp+48h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v5 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v6 = *(_OWORD *)(SrbExtension + 4096);
  v32 = 0;
  v7 = *(_OWORD *)(SrbExtension + 4128);
  v33 = 0;
  v8 = *(_OWORD *)(SrbExtension + 4144);
  v29 = v6;
  Src = 0LL;
  v27 = 0LL;
  v28 = 0;
  v30 = v7;
  v31 = v8;
  if ( (unsigned __int8)v6 <= 0x11u )
  {
    if ( (unsigned __int8)v6 != 17 )
    {
      if ( (_BYTE)v6 )
      {
        switch ( (unsigned __int8)v6 )
        {
          case 1u:
            if ( !NVMeIsAllowedWithinThrottleLimit(a1, 2, &v33) )
              goto LABEL_24;
            break;
          case 2u:
            if ( !NVMeIsAllowedWithinThrottleLimit(a1, 1, &v33) )
              goto LABEL_24;
            break;
          case 0x10u:
            goto LABEL_21;
          default:
            goto LABEL_24;
        }
      }
      else if ( !NVMeIsAllowedWithinThrottleLimit(a1, 0, &v33) )
      {
        goto LABEL_24;
      }
      LunExtension = GetLunExtension(a1, SDWORD1(v29));
      StorPortExtendedFunction(86LL, a1, LunExtension);
      goto LABEL_24;
    }
LABEL_21:
    StorPortExtendedFunction(87LL, a1, 0LL);
    goto LABEL_24;
  }
  if ( (unsigned __int8)v6 < 0x19u )
    goto LABEL_24;
  if ( (unsigned __int8)v6 <= 0x1Au )
  {
    if ( !NVMeIsAllowedWithinThrottleLimit(a1, 3, &v33) )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( (unsigned __int8)v6 == 128 )
    goto LABEL_21;
  if ( (unsigned int)(unsigned __int8)v6 - 129 <= 1 && NVMeIsAllowedWithinThrottleLimit(a1, 4, &v33) )
  {
LABEL_23:
    v10 = GetLunExtension(a1, SDWORD1(v29));
    StorPortExtendedFunction(87LL, a1, v10);
  }
LABEL_24:
  v11 = *(unsigned __int16 *)(SrbExtension + 4250);
  v12 = 18;
  if ( ((v11 >> 9) & 7) == 0 )
  {
    v20 = v11 >> 1;
    if ( (unsigned __int8)v20 > 0x80u )
    {
      if ( (unsigned __int8)v20 != 129 )
      {
        if ( (unsigned __int8)v20 == 130 )
        {
          *(_BYTE *)(a2 + 3) = 4;
          LOBYTE(Src) = -16;
          v5 = 2;
          HIBYTE(Src) = 10;
          BYTE2(Src) = 2;
          if ( *(__int16 *)(SrbExtension + 4250) >= 0 )
            WORD2(v27) = 260;
          else
            WORD2(v27) = 4;
          goto LABEL_142;
        }
        if ( (unsigned __int8)v20 != 131 )
        {
LABEL_141:
          *(_BYTE *)(a2 + 3) = 4;
          goto LABEL_142;
        }
        v5 = 24;
        WORD2(v27) = 2348;
        v17 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_140;
      }
LABEL_137:
      v17 = BYTE2(Src) & 0xF0 | 3;
      goto LABEL_138;
    }
    if ( (unsigned __int8)v20 == 128 )
    {
      WORD2(v27) = 33;
      v17 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_139;
    }
    if ( (unsigned __int8)v20 > 0xEu )
    {
      if ( (unsigned __int8)v20 <= 0x16u )
      {
        if ( (unsigned __int8)v20 == 22 )
          goto LABEL_56;
        if ( (unsigned __int8)v20 == 15 || (unsigned __int8)v20 == 16 || (unsigned __int8)v20 == 17 )
          goto LABEL_76;
        if ( (unsigned __int8)v20 != 18 )
        {
          if ( (unsigned __int8)v20 == 19 || (unsigned __int8)v20 == 20 )
            goto LABEL_56;
          if ( (unsigned __int8)v20 != 21 )
            goto LABEL_141;
        }
        goto LABEL_120;
      }
      switch ( (unsigned __int8)v20 )
      {
        case 0x18u:
          goto LABEL_56;
        case 0x19u:
          WORD2(v27) = 42;
          v17 = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_139;
        case 0x1Au:
          goto LABEL_56;
      }
      if ( (unsigned __int8)v20 != 27 )
      {
        if ( (unsigned __int8)v20 != 28 )
        {
          v16 = (unsigned __int8)v20 == 30;
LABEL_55:
          if ( !v16 )
            goto LABEL_141;
          goto LABEL_56;
        }
        v17 = BYTE2(Src) & 0xF0 | 4;
LABEL_138:
        WORD2(v27) = 0;
        goto LABEL_139;
      }
    }
    else
    {
      if ( (unsigned __int8)v20 == 14 )
        goto LABEL_76;
      if ( (unsigned __int8)v20 > 7u )
      {
        if ( (unsigned __int8)v20 != 8 && (unsigned __int8)v20 != 9 && (unsigned __int8)v20 != 10 )
        {
          if ( (unsigned __int8)v20 == 11 )
          {
            WORD2(v27) = 2336;
            v17 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_139;
          }
          v18 = (unsigned __int8)v20 - 12;
          if ( (unsigned __int8)v20 == 12 )
          {
            WORD2(v27) = 44;
            v17 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_139;
          }
          goto LABEL_75;
        }
      }
      else if ( (unsigned __int8)v20 != 7 )
      {
        if ( !(_BYTE)v20 )
        {
          *(_BYTE *)(a2 + 3) = 1;
          v5 = 0;
          goto LABEL_142;
        }
        if ( (unsigned __int8)v20 != 1 )
        {
          if ( (unsigned __int8)v20 == 2 )
            goto LABEL_56;
          if ( (unsigned __int8)v20 == 3 )
          {
            WORD2(v27) = 35;
            v17 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_139;
          }
          if ( (unsigned __int8)v20 != 4 )
          {
            if ( (unsigned __int8)v20 != 5 )
            {
              if ( (unsigned __int8)v20 != 6 )
                goto LABEL_141;
              WORD2(v27) = 68;
              v17 = BYTE2(Src) & 0xF0 | 4;
              goto LABEL_139;
            }
            v5 = 34;
            WORD2(v27) = 2059;
            v17 = BYTE2(Src) & 0xF0 | 0xB;
LABEL_140:
            BYTE2(Src) = v17;
            HIBYTE(Src) = 10;
            LOBYTE(Src) = -16;
            goto LABEL_141;
          }
          goto LABEL_137;
        }
LABEL_120:
        WORD2(v27) = 32;
        v17 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_139;
      }
    }
    v5 = 34;
    v17 = BYTE2(Src) & 0xF0 | 0xB;
    WORD2(v27) = 0;
    goto LABEL_140;
  }
  if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) == 1 )
  {
    v14 = v11 >> 1;
    if ( (unsigned __int8)v14 > 0x80u )
    {
      v15 = (unsigned __int8)v14 - 129;
      v19 = (unsigned __int8)v14 == 129;
    }
    else
    {
      if ( (unsigned __int8)v14 == 128 )
        goto LABEL_56;
      if ( (unsigned __int8)v14 <= 0x11u )
      {
        if ( (unsigned __int8)v14 != 17 )
        {
          if ( (unsigned __int8)v14 <= 9u )
          {
            if ( (unsigned __int8)v14 == 9 )
              goto LABEL_56;
            if ( !(_BYTE)v14 || (unsigned __int8)v14 == 1 )
            {
              WORD2(v27) = 38;
              v17 = BYTE2(Src) & 0xF0 | 5;
              goto LABEL_139;
            }
            if ( (unsigned __int8)v14 != 2 && (unsigned __int8)v14 != 3 && (unsigned __int8)v14 != 5 )
            {
              if ( (unsigned __int8)v14 != 6 )
              {
                v15 = (unsigned __int8)v14 - 7;
                if ( (unsigned __int8)v14 != 7 )
                {
LABEL_54:
                  v16 = v15 == 1;
                  goto LABEL_55;
                }
                goto LABEL_76;
              }
LABEL_56:
              WORD2(v27) = 36;
              v17 = BYTE2(Src) & 0xF0 | 5;
LABEL_139:
              v5 = 2;
              goto LABEL_140;
            }
LABEL_76:
            v17 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_138;
          }
          if ( (unsigned __int8)v14 == 10 )
          {
            WORD2(v27) = 305;
            v17 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_139;
          }
          if ( (unsigned __int8)v14 != 11 )
          {
            if ( (unsigned __int8)v14 == 12
              || (unsigned __int8)v14 == 13
              || (unsigned __int8)v14 == 14
              || (unsigned __int8)v14 == 15 )
            {
              goto LABEL_56;
            }
            if ( (unsigned __int8)v14 != 16 )
              goto LABEL_141;
          }
        }
        goto LABEL_65;
      }
      if ( (unsigned __int8)v14 <= 0x1Au )
      {
        if ( (unsigned __int8)v14 == 26 || (unsigned __int8)v14 == 18 )
        {
LABEL_65:
          v17 = BYTE2(Src) & 0xF0 | 6;
          goto LABEL_138;
        }
        if ( (unsigned __int8)v14 == 19
          || (unsigned __int8)v14 == 20
          || (unsigned __int8)v14 == 21
          || (unsigned __int8)v14 == 22 )
        {
          goto LABEL_56;
        }
        v18 = (unsigned __int8)v14 - 24;
        if ( (unsigned __int8)v14 == 24 )
          goto LABEL_76;
LABEL_75:
        if ( v18 != 1 )
          goto LABEL_141;
        goto LABEL_76;
      }
      if ( (unsigned __int8)v14 == 27
        || (unsigned __int8)v14 == 28
        || (unsigned __int8)v14 == 30
        || (unsigned __int8)v14 == 31
        || (unsigned __int8)v14 == 32 )
      {
        goto LABEL_56;
      }
      v15 = (unsigned __int8)v14 - 33;
      v19 = (unsigned __int8)v14 == 33;
    }
    if ( !v19 )
      goto LABEL_54;
    goto LABEL_56;
  }
  if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) != 2 )
    goto LABEL_141;
  v13 = v11 >> 1;
  *(_BYTE *)(a2 + 3) = 4;
  switch ( (unsigned __int8)v13 )
  {
    case 0x80u:
      v5 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v27) = 3;
      break;
    case 0x81u:
      v5 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v27) = 17;
      break;
    case 0x82u:
      v5 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v27) = 272;
      break;
    case 0x83u:
      v5 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v27) = 529;
      break;
    case 0x84u:
      v5 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
      WORD2(v27) = 785;
      break;
    case 0x85u:
      v5 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
      WORD2(v27) = 29;
      break;
    case 0x86u:
      v5 = 2;
      LOBYTE(Src) = -16;
      HIBYTE(Src) = 10;
      BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
      WORD2(v27) = 2336;
      break;
  }
LABEL_142:
  result = (void *)GetSrbScsiData(a2, 0LL, &v24, &v25, &v32);
  if ( v24 )
    *v24 = v5;
  if ( (Src & 0x80u) != 0LL )
  {
    v22 = (char *)v25;
    if ( v25 )
    {
      v23 = v32;
      if ( v32 )
      {
        if ( v32 <= 0x12u )
          v12 = v32;
        result = memmove(v25, &Src, v12);
        *(_BYTE *)(a2 + 3) |= 0x80u;
        if ( v23 > v12 )
          return NVMeZeroMemory(&v22[v12], v23 - v12);
      }
    }
  }
  return result;
}
