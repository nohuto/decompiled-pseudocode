/*
 * XREFs of ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180137C30
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x180137AD8 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 */

void __fastcall CAudioDGProcess::OnADGProcessTerminatedHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        CAudioDGProcess *a2,
        const GUID *a3,
        const GUID *a4)
{
  unsigned int v4; // r10d
  int v6; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-29h] BYREF
  const char *v8; // [rsp+60h] [rbp-9h]
  int v9; // [rsp+68h] [rbp-1h]
  int v10; // [rsp+6Ch] [rbp+3h]
  int *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  LPCGUID *p_pRelatedActivityId; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+27h] BYREF
  LPCGUID pRelatedActivityId; // [rsp+E8h] [rbp+7Fh] BYREF

  LODWORD(pRelatedActivityId) = (_DWORD)a4;
  v4 = dword_1801B64B8;
  if ( (unsigned int)dword_1801B64B8 > 2 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801B64B8, 0x400000000000uLL) )
  {
    TlgWrite((TraceLoggingHProvider)&dword_1801B64B8, &unk_18017CEDC, a3, a4, 2u, &pData);
    a4 = (const GUID *)(unsigned int)pRelatedActivityId;
    v4 = dword_1801B64B8;
  }
  if ( (_DWORD)a4 )
  {
    if ( v4 > 2 )
    {
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v8 = "CAudioDGProcess::OnADGProcessTerminatedHandler";
      v11 = &v6;
      p_pRelatedActivityId = &pRelatedActivityId;
      v9 = 47;
      v6 = 602;
      v12 = 4;
      v15 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1801B64B8, &unk_18017CDBD, a3, a4, 5u, &v7);
    }
  }
  else
  {
    CAudioDGProcess::OnADGProcessTerminated(a2);
  }
}
