/*
 * XREFs of ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C01AAF08
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01AABF0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetMouseKeyFlags @ 0x1C006343C (GetMouseKeyFlags.c)
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
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdx
  __int64 v19; // r10
  int v20; // edx
  unsigned __int16 v21; // ax
  unsigned __int8 v22; // cl
  unsigned int v23; // ebx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // r9d
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  unsigned int v34; // r11d
  unsigned int v35; // r11d
  unsigned int v36; // r11d
  unsigned int v37; // r11d
  unsigned int v38; // r11d
  unsigned int v39; // r11d
  bool v40; // zf
  unsigned int v41; // r11d
  unsigned int v42; // r11d
  unsigned int v43; // r11d
  unsigned int v44; // r11d
  unsigned int v45; // r11d
  unsigned int v46; // r11d
  unsigned int v47; // r11d
  unsigned int v48; // r11d
  unsigned int v49; // r11d
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rdi
  unsigned int v52; // r9d

  v8 = -__CFSHR__(**(_DWORD **)(gptiCurrent + 1248LL), 4);
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
  v16 = 0LL;
  v17 = (unsigned __int16 *)&unk_1C02E59B0;
  do
  {
    if ( *v17 == v10 )
      break;
    v16 = (unsigned int)(v16 + 1);
    v17 += 12;
  }
  while ( (unsigned int)v16 < 0x1C );
  if ( (unsigned int)v16 >= 0x1C )
    return 0LL;
  v19 = 3 * v16;
  v20 = *((_DWORD *)&unk_1C02E59B0 + 6 * v16 + 2);
  if ( (v20 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v20 = *((_DWORD *)&unk_1C02E59B0 + 6 * v16 + 3);
    v21 = *((_WORD *)&unk_1C02E59B0 + 12 * v16 + 2);
  }
  else
  {
    v21 = *((_WORD *)&unk_1C02E59B0 + 12 * v16 + 1);
  }
  *a4 = MouseKeyFlags;
  v22 = *((_BYTE *)&unk_1C02E59B0 + 24 * v16 + 16);
  v23 = v21;
  if ( v22 )
  {
    if ( v22 == 5 )
    {
      if ( (unsigned int)WORD1(a3) - 1 > 1 )
        return 0LL;
      v22 = BYTE2(a3) + 4;
    }
    v24 = v22 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 2;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 == 1 )
              v28 = 64;
            else
              v28 = 0;
          }
          else
          {
            v28 = 32;
          }
        }
        else
        {
          v28 = 16;
        }
      }
      else
      {
        v28 = 2;
      }
    }
    else
    {
      v28 = 1;
    }
    if ( (*((_DWORD *)&unk_1C02E59B0 + 2 * v19 + 2) & 0x10000) != 0 )
      MouseKeyFlags |= v28;
    else
      MouseKeyFlags &= ~v28;
    *a4 = MouseKeyFlags;
  }
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    v30 = v20 | 4;
    v31 = v30 | 0x10;
    if ( (MouseKeyFlags & 1) == 0 )
      v31 = v30;
    v32 = v31 | 0x20;
    if ( (MouseKeyFlags & 2) == 0 )
      v32 = v31;
    v33 = v32 | 0x40;
    if ( (MouseKeyFlags & 0x10) == 0 )
      v33 = v32;
    v29 = v33 | 0x80;
    if ( (MouseKeyFlags & 0x20) == 0 )
      v29 = v33;
    if ( (MouseKeyFlags & 0x40) != 0 )
      v29 |= 0x100u;
  }
  else
  {
    v23 = *((unsigned __int16 *)&unk_1C02E59B0 + 4 * v19 + 1);
    v29 = *((_DWORD *)&unk_1C02E59B0 + 2 * v19 + 2) | v20 & ~*((_DWORD *)&unk_1C02E59B0 + 2 * v19 + 3);
  }
  *(_DWORD *)a5 = 0;
  if ( v10 > 0x200 )
  {
    if ( v10 <= 0x207 )
    {
      if ( v10 != 519 )
      {
        v42 = v10 - 513;
        if ( !v42 )
          goto LABEL_91;
        v43 = v42 - 1;
        if ( !v43 )
          goto LABEL_90;
        v44 = v43 - 1;
        if ( !v44 )
          goto LABEL_91;
        v45 = v44 - 1;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_77;
          if ( v46 != 1 )
            goto LABEL_108;
        }
LABEL_89:
        *(_DWORD *)a5 = 3;
        goto LABEL_108;
      }
LABEL_106:
      *(_DWORD *)a5 = 5;
      goto LABEL_108;
    }
    v41 = v10 - 520;
    v40 = v41 == 0;
LABEL_93:
    if ( v40 )
    {
      *(_DWORD *)a5 = 6;
      goto LABEL_108;
    }
    v47 = v41 - 1;
    if ( v47 )
    {
      v48 = v47 - 2;
      if ( !v48 )
        goto LABEL_98;
      v49 = v48 - 1;
      if ( !v49 )
      {
        v51 = a3 >> 16;
        if ( (_WORD)v51 == 1 )
        {
          *(_DWORD *)a5 = 8;
        }
        else if ( (_WORD)v51 == 2 )
        {
          *(_DWORD *)a5 = 10;
        }
        goto LABEL_108;
      }
      if ( v49 == 1 )
      {
LABEL_98:
        v50 = a3 >> 16;
        if ( (_WORD)v50 == 1 )
        {
          *(_DWORD *)a5 = 7;
        }
        else if ( (_WORD)v50 == 2 )
        {
          *(_DWORD *)a5 = 9;
        }
      }
      goto LABEL_108;
    }
    goto LABEL_106;
  }
  if ( v10 == 512 )
  {
LABEL_80:
    *(_DWORD *)a5 = 0;
    goto LABEL_108;
  }
  if ( v10 > 0xA6 )
  {
    v39 = v10 - 167;
    if ( !v39 )
      goto LABEL_106;
    v41 = v39 - 1;
    v40 = v41 == 0;
    goto LABEL_93;
  }
  if ( v10 == 166 )
    goto LABEL_89;
  v34 = v10 - 160;
  if ( !v34 )
    goto LABEL_80;
  v35 = v34 - 1;
  if ( !v35 )
  {
LABEL_91:
    *(_DWORD *)a5 = 1;
    goto LABEL_108;
  }
  v36 = v35 - 1;
  if ( !v36 )
  {
LABEL_90:
    *(_DWORD *)a5 = 2;
    goto LABEL_108;
  }
  v37 = v36 - 1;
  if ( !v37 )
    goto LABEL_91;
  v38 = v37 - 1;
  if ( !v38 )
    goto LABEL_89;
  if ( v38 == 1 )
LABEL_77:
    *(_DWORD *)a5 = 4;
LABEL_108:
  v52 = v29 | 2;
  **(_DWORD **)(gptiCurrent + 1248LL) ^= (**(_DWORD **)(gptiCurrent + 1248LL) ^ (32
                                                                               * *((_DWORD *)&unk_1C02E59B0 + 2 * v19 + 5))) & 0x20;
  if ( a1 )
    *a1 = v23;
  return v52;
}
