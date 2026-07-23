/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140894150
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x140893C90 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
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
  unsigned int v19; // r9d
  unsigned int v20; // edx
  __int64 v21; // r10
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ebp
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // r11d
  int v31; // edx
  unsigned __int64 v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // ebp
  unsigned __int16 v38; // ax
  unsigned int v39; // ebp
  _DWORD *v40; // r11
  unsigned int j; // r12d
  unsigned int v42; // ebp
  __int64 v43; // rax
  unsigned int v44; // ecx
  unsigned int i; // r12d
  void *v46; // r11
  int v47; // ebx
  __int64 v48; // rcx
  unsigned int v50; // [rsp+60h] [rbp+8h]
  size_t pcbLength; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  pcbLength = 0LL;
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
      v10 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)a1, 0xFFFFuLL, &pcbLength);
      if ( (v10 & 0x80000000) == 0 )
      {
        v14 = pcbLength + 2;
        v50 = pcbLength + 2;
        if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
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
              v19 = *(_DWORD *)(a1 + 16);
              v20 = 0;
              if ( v19 )
              {
                do
                {
                  v22 = v13;
                  v21 = *(_QWORD *)(a1 + 24);
                  v23 = v15 + *(_DWORD *)(v21 + 16LL * v20 + 8);
                  if ( v23 >= v15 )
                    v22 = v15 + *(_DWORD *)(v21 + 16LL * v20 + 8);
                  v10 = v23 < v15 ? 0xC0000095 : 0;
                  if ( v23 < v15 )
                    return v10;
                  v24 = v22 + 4;
                  v15 = v13;
                  if ( v22 + 4 >= v22 )
                    v15 = v22 + 4;
                  v10 = v24 < v22 ? 0xC0000095 : 0;
                  if ( v24 < v22 )
                    return v10;
                }
                while ( ++v20 < v19 );
              }
LABEL_38:
              v29 = v15 + 3;
              if ( v15 + 3 >= v15 )
                LODWORD(v13) = v15 + 3;
              v10 = v29 < v15 ? 0xC0000095 : 0;
              if ( v29 < v15 )
                return v10;
              v30 = v13 & 0xFFFFFFFC;
              if ( *a3 < v30 )
              {
                *a3 = v30;
                return (unsigned int)-1073741789;
              }
              if ( a2 )
              {
                *a3 = v30;
                memset(a2, 0, v30);
                *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
                *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
                a2[2] = *(_DWORD *)(a1 + 12);
                a2[3] = *(_DWORD *)(a1 + 16);
                v36 = *(_DWORD *)(a1 + 16);
                v37 = 4 * v36 + 16;
                if ( !v36 )
                  v37 = 20;
                *a2 = v37;
                memmove((char *)a2 + v37, *(const void **)a1, v14);
                v38 = *(_WORD *)(a1 + 8);
                v39 = v14 + v37;
                v40 = (unsigned int *)((char *)a2 + v39);
                if ( v38 )
                {
                  if ( v38 <= 2u )
                    goto LABEL_77;
                  switch ( v38 )
                  {
                    case 3u:
                      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
                      {
                        a2[i + 4] = v39;
                        v10 = RtlStringCbLengthW(
                                *(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * i),
                                0xFFFFuLL,
                                &pcbLength);
                        if ( (v10 & 0x80000000) != 0 )
                          break;
                        v47 = pcbLength + 2;
                        memmove(v46, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * i), (unsigned int)(pcbLength + 2));
                        v39 += v47;
                      }
                      return v10;
                    case 5u:
LABEL_60:
                      for ( j = 0; j < *(_DWORD *)(a1 + 16); v40 = (unsigned int *)((char *)a2 + v39) )
                      {
                        a2[j + 4] = v39;
                        v42 = v39 + 4;
                        *v40 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
                        v43 = *(_QWORD *)(a1 + 24);
                        v44 = *(_DWORD *)(v43 + 16LL * j + 8);
                        if ( v44 )
                        {
                          memmove((char *)a2 + v42, *(const void **)(v43 + 16LL * j), v44);
                          v43 = *(_QWORD *)(a1 + 24);
                        }
                        v39 = *(_DWORD *)(v43 + 16LL * j++ + 8) + v42;
                      }
                      return v10;
                    case 6u:
LABEL_77:
                      if ( *(_DWORD *)(a1 + 16) )
                      {
                        do
                        {
                          v48 = v3++;
                          a2[v48 + 4] = v39;
                          v39 += 8;
                          *(_QWORD *)v40 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v48);
                          v40 = (unsigned int *)((char *)a2 + v39);
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
            v31 = v13;
            v32 = 8LL * *(unsigned int *)(a1 + 16);
            if ( v32 <= v13 )
              v31 = 8 * *(_DWORD *)(a1 + 16);
            v10 = v13 < v32 ? 0xC0000095 : 0;
            if ( v32 > v13 )
              return v10;
            v33 = v15 + v31;
            v34 = v15;
            v35 = v13;
            if ( v33 >= v15 )
              v35 = v33;
            v15 = v35;
            v10 = v33 < v34 ? 0xC0000095 : 0;
            if ( v33 < v17 )
              return v10;
            goto LABEL_38;
          }
          v25 = 0;
          if ( !*(_DWORD *)(a1 + 16) )
            goto LABEL_38;
          while ( 1 )
          {
            v10 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * v25), 0xFFFFuLL, &pcbLength);
            if ( (v10 & 0x80000000) != 0 )
              break;
            if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
              return (unsigned int)-1073741675;
            v26 = v15 + pcbLength + 2;
            v27 = v15;
            v28 = v13;
            if ( v26 >= v15 )
              v28 = v15 + pcbLength + 2;
            v15 = v28;
            v10 = v26 < v27 ? 0xC0000095 : 0;
            if ( v26 < v27 )
              return v10;
            if ( ++v25 >= *(_DWORD *)(a1 + 16) )
            {
              v14 = v50;
              goto LABEL_38;
            }
          }
        }
      }
    }
  }
  return v10;
}
