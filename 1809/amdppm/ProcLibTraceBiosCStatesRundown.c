/*
 * XREFs of ProcLibTraceBiosCStatesRundown @ 0x1C0029B98
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0029130 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0009594 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceBiosCStatesRundown(_QWORD *a1)
{
  char *PoolWithTag; // rbx
  int ProcessorNumber; // eax
  __int64 v4; // rcx
  ULONG v5; // r9d
  __int64 v6; // rax
  unsigned int *v7; // rsi
  int v8; // ecx
  unsigned int v9; // eax
  __int64 i; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // xmm0_8
  char *v14; // r8
  unsigned int v16; // [rsp+38h] [rbp-39h] BYREF
  struct _PROCESSOR_NUMBER v17; // [rsp+3Ch] [rbp-35h] BYREF
  int v18; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-19h]
  int v21; // [rsp+60h] [rbp-11h]
  int v22; // [rsp+64h] [rbp-Dh]
  __int16 *v23; // [rsp+68h] [rbp-9h]
  int v24; // [rsp+70h] [rbp-1h]
  int v25; // [rsp+74h] [rbp+3h]
  __int16 *v26; // [rsp+78h] [rbp+7h]
  int v27; // [rsp+80h] [rbp+Fh]
  int v28; // [rsp+84h] [rbp+13h]
  int *v29; // [rsp+88h] [rbp+17h]
  int v30; // [rsp+90h] [rbp+1Fh]
  int v31; // [rsp+94h] [rbp+23h]
  unsigned int *v32; // [rsp+98h] [rbp+27h]
  int v33; // [rsp+A0h] [rbp+2Fh]
  int v34; // [rsp+A4h] [rbp+33h]
  char *v35; // [rsp+A8h] [rbp+37h]
  int v36; // [rsp+B0h] [rbp+3Fh]
  int v37; // [rsp+B4h] [rbp+43h]

  PoolWithTag = 0LL;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_BIOS_C_STATES_RUNDOWN);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber((__int64)a1, &v17);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        a1[26],
        0LL);
      v4 = a1[33];
      v5 = 6;
      v16 = 0;
      v6 = 0LL;
      v7 = (unsigned int *)a1[62];
      if ( (v4 & 0x7F077) != 0 )
      {
        v6 = *v7;
        v16 = *v7;
      }
      if ( (v4 & 0x7F070) != 0 )
        v8 = 2;
      else
        v8 = (v4 & 7) != 0;
      UserData.Reserved = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v18 = v8;
      UserData.Ptr = (unsigned __int64)&v17;
      p_Number = &v17.Number;
      v23 = &AcpiInfo;
      v26 = &word_1C0011BA2;
      v29 = &v18;
      UserData.Size = 2;
      v24 = 2;
      v27 = 2;
      v32 = &v16;
      v21 = 1;
      v30 = 4;
      v33 = 4;
      if ( (_DWORD)v6 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 19 * v6, 0x72637250u);
        if ( !PoolWithTag )
        {
LABEL_15:
          LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                      WdfDriverGlobals,
                                      a1[26]);
          return ProcessorNumber;
        }
        v9 = v16;
        for ( i = 0LL; (unsigned int)i < v16; v9 = v16 )
        {
          v11 = 5 * i;
          v12 = (unsigned int)i;
          v13 = *(_QWORD *)&v7[5 * i + 1];
          i = (unsigned int)(i + 1);
          v14 = &PoolWithTag[19 * v12];
          *(_QWORD *)v14 = v13;
          *((_DWORD *)v14 + 2) = v7[v11 + 3];
          v14[12] = v7[v11 + 4];
          *(_DWORD *)(v14 + 13) = v7[v11 + 5];
          *(_WORD *)(v14 + 17) = HIWORD(v7[v11 + 4]);
        }
        v5 = 7;
        v37 = 0;
        v35 = PoolWithTag;
        v36 = 19 * v9;
      }
      EtwWrite(ProcLibEtwHandle, &PPM_ETW_BIOS_C_STATES_RUNDOWN, 0LL, v5, &UserData);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x72637250u);
      goto LABEL_15;
    }
  }
  return ProcessorNumber;
}
