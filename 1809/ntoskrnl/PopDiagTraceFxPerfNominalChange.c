/*
 * XREFs of PopDiagTraceFxPerfNominalChange @ 0x1402E11F0
 * Callers:
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1402DA350 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPerfNominalChange(__int64 *a1, unsigned __int8 a2, int a3, unsigned int a4, __int64 a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  int v14; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-31h] BYREF
  __int64 v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+74h] [rbp-15h]
  int *v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+84h] [rbp-5h]
  int *v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+94h] [rbp+Bh]
  int *v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A4h] [rbp+1Bh]
  __int64 v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+B4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+57h] BYREF
  int v32; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v33; // [rsp+100h] [rbp+77h] BYREF

  v5 = &retaddr;
  v33 = a4;
  v32 = a3;
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE);
    if ( (_BYTE)v5 )
    {
      v10 = *a1;
      v11 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      UserData.Ptr = v11 + 48;
      v16 = v10 + 16;
      v14 = a2;
      v19 = &v14;
      v22 = &v32;
      v25 = (int *)&v33;
      v5 = (_UNKNOWN **)(16LL * a4);
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v12 = -1;
      if ( (unsigned __int64)v5 <= 0xFFFFFFFF )
        v12 = 16 * a4;
      UserData.Size = 8;
      if ( (unsigned __int64)v5 <= 0xFFFFFFFF )
      {
        v30 = 0;
        v28 = a5;
        v29 = v12;
        LOBYTE(v5) = EtwWriteEx(
                       v9,
                       &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       6u,
                       &UserData);
      }
    }
  }
  return (char)v5;
}
