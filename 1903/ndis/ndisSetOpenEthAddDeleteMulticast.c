/*
 * XREFs of ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF3C
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C003FD60 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C0025EA0 (WPP_RECORDER_SF_qqqDD.c)
 *     ndisIsValidMulticastFilter @ 0x1C0025FB0 (ndisIsValidMulticastFilter.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C0040304 (ethAddOneOpenMulticastAddress.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00A2154 (ethDeleteOneOpenMulticastAddress.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r15
  unsigned __int8 v4; // r14
  int *v5; // r12
  __int64 v6; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rcx
  int v10; // edx
  int IsValidMulticastFilter; // ebp
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // r12
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // r13
  unsigned int v23; // r10d
  unsigned int v24; // eax
  __int64 v25; // r13
  unsigned int v26; // r8d
  int v27; // eax
  unsigned __int8 result; // al
  unsigned __int16 v29; // ax
  unsigned __int16 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r10
  char v34; // [rsp+38h] [rbp-50h]
  unsigned int v35; // [rsp+90h] [rbp+8h] BYREF
  int *v36; // [rsp+A0h] [rbp+18h]
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v36 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 1;
  v5 = a3;
  LOBYTE(v35) = 1;
  v6 = a2;
  v8 = *(__int64 **)(v3 + 400);
  v9 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      89,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v3,
      a1,
      v34);
    v9 = *(_QWORD *)(a1 + 16);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, v6);
  if ( IsValidMulticastFilter )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      11,
      90,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids);
    goto LABEL_35;
  }
  if ( !*(_DWORD *)(a1 + 440) )
  {
    IsValidMulticastFilter = 0;
    goto LABEL_35;
  }
  if ( *(_DWORD *)(v6 + 48) == 6 )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v12 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = IsValidMulticastFilter & v12;
    *(_DWORD *)(a1 + 472) = v12;
    v13 = *(_QWORD *)(v6 + 40);
    if ( *(_DWORD *)(v6 + 32) == 16843272 )
      v14 = ethAddOneOpenMulticastAddress(a1, v13, &v35);
    else
      v14 = ethDeleteOneOpenMulticastAddress(a1, v13, &v35);
    v4 = v35;
    IsValidMulticastFilter = v14;
    if ( (_BYTE)v35 != 1 )
    {
      v15 = v8;
      v16 = *v8;
      memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
      v17 = *((_DWORD *)v8 + 92);
      *((_DWORD *)v8 + 92) = 0;
      v10 = -1;
      *((_DWORD *)v8 + 93) = v17;
      do
      {
        while ( 1 )
        {
          if ( !v16 )
          {
            if ( IsValidMulticastFilter )
              goto LABEL_31;
            if ( v15 != v8 || (v15 = v8 + 1, (v16 = v8[1]) == 0) )
            {
              if ( v15 != v8 + 1 )
                break;
              v15 = v8 + 2;
              v16 = v8[2];
              if ( !v16 )
                break;
            }
          }
          if ( IsValidMulticastFilter )
            goto LABEL_31;
          v18 = 0LL;
          v35 = 0;
          if ( *(_DWORD *)(v16 + 456) )
          {
            while ( 1 )
            {
              v19 = *((_DWORD *)v8 + 92);
              v20 = 0LL;
              if ( v19 )
              {
                v21 = v8[44];
                v22 = 3 * v18;
                v10 = -1;
                v37 = *(_QWORD *)(v16 + 448);
                v23 = *(_DWORD *)(v37 + 12 * v18 + 6);
                while ( 1 )
                {
                  v24 = *(_DWORD *)(v21 + 6 * v20 + 2);
                  if ( v24 > v23 )
                    break;
                  if ( v24 >= v23 )
                  {
                    v29 = *(_WORD *)(v21 + 6 * v20);
                    v30 = *(_WORD *)(v37 + 4 * v22 + 4);
                    if ( v29 > v30 )
                      break;
                    if ( v29 >= v30 )
                      goto LABEL_22;
                  }
                  v20 = (unsigned int)(v20 + 1);
                  if ( (unsigned int)v20 >= v19 )
                    goto LABEL_18;
                }
                v10 = 1;
              }
LABEL_18:
              *((_DWORD *)v8 + 92) = v19 + 1;
              if ( v19 + 1 > *((_DWORD *)v8 + 86) )
                break;
              v25 = (unsigned int)v20;
              if ( v10 > 0 )
                memmove(
                  (void *)(v8[44] + 6LL * (unsigned int)(v20 + 1)),
                  (const void *)(v8[44] + 2 * ((unsigned int)v20 + 2 * v20)),
                  6 * (v19 + 1 - (unsigned int)v20) - 6);
              memmove((void *)(v8[44] + 6 * v25), (const void *)(*(_QWORD *)(v16 + 448) + 4 * (3LL * v35 + 1)), 6uLL);
LABEL_22:
              v10 = -1;
              v18 = v35 + 1;
              v35 = v18;
              if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 456) )
              {
                v10 = -1;
                goto LABEL_24;
              }
            }
            IsValidMulticastFilter = -1073676279;
            v10 = -1;
          }
LABEL_24:
          v16 = *(_QWORD *)(v16 + 424);
        }
      }
      while ( v15 != v8 + 2 );
LABEL_31:
      v26 = *((_DWORD *)v8 + 92);
      if ( v26 == *((_DWORD *)v8 + 93) && (v31 = 0LL, v26) )
      {
        v32 = v8[45];
        v33 = v8[44];
        while ( 1 )
        {
          v10 = 3 * v31;
          if ( *(_DWORD *)(v33 + 6 * v31 + 2) != *(_DWORD *)(v32 + 6 * v31 + 2)
            || *(_WORD *)(v33 + 6 * v31) != *(_WORD *)(v32 + 6 * v31) )
          {
            break;
          }
          v10 = 0;
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= v26 )
            goto LABEL_32;
        }
      }
      else
      {
LABEL_32:
        if ( !v10 )
        {
          memmove((void *)v8[44], (const void *)v8[45], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
          *((_DWORD *)v8 + 93) = 0;
          v4 = 1;
          goto LABEL_34;
        }
      }
      v4 = 0;
      *(_QWORD *)(v6 + 152) = *(_QWORD *)(v6 + 40);
      *(_DWORD *)(v6 + 160) = *(_DWORD *)(v6 + 48);
      *(_QWORD *)(v6 + 40) = v8[44];
      v27 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 48) = 6 * *((_DWORD *)v8 + 92);
      *(_DWORD *)(v6 + 144) = v27;
      *(_DWORD *)(v6 + 32) = 16843011;
LABEL_34:
      v5 = v36;
    }
LABEL_35:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        0xBu,
        0x5Cu,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        v3,
        a1,
        v6,
        IsValidMulticastFilter,
        v4);
LABEL_37:
    if ( !IsValidMulticastFilter )
      goto LABEL_38;
    goto LABEL_57;
  }
  *(_DWORD *)(v6 + 52) = 0;
  IsValidMulticastFilter = -1073676268;
  *(_DWORD *)(v6 + 56) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      11,
      91,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v3,
      a1,
      v6);
    goto LABEL_35;
  }
LABEL_57:
  if ( (byte_1C00E8044 & 4) != 0 )
    McTemplateK0jqxqqq(
      *(_DWORD *)(v3 + 4056),
      (unsigned int)&SetOpenEthAddDeleteMulticastFailed,
      v3 + 4008,
      v3 + 4008,
      *(_DWORD *)(v3 + 4056),
      *(_QWORD *)(v3 + 4024),
      IsValidMulticastFilter,
      1,
      a1);
LABEL_38:
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
