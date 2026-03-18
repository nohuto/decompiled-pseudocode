/*
 * XREFs of ?DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x1C0041CF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C0005A4C (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkHandleDiagnosticProgressions(struct _DXGK_DIAGNOSTIC_HEADER *a1)
{
  struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3 Value; // eax
  _QWORD *v3; // rax
  char v5; // r10
  const GUID *v6; // r9
  char v7; // al
  const GUID *v8; // r9
  char v9; // r10
  _BYTE v10[4]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v11[3]; // [rsp+3Ch] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  _DWORD *v13; // [rsp+68h] [rbp+7h]
  int v14; // [rsp+70h] [rbp+Fh]
  int v15; // [rsp+74h] [rbp+13h]
  UINT *p_SequenceNumber; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *p_TargetId; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]
  _BYTE *v22; // [rsp+98h] [rbp+37h]
  int v23; // [rsp+A0h] [rbp+3Fh]
  int v24; // [rsp+A4h] [rbp+43h]

  Value = (struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3)a1->Type.Notifications.Value;
  if ( *(unsigned int *)&Value >= 2 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v3[3] = a1->Type.Notifications.Value;
    v3[4] = 610LL;
LABEL_3:
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Value & 1) == 0 )
    return 3221225485LL;
  if ( (unsigned __int16)*(_DWORD *)&a1->0 < 0x18u )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v3[3] = (unsigned __int16)*(_DWORD *)&a1->0;
    v3[4] = 24LL;
    v3[5] = 619LL;
    goto LABEL_3;
  }
  if ( (((unsigned __int8)*(_DWORD *)&a1[1].Category.0 ^ (unsigned __int8)(a1[1].Category.Value >> 1)) & 2) == 0 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v3[3] = 627LL;
    goto LABEL_3;
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C008D870, 4u, 1uLL) )
  {
    v11[0] = 1;
    if ( (v5 & 2) != 0 )
    {
      EtwActivityIdControl(3u, &pActivityId);
      if ( (unsigned int)dword_1C008D870 > 4 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D870, 1uLL) )
        {
          v15 = 0;
          v18 = 0;
          v21 = 0;
          v13 = v11;
          p_SequenceNumber = &a1->SequenceNumber;
          p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
          v7 = *(_BYTE *)&a1[1].Category.0 & 1;
          v14 = 4;
          v24 = 0;
          v10[0] = v7;
          v22 = v10;
          v17 = 4;
          v20 = 4;
          v23 = 1;
          TlgWrite((TraceLoggingHProvider)&dword_1C008D870, &unk_1C006B06F, &pActivityId, v6, 6u, &pData);
        }
      }
    }
    else if ( (unsigned int)dword_1C008D870 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D870, 1uLL) )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v13 = v11;
      p_SequenceNumber = &a1->SequenceNumber;
      p_TargetId = (union _DXGK_DIAGNOSTIC_HEADER::$40250FC4A3BB2E663349F8B0BAF0016F *)&a1->TargetId;
      v22 = v10;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v10[0] = v9 & 1;
      v23 = 1;
      TlgWrite((TraceLoggingHProvider)&dword_1C008D870, &unk_1C006B023, &pActivityId, v8, 6u, &pData);
    }
  }
  return 0LL;
}
