/*
 * XREFs of NVMeMapError @ 0x1C000215C
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00018F0 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     GetSrbScsiData @ 0x1C000526C (GetSrbScsiData.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 */

void *__fastcall NVMeMapError(__int64 a1)
{
  __int64 SrbExtension; // r8
  char v3; // bl
  unsigned int v4; // edx
  unsigned int v5; // r15d
  int v6; // ecx
  unsigned int v7; // edx
  char v8; // al
  void *result; // rax
  char *v10; // rsi
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // ecx
  bool v15; // zf
  int v16; // ecx
  bool v17; // zf
  char v18; // al
  unsigned __int8 v19; // bl
  __int64 Src; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h]
  __int16 v22; // [rsp+40h] [rbp-10h]
  unsigned __int8 v23; // [rsp+98h] [rbp+48h] BYREF
  char *v24; // [rsp+A0h] [rbp+50h] BYREF
  void *v25; // [rsp+A8h] [rbp+58h] BYREF

  SrbExtension = GetSrbExtension(a1);
  v24 = 0LL;
  Src = 0LL;
  v3 = 0;
  v21 = 0LL;
  v4 = *(unsigned __int16 *)(SrbExtension + 4250);
  v22 = 0;
  v5 = 18;
  v25 = 0LL;
  v23 = 0;
  v6 = (v4 >> 9) & 7;
  if ( v6 )
  {
    v11 = v6 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_14;
      v13 = v4 >> 1;
      *(_BYTE *)(a1 + 3) = 4;
      switch ( (unsigned __int8)v13 )
      {
        case 0x80u:
          v3 = 2;
          LOBYTE(Src) = -16;
          HIBYTE(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          WORD2(v21) = 3;
          break;
        case 0x81u:
          v3 = 2;
          LOBYTE(Src) = -16;
          HIBYTE(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          WORD2(v21) = 17;
          break;
        case 0x82u:
          v3 = 2;
          LOBYTE(Src) = -16;
          HIBYTE(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          WORD2(v21) = 272;
          break;
        case 0x83u:
          v3 = 2;
          LOBYTE(Src) = -16;
          HIBYTE(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          WORD2(v21) = 529;
          break;
        case 0x84u:
          v3 = 2;
          LOBYTE(Src) = -16;
          HIBYTE(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
          WORD2(v21) = 785;
          break;
        case 0x85u:
          v3 = 2;
          LOBYTE(Src) = -16;
          HIBYTE(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
          WORD2(v21) = 29;
          break;
        case 0x86u:
          v3 = 2;
          LOBYTE(Src) = -16;
          HIBYTE(Src) = 10;
          BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
          WORD2(v21) = 2336;
          break;
      }
      goto LABEL_15;
    }
    v12 = v4 >> 1;
    if ( (unsigned __int8)v12 > 0x80u )
    {
      v14 = (unsigned __int8)v12 - 129;
      v17 = (unsigned __int8)v12 == 129;
    }
    else
    {
      if ( (unsigned __int8)v12 == 128 )
        goto LABEL_11;
      if ( (unsigned __int8)v12 <= 0x11u )
      {
        if ( (unsigned __int8)v12 != 17 )
        {
          if ( (unsigned __int8)v12 == 9 )
            goto LABEL_11;
          if ( (unsigned __int8)v12 <= 9u )
          {
            if ( !(_BYTE)v12 || (unsigned __int8)v12 == 1 )
            {
              WORD2(v21) = 38;
              v8 = BYTE2(Src) & 0xF0 | 5;
              goto LABEL_12;
            }
            if ( (unsigned __int8)v12 == 2 || (unsigned __int8)v12 == 3 || (unsigned __int8)v12 == 5 )
              goto LABEL_73;
            if ( (unsigned __int8)v12 == 6 )
              goto LABEL_11;
            v14 = (unsigned __int8)v12 - 7;
            if ( (unsigned __int8)v12 == 7 )
              goto LABEL_73;
            goto LABEL_50;
          }
          if ( (unsigned __int8)v12 == 10 )
          {
            WORD2(v21) = 305;
            v8 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_12;
          }
          if ( (unsigned __int8)v12 != 11 )
          {
            if ( (unsigned __int8)v12 == 12
              || (unsigned __int8)v12 == 13
              || (unsigned __int8)v12 == 14
              || (unsigned __int8)v12 == 15 )
            {
              goto LABEL_11;
            }
            if ( (unsigned __int8)v12 != 16 )
              goto LABEL_14;
          }
        }
LABEL_62:
        v8 = BYTE2(Src) & 0xF0 | 6;
LABEL_125:
        WORD2(v21) = 0;
        goto LABEL_12;
      }
      if ( (unsigned __int8)v12 <= 0x1Au )
      {
        if ( (unsigned __int8)v12 != 26 && (unsigned __int8)v12 != 18 )
        {
          if ( (unsigned __int8)v12 == 19
            || (unsigned __int8)v12 == 20
            || (unsigned __int8)v12 == 21
            || (unsigned __int8)v12 == 22 )
          {
            goto LABEL_11;
          }
          v16 = (unsigned __int8)v12 - 24;
          if ( (unsigned __int8)v12 == 24 )
            goto LABEL_73;
          goto LABEL_72;
        }
        goto LABEL_62;
      }
      if ( (unsigned __int8)v12 == 27
        || (unsigned __int8)v12 == 28
        || (unsigned __int8)v12 == 30
        || (unsigned __int8)v12 == 31
        || (unsigned __int8)v12 == 32 )
      {
        goto LABEL_11;
      }
      v14 = (unsigned __int8)v12 - 33;
      v17 = (unsigned __int8)v12 == 33;
    }
    if ( v17 )
      goto LABEL_11;
LABEL_50:
    v15 = v14 == 1;
    goto LABEL_52;
  }
  v7 = v4 >> 1;
  if ( (unsigned __int8)v7 > 0x80u )
  {
    if ( (unsigned __int8)v7 == 129 )
    {
LABEL_124:
      v8 = BYTE2(Src) & 0xF0 | 3;
      goto LABEL_125;
    }
    if ( (unsigned __int8)v7 != 130 )
    {
      if ( (unsigned __int8)v7 != 131 )
        goto LABEL_14;
      v3 = 24;
      WORD2(v21) = 2348;
      v8 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_13;
    }
    v3 = 2;
    v18 = BYTE2(Src) & 0xF2;
    *(_BYTE *)(a1 + 3) = 4;
    LOBYTE(Src) = -16;
    HIBYTE(Src) = 10;
    BYTE2(Src) = v18 | 2;
    if ( *(__int16 *)(SrbExtension + 4250) >= 0 )
      WORD2(v21) = 260;
    else
      WORD2(v21) = 4;
    goto LABEL_15;
  }
  if ( (unsigned __int8)v7 == 128 )
  {
    WORD2(v21) = 33;
    v8 = BYTE2(Src) & 0xF0 | 5;
    goto LABEL_12;
  }
  if ( (unsigned __int8)v7 > 0xEu )
  {
    if ( (unsigned __int8)v7 <= 0x16u )
    {
      if ( (unsigned __int8)v7 == 22 )
        goto LABEL_11;
      if ( (unsigned __int8)v7 != 15 && (unsigned __int8)v7 != 16 && (unsigned __int8)v7 != 17 )
      {
        if ( (unsigned __int8)v7 != 18 )
        {
          if ( (unsigned __int8)v7 == 19 || (unsigned __int8)v7 == 20 )
            goto LABEL_11;
          if ( (unsigned __int8)v7 != 21 )
            goto LABEL_14;
        }
        goto LABEL_108;
      }
      goto LABEL_73;
    }
    switch ( (unsigned __int8)v7 )
    {
      case 0x18u:
        goto LABEL_11;
      case 0x19u:
        WORD2(v21) = 42;
        v8 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_12;
      case 0x1Au:
        goto LABEL_11;
      case 0x1Bu:
LABEL_91:
        v3 = 34;
        WORD2(v21) = 0;
        v8 = BYTE2(Src) & 0xF0 | 0xB;
        goto LABEL_13;
      case 0x1Cu:
        v8 = BYTE2(Src) & 0xF0 | 4;
        goto LABEL_125;
    }
    v15 = (unsigned __int8)v7 == 30;
LABEL_52:
    if ( !v15 )
      goto LABEL_14;
    goto LABEL_11;
  }
  if ( (unsigned __int8)v7 == 14 )
  {
LABEL_73:
    v8 = BYTE2(Src) & 0xF0 | 5;
    goto LABEL_125;
  }
  if ( (unsigned __int8)v7 > 7u )
  {
    if ( (unsigned __int8)v7 == 8 || (unsigned __int8)v7 == 9 || (unsigned __int8)v7 == 10 )
      goto LABEL_91;
    if ( (unsigned __int8)v7 == 11 )
    {
      WORD2(v21) = 2336;
      v8 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_12;
    }
    v16 = (unsigned __int8)v7 - 12;
    if ( (unsigned __int8)v7 == 12 )
    {
      WORD2(v21) = 44;
      v8 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_12;
    }
LABEL_72:
    if ( v16 != 1 )
      goto LABEL_14;
    goto LABEL_73;
  }
  if ( (unsigned __int8)v7 == 7 )
    goto LABEL_91;
  if ( (_BYTE)v7 )
  {
    if ( (unsigned __int8)v7 != 1 )
    {
      if ( (unsigned __int8)v7 == 2 )
      {
LABEL_11:
        WORD2(v21) = 36;
        v8 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_12;
      }
      if ( (unsigned __int8)v7 == 3 )
      {
        WORD2(v21) = 35;
        v8 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_12;
      }
      if ( (unsigned __int8)v7 != 4 )
      {
        if ( (unsigned __int8)v7 == 5 )
        {
          v3 = 34;
          WORD2(v21) = 2059;
          v8 = BYTE2(Src) & 0xF0 | 0xB;
          goto LABEL_13;
        }
        if ( (unsigned __int8)v7 != 6 )
          goto LABEL_14;
        WORD2(v21) = 68;
        v8 = BYTE2(Src) & 0xF0 | 4;
LABEL_12:
        v3 = 2;
LABEL_13:
        BYTE2(Src) = v8;
        HIBYTE(Src) = 10;
        LOBYTE(Src) = -16;
LABEL_14:
        *(_BYTE *)(a1 + 3) = 4;
        goto LABEL_15;
      }
      goto LABEL_124;
    }
LABEL_108:
    WORD2(v21) = 32;
    v8 = BYTE2(Src) & 0xF0 | 5;
    goto LABEL_12;
  }
  *(_BYTE *)(a1 + 3) = 1;
  v3 = 0;
LABEL_15:
  result = (void *)GetSrbScsiData(a1, 0, (unsigned int)&v24, (unsigned int)&v25, (__int64)&v23);
  if ( v24 )
    *v24 = v3;
  if ( (Src & 0x80) != 0 )
  {
    v10 = (char *)v25;
    if ( v25 )
    {
      v19 = v23;
      if ( v23 )
      {
        if ( v23 <= 0x12u )
          v5 = v23;
        result = memmove(v25, &Src, v5);
        *(_BYTE *)(a1 + 3) |= 0x80u;
        if ( v19 > v5 )
          return (void *)NVMeZeroMemory(&v10[v5], v19 - v5);
      }
    }
  }
  return result;
}
