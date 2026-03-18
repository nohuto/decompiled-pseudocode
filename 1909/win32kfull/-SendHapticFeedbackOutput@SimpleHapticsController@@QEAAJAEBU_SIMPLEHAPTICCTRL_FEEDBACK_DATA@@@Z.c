/*
 * XREFs of ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C02573EC
 * Callers:
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0253EA4 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SimpleHapticsController::SendHapticFeedbackOutput(
        SimpleHapticsController *this,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a2)
{
  ULONG v4; // r14d
  _BYTE *v5; // r10
  int v6; // eax
  unsigned __int16 v7; // r9
  ULONG v8; // esi
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  NTSTATUS result; // eax
  int v13; // ecx
  void *v14; // rcx
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-91h]
  ULONG Report; // [rsp+30h] [rbp-89h]
  NTSTATUS v17; // [rsp+50h] [rbp-69h] BYREF
  int v18; // [rsp+54h] [rbp-65h] BYREF
  int v19; // [rsp+58h] [rbp-61h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+70h] [rbp-49h] BYREF
  const char *v22; // [rsp+90h] [rbp-29h]
  __int64 v23; // [rsp+98h] [rbp-21h]
  const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *v24; // [rsp+A0h] [rbp-19h]
  __int64 v25; // [rsp+A8h] [rbp-11h]
  int *v26; // [rsp+B0h] [rbp-9h]
  __int64 v27; // [rsp+B8h] [rbp-1h]
  int *v28; // [rsp+C0h] [rbp+7h]
  __int64 v29; // [rsp+C8h] [rbp+Fh]
  union _LARGE_INTEGER *p_ByteOffset; // [rsp+D0h] [rbp+17h]
  __int64 v31; // [rsp+D8h] [rbp+1Fh]

  v17 = 0;
  v4 = 0;
  if ( (unsigned int)dword_1C031F2D0 > 4 )
  {
    v23 = 45LL;
    v22 = "SimpleHapticsController::GetReportInfo entry";
    v18 = *((_DWORD *)a2 + 1);
    v26 = &v18;
    v19 = *((_DWORD *)a2 + 2);
    v28 = &v19;
    ByteOffset.LowPart = *((_DWORD *)a2 + 3);
    p_ByteOffset = &ByteOffset;
    v24 = a2;
    v25 = 2LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8EED, 0LL, 0LL, 7u, &v21);
  }
  if ( !*((_WORD *)this + 36) || (v5 = (_BYTE *)*((_QWORD *)this + 8)) == 0LL || !*((_QWORD *)this + 3) )
  {
    result = -1073740701;
    goto LABEL_21;
  }
  v6 = *((_DWORD *)a2 + 2);
  v7 = *(_WORD *)a2;
  v8 = v6 - 1;
  if ( v6 <= 0 )
    v8 = 0;
  if ( v7 > 2u )
  {
    v9 = *((_DWORD *)this + 22);
    v10 = 0;
    if ( !v9 )
      goto LABEL_12;
    while ( 1 )
    {
      v11 = *((_QWORD *)this + 10) + 8LL * v10;
      if ( *(_WORD *)v11 == v7 )
        break;
      if ( ++v10 >= v9 )
        goto LABEL_12;
    }
    if ( !v11 )
    {
LABEL_12:
      result = -1073741811;
      goto LABEL_21;
    }
    v13 = *((_DWORD *)a2 + 3);
    if ( v13 > 0 )
      v4 = v13 + *(_DWORD *)(v11 + 4);
  }
  *v5 = 1;
  if ( HidP_SetUsageValue(
         HidP_Output,
         0xEu,
         0,
         0x21u,
         *(unsigned __int16 *)a2,
         *((PHIDP_PREPARSED_DATA *)this + 2),
         *((PCHAR *)this + 8),
         *((unsigned __int16 *)this + 36)) < 0 )
  {
    result = v17;
    goto LABEL_22;
  }
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    0,
    0x24u,
    v8,
    *((PHIDP_PREPARSED_DATA *)this + 2),
    *((PCHAR *)this + 8),
    *((unsigned __int16 *)this + 36));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    0,
    0x25u,
    v4,
    *((PHIDP_PREPARSED_DATA *)this + 2),
    *((PCHAR *)this + 8),
    *((unsigned __int16 *)this + 36));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    0,
    0x23u,
    *((_DWORD *)a2 + 1),
    *((PHIDP_PREPARSED_DATA *)this + 2),
    *((PCHAR *)this + 8),
    *((unsigned __int16 *)this + 36));
  v14 = (void *)*((_QWORD *)this + 3);
  Report = *((unsigned __int16 *)this + 36);
  pData = (EVENT_DATA_DESCRIPTOR *)*((_QWORD *)this + 8);
  ByteOffset.QuadPart = 0LL;
  result = ZwWriteFile(v14, 0LL, 0LL, 0LL, (PIO_STATUS_BLOCK)((char *)this + 40), pData, Report, &ByteOffset, 0LL);
  v17 = result;
  if ( result < 0 )
    goto LABEL_22;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  result = ZwFlushBuffersFile(*((HANDLE *)this + 3), (PIO_STATUS_BLOCK)((char *)this + 40));
LABEL_21:
  v17 = result;
LABEL_22:
  if ( (unsigned int)dword_1C031F2D0 > 4 )
  {
    v23 = 55LL;
    v22 = "SimpleHapticsController::SendHapticFeedbackOutput exit";
    v24 = (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v17;
    v25 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8E46, 0LL, 0LL, 4u, &v21);
    return v17;
  }
  return result;
}
