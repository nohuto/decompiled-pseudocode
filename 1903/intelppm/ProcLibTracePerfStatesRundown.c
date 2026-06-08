/*
 * XREFs of ProcLibTracePerfStatesRundown @ 0x1C002B454
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00256F0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0003770 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePerfStatesRundown(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _BYTE *PoolWithTag; // rbx
  unsigned int v5; // ecx
  __int64 i; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  struct _PROCESSOR_NUMBER v10; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  unsigned __int8 *p_Number; // [rsp+50h] [rbp+17h]
  int v14; // [rsp+58h] [rbp+1Fh]
  int v15; // [rsp+5Ch] [rbp+23h]
  unsigned int *v16; // [rsp+60h] [rbp+27h]
  int v17; // [rsp+68h] [rbp+2Fh]
  int v18; // [rsp+6Ch] [rbp+33h]
  _BYTE *v19; // [rsp+70h] [rbp+37h]
  int v20; // [rsp+78h] [rbp+3Fh]
  int v21; // [rsp+7Ch] [rbp+43h]

  v10 = 0;
  if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PERF_STATES_RUNDOWN) )
  {
    if ( (int)ProcLibGetProcessorNumber(a1, &v10) >= 0 )
    {
      v2 = *(_QWORD *)(a1 + 216);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 24);
        v11 = *(_DWORD *)(v3 + 64);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 6LL * v11, 0x72637250u);
        if ( PoolWithTag )
        {
          v5 = v11;
          for ( i = 0LL; (unsigned int)i < v11; v5 = v11 )
          {
            v7 = 3 * i;
            v8 = 32LL * (unsigned int)i;
            i = (unsigned int)(i + 1);
            v9 = *(_QWORD *)(v3 + 56) + v8;
            *(_DWORD *)&PoolWithTag[2 * v7] = *(_DWORD *)(v9 + 16);
            PoolWithTag[2 * v7 + 4] = *(_BYTE *)(v9 + 24);
            PoolWithTag[2 * v7 + 5] = *(_BYTE *)(v9 + 25);
          }
          UserData.Reserved = 0;
          v15 = 0;
          v18 = 0;
          v21 = 0;
          UserData.Ptr = (unsigned __int64)&v10;
          p_Number = &v10.Number;
          v16 = &v11;
          v20 = 6 * v5;
          UserData.Size = 2;
          v14 = 1;
          v17 = 4;
          v19 = PoolWithTag;
          EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PERF_STATES_RUNDOWN, 0LL, 4u, &UserData);
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
        }
      }
    }
  }
}
