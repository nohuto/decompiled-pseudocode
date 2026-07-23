/*
 * XREFs of PopDiagTraceIrpStart @ 0x140172E20
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x140171184 (PopDequeueQuerySetIrp.c)
 *     PopRequestPowerIrp @ 0x140172660 (PopRequestPowerIrp.c)
 *     PopQueueQuerySetIrp @ 0x140172B8C (PopQueueQuerySetIrp.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  int *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  char *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  __int64 v34; // [rsp+D8h] [rbp-30h]
  int v35; // [rsp+E0h] [rbp-28h]
  int v36; // [rsp+E4h] [rbp-24h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  int *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  _DWORD *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  __int64 v42; // [rsp+138h] [rbp+30h]
  _DWORD v43[2]; // [rsp+140h] [rbp+38h] BYREF
  _DWORD *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  wchar_t *Buffer; // [rsp+158h] [rbp+50h]
  _DWORD v47[2]; // [rsp+160h] [rbp+58h] BYREF
  int *v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  char *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  int *v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]

  v22 = a2;
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
  v23 = v7;
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
    v20 = qword_140418728;
    v38 = &v18;
    v40 = v43;
    v42 = *(_QWORD *)(v7 + 48);
    v43[0] = *(unsigned __int16 *)(v7 + 40);
    v44 = v47;
    Buffer = p_DestinationString->Buffer;
    v47[0] = p_DestinationString->Length;
    v48 = &v19;
    v50 = &v15;
    v52 = &v20;
    v39 = 4LL;
    v41 = 2LL;
    v43[1] = 0;
    v45 = 2LL;
    v47[1] = 0;
    v49 = 4LL;
    v51 = 1LL;
    v53 = 4LL;
    TlgWrite(&pCallbackContext, &unk_140371FDD, 0LL, 0LL, 0xAu, &pData);
  }
  if ( PopDiagHandleRegistered )
  {
    v11 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPSTART) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v22;
      v26 = &v21;
      v28 = &v14;
      v30 = &v23;
      v32 = &v17;
      v27 = 4LL;
      v29 = 1LL;
      v31 = 8LL;
      v33 = 2LL;
      if ( (_WORD)v17 )
      {
        v12 = *(unsigned __int16 *)(v7 + 40);
        v10 = 6;
        v34 = *(_QWORD *)(v7 + 48);
        v35 = v12;
        v36 = 0;
      }
      v13 = 2LL * v10;
      *(&UserData.Ptr + v13) = (ULONGLONG)&v16;
      *((_QWORD *)&UserData.Size + v13) = 1LL;
      EtwWriteEx(v11, &POP_ETW_EVENT_IRPSTART, 0LL, 0, 0LL, 0LL, v10 + 1, &UserData);
    }
  }
}
