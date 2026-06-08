/*
 * XREFs of ProcLibTracePlatformIdleStates @ 0x1C002B5E4
 * Callers:
 *     UpdateKernelPlatformStates @ 0x1C000DC30 (UpdateKernelPlatformStates.c)
 *     ProcLibTraceControlCallback @ 0x1C00256F0 (ProcLibTraceControlCallback.c)
 *     RegisterKernelPlatformStates @ 0x1C003550C (RegisterKernelPlatformStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePlatformIdleStates(char a1)
{
  _DWORD *v1; // rsi
  _WORD *PoolWithTag; // rdi
  const EVENT_DESCRIPTOR *v3; // r15
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  unsigned int v7; // eax
  ULONG v8; // r9d
  __int64 v9; // r14
  unsigned int *v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // [rsp+38h] [rbp-69h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-65h] BYREF
  int v17; // [rsp+40h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-59h] BYREF
  __int64 v19; // [rsp+58h] [rbp-49h]
  __int64 v20; // [rsp+60h] [rbp-41h]
  __int64 v21; // [rsp+68h] [rbp-39h]
  __int64 v22; // [rsp+70h] [rbp-31h]
  int *v23; // [rsp+78h] [rbp-29h]
  __int64 v24; // [rsp+80h] [rbp-21h]
  __int64 v25; // [rsp+88h] [rbp-19h]
  __int64 v26; // [rsp+90h] [rbp-11h]
  __int64 v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h]
  __int64 v29; // [rsp+A8h] [rbp+7h]
  __int64 v30; // [rsp+B0h] [rbp+Fh]
  _WORD *v31; // [rsp+B8h] [rbp+17h]
  int v32; // [rsp+C0h] [rbp+1Fh]
  int v33; // [rsp+C4h] [rbp+23h]

  v1 = Src;
  ProcNumber = 0;
  PoolWithTag = 0LL;
  if ( Src )
  {
    v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATE;
    if ( a1 )
      v3 = &PPM_ETW_GET_PLATFORM_IDLE_STATE_RUNDOWN;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3) )
    {
      LODWORD(v4) = 0;
      if ( !v1[2] )
        goto LABEL_12;
      v5 = 0;
      do
      {
        v6 = v4;
        v4 = (unsigned int)v1[12 * v5 + 18];
        if ( (unsigned int)v4 <= v6 )
          v4 = v6;
        v15 = ++v5;
      }
      while ( v5 < v1[2] );
      if ( !(_DWORD)v4 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12 * v4, 0x72637250u)) != 0LL )
      {
LABEL_12:
        v15 = 0;
        if ( v1[2] )
        {
          v7 = 0;
          do
          {
            *(_QWORD *)&UserData.Size = 4LL;
            v8 = 7;
            v20 = 2LL;
            v22 = 1LL;
            v9 = (__int64)&v1[12 * v7 + 14];
            UserData.Ptr = (unsigned __int64)&v15;
            v19 = v9;
            v21 = v9 + 2;
            v10 = (unsigned int *)(v9 + 16);
            v17 = *(unsigned __int8 *)(v9 + 4);
            v23 = &v17;
            v25 = v9 + 8;
            v27 = v9 + 12;
            v24 = 4LL;
            v26 = 4LL;
            v28 = 4LL;
            v29 = v9 + 16;
            v30 = 4LL;
            if ( *(_DWORD *)(v9 + 16) )
            {
              v11 = 0;
              do
              {
                v12 = v11;
                KeGetProcessorNumberFromIndex(*(_DWORD *)(*(_QWORD *)(v9 + 40) + 8LL * v11), &ProcNumber);
                v13 = 3LL * v11;
                PoolWithTag[2 * v13] = ProcNumber.Group;
                ++v11;
                LOBYTE(PoolWithTag[2 * v13 + 1]) = ProcNumber.Number;
                HIBYTE(PoolWithTag[2 * v13 + 1]) = *(_BYTE *)(*(_QWORD *)(v9 + 40) + 8 * v12 + 4);
                *(_DWORD *)&PoolWithTag[2 * v13 + 2] = *(unsigned __int8 *)(*(_QWORD *)(v9 + 40) + 8 * v12 + 5);
                *(_DWORD *)&PoolWithTag[2 * v13 + 4] = *(unsigned __int8 *)(*(_QWORD *)(v9 + 40) + 8 * v12 + 6);
                v14 = *v10;
              }
              while ( v11 < *v10 );
              v31 = PoolWithTag;
              v8 = 8;
              v32 = 12 * v14;
              v33 = 0;
            }
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3, 0LL, v8, &UserData);
            v7 = v15 + 1;
            v15 = v7;
          }
          while ( v7 < v1[2] );
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
      }
    }
  }
}
