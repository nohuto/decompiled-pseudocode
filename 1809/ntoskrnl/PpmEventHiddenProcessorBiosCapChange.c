/*
 * XREFs of PpmEventHiddenProcessorBiosCapChange @ 0x1401B5D34
 * Callers:
 *     PpmRegisterPerfCap @ 0x1402DB5A0 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PpmEventHiddenProcessorBiosCapChange(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  __int16 v6; // ax
  __int16 v8; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v10; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+64h] [rbp+23h]
  int *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  int *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v20; // [rsp+B0h] [rbp+6Fh] BYREF
  int v21; // [rsp+B8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v21 = a3;
  v20 = a2;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_BIOS_CAP_CHANGE);
    if ( (_BYTE)v3 )
    {
      v6 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v8 = v6;
      UserData.Ptr = (ULONGLONG)&v8;
      v10 = a1 + 209;
      v13 = &v20;
      v16 = &v21;
      UserData.Size = 2;
      v11 = 1;
      v14 = 4;
      v17 = 4;
      LOBYTE(v3) = EtwWrite(v5, &PPM_ETW_HIDDEN_PROCESSOR_BIOS_CAP_CHANGE, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
