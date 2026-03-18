/*
 * XREFs of ?DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C00417D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C0005A4C (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkHandleDiagnosticNotifications(struct _DXGK_DIAGNOSTIC_HEADER *a1)
{
  struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3 Value; // edx
  _QWORD *v3; // rax
  unsigned __int64 v4; // rcx
  struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D v5; // edi
  BOOLEAN v7; // al
  ULONGLONG v8; // r10
  const struct _TlgProvider_t *v9; // r11
  __int64 v10; // rdx
  const GUID *v11; // r9
  char v12; // r10
  const struct _TlgProvider_t *v13; // r11
  __int64 v14; // rdx
  const GUID *v15; // r9
  char v16; // r10
  const struct _TlgProvider_t *v17; // r11
  BOOLEAN v18; // al
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

  Value = (struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3)a1->Type.Notifications.Value;
  if ( *(unsigned int *)&Value >= 4 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v4 = a1->Type.Notifications.Value;
    v3[4] = 0LL;
LABEL_7:
    v3[3] = v4;
    goto LABEL_8;
  }
  if ( (unsigned __int16)*(_DWORD *)&a1->0 < 0x18u )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v3[3] = (unsigned __int16)*(_DWORD *)&a1->0;
    v3[4] = 24LL;
    v3[5] = 1LL;
LABEL_8:
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
  v5 = (struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D)a1[1].Category.Value;
  v35 = 1;
  if ( *(unsigned int *)&v5 >= 0x80 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v4 = (unsigned __int64)a1[1].Category.Value >> 7;
    v3[4] = 2LL;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)&Value & 1) != 0 )
  {
    v7 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C008D8A8, 4u, 1uLL);
    if ( v5 )
    {
      if ( v7 && (unsigned int)dword_1C008D8A8 > 4 && TlgKeywordOn(v9, v8) )
      {
        v38 = 4LL;
        v37 = &v35;
        p_SequenceNumber = &a1->SequenceNumber;
        p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
        v43 = &v27;
        v45 = &v26;
        v40 = 4LL;
        v30 = v16 & (*(unsigned int *)&v5 >> 4);
        v47 = &v30;
        v42 = 4LL;
        v31 = v16 & (*(unsigned int *)&v5 >> 3);
        v49 = &v31;
        v27 = v16;
        v32 = v16 & (*(unsigned int *)&v5 >> 1);
        v51 = &v32;
        v44 = v14;
        v33 = v16 & (*(unsigned int *)&v5 >> 6);
        v53 = &v33;
        v26 = v16;
        v34[0] = v16 & *(_BYTE *)&v5;
        v55 = v34;
        v28 = v16 & (*(unsigned int *)&v5 >> 5);
        v46 = v14;
        v57 = &v28;
        v59 = &v29;
        v48 = v14;
        v50 = v14;
        v52 = v14;
        v54 = v14;
        v56 = v14;
        v58 = v14;
        v29 = v16 & (*(unsigned int *)&v5 >> 2);
        v60 = v14;
        TlgWrite(v17, &unk_1C006B1B8, 0LL, v15, 0xEu, &pData);
      }
    }
    else if ( v7 && (unsigned int)dword_1C008D8A8 > 4 )
    {
      if ( TlgKeywordOn(v9, v8) )
      {
        v38 = 4LL;
        v37 = &v35;
        p_SequenceNumber = &a1->SequenceNumber;
        p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
        v43 = &v26;
        v45 = &v27;
        v40 = 4LL;
        v42 = 4LL;
        v26 = v12;
        v44 = v10;
        v27 = (char)v11;
        v46 = v10;
        TlgWrite(v13, &unk_1C006B26D, 0LL, v11, 7u, &pData);
      }
    }
  }
  else
  {
    v18 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C008D8A8, 4u, 2uLL);
    if ( v5 )
    {
      if ( v18 && (unsigned int)dword_1C008D8A8 > 4 && TlgKeywordOn(v19, 2uLL) )
      {
        v38 = 4LL;
        v37 = &v35;
        p_SequenceNumber = &a1->SequenceNumber;
        p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
        v43 = &v29;
        v45 = &v28;
        v40 = 4LL;
        v34[0] = v24 & (*(unsigned int *)&v5 >> 4);
        v47 = v34;
        v42 = 4LL;
        v33 = v24 & (*(unsigned int *)&v5 >> 3);
        v49 = &v33;
        v29 = (char)v23;
        v32 = v24 & (*(unsigned int *)&v5 >> 1);
        v51 = &v32;
        v44 = v24;
        v31 = v24 & (*(unsigned int *)&v5 >> 6);
        v53 = &v31;
        v28 = v24;
        v30 = v24 & *(_BYTE *)&v5;
        v55 = &v30;
        v27 = v24 & (*(unsigned int *)&v5 >> 5);
        v46 = v24;
        v57 = &v27;
        v59 = &v26;
        v48 = v24;
        v50 = v24;
        v52 = v24;
        v54 = v24;
        v56 = v24;
        v58 = v24;
        v26 = v24 & (*(unsigned int *)&v5 >> 2);
        v60 = v24;
        TlgWrite(v25, &unk_1C006B0BB, 0LL, v23, 0xEu, &pData);
      }
    }
    else if ( v18 && (unsigned int)dword_1C008D8A8 > 4 && TlgKeywordOn(v19, 2uLL) )
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
      TlgWrite(v22, &unk_1C006B170, 0LL, v20, 7u, &pData);
    }
  }
  return 0LL;
}
