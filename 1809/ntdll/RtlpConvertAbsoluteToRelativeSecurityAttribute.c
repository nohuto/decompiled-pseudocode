/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800EA590
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18004B140 (RtlStringCbLengthW.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  unsigned __int64 v13; // r11
  unsigned int v14; // r13d
  unsigned int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned __int16 v18; // ax
  unsigned int v19; // edx
  __int64 v20; // r9
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ebp
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // r11d
  int v30; // edx
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  int v35; // eax
  unsigned int v36; // ebp
  unsigned __int16 v37; // ax
  unsigned int v38; // ebp
  _DWORD *v39; // r11
  unsigned int j; // r12d
  unsigned int v41; // ebp
  __int64 v42; // rax
  unsigned int i; // r12d
  void *v44; // r11
  int v45; // ebx
  __int64 v46; // rcx
  unsigned int v48; // [rsp+60h] [rbp+8h]
  __int64 v49; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v49 = 0LL;
  v7 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
    goto LABEL_78;
  v7 = -1;
  v9 = 4LL * (unsigned int)(v8 - 1);
  if ( v9 <= 0xFFFFFFFF )
    v7 = v9;
  v10 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 <= 0xFFFFFFFF )
  {
LABEL_78:
    v11 = v7 + 20;
    v12 = -1;
    if ( v11 >= 0x14 )
      v12 = v11;
    v10 = v11 < 0x14 ? 0xC0000095 : 0;
    if ( v11 >= 0x14 )
    {
      v10 = RtlStringCbLengthW(*(_WORD **)a1, 0xFFFFuLL, &v49);
      if ( (v10 & 0x80000000) == 0 )
      {
        v14 = v49 + 2;
        v48 = v49 + 2;
        if ( (int)v49 + 2 < (unsigned int)v49 )
          return (unsigned int)-1073741675;
        v15 = v13;
        v16 = v12 + v14;
        if ( v12 + v14 >= v12 )
          v15 = v12 + v14;
        v10 = v16 < v12 ? 0xC0000095 : 0;
        v17 = v15;
        if ( v16 >= v12 )
        {
          v18 = *(_WORD *)(a1 + 8);
          if ( !v18 )
            goto LABEL_38;
          if ( v18 <= 2u )
            goto LABEL_44;
          if ( v18 != 3 )
          {
            if ( v18 == 5 )
            {
LABEL_21:
              v19 = 0;
              if ( *(_DWORD *)(a1 + 16) )
              {
                do
                {
                  v21 = v13;
                  v20 = *(_QWORD *)(a1 + 24);
                  v22 = v15 + *(_DWORD *)(v20 + 16LL * v19 + 8);
                  if ( v22 >= v15 )
                    v21 = v15 + *(_DWORD *)(v20 + 16LL * v19 + 8);
                  v10 = v22 < v15 ? 0xC0000095 : 0;
                  if ( v22 < v15 )
                    return v10;
                  v23 = v21 + 4;
                  v15 = v13;
                  if ( v21 + 4 >= v21 )
                    v15 = v21 + 4;
                  v10 = v23 < v21 ? 0xC0000095 : 0;
                  if ( v23 < v21 )
                    return v10;
                }
                while ( ++v19 < *(_DWORD *)(a1 + 16) );
              }
LABEL_38:
              v28 = v15 + 3;
              if ( v15 + 3 >= v15 )
                LODWORD(v13) = v15 + 3;
              v10 = v28 < v15 ? 0xC0000095 : 0;
              if ( v28 < v15 )
                return v10;
              v29 = v13 & 0xFFFFFFFC;
              if ( *a3 < v29 )
              {
                *a3 = v29;
                return (unsigned int)-1073741789;
              }
              if ( a2 )
              {
                *a3 = v29;
                memset(a2, 0, v29);
                *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
                *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
                a2[2] = *(_DWORD *)(a1 + 12);
                a2[3] = *(_DWORD *)(a1 + 16);
                v35 = *(_DWORD *)(a1 + 16);
                v36 = 4 * v35 + 16;
                if ( !v35 )
                  v36 = 20;
                *a2 = v36;
                memmove((char *)a2 + v36, *(const void **)a1, v14);
                v37 = *(_WORD *)(a1 + 8);
                v38 = v14 + v36;
                v39 = (unsigned int *)((char *)a2 + v38);
                if ( v37 )
                {
                  if ( v37 <= 2u )
                    goto LABEL_77;
                  switch ( v37 )
                  {
                    case 3u:
                      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
                      {
                        a2[i + 4] = v38;
                        v10 = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * i), 0xFFFFuLL, &v49);
                        if ( (v10 & 0x80000000) != 0 )
                          break;
                        v45 = v49 + 2;
                        memmove(v44, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * i), (unsigned int)(v49 + 2));
                        v38 += v45;
                      }
                      return v10;
                    case 5u:
LABEL_60:
                      for ( j = 0; j < *(_DWORD *)(a1 + 16); v39 = (unsigned int *)((char *)a2 + v38) )
                      {
                        a2[j + 4] = v38;
                        v41 = v38 + 4;
                        *v39 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
                        v42 = *(_QWORD *)(a1 + 24);
                        if ( *(_DWORD *)(v42 + 16LL * j + 8) )
                        {
                          memmove(
                            (char *)a2 + v41,
                            *(const void **)(v42 + 16LL * j),
                            *(unsigned int *)(v42 + 16LL * j + 8));
                          v42 = *(_QWORD *)(a1 + 24);
                        }
                        v38 = *(_DWORD *)(v42 + 16LL * j++ + 8) + v41;
                      }
                      return v10;
                    case 6u:
LABEL_77:
                      if ( *(_DWORD *)(a1 + 16) )
                      {
                        do
                        {
                          v46 = v3++;
                          a2[v46 + 4] = v38;
                          v38 += 8;
                          *(_QWORD *)v39 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v46);
                          v39 = (unsigned int *)((char *)a2 + v38);
                        }
                        while ( v3 < *(_DWORD *)(a1 + 16) );
                      }
                      return v10;
                    case 0x10u:
                      goto LABEL_60;
                  }
                }
              }
              return (unsigned int)-1073741811;
            }
            if ( v18 != 6 )
            {
              if ( v18 != 16 )
                goto LABEL_38;
              goto LABEL_21;
            }
LABEL_44:
            v30 = v13;
            v31 = 8LL * *(unsigned int *)(a1 + 16);
            if ( v31 <= v13 )
              v30 = 8 * *(_DWORD *)(a1 + 16);
            v10 = v13 < v31 ? 0xC0000095 : 0;
            if ( v31 > v13 )
              return v10;
            v32 = v15 + v30;
            v33 = v15;
            v34 = v13;
            if ( v32 >= v15 )
              v34 = v32;
            v15 = v34;
            v10 = v32 < v33 ? 0xC0000095 : 0;
            if ( v32 < v17 )
              return v10;
            goto LABEL_38;
          }
          v24 = 0;
          if ( !*(_DWORD *)(a1 + 16) )
            goto LABEL_38;
          while ( 1 )
          {
            v10 = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * v24), 0xFFFFuLL, &v49);
            if ( (v10 & 0x80000000) != 0 )
              break;
            if ( (int)v49 + 2 < (unsigned int)v49 )
              return (unsigned int)-1073741675;
            v25 = v15 + v49 + 2;
            v26 = v15;
            v27 = v13;
            if ( v25 >= v15 )
              v27 = v15 + v49 + 2;
            v15 = v27;
            v10 = v25 < v26 ? 0xC0000095 : 0;
            if ( v25 < v26 )
              return v10;
            if ( ++v24 >= *(_DWORD *)(a1 + 16) )
            {
              v14 = v48;
              goto LABEL_38;
            }
          }
        }
      }
    }
  }
  return v10;
}
