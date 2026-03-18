/*
 * XREFs of PopDiagTraceIrpStart @ 0x140173E48
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x140172860 (PopDequeueQuerySetIrp.c)
 *     PopRequestPowerIrp @ 0x1401735E0 (PopRequestPowerIrp.c)
 *     PopQueueQuerySetIrp @ 0x140173BA4 (PopQueueQuerySetIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     PopFxAddLogEntry @ 0x1400E1184 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpStart(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char v4; // r14
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  UNICODE_STRING *p_DestinationString; // r15
  unsigned int v10; // edi
  REGHANDLE v11; // rsi
  int v12; // ecx
  __int64 v13; // rax
  char v14; // [rsp+48h] [rbp-C0h] BYREF
  char v15; // [rsp+49h] [rbp-BFh] BYREF
  char v16; // [rsp+4Ah] [rbp-BEh] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  int *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  char *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int64 v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  int *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  _DWORD *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  __int64 v43; // [rsp+138h] [rbp+30h]
  _DWORD v44[2]; // [rsp+140h] [rbp+38h] BYREF
  _DWORD *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  wchar_t *Buffer; // [rsp+158h] [rbp+50h]
  _DWORD v48[2]; // [rsp+160h] [rbp+58h] BYREF
  int *v49; // [rsp+168h] [rbp+60h]
  __int64 v50; // [rsp+170h] [rbp+68h]
  char *v51; // [rsp+178h] [rbp+70h]
  __int64 v52; // [rsp+180h] [rbp+78h]
  int *v53; // [rsp+188h] [rbp+80h]
  __int64 v54; // [rsp+190h] [rbp+88h]
  __int64 *v55; // [rsp+198h] [rbp+90h]
  __int64 v56; // [rsp+1A0h] [rbp+98h]

  v23 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = *(_QWORD *)(a2 + 72LL * *(char *)(a2 + 66) + 200);
  v4 = *(_BYTE *)(v3 + 184);
  v14 = v4;
  v5 = *(_DWORD *)(v3 + 188);
  v21 = v5;
  v16 = *(_BYTE *)(v3 + 192) - 1;
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v24 = v7;
  LOWORD(v17) = *(_WORD *)(v7 + 40) >> 1;
  v8 = *(_QWORD *)(v7 + 16);
  if ( v8 )
  {
    p_DestinationString = (UNICODE_STRING *)(v8 + 40);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&pwsz);
    p_DestinationString = &DestinationString;
  }
  if ( v5 == 1 && v4 == 2 )
  {
    PopFxAddLogEntry(v7, 0, 22, *(int *)(v3 + 192));
    v4 = v14;
  }
  v10 = 5;
  if ( !v4 && pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
  {
    v18 = *(_DWORD *)(v3 + 212);
    v19 = *(_DWORD *)(a1 + 72);
    v15 = PopCurrentBroadcast;
    v20 = qword_140442F68;
    v39 = &v18;
    v41 = v44;
    v43 = *(_QWORD *)(v7 + 48);
    v44[0] = *(unsigned __int16 *)(v7 + 40);
    v45 = v48;
    Buffer = p_DestinationString->Buffer;
    v48[0] = p_DestinationString->Length;
    v49 = &v19;
    v51 = &v15;
    v53 = &v20;
    v55 = &v22;
    v22 = 0x1000000LL;
    v40 = 4LL;
    v42 = 2LL;
    v44[1] = 0;
    v46 = 2LL;
    v48[1] = 0;
    v50 = 4LL;
    v52 = 1LL;
    v54 = 4LL;
    v56 = 8LL;
    TlgWrite(&pCallbackContext, &unk_1403913AA, 0LL, 0LL, 0xBu, &pData);
  }
  if ( PopDiagHandleRegistered )
  {
    v11 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPSTART) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v23;
      v27 = &v21;
      v29 = &v14;
      v31 = &v24;
      v33 = &v17;
      v28 = 4LL;
      v30 = 1LL;
      v32 = 8LL;
      v34 = 2LL;
      if ( (_WORD)v17 )
      {
        v12 = *(unsigned __int16 *)(v7 + 40);
        v10 = 6;
        v35 = *(_QWORD *)(v7 + 48);
        v36 = v12;
        v37 = 0;
      }
      v13 = 2LL * v10;
      *(&UserData.Ptr + v13) = (ULONGLONG)&v16;
      *((_QWORD *)&UserData.Size + v13) = 1LL;
      EtwWriteEx(v11, &POP_ETW_EVENT_IRPSTART, 0LL, 0, 0LL, 0LL, v10 + 1, &UserData);
    }
  }
}
