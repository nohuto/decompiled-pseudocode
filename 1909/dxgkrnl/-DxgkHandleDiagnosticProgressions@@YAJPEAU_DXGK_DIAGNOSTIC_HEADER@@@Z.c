/*
 * XREFs of ?DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C0048D60
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003680 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkHandleDiagnosticProgressions(struct _DXGK_DIAGNOSTIC_HEADER *a1, __int64 a2, __int64 a3)
{
  struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3 Value; // eax
  _QWORD *v5; // rax
  char v7; // r10
  const GUID *v8; // r9
  char v9; // al
  const GUID *v10; // r9
  char v11; // r10
  _BYTE v12[4]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v13[3]; // [rsp+3Ch] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  _DWORD *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  UINT *p_SequenceNumber; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *p_TargetId; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  _BYTE *v24; // [rsp+98h] [rbp+37h]
  int v25; // [rsp+A0h] [rbp+3Fh]
  int v26; // [rsp+A4h] [rbp+43h]

  Value = (struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3)a1->Type.Notifications.Value;
  if ( *(unsigned int *)&Value >= 2 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
    v5[3] = a1->Type.Notifications.Value;
    v5[4] = 608LL;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Value & 1) == 0 )
    return 3221225485LL;
  if ( (unsigned __int16)*(_DWORD *)&a1->0 < 0x18u )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
    v5[3] = (unsigned __int16)*(_DWORD *)&a1->0;
    v5[4] = 24LL;
    v5[5] = 617LL;
    goto LABEL_3;
  }
  if ( (((unsigned __int8)*(_DWORD *)&a1[1].Category.0 ^ (unsigned __int8)(a1[1].Category.Value >> 1)) & 2) == 0 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
    v5[3] = 625LL;
    goto LABEL_3;
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00A18C0, 4u, 1uLL) )
  {
    v13[0] = 1;
    if ( (v7 & 2) != 0 )
    {
      EtwActivityIdControl(3u, &pActivityId);
      if ( (unsigned int)dword_1C00A18C0 > 4 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A18C0, 1uLL) )
        {
          v17 = 0;
          v20 = 0;
          v23 = 0;
          v15 = v13;
          p_SequenceNumber = &a1->SequenceNumber;
          p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
          v9 = *(_BYTE *)&a1[1].Category.0 & 1;
          v16 = 4;
          v26 = 0;
          v12[0] = v9;
          v24 = v12;
          v19 = 4;
          v22 = 4;
          v25 = 1;
          TlgWrite((TraceLoggingHProvider)&dword_1C00A18C0, &unk_1C0073B28, &pActivityId, v8, 6u, &pData);
        }
      }
    }
    else if ( (unsigned int)dword_1C00A18C0 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A18C0, 1uLL) )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v15 = v13;
      p_SequenceNumber = &a1->SequenceNumber;
      p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
      v24 = v12;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v12[0] = v11 & 1;
      v25 = 1;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A18C0, &unk_1C0073ADC, &pActivityId, v10, 6u, &pData);
    }
  }
  return 0LL;
}
