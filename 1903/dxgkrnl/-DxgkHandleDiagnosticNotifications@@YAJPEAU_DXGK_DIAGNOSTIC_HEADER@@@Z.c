/*
 * XREFs of ?DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C00487A0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003574 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkHandleDiagnosticNotifications(struct _DXGK_DIAGNOSTIC_HEADER *a1, __int64 a2, __int64 a3)
{
  __int64 Value; // rdx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rcx
  struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D v7; // edi
  ULONGLONG v9; // r10
  const struct _TlgProvider_t *v10; // r11
  __int64 v11; // rdx
  const GUID *v12; // r9
  char v13; // r10
  const struct _TlgProvider_t *v14; // r11
  __int64 v15; // rdx
  const GUID *v16; // r9
  char v17; // r10
  const struct _TlgProvider_t *v18; // r11
  const struct _TlgProvider_t *v19; // r11
  const GUID *v20; // r9
  __int64 v21; // r10
  const struct _TlgProvider_t *v22; // r11
  const GUID *v23; // r9
  __int64 v24; // r10
  const struct _TlgProvider_t *v25; // r11
  char v26; // [rsp+38h] [rbp-D0h] BYREF
  char v27; // [rsp+39h] [rbp-CFh] BYREF
  char v28; // [rsp+3Ah] [rbp-CEh] BYREF
  char v29; // [rsp+3Bh] [rbp-CDh] BYREF
  char v30; // [rsp+3Ch] [rbp-CCh] BYREF
  char v31; // [rsp+3Dh] [rbp-CBh] BYREF
  char v32; // [rsp+3Eh] [rbp-CAh] BYREF
  char v33; // [rsp+3Fh] [rbp-C9h] BYREF
  _BYTE v34[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v35; // [rsp+44h] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  int *v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-98h]
  UINT *p_SequenceNumber; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h]
  union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *p_TargetId; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-78h]
  char *v43; // [rsp+98h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp-68h]
  char *v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  char *v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  char *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  char *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  char *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  char *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  char *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  char *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]

  Value = a1->Type.Notifications.Value;
  if ( (unsigned int)Value >= 4 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1, Value, a3);
    v6 = a1->Type.Notifications.Value;
    v5[4] = 0LL;
LABEL_7:
    v5[3] = v6;
    goto LABEL_8;
  }
  if ( (unsigned __int16)*(_DWORD *)&a1->0 < 0x18u )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1, Value, a3);
    v5[3] = (unsigned __int16)*(_DWORD *)&a1->0;
    v5[4] = 24LL;
    v5[5] = 1LL;
LABEL_8:
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  v7 = (struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D)a1[1].Category.Value;
  v35 = 1;
  if ( *(unsigned int *)&v7 >= 0x80 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1, Value, a3);
    v6 = (unsigned __int64)a1[1].Category.Value >> 7;
    v5[4] = 2LL;
    goto LABEL_7;
  }
  if ( (Value & 1) != 0 )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00A18F8, 4u, 1uLL) )
    {
      if ( v7 )
      {
        if ( (unsigned int)dword_1C00A18F8 > 4 && TlgKeywordOn(v10, v9) )
        {
          v38 = 4LL;
          v37 = &v35;
          p_SequenceNumber = &a1->SequenceNumber;
          p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
          v43 = &v27;
          v45 = &v26;
          v40 = 4LL;
          v30 = v17 & (*(unsigned int *)&v7 >> 4);
          v47 = &v30;
          v42 = 4LL;
          v31 = v17 & (*(unsigned int *)&v7 >> 3);
          v49 = &v31;
          v27 = v17;
          v32 = v17 & (*(unsigned int *)&v7 >> 1);
          v51 = &v32;
          v44 = v15;
          v33 = v17 & (*(unsigned int *)&v7 >> 6);
          v53 = &v33;
          v26 = v17;
          v34[0] = v17 & *(_BYTE *)&v7;
          v55 = v34;
          v28 = v17 & (*(unsigned int *)&v7 >> 5);
          v46 = v15;
          v57 = &v28;
          v59 = &v29;
          v48 = v15;
          v50 = v15;
          v52 = v15;
          v54 = v15;
          v56 = v15;
          v58 = v15;
          v29 = v17 & (*(unsigned int *)&v7 >> 2);
          v60 = v15;
          TlgWrite(v18, &unk_1C0073BE1, 0LL, v16, 0xEu, &pData);
        }
      }
      else if ( (unsigned int)dword_1C00A18F8 > 4 )
      {
        if ( TlgKeywordOn(v10, v9) )
        {
          v38 = 4LL;
          v37 = &v35;
          p_SequenceNumber = &a1->SequenceNumber;
          p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
          v43 = &v26;
          v45 = &v27;
          v40 = 4LL;
          v42 = 4LL;
          v26 = v13;
          v44 = v11;
          v27 = (char)v12;
          v46 = v11;
          TlgWrite(v14, &unk_1C0073C96, 0LL, v12, 7u, &pData);
        }
      }
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00A18F8, 4u, 2uLL) )
  {
    if ( v7 )
    {
      if ( (unsigned int)dword_1C00A18F8 > 4 && TlgKeywordOn(v19, 2uLL) )
      {
        v38 = 4LL;
        v37 = &v35;
        p_SequenceNumber = &a1->SequenceNumber;
        p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
        v43 = &v29;
        v45 = &v28;
        v40 = 4LL;
        v34[0] = v24 & (*(unsigned int *)&v7 >> 4);
        v47 = v34;
        v42 = 4LL;
        v33 = v24 & (*(unsigned int *)&v7 >> 3);
        v49 = &v33;
        v29 = (char)v23;
        v32 = v24 & (*(unsigned int *)&v7 >> 1);
        v51 = &v32;
        v44 = v24;
        v31 = v24 & (*(unsigned int *)&v7 >> 6);
        v53 = &v31;
        v28 = v24;
        v30 = v24 & *(_BYTE *)&v7;
        v55 = &v30;
        v27 = v24 & (*(unsigned int *)&v7 >> 5);
        v46 = v24;
        v57 = &v27;
        v59 = &v26;
        v48 = v24;
        v50 = v24;
        v52 = v24;
        v54 = v24;
        v56 = v24;
        v58 = v24;
        v26 = v24 & (*(unsigned int *)&v7 >> 2);
        v60 = v24;
        TlgWrite(v25, &unk_1C0073AE4, 0LL, v23, 0xEu, &pData);
      }
    }
    else if ( (unsigned int)dword_1C00A18F8 > 4 && TlgKeywordOn(v19, 2uLL) )
    {
      v38 = 4LL;
      v37 = &v35;
      p_SequenceNumber = &a1->SequenceNumber;
      p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
      v43 = &v29;
      v45 = &v28;
      v40 = 4LL;
      v42 = 4LL;
      v29 = (char)v20;
      v44 = v21;
      v28 = (char)v20;
      v46 = v21;
      TlgWrite(v22, &unk_1C0073B99, 0LL, v20, 7u, &pData);
    }
  }
  return 0LL;
}
