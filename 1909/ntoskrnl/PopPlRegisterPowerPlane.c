/*
 * XREFs of PopPlRegisterPowerPlane @ 0x14030509C
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopPepIterateDeviceList @ 0x1402F9C40 (PopPepIterateDeviceList.c)
 *     PopPlTraceLogPowerPlane @ 0x140305244 (PopPlTraceLogPowerPlane.c)
 *     PopPlInitPowerPlane @ 0x1408B9714 (PopPlInitPowerPlane.c)
 */

__int64 __fastcall PopPlRegisterPowerPlane(__int64 a1, __int64 a2, ULONG64 a3, __int64 a4)
{
  int inited; // edi
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r9
  const GUID *pActivityId; // [rsp+20h] [rbp-49h]
  const GUID *pRelatedActivityId; // [rsp+28h] [rbp-41h]
  __int16 v12; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h] BYREF
  __int64 v15; // [rsp+58h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  __int16 *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]

  v14 = 0LL;
  v15 = 0LL;
  if ( PopPowerPlane )
  {
    inited = -1073741768;
  }
  else if ( *(_DWORD *)(a1 + 4) )
  {
    inited = -1073741735;
  }
  else if ( *(_QWORD *)(a1 + 16) )
  {
    inited = PopPlInitPowerPlane(a1 + 24, a1, a2 + a1, &v13);
    if ( inited >= 0 )
    {
      v6 = v13;
      *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(a1 + 16);
      v14 = 0LL;
      v15 = v6;
      PopPepIterateDeviceList(
        0LL,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlActivateDeviceIterator,
        0LL,
        a4,
        1,
        0,
        (__int64)&v14);
      PopPepIterateDeviceList(
        (void (__fastcall *)(__int64))PopPlCommitPowerPlaneRegistration,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlRegisterDeviceIterator,
        (void (__fastcall *)(void (__fastcall *)(__int64), __int64))PopPlPublishInitialPowerDraw,
        v7,
        0,
        0,
        (__int64)&v14);
      PopPlTraceLogPowerPlane(v6);
      PopPepIterateDeviceList(
        0LL,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlIdleDeviceIterator,
        0LL,
        v8,
        0,
        1,
        (__int64)&v14);
    }
  }
  else
  {
    inited = -1073741811;
  }
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v12;
    v20 = &v13;
    v12 = 1;
    LODWORD(v13) = inited;
    v18 = 2;
    v21 = 4;
    TlgWriteEx(&pCallbackContext, &unk_140391C97, a3, a4, pActivityId, pRelatedActivityId, 4u, &pData);
  }
  return (unsigned int)inited;
}
