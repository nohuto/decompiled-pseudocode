/*
 * XREFs of KiAdjustGroupConfiguration @ 0x14028FFA8
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall KiAdjustGroupConfiguration(__int64 a1)
{
  unsigned int v2; // eax
  unsigned __int16 v3; // r14
  __int64 v4; // rcx
  int *v5; // rdi
  int v6; // eax
  __int64 *v7; // r9
  __int64 *v8; // rdx
  __int64 v9; // r8
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // r11
  __int64 v12; // r8
  unsigned __int16 v13; // si
  int v14; // edi
  int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int *v18; // rdi
  int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  __int64 v29; // rsi
  _QWORD *v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r11
  __int64 *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  char v36; // r14
  unsigned __int16 v37; // si
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned __int16 i; // dx
  __int64 v41; // r8
  __int16 v42; // r10
  unsigned __int16 v43; // cx
  unsigned int v44; // r9d
  __int64 *v45; // r8
  __int64 v46; // rdx
  _DWORD v48[20]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[20]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v50[64]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v48, 0, sizeof(v48));
  LOBYTE(v2) = *(_BYTE *)(a1 + 173);
  if ( (v2 & 8) == 0 && !*(_QWORD *)(a1 + 136) )
  {
    v3 = *(_WORD *)(a1 + 144);
    if ( v3 >= (unsigned __int16)KiActiveGroups )
    {
      if ( KiMaximumGroups )
      {
        v4 = (unsigned __int16)KiMaximumGroups;
        v5 = v48;
        v6 = KiMaximumGroupSize;
        while ( v4 )
        {
          *v5++ = v6;
          --v4;
        }
      }
      v7 = KeNodeBlock;
      if ( KeNumberNodes )
      {
        v8 = KeNodeBlock;
        v9 = (unsigned __int16)KeNumberNodes;
        do
        {
          if ( (*(_BYTE *)(*v8 + 173) & 2) != 0 )
            v48[*(unsigned __int16 *)(*v8 + 144)] -= *(unsigned __int8 *)(*v8 + 172);
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      v10 = KeNumberNodes;
      v11 = 0;
      if ( KeNumberNodes )
      {
        while ( 1 )
        {
          v12 = KeNodeBlock[v11];
          if ( (*(_BYTE *)(v12 + 173) & 0xA) == 2 && !*(_QWORD *)(v12 + 136) )
          {
            v13 = *(_WORD *)(v12 + 144);
            if ( v13 < (unsigned __int16)KiActiveGroups )
            {
              v14 = *(unsigned __int8 *)(v12 + 172);
              v15 = *(unsigned __int8 *)(a1 + 172);
              v16 = v14 - v15;
              if ( (unsigned __int8)v14 <= (unsigned __int8)v15 )
                v16 = *(unsigned __int8 *)(a1 + 172) - v14;
              LOWORD(v2) = v3;
              if ( (unsigned __int8)v14 <= (unsigned __int8)v15 )
                LOWORD(v2) = *(_WORD *)(v12 + 144);
              if ( v48[(unsigned __int16)v2] >= v16 )
                break;
            }
          }
          if ( ++v11 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_23;
        }
        *(_WORD *)(v12 + 144) = v3;
        *(_BYTE *)(v12 + 173) &= ~4u;
        *(_BYTE *)(a1 + 173) |= 4u;
        *(_WORD *)(a1 + 144) = v13;
      }
      else
      {
LABEL_23:
        if ( KiMaximumGroups )
        {
          v17 = (unsigned __int16)KiMaximumGroups;
          v18 = Src;
          v19 = KiMaximumGroupSize;
          while ( v17 )
          {
            *v18++ = v19;
            --v17;
          }
        }
        if ( v10 )
        {
          v20 = KeNodeBlock;
          v21 = v10;
          do
          {
            v22 = *v20;
            v23 = *(_BYTE *)(*v20 + 173);
            if ( (v23 & 2) != 0 && ((v23 & 8) != 0 || *(_QWORD *)(v22 + 136)) )
              Src[*(unsigned __int16 *)(v22 + 144)] -= *(unsigned __int8 *)(v22 + 172);
            ++v20;
            --v21;
          }
          while ( v21 );
        }
        LOWORD(v24) = 0;
        if ( KeNumberNodes )
        {
          v25 = (unsigned __int16)KeNumberNodes;
          do
          {
            v26 = *v7;
            if ( (*(_BYTE *)(*v7 + 173) & 0xA) == 2 && !*(_QWORD *)(v26 + 136) )
            {
              v27 = (unsigned __int16)v24;
              LOWORD(v24) = v24 + 1;
              v50[v27] = v26;
            }
            ++v7;
            --v25;
          }
          while ( v25 );
        }
        if ( (unsigned __int16)v24 - 1 > 0 )
        {
          v28 = 1;
          do
          {
            if ( v28 < (unsigned __int16)v24 )
            {
              v29 = (unsigned __int16)(v28 - 1);
              v30 = &v50[v28];
              v31 = (unsigned __int16)(v24 - v28);
              do
              {
                v32 = v50[v29];
                if ( *(_BYTE *)(v32 + 172) < *(_BYTE *)(*v30 + 172LL) )
                {
                  v50[v29] = *v30;
                  *v30 = v32;
                }
                ++v30;
                --v31;
              }
              while ( v31 );
            }
            ++v28;
          }
          while ( (unsigned __int16)(v28 - 1) < (unsigned __int16)v24 - 1 );
        }
        if ( (_WORD)v24 )
        {
          v33 = v50;
          v34 = (unsigned __int16)v24;
          do
          {
            v35 = *v33++;
            *(_WORD *)(v35 + 146) = *(_WORD *)(v35 + 144);
            --v34;
          }
          while ( v34 );
        }
        LOBYTE(v2) = KiActiveGroups;
        v36 = 0;
        v37 = 0;
        if ( KiActiveGroups )
        {
          while ( 1 )
          {
            if ( KiMaximumGroups )
              memmove(v48, Src, 4LL * (unsigned __int16)KiMaximumGroups);
            v38 = *(unsigned __int8 *)(a1 + 172);
            v39 = v48[v37];
            if ( v39 >= v38 )
            {
              v2 = v39 - v38;
              *(_WORD *)(a1 + 144) = v37;
              v48[v37] = v2;
              for ( i = 0; i < (unsigned __int16)v24; ++i )
              {
                LOBYTE(v2) = i;
                v41 = v50[i];
                if ( v41 != a1 )
                {
                  v42 = KiMaximumGroups;
                  v43 = 0;
                  if ( KiMaximumGroups )
                  {
                    v2 = *(unsigned __int8 *)(v41 + 172);
                    while ( 1 )
                    {
                      v44 = v48[v43];
                      if ( v44 >= v2 )
                        break;
                      if ( ++v43 >= (unsigned __int16)KiMaximumGroups )
                        goto LABEL_64;
                    }
                    *(_WORD *)(v41 + 144) = v43;
                    v2 = *(unsigned __int8 *)(v41 + 172);
                    v48[v43] = v44 - v2;
                  }
LABEL_64:
                  if ( v43 == v42 )
                    break;
                }
              }
              if ( i == (_WORD)v24 )
                break;
            }
            LOBYTE(v2) = KiActiveGroups;
            if ( ++v37 >= (unsigned __int16)KiActiveGroups )
              goto LABEL_70;
          }
          v36 = 1;
        }
LABEL_70:
        if ( (_WORD)v24 )
        {
          v45 = v50;
          v24 = (unsigned __int16)v24;
          do
          {
            v46 = *v45;
            if ( v36 )
            {
              LOBYTE(v2) = (*(_WORD *)(v46 + 144) < (unsigned __int16)KiActiveGroups ? 4 : 0) | *(_BYTE *)(v46 + 173) & 0xFB;
              *(_BYTE *)(v46 + 173) = v2;
            }
            else
            {
              LOWORD(v2) = *(_WORD *)(v46 + 146);
              *(_WORD *)(v46 + 144) = v2;
            }
            ++v45;
            *(_WORD *)(v46 + 146) = 0;
            --v24;
          }
          while ( v24 );
        }
      }
    }
  }
  return v2;
}
