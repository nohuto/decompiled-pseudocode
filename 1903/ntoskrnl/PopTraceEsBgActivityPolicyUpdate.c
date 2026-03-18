/*
 * XREFs of PopTraceEsBgActivityPolicyUpdate @ 0x1408B1E48
 * Callers:
 *     PopEsInStandbyEvaluate @ 0x1408B4990 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

char __fastcall PopTraceEsBgActivityPolicyUpdate(int a1)
{
  _UNKNOWN **v1; // rax
  int v2; // r9d
  int v3; // r10d
  REGHANDLE v4; // rbx
  int v6; // [rsp+38h] [rbp-29h] BYREF
  int v7; // [rsp+3Ch] [rbp-25h] BYREF
  int v8; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  int *v10; // [rsp+58h] [rbp-9h]
  int v11; // [rsp+60h] [rbp-1h]
  int v12; // [rsp+64h] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  int *v14; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+94h] [rbp+33h]
  int *v17; // [rsp+98h] [rbp+37h]
  int v18; // [rsp+A0h] [rbp+3Fh]
  int v19; // [rsp+A4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  int v21; // [rsp+C8h] [rbp+67h] BYREF

  v1 = &retaddr;
  v21 = a1;
  v8 = PopEsBgActivityPolicy;
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v6;
      v17 = &v7;
      v6 = v2;
      v7 = v3;
      v15 = 4;
      v18 = 4;
      LOBYTE(v1) = TlgWrite(&pCallbackContext, &unk_14038FF32, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_BACKGROUND_ACTIVITY_POLICY_UPDATE);
    if ( (_BYTE)v1 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 4;
      v10 = &v8;
      v11 = 4;
      LOBYTE(v1) = EtwWrite(v4, &POP_ETW_EVENT_BACKGROUND_ACTIVITY_POLICY_UPDATE, 0LL, 2u, &UserData);
    }
  }
  return (char)v1;
}
