/*
 * XREFs of ndisSetOpenEthAddDeleteMulticast @ 0x1C00D21F0
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C00D2150 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C00219C4 (ndisIsValidMulticastFilter.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_qqqDD @ 0x1C004401C (WPP_SF_qqqDD.c)
 *     ethAddOneOpenMulticastAddress @ 0x1C00D2534 (ethAddOneOpenMulticastAddress.c)
 *     ethDeleteOneOpenMulticastAddress @ 0x1C00F3D7C (ethDeleteOneOpenMulticastAddress.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthAddDeleteMulticast(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r15
  unsigned __int8 v4; // bp
  int *v5; // r12
  __int64 *v8; // rbx
  __int64 v9; // rcx
  int IsValidMulticastFilter; // r14d
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // r12
  __int64 v15; // rbp
  int v16; // eax
  int v17; // edx
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // r11
  __int64 v23; // r13
  unsigned int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // r8d
  int v27; // eax
  unsigned __int8 result; // al
  unsigned __int16 v29; // ax
  unsigned __int16 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r10
  unsigned int v34; // [rsp+90h] [rbp+8h] BYREF
  int *v35; // [rsp+A0h] [rbp+18h]
  __int64 v36; // [rsp+A8h] [rbp+20h]

  v35 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 1;
  v5 = a3;
  LOBYTE(v34) = 1;
  v8 = *(__int64 **)(v3 + 400);
  v9 = v3;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qqq(0x6Cu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v3, a1, a2);
    v9 = *(_QWORD *)(a1 + 16);
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C00A025A < 4u )
      goto LABEL_38;
    WPP_SF_(0x6Du, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids);
    goto LABEL_36;
  }
  if ( !*(_DWORD *)(a1 + 440) )
  {
    IsValidMulticastFilter = 0;
    v4 = 1;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a2 + 48) == 6 )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v11 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = IsValidMulticastFilter & v11;
    *(_DWORD *)(a1 + 472) = v11;
    v12 = *(_QWORD *)(a2 + 40);
    if ( *(_DWORD *)(a2 + 32) == 16843272 )
      v13 = ethAddOneOpenMulticastAddress(a1, v12, &v34);
    else
      v13 = ethDeleteOneOpenMulticastAddress(a1, v12, &v34);
    v4 = v34;
    IsValidMulticastFilter = v13;
    if ( (_BYTE)v34 != 1 )
    {
      v14 = v8;
      v15 = *v8;
      memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
      v16 = *((_DWORD *)v8 + 92);
      *((_DWORD *)v8 + 92) = 0;
      v17 = -1;
      *((_DWORD *)v8 + 93) = v16;
      do
      {
        while ( 1 )
        {
          if ( !v15 )
          {
            if ( IsValidMulticastFilter )
              goto LABEL_32;
            if ( v14 != v8 || (v14 = v8 + 1, (v15 = v8[1]) == 0) )
            {
              if ( v14 != v8 + 1 )
                break;
              v14 = v8 + 2;
              v15 = v8[2];
              if ( !v15 )
                break;
            }
          }
          if ( IsValidMulticastFilter )
            goto LABEL_32;
          v19 = 0LL;
          v34 = 0;
          if ( *(_DWORD *)(v15 + 456) )
          {
            while ( 1 )
            {
              v20 = *((_DWORD *)v8 + 92);
              v21 = 0LL;
              if ( v20 )
              {
                v22 = v8[44];
                v23 = 3 * v19;
                v17 = -1;
                v36 = *(_QWORD *)(v15 + 448);
                v24 = *(_DWORD *)(v36 + 12 * v19 + 6);
                while ( 1 )
                {
                  v25 = *(_DWORD *)(v22 + 6 * v21 + 2);
                  if ( v25 > v24 )
                    break;
                  if ( v25 >= v24 )
                  {
                    v29 = *(_WORD *)(v22 + 6 * v21);
                    v30 = *(_WORD *)(v36 + 4 * v23 + 4);
                    if ( v29 > v30 )
                      break;
                    if ( v29 >= v30 )
                      goto LABEL_15;
                  }
                  v21 = (unsigned int)(v21 + 1);
                  if ( (unsigned int)v21 >= v20 )
                    goto LABEL_11;
                }
                v17 = 1;
              }
LABEL_11:
              *((_DWORD *)v8 + 92) = v20 + 1;
              if ( v20 + 1 > *((_DWORD *)v8 + 86) )
                break;
              v18 = (unsigned int)v21;
              if ( v17 > 0 )
                memmove(
                  (void *)(v8[44] + 6LL * (unsigned int)(v21 + 1)),
                  (const void *)(v8[44] + 2 * ((unsigned int)v21 + 2 * v21)),
                  6 * (v20 + 1 - (unsigned int)v21) - 6);
              memmove((void *)(v8[44] + 6 * v18), (const void *)(*(_QWORD *)(v15 + 448) + 4 * (3LL * v34 + 1)), 6uLL);
LABEL_15:
              v17 = -1;
              v19 = v34 + 1;
              v34 = v19;
              if ( (unsigned int)v19 >= *(_DWORD *)(v15 + 456) )
              {
                v17 = -1;
                goto LABEL_17;
              }
            }
            IsValidMulticastFilter = -1073676279;
            v17 = -1;
          }
LABEL_17:
          v15 = *(_QWORD *)(v15 + 424);
        }
      }
      while ( v14 != v8 + 2 );
LABEL_32:
      v26 = *((_DWORD *)v8 + 92);
      if ( v26 == *((_DWORD *)v8 + 93) && (v31 = 0LL, v26) )
      {
        v32 = v8[45];
        v33 = v8[44];
        while ( *(_DWORD *)(v33 + 6 * v31 + 2) == *(_DWORD *)(v32 + 6 * v31 + 2)
             && *(_WORD *)(v33 + 6 * v31) == *(_WORD *)(v32 + 6 * v31) )
        {
          v17 = 0;
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= v26 )
            goto LABEL_33;
        }
      }
      else
      {
LABEL_33:
        if ( !v17 )
        {
          memmove((void *)v8[44], (const void *)v8[45], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
          *((_DWORD *)v8 + 93) = 0;
          v4 = 1;
          goto LABEL_35;
        }
      }
      v4 = 0;
      *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(a2 + 160) = *(_DWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v8[44];
      v27 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 48) = 6 * *((_DWORD *)v8 + 92);
      *(_DWORD *)(a2 + 144) = v27;
      *(_DWORD *)(a2 + 32) = 16843011;
LABEL_35:
      v5 = v35;
    }
LABEL_36:
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qqqDD(0x6Fu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v3, a1, a2, IsValidMulticastFilter, v4);
LABEL_38:
    if ( !IsValidMulticastFilter )
      goto LABEL_39;
    goto LABEL_59;
  }
  *(_DWORD *)(a2 + 52) = 0;
  IsValidMulticastFilter = -1073676268;
  *(_DWORD *)(a2 + 56) = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qqq(0x6Eu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v3, a1, a2);
    goto LABEL_36;
  }
LABEL_59:
  if ( (byte_1C00A2084 & 4) != 0 )
    McTemplateK0jqxqdq(
      *(unsigned int *)(v3 + 4088),
      &SetOpenEthAddDeleteMulticastFailed,
      (const GUID *)(v3 + 4040),
      v3 + 4040,
      *(_DWORD *)(v3 + 4088),
      *(_QWORD *)(v3 + 4056),
      IsValidMulticastFilter,
      60,
      a1);
LABEL_39:
  result = v4;
  *v5 = IsValidMulticastFilter;
  return result;
}
