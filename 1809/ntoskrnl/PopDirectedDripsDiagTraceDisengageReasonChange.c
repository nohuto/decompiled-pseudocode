/*
 * XREFs of PopDirectedDripsDiagTraceDisengageReasonChange @ 0x14087D02C
 * Callers:
 *     PopDirectedDripsRefreshDisengageState @ 0x140869880 (PopDirectedDripsRefreshDisengageState.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDirectedDripsDiagTraceDisengageReasonChange(int a1, int a2)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v5; // rsi
  int v7; // [rsp+38h] [rbp-19h] BYREF
  int v8; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  int *v10; // [rsp+58h] [rbp+7h]
  int v11; // [rsp+60h] [rbp+Fh]
  int v12; // [rsp+64h] [rbp+13h]
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v20; // [rsp+B8h] [rbp+67h] BYREF
  int v21; // [rsp+C0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v21 = a2;
  v20 = a1;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DISENGAGE_MASK_CHANGED);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Size = 4;
      v11 = 4;
      v8 = a1 & (a2 ^ a1);
      v7 = a2 & (a2 ^ a1);
      UserData.Ptr = (ULONGLONG)&v20;
      v14 = 4;
      v10 = &v21;
      v17 = 4;
      v13 = &v7;
      v16 = &v8;
      LOBYTE(v2) = EtwWrite(v5, &POP_ETW_EVENT_DIRECTED_DRIPS_DISENGAGE_MASK_CHANGED, 0LL, 4u, &UserData);
    }
  }
  return (char)v2;
}
