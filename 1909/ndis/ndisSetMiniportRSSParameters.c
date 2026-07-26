/*
 * XREFs of ndisSetMiniportRSSParameters @ 0x1C003B4A4
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C003B000 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisCalculateRssParametersSize @ 0x1C003B624 (ndisCalculateRssParametersSize.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 */

char __fastcall ndisSetMiniportRSSParameters(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // rdi
  char v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned __int8 v10; // cl
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  char v19; // [rsp+30h] [rbp-48h]
  char v20; // [rsp+38h] [rbp-40h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      149,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v19);
  }
  *(_DWORD *)(v4 + 56) = 0;
  v6 = 1;
  v7 = *(_DWORD *)(v4 + 48);
  if ( v7 < 0x1C )
  {
    *(_DWORD *)(v4 + 56) = 28;
    v13 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v15 = 150;
    goto LABEL_19;
  }
  v8 = *(_QWORD *)(v4 + 40);
  v9 = 40;
  v10 = *(_BYTE *)(v8 + 1);
  if ( v10 >= 2u )
  {
    LODWORD(a2) = *(unsigned __int16 *)(v8 + 2);
    if ( (unsigned __int16)a2 < 0x28u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_23:
        v13 = -1073676268;
        goto LABEL_13;
      }
      v16 = 151;
LABEL_22:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        11,
        v16,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        a1,
        v4);
      goto LABEL_23;
    }
    if ( v10 >= 3u )
    {
      v9 = 44;
      if ( (unsigned __int16)a2 < 0x2Cu )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_23;
        v16 = 152;
        goto LABEL_22;
      }
    }
    if ( v7 < v9 )
    {
      *(_DWORD *)(v4 + 56) = v9;
      v13 = -1073676268;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_13;
      v15 = 153;
LABEL_19:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        11,
        v15,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        a1,
        v4,
        20);
      goto LABEL_13;
    }
  }
  v11 = ndisCalculateRssParametersSize(*(_QWORD *)(v4 + 40), &v21, 11LL);
  v13 = v11;
  if ( v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v17 = 154;
    v20 = v11;
    goto LABEL_31;
  }
  if ( *(_WORD *)(v8 + 12) > 0x200u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_35:
      v13 = -1073676267;
      goto LABEL_13;
    }
    v18 = 155;
LABEL_34:
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      v18,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v4,
      0);
    goto LABEL_35;
  }
  if ( *(_WORD *)(v8 + 20) != (_WORD)v11 + 40 && (*(_BYTE *)(v8 + 4) & 0x10) == 0 && *(_BYTE *)(v8 + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v18 = 156;
    goto LABEL_34;
  }
  v13 = 0;
  if ( v7 >= v21 )
  {
    v6 = 0;
    goto LABEL_13;
  }
  *(_DWORD *)(v4 + 56) = v21;
  v13 = -1073676268;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 157;
    v20 = 20;
LABEL_31:
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      v17,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v4,
      v20);
  }
LABEL_13:
  *a3 = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x9Eu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v4,
      v6,
      v13);
  if ( v13 && (byte_1C00E8084 & 4) != 0 )
    McTemplateK0jqxqqq(
      *(_DWORD *)(a1 + 4056),
      (unsigned int)&SetMiniportRSSCapsFailed,
      a1 + 4008,
      a1 + 4008,
      *(_DWORD *)(a1 + 4056),
      *(_QWORD *)(a1 + 4024),
      v13,
      2,
      v4);
  return v6;
}
