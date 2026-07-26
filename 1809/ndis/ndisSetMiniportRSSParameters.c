/*
 * XREFs of ndisSetMiniportRSSParameters @ 0x1C001F2CC
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00CB5A0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C001FB34 (ndisCalculateRssParametersSize.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSParameters(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int8 v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned __int8 v10; // cl
  unsigned __int16 v11; // dx
  int v12; // eax
  int v13; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+20h] [rbp-58h]
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(168LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2);
  *(_DWORD *)(a2 + 56) = 0;
  v6 = 1;
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v13 = -1073676268;
    if ( (unsigned __int8)byte_1C00A025A < 2u )
      goto LABEL_13;
    v15 = 169LL;
    goto LABEL_19;
  }
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 40;
  v10 = *(_BYTE *)(v8 + 1);
  if ( v10 >= 2u )
  {
    v11 = *(_WORD *)(v8 + 2);
    if ( v11 < 0x28u )
    {
      if ( (unsigned __int8)byte_1C00A025A < 2u )
      {
LABEL_24:
        v13 = -1073676268;
        goto LABEL_13;
      }
      v17 = 170LL;
LABEL_23:
      WPP_SF_qq(v17, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2);
      goto LABEL_24;
    }
    if ( v10 >= 3u )
    {
      v9 = 44;
      if ( v11 < 0x2Cu )
      {
        if ( (unsigned __int8)byte_1C00A025A < 2u )
          goto LABEL_24;
        v17 = 171LL;
        goto LABEL_23;
      }
    }
    if ( v7 < v9 )
    {
      *(_DWORD *)(a2 + 56) = v9;
      v13 = -1073676268;
      if ( (unsigned __int8)byte_1C00A025A < 2u )
        goto LABEL_13;
      v15 = 172LL;
LABEL_19:
      WPP_SF_qqd(v15, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, -1073676268);
      goto LABEL_13;
    }
  }
  v12 = ndisCalculateRssParametersSize(*(_QWORD *)(a2 + 40), &v20);
  v13 = v12;
  if ( v12 )
  {
    if ( (unsigned __int8)byte_1C00A025A < 2u )
      goto LABEL_13;
    v16 = 173LL;
    v19 = v12;
LABEL_20:
    WPP_SF_qqd(v16, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, v19);
    goto LABEL_13;
  }
  if ( *(_WORD *)(v8 + 12) > 0x200u )
  {
    if ( (unsigned __int8)byte_1C00A025A < 2u )
    {
LABEL_35:
      v13 = -1073676267;
      goto LABEL_13;
    }
    v18 = 174LL;
LABEL_34:
    WPP_SF_qqd(v18, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, 0);
    goto LABEL_35;
  }
  if ( *(_WORD *)(v8 + 20) != 40 && (*(_BYTE *)(v8 + 4) & 0x10) == 0 && *(_BYTE *)(v8 + 8) )
  {
    if ( (unsigned __int8)byte_1C00A025A < 2u )
      goto LABEL_35;
    v18 = 175LL;
    goto LABEL_34;
  }
  v13 = 0;
  if ( v7 >= v20 )
  {
    v6 = 0;
    goto LABEL_13;
  }
  *(_DWORD *)(a2 + 56) = v20;
  v13 = -1073676268;
  if ( (unsigned __int8)byte_1C00A025A >= 2u )
  {
    v16 = 176LL;
    v19 = -1073676268;
    goto LABEL_20;
  }
LABEL_13:
  *a3 = v13;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqDD(177LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, v6, v13);
  if ( v13 && (byte_1C00A2084 & 4) != 0 )
    McTemplateK0jqxqdq(
      *(_DWORD *)(a1 + 4088),
      (unsigned int)&SetMiniportRSSCapsFailed,
      a1 + 4040,
      a1 + 4040,
      *(_DWORD *)(a1 + 4088),
      *(_QWORD *)(a1 + 4056),
      v13,
      147,
      a2);
  return v6;
}
