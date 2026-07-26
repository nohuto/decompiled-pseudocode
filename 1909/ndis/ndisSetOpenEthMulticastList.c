/*
 * XREFs of ndisSetOpenEthMulticastList @ 0x1C0025978
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C0025730 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C0025E90 (WPP_RECORDER_SF_qqqDD.c)
 *     ndisIsValidMulticastFilter @ 0x1C0025FA0 (ndisIsValidMulticastFilter.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 */

char __fastcall ndisSetOpenEthMulticastList(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbx
  int *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rsi
  char v7; // bp
  __int64 *v8; // rdi
  int v9; // edx
  int IsValidMulticastFilter; // r15d
  int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // r14
  unsigned int v15; // r8d
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r11
  unsigned int v19; // r10d
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 *v23; // r13
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // r12
  unsigned int v31; // r9d
  unsigned int v32; // eax
  __int64 v33; // r12
  unsigned int v34; // r8d
  int v35; // eax
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r10
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // r9
  unsigned __int16 v42; // ax
  unsigned __int16 v43; // cx
  char v44; // [rsp+38h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-58h]
  unsigned int v46; // [rsp+B0h] [rbp+8h]
  __int64 v47; // [rsp+B8h] [rbp+10h]
  __int64 v49; // [rsp+C8h] [rbp+20h]

  v47 = a2;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = a3;
  v5 = a2;
  v49 = v3;
  v6 = a1;
  v7 = 1;
  v8 = *(__int64 **)(v3 + 400);
  LOBYTE(a1) = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v44 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      98,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v3,
      v6,
      v44);
    a1 = *(_QWORD *)(v6 + 16);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1, v6, v5);
  if ( IsValidMulticastFilter )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      99,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v3,
      v6,
      v5);
  }
  else if ( *(_DWORD *)(v6 + 440) )
  {
    memmove(*(void **)(v6 + 464), *(const void **)(v6 + 448), 12LL * *(unsigned int *)(v6 + 456));
    v11 = *(_DWORD *)(v6 + 456);
    *(_DWORD *)(v6 + 456) = 0;
    *(_DWORD *)(v6 + 472) = v11;
    v12 = *(_DWORD *)(v5 + 48) / 6u;
    if ( v12 )
    {
      v13 = 0;
      v14 = *(_QWORD *)(v5 + 40);
      do
      {
        v15 = *(_DWORD *)(v6 + 456);
        v16 = 0LL;
        v17 = -1;
        if ( v15 )
        {
          v18 = *(_QWORD *)(v6 + 448);
          v19 = *(_DWORD *)(6 * v13 + v14 + 2);
          while ( 1 )
          {
            v20 = *(_DWORD *)(v18 + 12 * v16 + 6);
            if ( v20 > v19 )
              break;
            if ( v20 >= v19 )
            {
              v40 = *(_WORD *)(v18 + 12 * v16 + 4);
              v41 = *(_WORD *)(6 * v13 + v14);
              if ( v40 > v41 )
                break;
              if ( v40 >= v41 )
                goto LABEL_17;
            }
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= v15 )
              goto LABEL_14;
          }
          v17 = 1;
        }
LABEL_14:
        v21 = (unsigned int)v16;
        *(_DWORD *)(v6 + 456) = v15 + 1;
        if ( v17 > 0 )
          memmove(
            (void *)(*(_QWORD *)(v6 + 448) + 12LL * (unsigned int)(v16 + 1)),
            (const void *)(*(_QWORD *)(v6 + 448) + 12 * v16),
            12LL * (v15 - (unsigned int)v16));
        v22 = 3 * v21;
        memmove((void *)(*(_QWORD *)(v6 + 448) + 4LL + 4 * v22), (const void *)(v14 + 6 * v13), 6uLL);
        *(_DWORD *)(*(_QWORD *)(v6 + 448) + 4 * v22) = 1;
LABEL_17:
        ++v13;
      }
      while ( v13 < v12 );
      v5 = v47;
      IsValidMulticastFilter = 0;
    }
    v23 = v8;
    v24 = *v8;
    memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
    v25 = *((_DWORD *)v8 + 92);
    *((_DWORD *)v8 + 92) = 0;
    *((_DWORD *)v8 + 93) = v25;
    while ( 1 )
    {
      if ( v24 )
      {
        while ( !IsValidMulticastFilter )
        {
          v26 = 0LL;
          v46 = 0;
          if ( *(_DWORD *)(v24 + 456) )
          {
            while ( 1 )
            {
              v27 = *((_DWORD *)v8 + 92);
              v28 = 0LL;
              v9 = -1;
              if ( v27 )
              {
                v29 = v8[44];
                v30 = 3 * v26;
                v9 = -1;
                v45 = *(_QWORD *)(v24 + 448);
                v31 = *(_DWORD *)(v45 + 12 * v26 + 6);
                while ( 1 )
                {
                  v32 = *(_DWORD *)(v29 + 6 * v28 + 2);
                  if ( v32 > v31 )
                    break;
                  if ( v32 >= v31 )
                  {
                    v42 = *(_WORD *)(v29 + 6 * v28);
                    v43 = *(_WORD *)(v45 + 4 * v30 + 4);
                    if ( v42 > v43 )
                      break;
                    if ( v42 >= v43 )
                      goto LABEL_33;
                  }
                  v28 = (unsigned int)(v28 + 1);
                  if ( (unsigned int)v28 >= v27 )
                    goto LABEL_29;
                }
                v9 = 1;
              }
LABEL_29:
              *((_DWORD *)v8 + 92) = v27 + 1;
              if ( v27 + 1 > *((_DWORD *)v8 + 86) )
                break;
              v33 = 6 * v28;
              if ( v9 > 0 )
                memmove(
                  (void *)(v8[44] + 6LL * (unsigned int)(v28 + 1)),
                  (const void *)(6 * v28 + v8[44]),
                  6 * (v27 + 1 - (unsigned int)v28) - 6);
              memmove((void *)(v33 + v8[44]), (const void *)(*(_QWORD *)(v24 + 448) + 4 * (3LL * v46 + 1)), 6uLL);
LABEL_33:
              v26 = v46 + 1;
              v46 = v26;
              if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 456) )
                goto LABEL_34;
            }
            IsValidMulticastFilter = -1073676279;
          }
LABEL_34:
          v24 = *(_QWORD *)(v24 + 424);
          if ( !v24 )
          {
            if ( IsValidMulticastFilter )
              goto LABEL_43;
            goto LABEL_36;
          }
        }
        goto LABEL_43;
      }
LABEL_36:
      if ( v23 == v8 )
      {
        v23 = v8 + 1;
        v24 = v8[1];
        if ( v24 )
          continue;
      }
      if ( v23 == v8 + 1 )
      {
        v23 = v8 + 2;
        v24 = v8[2];
        if ( v24 )
          continue;
      }
      if ( v23 == v8 + 2 )
        break;
    }
    v34 = *((_DWORD *)v8 + 92);
    if ( v34 == *((_DWORD *)v8 + 93) )
    {
      v37 = 0LL;
      if ( v34 )
      {
        v38 = v8[45];
        v39 = v8[44];
        while ( 1 )
        {
          v9 = 3 * v37;
          if ( *(_DWORD *)(v39 + 6 * v37 + 2) != *(_DWORD *)(v38 + 6 * v37 + 2)
            || *(_WORD *)(v39 + 6 * v37) != *(_WORD *)(v38 + 6 * v37) )
          {
            break;
          }
          v35 = 0;
          v37 = (unsigned int)(v37 + 1);
          if ( (unsigned int)v37 >= v34 )
            goto LABEL_41;
        }
LABEL_42:
        v7 = 0;
        *(_QWORD *)(v5 + 152) = *(_QWORD *)(v5 + 40);
        *(_DWORD *)(v5 + 160) = *(_DWORD *)(v5 + 48);
        *(_QWORD *)(v5 + 40) = v8[44];
        *(_DWORD *)(v5 + 48) = 6 * *((_DWORD *)v8 + 92);
        goto LABEL_43;
      }
    }
    v35 = -1;
LABEL_41:
    if ( v35 )
      goto LABEL_42;
    memmove((void *)v8[44], (const void *)v8[45], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
    *((_DWORD *)v8 + 93) = 0;
    IsValidMulticastFilter = 0;
LABEL_43:
    v4 = a3;
    v3 = v49;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      100,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v3,
      v6,
      v5,
      IsValidMulticastFilter,
      v7);
LABEL_46:
  if ( IsValidMulticastFilter && (byte_1C00E8084 & 4) != 0 )
    McTemplateK0jqxqqq(
      *(_DWORD *)(v3 + 4056),
      (unsigned int)&SetOpenEthMulticastListFailed,
      v3 + 4008,
      v3 + 4008,
      *(_DWORD *)(v3 + 4056),
      *(_QWORD *)(v3 + 4024),
      IsValidMulticastFilter,
      1,
      v6);
  *v4 = IsValidMulticastFilter;
  return v7;
}
