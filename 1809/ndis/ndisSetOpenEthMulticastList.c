/*
 * XREFs of ndisSetOpenEthMulticastList @ 0x1C00CD358
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C00CD290 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C00219C4 (ndisIsValidMulticastFilter.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_qqqDD @ 0x1C004401C (WPP_SF_qqqDD.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthMulticastList(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r13
  int *v4; // rbx
  __int64 v5; // r14
  unsigned __int8 v7; // bp
  __int64 *v8; // rdi
  __int64 v9; // rcx
  int IsValidMulticastFilter; // r15d
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // r13
  unsigned int v14; // r8d
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // r11
  unsigned int v18; // r10d
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 *v22; // r12
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // r10
  int v28; // ecx
  __int64 v29; // r11
  unsigned int v30; // r9d
  unsigned int v31; // eax
  unsigned int v32; // r8d
  int v33; // eax
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // r10
  unsigned __int16 v38; // ax
  unsigned __int16 v39; // r9
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // dx
  __int64 v42; // [rsp+50h] [rbp-58h]
  __int64 v43; // [rsp+50h] [rbp-58h]
  __int64 v44; // [rsp+58h] [rbp-50h]
  unsigned int v45; // [rsp+B0h] [rbp+8h]
  unsigned int v46; // [rsp+B0h] [rbp+8h]
  __int64 v49; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a3;
  v5 = a2;
  v49 = v3;
  v7 = 1;
  v8 = *(__int64 **)(v3 + 400);
  v9 = v3;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qqq(0x75u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v3, a1, a2);
    v9 = *(_QWORD *)(a1 + 16);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, v5);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
      WPP_SF_qqq(0x76u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v3, a1, v5);
  }
  else if ( *(_DWORD *)(a1 + 440) )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v11 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = IsValidMulticastFilter & v11;
    *(_DWORD *)(a1 + 472) = v11;
    v45 = *(_DWORD *)(v5 + 48) / 6u;
    if ( v45 )
    {
      v12 = 0;
      v13 = *(_QWORD *)(v5 + 40);
      do
      {
        v14 = *(_DWORD *)(a1 + 456);
        v15 = 0LL;
        v16 = -1;
        if ( v14 )
        {
          v17 = *(_QWORD *)(a1 + 448);
          v18 = *(_DWORD *)(6 * v12 + v13 + 2);
          while ( 1 )
          {
            v19 = *(_DWORD *)(v17 + 12 * v15 + 6);
            if ( v19 > v18 )
              break;
            if ( v19 >= v18 )
            {
              v38 = *(_WORD *)(v17 + 12 * v15 + 4);
              v39 = *(_WORD *)(6 * v12 + v13);
              if ( v38 > v39 )
                break;
              if ( v38 >= v39 )
                goto LABEL_15;
            }
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= v14 )
              goto LABEL_12;
          }
          v16 = 1;
        }
LABEL_12:
        v20 = (unsigned int)v15;
        *(_DWORD *)(a1 + 456) = v14 + 1;
        if ( v16 > 0 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 448) + 12LL * (unsigned int)(v15 + 1)),
            (const void *)(*(_QWORD *)(a1 + 448) + 12 * v15),
            12LL * (v14 - (unsigned int)v15));
        v21 = 3 * v20;
        memmove((void *)(*(_QWORD *)(a1 + 448) + 4LL + 4 * v21), (const void *)(v13 + 6 * v12), 6uLL);
        *(_DWORD *)(*(_QWORD *)(a1 + 448) + 4 * v21) = 1;
LABEL_15:
        ++v12;
      }
      while ( v12 < v45 );
      v5 = a2;
      v3 = v49;
    }
    else
    {
      *(_DWORD *)(a1 + 456) = 0;
    }
    v22 = v8;
    v23 = *v8;
    memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
    v24 = *((_DWORD *)v8 + 92);
    *((_DWORD *)v8 + 92) = 0;
    *((_DWORD *)v8 + 93) = v24;
    do
    {
      if ( v23 )
        goto LABEL_21;
LABEL_35:
      if ( v22 != v8 || (v22 = v8 + 1, (v23 = v8[1]) == 0) )
      {
        if ( v22 != v8 + 1 )
          continue;
        v22 = v8 + 2;
        v23 = v8[2];
        if ( !v23 )
          continue;
      }
LABEL_21:
      while ( !IsValidMulticastFilter )
      {
        v25 = 0LL;
        v46 = 0;
        if ( *(_DWORD *)(v23 + 456) )
        {
          while ( 1 )
          {
            v26 = *((_DWORD *)v8 + 92);
            v27 = 0LL;
            v28 = -1;
            if ( v26 )
            {
              v29 = v8[44];
              v44 = *(_QWORD *)(v23 + 448);
              v42 = 3 * v25;
              v30 = *(_DWORD *)(v44 + 12 * v25 + 6);
              v28 = -1;
              while ( 1 )
              {
                v31 = *(_DWORD *)(v29 + 6 * v27 + 2);
                if ( v31 > v30 )
                  break;
                if ( v31 >= v30 )
                {
                  v40 = *(_WORD *)(v29 + 6 * v27);
                  v41 = *(_WORD *)(v44 + 4 * v42 + 4);
                  v3 = v49;
                  if ( v40 > v41 )
                    break;
                  if ( v40 >= v41 )
                    goto LABEL_32;
                }
                v27 = (unsigned int)(v27 + 1);
                if ( (unsigned int)v27 >= v26 )
                  goto LABEL_28;
              }
              v28 = 1;
            }
LABEL_28:
            *((_DWORD *)v8 + 92) = v26 + 1;
            if ( v26 + 1 > *((_DWORD *)v8 + 86) )
              break;
            v43 = 6 * v27;
            if ( v28 > 0 )
              memmove(
                (void *)(v8[44] + 6LL * (unsigned int)(v27 + 1)),
                (const void *)(6 * v27 + v8[44]),
                6 * (v26 + 1 - (unsigned int)v27) - 6);
            memmove((void *)(v8[44] + v43), (const void *)(*(_QWORD *)(v23 + 448) + 4 * (3LL * v46 + 1)), 6uLL);
LABEL_32:
            v25 = v46 + 1;
            v46 = v25;
            if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 456) )
              goto LABEL_33;
          }
          IsValidMulticastFilter = -1073676279;
        }
LABEL_33:
        v23 = *(_QWORD *)(v23 + 424);
        if ( !v23 )
        {
          if ( IsValidMulticastFilter )
            goto LABEL_42;
          goto LABEL_35;
        }
      }
      goto LABEL_42;
    }
    while ( v22 != v8 + 2 );
    v32 = *((_DWORD *)v8 + 92);
    if ( v32 == *((_DWORD *)v8 + 93) )
    {
      v35 = 0LL;
      if ( v32 )
      {
        v36 = v8[45];
        v37 = v8[44];
        while ( *(_DWORD *)(v37 + 6 * v35 + 2) == *(_DWORD *)(v36 + 6 * v35 + 2)
             && *(_WORD *)(v37 + 6 * v35) == *(_WORD *)(v36 + 6 * v35) )
        {
          v33 = 0;
          v35 = (unsigned int)(v35 + 1);
          if ( (unsigned int)v35 >= v32 )
            goto LABEL_40;
        }
LABEL_41:
        v7 = 0;
        *(_QWORD *)(v5 + 152) = *(_QWORD *)(v5 + 40);
        *(_DWORD *)(v5 + 160) = *(_DWORD *)(v5 + 48);
        *(_QWORD *)(v5 + 40) = v8[44];
        *(_DWORD *)(v5 + 48) = 6 * *((_DWORD *)v8 + 92);
        goto LABEL_42;
      }
    }
    v33 = -1;
LABEL_40:
    if ( v33 )
      goto LABEL_41;
    memmove((void *)v8[44], (const void *)v8[45], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
    *((_DWORD *)v8 + 93) = 0;
    IsValidMulticastFilter = 0;
LABEL_42:
    v4 = a3;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqDD(0x77u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v3, a1, v5, IsValidMulticastFilter, v7);
  if ( IsValidMulticastFilter && (byte_1C00A2084 & 4) != 0 )
    McTemplateK0jqxqdq(
      *(unsigned int *)(v3 + 4088),
      &SetOpenEthMulticastListFailed,
      (const GUID *)(v3 + 4040),
      v3 + 4040,
      *(_DWORD *)(v3 + 4088),
      *(_QWORD *)(v3 + 4056),
      IsValidMulticastFilter,
      1,
      a1);
  *v4 = IsValidMulticastFilter;
  return v7;
}
