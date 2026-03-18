/*
 * XREFs of ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C01E1CB8
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E1998 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetMouseKeyFlags @ 0x1C00117BC (GetMouseKeyFlags.c)
 */

__int64 __fastcall GetPointerFlagsFromMouse(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        enum tagPOINTER_BUTTON_CHANGE_TYPE *a5)
{
  int v8; // ebx
  unsigned int MouseKeyFlags; // r8d
  unsigned int v10; // r11d
  bool v11; // zf
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned __int16 *v17; // rdx
  __int64 v18; // r10
  int v19; // ebx
  unsigned __int16 v20; // ax
  unsigned int v21; // esi
  char v22; // al
  int v23; // ecx
  int v24; // r9d
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // r11d
  unsigned int v28; // r11d
  unsigned int v29; // r11d
  unsigned int v30; // r11d
  unsigned int v31; // r11d
  unsigned int v32; // r11d
  bool v33; // zf
  unsigned int v34; // r11d
  unsigned int v35; // r11d
  unsigned int v36; // r11d
  unsigned int v37; // r11d
  unsigned int v38; // r11d
  unsigned int v39; // r11d
  unsigned int v40; // r11d
  unsigned int v41; // r11d
  unsigned int v42; // r11d
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  unsigned int v45; // r9d

  v8 = -__CFSHR__(**(_DWORD **)(gptiCurrent + 1280LL), 4);
  MouseKeyFlags = GetMouseKeyFlags(*(unsigned __int8 **)(gptiCurrent + 424LL));
  if ( v10 != 161 )
  {
    switch ( v10 )
    {
      case 0xA4u:
LABEL_9:
        MouseKeyFlags &= ~2u;
        goto LABEL_11;
      case 0xA7u:
LABEL_8:
        MouseKeyFlags &= ~0x10u;
        goto LABEL_11;
      case 0xABu:
        goto LABEL_11;
    }
    if ( v10 != 513 )
    {
      if ( v10 != 516 )
      {
        if ( v10 != 519 )
          goto LABEL_11;
        goto LABEL_8;
      }
      goto LABEL_9;
    }
  }
  MouseKeyFlags &= ~1u;
LABEL_11:
  if ( v10 > 0x200 )
  {
    v11 = v10 == 514;
    v12 = v10 - 514;
    goto LABEL_15;
  }
  if ( v10 != 512 && v10 != 160 )
  {
    v12 = v10 - 162;
    v11 = v10 == 162;
LABEL_15:
    if ( !v11 )
    {
      v13 = v12 - 3;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( v14 )
        {
          if ( v14 != 4 )
            goto LABEL_27;
        }
      }
    }
  }
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    if ( v10 - 160 > 0xD )
    {
      if ( v8 )
        v10 -= 352;
    }
    else
    {
      v15 = v10 + 352;
      if ( v8 )
        v15 = v10;
      v10 = v15;
    }
  }
LABEL_27:
  v16 = 0;
  v17 = (unsigned __int16 *)&unk_1C02EAC70;
  do
  {
    if ( *v17 == v10 )
      break;
    ++v16;
    v17 += 12;
  }
  while ( v16 < 0x1C );
  if ( v16 >= 0x1C )
    return 0LL;
  v18 = 3LL * v16;
  v19 = *((_DWORD *)&unk_1C02EAC70 + 6 * v16 + 2);
  if ( (v19 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v19 = *((_DWORD *)&unk_1C02EAC70 + 6 * v16 + 3);
    v20 = *((_WORD *)&unk_1C02EAC70 + 12 * v16 + 2);
  }
  else
  {
    v20 = *((_WORD *)&unk_1C02EAC70 + 12 * v16 + 1);
  }
  v21 = v20;
  *a4 = MouseKeyFlags;
  v22 = *((_BYTE *)&unk_1C02EAC70 + 24 * v16 + 16);
  if ( v22 )
  {
    if ( v22 != 5 )
    {
LABEL_40:
      switch ( v22 )
      {
        case 1:
          v23 = 1;
          break;
        case 2:
          v23 = 2;
          break;
        case 4:
          v23 = 16;
          break;
        case 5:
          v23 = 32;
          break;
        case 6:
          v23 = 64;
          break;
        default:
          v23 = 0;
          break;
      }
      if ( (*((_DWORD *)&unk_1C02EAC70 + 2 * v18 + 2) & 0x10000) != 0 )
        MouseKeyFlags |= v23;
      else
        MouseKeyFlags &= ~v23;
      *a4 = MouseKeyFlags;
      goto LABEL_55;
    }
    if ( WORD1(a3) && WORD1(a3) <= 2u )
    {
      v22 = BYTE2(a3) + 4;
      goto LABEL_40;
    }
    return 0LL;
  }
LABEL_55:
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    v25 = v19 | (16 * (MouseKeyFlags & 1) + 4) | 0x20;
    if ( (MouseKeyFlags & 2) == 0 )
      v25 = v19 | (16 * (MouseKeyFlags & 1) + 4);
    v26 = v25 | 0x40;
    if ( (MouseKeyFlags & 0x10) == 0 )
      v26 = v25;
    v24 = v26 | 0x80;
    if ( (MouseKeyFlags & 0x20) == 0 )
      v24 = v26;
    if ( (MouseKeyFlags & 0x40) != 0 )
      v24 |= 0x100u;
  }
  else
  {
    v21 = *((unsigned __int16 *)&unk_1C02EAC70 + 4 * v18 + 1);
    v24 = *((_DWORD *)&unk_1C02EAC70 + 2 * v18 + 2) | v19 & ~*((_DWORD *)&unk_1C02EAC70 + 2 * v18 + 3);
  }
  *(_DWORD *)a5 = 0;
  if ( v10 > 0x200 )
  {
    if ( v10 <= 0x207 )
    {
      if ( v10 != 519 )
      {
        v35 = v10 - 513;
        if ( !v35 )
          goto LABEL_88;
        v36 = v35 - 1;
        if ( !v36 )
          goto LABEL_87;
        v37 = v36 - 1;
        if ( !v37 )
          goto LABEL_88;
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( !v39 )
            goto LABEL_75;
          if ( v39 != 1 )
            goto LABEL_105;
        }
LABEL_86:
        *(_DWORD *)a5 = 3;
        goto LABEL_105;
      }
LABEL_103:
      *(_DWORD *)a5 = 5;
      goto LABEL_105;
    }
    v34 = v10 - 520;
    v33 = v34 == 0;
LABEL_90:
    if ( v33 )
    {
      *(_DWORD *)a5 = 6;
      goto LABEL_105;
    }
    v40 = v34 - 1;
    if ( v40 )
    {
      v41 = v40 - 2;
      if ( !v41 )
        goto LABEL_95;
      v42 = v41 - 1;
      if ( !v42 )
      {
        v44 = a3 >> 16;
        if ( (_WORD)v44 == 1 )
        {
          *(_DWORD *)a5 = 8;
        }
        else if ( (_WORD)v44 == 2 )
        {
          *(_DWORD *)a5 = 10;
        }
        goto LABEL_105;
      }
      if ( v42 == 1 )
      {
LABEL_95:
        v43 = a3 >> 16;
        if ( (_WORD)v43 == 1 )
        {
          *(_DWORD *)a5 = 7;
        }
        else if ( (_WORD)v43 == 2 )
        {
          *(_DWORD *)a5 = 9;
        }
      }
      goto LABEL_105;
    }
    goto LABEL_103;
  }
  if ( v10 == 512 )
    goto LABEL_105;
  if ( v10 > 0xA6 )
  {
    v32 = v10 - 167;
    if ( !v32 )
      goto LABEL_103;
    v34 = v32 - 1;
    v33 = v34 == 0;
    goto LABEL_90;
  }
  if ( v10 == 166 )
    goto LABEL_86;
  v27 = v10 - 160;
  if ( !v27 )
    goto LABEL_105;
  v28 = v27 - 1;
  if ( !v28 )
  {
LABEL_88:
    *(_DWORD *)a5 = 1;
    goto LABEL_105;
  }
  v29 = v28 - 1;
  if ( !v29 )
  {
LABEL_87:
    *(_DWORD *)a5 = 2;
    goto LABEL_105;
  }
  v30 = v29 - 1;
  if ( !v30 )
    goto LABEL_88;
  v31 = v30 - 1;
  if ( !v31 )
    goto LABEL_86;
  if ( v31 == 1 )
LABEL_75:
    *(_DWORD *)a5 = 4;
LABEL_105:
  v45 = v24 | 2;
  **(_DWORD **)(gptiCurrent + 1280LL) ^= (**(_DWORD **)(gptiCurrent + 1280LL) ^ (32
                                                                               * *((_DWORD *)&unk_1C02EAC70 + 2 * v18 + 5))) & 0x20;
  if ( a1 )
    *a1 = v21;
  return v45;
}
