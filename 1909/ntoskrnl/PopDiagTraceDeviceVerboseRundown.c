/*
 * XREFs of PopDiagTraceDeviceVerboseRundown @ 0x14071C05C
 * Callers:
 *     PopDiagTraceFxRundown @ 0x14015AB78 (PopDiagTraceFxRundown.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14015AC7C (PopPepGetDevicePlatformStateDependents.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceDeviceVerboseRundown(__int64 a1)
{
  BOOLEAN result; // al
  __int64 v3; // rdi
  __int64 v4; // rcx
  UNICODE_STRING *p_DestinationString; // rdx
  int Length; // r8d
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int16 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  signed __int32 v15; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  __int16 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  __int64 v34; // [rsp+E8h] [rbp-20h]
  int v35; // [rsp+F0h] [rbp-18h]
  int v36; // [rsp+F4h] [rbp-14h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  __int64 *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  signed __int32 *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  int *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  wchar_t *Buffer; // [rsp+148h] [rbp+40h]
  int v48; // [rsp+150h] [rbp+48h]
  int v49; // [rsp+154h] [rbp+4Ch]
  __int64 *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]

  result = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN);
    if ( result )
    {
      v3 = *(_QWORD *)(a1 + 48);
      v4 = *(_QWORD *)(a1 + 56);
      v14 = 0;
      v17 = v3;
      v10 = *(_WORD *)(v3 + 280) >> 1;
      v11 = *(_WORD *)(v3 + 40) >> 1;
      LOWORD(v12) = *(_WORD *)(v3 + 56) >> 1;
      PopPepGetDevicePlatformStateDependents(v4, &v14);
      v19 = *(_QWORD *)(v17 + 16);
      v18 = *(_QWORD *)(v17 + 32);
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 816), 0, 0);
      if ( *(_QWORD *)(a1 + 1192) )
      {
        p_DestinationString = (UNICODE_STRING *)(a1 + 1184);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, &word_14078F2B0);
        p_DestinationString = &DestinationString;
      }
      Length = p_DestinationString->Length;
      *(_QWORD *)&UserData.Size = 8LL;
      LOWORD(v13) = (unsigned __int16)Length >> 1;
      LODWORD(v16) = *(_DWORD *)(a1 + 604);
      UserData.Ptr = (ULONGLONG)&v17;
      v22 = &v10;
      v23 = 2LL;
      v7 = *(unsigned __int16 *)(v3 + 280);
      v24 = *(_QWORD *)(v3 + 288);
      v27 = &v11;
      v25 = v7;
      v26 = 0;
      v28 = 2LL;
      v8 = *(unsigned __int16 *)(v3 + 40);
      v29 = *(_QWORD *)(v3 + 48);
      v32 = &v12;
      v30 = v8;
      v31 = 0;
      v33 = 2LL;
      v9 = *(unsigned __int16 *)(v3 + 56);
      v34 = *(_QWORD *)(v3 + 64);
      v37 = &v14;
      v39 = &v18;
      v41 = &v19;
      v43 = &v15;
      v45 = &v13;
      Buffer = p_DestinationString->Buffer;
      v50 = &v16;
      v35 = v9;
      v48 = Length;
      v36 = 0;
      v38 = 4LL;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 4LL;
      v46 = 2LL;
      v49 = 0;
      v51 = 4LL;
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN, &PopDiagActivityId, 0xEu, &UserData);
    }
  }
  return result;
}
