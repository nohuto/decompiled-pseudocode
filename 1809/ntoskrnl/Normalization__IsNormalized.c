/*
 * XREFs of Normalization__IsNormalized @ 0x140899634
 * Callers:
 *     RtlIsNormalizedString @ 0x14089A700 (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x1402F4DB0 (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14089909C (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x140899200 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x14089924C (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x14089937C (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v4; // r15d
  unsigned __int16 *v5; // r12
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r9
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // r13
  unsigned __int8 v19; // r14
  unsigned __int8 v20; // si
  unsigned __int8 v21; // r15
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // si
  unsigned int v24; // r15d
  int CanCombineWithStartFirstPair; // eax
  unsigned int v26; // eax
  int CanCombineWithStartBase; // eax
  unsigned __int8 v28; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v29; // [rsp+31h] [rbp-1Fh]
  unsigned __int8 v30; // [rsp+32h] [rbp-1Eh]
  int v31; // [rsp+34h] [rbp-1Ch] BYREF
  int v32; // [rsp+38h] [rbp-18h] BYREF
  int v33; // [rsp+3Ch] [rbp-14h]
  int v34; // [rsp+40h] [rbp-10h]
  int v35; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int16 *v36; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v37; // [rsp+98h] [rbp+48h] BYREF
  int v38; // [rsp+A0h] [rbp+50h]
  _BYTE *v39; // [rsp+A8h] [rbp+58h]

  v39 = a4;
  v38 = a3;
  v4 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  v31 = 0;
  v28 = 0;
  v32 = 0;
  v35 = 0;
  v37 = 0;
  v36 = a2 - 1;
  v33 = 0;
  v30 = 0;
  v29 = 0;
  if ( a3 <= 0 )
    goto LABEL_95;
  v8 = *(_DWORD *)(a1 + 28);
  v34 = v8;
  do
  {
    v9 = *v5;
    if ( v9 < v8 )
      goto LABEL_94;
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(_BYTE *)(((unsigned __int64)*v5 >> 7) + v10);
    if ( !v11 || v11 == 0xFB && *(_BYTE *)(a1 + 113) )
      goto LABEL_93;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = v11;
          if ( !v11 )
            goto LABEL_91;
          v13 = v11 - 251;
          if ( !v13 )
            goto LABEL_90;
          v14 = v13 - 1;
          if ( !v14 )
            return 3221227287LL;
          v15 = v14 - 1;
          if ( !v15 )
            goto LABEL_31;
          v16 = v15 - 1;
          if ( v16 )
            break;
          if ( v4 <= 1 )
            return 3221227287LL;
          ++v5;
          v38 = --v4;
          if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
            return 3221227287LL;
          v9 = *v5 + ((v9 - 55287) << 10);
          v11 = *(_BYTE *)(((__int64)v9 >> 7) + v10);
        }
        if ( v16 != 1 )
        {
          v17 = *(_BYTE *)((v9 & 0x7F) + (v12 << 7) + *(_QWORD *)(a1 + 40) - 128);
          if ( !v17 )
            goto LABEL_91;
          v18 = v17 & 0xC0;
          v19 = v17 & 0x3F;
          if ( (v17 & 0x3F) == 0 || v19 == 63 )
          {
            switch ( v17 )
            {
              case 0x40u:
                goto LABEL_89;
              case 0x7Fu:
LABEL_90:
                if ( *(_BYTE *)(a1 + 113) )
                  goto LABEL_91;
                break;
              case 0x80u:
                goto LABEL_89;
              case 0xBFu:
                goto LABEL_31;
              case 0xC0u:
                Normalization__GetLastChar(a1, (__int64)v5, &v36, (unsigned int *)&v31, &v28, &v37);
                if ( (v28 | v37) == 0x80 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v31, v9) )
                  goto LABEL_31;
                goto LABEL_89;
              case 0xFFu:
                if ( !v9 && v4 <= 1 )
                  goto LABEL_95;
                break;
              default:
                goto LABEL_41;
            }
            return 3221227287LL;
          }
LABEL_41:
          if ( (v17 & 0x80) != 0 )
          {
            Normalization__GetLastChar(a1, (__int64)v5, &v36, (unsigned int *)&v31, &v28, &v37);
            v20 = v28;
            if ( !v28 || v28 == 63 )
            {
              v33 = v31;
              v30 = v28;
              v29 = v37;
              if ( ((v37 - 64) & 0xBF) == 0
                && v18 == 0xC0
                && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v31, v9) )
              {
                goto LABEL_31;
              }
              goto LABEL_64;
            }
            v21 = v37;
            if ( (v37 & 0xBF) != 0 )
            {
              if ( v28 > v19 )
                goto LABEL_31;
              if ( v18 != 0xC0 || v28 == v19 )
                goto LABEL_63;
              v22 = v29;
              v23 = v30;
              if ( (((v30 | v29) - 64) & 0xBF) != 0 && (v29 != 64 || v30 && v30 != 63) )
              {
                v24 = v33;
              }
              else
              {
                v24 = v33;
                if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v33, v9) )
                  goto LABEL_31;
                v22 = v29;
              }
              if ( v19 >= v23 || (v22 & 0xBF) != 0 || (unsigned __int8)(v23 - 1) > 0x3Du )
                goto LABEL_63;
              if ( v23 == *(_BYTE *)(a1 + 116) )
              {
                if ( v19 >= *(_BYTE *)(a1 + 114) )
                {
                  if ( v19 != *(_BYTE *)(a1 + 115) )
                  {
LABEL_63:
                    v4 = v38;
LABEL_64:
                    v28 = v19;
                    v37 = v18;
                    goto LABEL_92;
                  }
                  goto LABEL_61;
                }
              }
              else if ( v23 == *(_BYTE *)(a1 + 118) && v19 == *(_BYTE *)(a1 + 117) )
              {
LABEL_61:
                CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(a1, &v35, &v32, v24, v9);
                goto LABEL_62;
              }
              CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v32, v24, v9);
LABEL_62:
              if ( !CanCombineWithStartFirstPair )
                goto LABEL_63;
LABEL_31:
              *v39 = 0;
              return 0LL;
            }
            v32 = 0;
            v35 = 0;
            v26 = v31;
            v33 = v31;
            if ( v18 != 0xC0 )
              goto LABEL_81;
            if ( v37 == 64 )
            {
              if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v31, v9) )
                goto LABEL_31;
              v26 = v33;
            }
            if ( v20 <= v19 )
            {
LABEL_81:
              v30 = v20;
              v29 = v21;
              goto LABEL_63;
            }
            if ( v20 == *(_BYTE *)(a1 + 116) )
            {
              if ( v19 >= *(_BYTE *)(a1 + 114) )
              {
                if ( v19 != *(_BYTE *)(a1 + 115) )
                  goto LABEL_81;
                goto LABEL_76;
              }
            }
            else if ( v20 == *(_BYTE *)(a1 + 118) && v19 == *(_BYTE *)(a1 + 117) )
            {
LABEL_76:
              CanCombineWithStartBase = Normalization__CanCombineWithStartFirstPair(a1, &v35, &v32, v26, v9);
              goto LABEL_80;
            }
            CanCombineWithStartBase = Normalization__CanCombineWithStartBase(a1, &v32, v26, v9);
LABEL_80:
            if ( CanCombineWithStartBase )
              goto LABEL_31;
            goto LABEL_81;
          }
          v32 = 0;
LABEL_89:
          v33 = v9;
          v30 = v19;
          v29 = v18;
          goto LABEL_64;
        }
        if ( v9 >= 44032 )
          break;
        if ( v4 > 1 && CanComposeHangul((unsigned int)v9, v5[1]) )
          goto LABEL_31;
        if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(v9 - 4447) > 1 )
          goto LABEL_24;
LABEL_19:
        v11 = -5;
      }
      if ( v9 < 55204 )
        break;
      if ( (unsigned int)(v9 - 55216) > 0x16 && (unsigned int)(v9 - 55243) > 0x30 )
        goto LABEL_19;
LABEL_24:
      v11 = 0;
    }
    if ( *(_BYTE *)(a1 + 112) == 1 || v4 > 1 && CanComposeHangul((unsigned int)v9, v5[1]) )
      goto LABEL_31;
LABEL_91:
    v28 = 0;
    v37 = 0;
LABEL_92:
    v31 = v9;
    v36 = v5;
LABEL_93:
    v8 = v34;
LABEL_94:
    --v4;
    ++v5;
    v38 = v4;
  }
  while ( v4 > 0 );
LABEL_95:
  *v39 = 1;
  return 0LL;
}
