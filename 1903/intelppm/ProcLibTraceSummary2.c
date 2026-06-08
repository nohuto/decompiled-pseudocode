/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C0022B5C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 *     ProcLibTraceControlCallback @ 0x1C00256F0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0003770 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FC34 (GetRegistryDwordValueNoDefault.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rdi
  int ProcessorNumber; // eax
  __int64 v5; // r8
  unsigned int v6; // r10d
  int *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // r11
  unsigned int v10; // r9d
  int v11; // eax
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int RegistryDwordValueNoDefault; // eax
  unsigned int v21; // ecx
  unsigned int v23; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-75h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-71h] BYREF
  int v26; // [rsp+44h] [rbp-6Dh] BYREF
  int v27; // [rsp+48h] [rbp-69h] BYREF
  int v28; // [rsp+4Ch] [rbp-65h] BYREF
  int v29; // [rsp+50h] [rbp-61h] BYREF
  struct _PROCESSOR_NUMBER v30; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int8 *p_Number; // [rsp+68h] [rbp-49h]
  __int64 v33; // [rsp+70h] [rbp-41h]
  int *v34; // [rsp+78h] [rbp-39h]
  __int64 v35; // [rsp+80h] [rbp-31h]
  int *v36; // [rsp+88h] [rbp-29h]
  __int64 v37; // [rsp+90h] [rbp-21h]
  unsigned int *v38; // [rsp+98h] [rbp-19h]
  __int64 v39; // [rsp+A0h] [rbp-11h]
  int *v40; // [rsp+A8h] [rbp-9h]
  __int64 v41; // [rsp+B0h] [rbp-1h]
  unsigned int *v42; // [rsp+B8h] [rbp+7h]
  __int64 v43; // [rsp+C0h] [rbp+Fh]
  unsigned int *v44; // [rsp+C8h] [rbp+17h]
  __int64 v45; // [rsp+D0h] [rbp+1Fh]
  int *v46; // [rsp+D8h] [rbp+27h]
  __int64 v47; // [rsp+E0h] [rbp+2Fh]

  v2 = (const EVENT_DESCRIPTOR *)"8";
  v30 = 0;
  if ( !a2 )
    v2 = EventDescriptor;
  LOBYTE(ProcessorNumber) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v2);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v30);
    if ( ProcessorNumber >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_QWORD *)(a1 + 264);
      v6 = 100;
      v7 = *(int **)(a1 + 512);
      v8 = *(_DWORD **)(a1 + 432);
      v9 = *(_DWORD **)(a1 + 488);
      v27 = 0;
      v10 = 0;
      v28 = 0;
      v26 = 0;
      v29 = 100;
      v24 = 100;
      v25 = 100;
      v23 = 0;
      if ( (v5 & 0x300000300LL) != 0 )
      {
        v27 = *(_DWORD *)(a1 + 1116);
        v28 = ((v5 & 0x200000200LL) != 0) + 2;
      }
      else if ( (v5 & 0xE0000000000LL) != 0 )
      {
        v27 = *(_DWORD *)(*(_QWORD *)(a1 + 528) + 16LL);
        v28 = 4;
      }
      else if ( (v5 & 0x7F077) != 0 )
      {
        v11 = *v7;
        v27 = v11;
        v28 = 1;
        if ( !v11 || *((_BYTE *)v7 + 16) != 1 )
          v27 = v11 + 1;
      }
      if ( (v5 & 0x1000000000LL) != 0 )
      {
        v12 = *(_DWORD **)(a1 + 1176);
        if ( !v12 )
          goto LABEL_40;
        v26 = 4;
        v29 = v12[5];
        v24 = v12[6];
        v25 = v12[7];
        v10 = v12[4];
      }
      else
      {
        if ( (v5 & 0x8000000) == 0 )
        {
          if ( (v5 & 0x80000000) != 0 )
          {
            v26 = 2;
            v10 = *(_DWORD *)(qword_1C001B888 + 28);
            v23 = v10;
            v24 = 100 * *(_DWORD *)(qword_1C001B888 + 36) / v10;
            v25 = 100 * *(_DWORD *)(qword_1C001B888 + 32) / v10;
          }
          else
          {
            if ( (v5 & 0x73300000) == 0 )
              goto LABEL_40;
            v26 = 1;
            if ( (v5 & 0x40000000) != 0 )
              v8 = *(_DWORD **)(a1 + 440);
            if ( (v5 & 0x70000000) != 0 )
            {
              v10 = v8[2];
              v23 = v10;
              v6 = 100 * v8[12 * (*v8 - 1) + 2] / v10;
              v24 = v6;
            }
            if ( (v5 & 0x3300000) != 0 )
              v25 = v6 * v9[5 * (*v9 - 1) + 1] / 0x64;
            else
              v25 = v6;
          }
LABEL_20:
          if ( v10 )
          {
LABEL_21:
            UserData.Ptr = (unsigned __int64)&v30;
            *(_QWORD *)&UserData.Size = 2LL;
            p_Number = &v30.Number;
            v33 = 1LL;
            v34 = &v27;
            v35 = 4LL;
            v36 = &v28;
            v38 = &v23;
            v40 = &v29;
            v42 = &v24;
            v44 = &v25;
            v46 = &v26;
            v37 = 4LL;
            v39 = 4LL;
            v41 = 4LL;
            v43 = 4LL;
            v45 = 4LL;
            v47 = 4LL;
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v2, 0LL, 9u, &UserData);
            LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                        WdfDriverGlobals,
                                        *(_QWORD *)(a1 + 208));
            return ProcessorNumber;
          }
LABEL_40:
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                          (__int64)L"~MHz",
                                          (__int64)&v23);
          v21 = v23;
          if ( RegistryDwordValueNoDefault < 0 )
            v21 = 0;
          v23 = v21;
          goto LABEL_21;
        }
        v13 = *(_DWORD **)(a1 + 240);
        if ( !v13 )
        {
          if ( !*(_QWORD *)(a1 + 384) )
            goto LABEL_40;
          v26 = 3;
          v14 = GetRegistryDwordValueNoDefault(
                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                  (__int64)L"~MHz",
                  (__int64)&v23);
          v15 = *(_QWORD *)(a1 + 384);
          v10 = v23;
          if ( v14 < 0 )
            v10 = 0;
          v16 = 100LL * *(_QWORD *)(a1 + 376);
          v23 = v10;
          v29 = v16 / v15;
          v17 = 100LL * *(_QWORD *)(a1 + 392) / v15;
          v18 = 100LL * *(_QWORD *)(a1 + 400);
          v24 = v17;
          v19 = v18 / v15;
          if ( !(_DWORD)v19 )
            LODWORD(v19) = 1;
          v25 = v19;
          if ( !(_DWORD)v17 )
            v24 = 1;
          goto LABEL_20;
        }
        v26 = 3;
        v29 = v13[17];
        v24 = v13[19];
        v25 = v13[20];
        v10 = v13[16];
      }
      v23 = v10;
      goto LABEL_20;
    }
  }
  return ProcessorNumber;
}
