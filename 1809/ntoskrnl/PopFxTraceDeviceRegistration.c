/*
 * XREFs of PopFxTraceDeviceRegistration @ 0x1406DB5F4
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140141764 (PopDiagTraceFxRundown.c)
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopPepGetComponentVetoMasks @ 0x1402DCEB4 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402DCF90 (PopPepGetDeviceVetoMasks.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopDiagTraceFxComponentRegistration @ 0x140873B70 (PopDiagTraceFxComponentRegistration.c)
 *     PopDiagTraceFxDeviceRegistration @ 0x140873C40 (PopDiagTraceFxDeviceRegistration.c)
 *     PopFxTracePerfRegistration @ 0x140875F78 (PopFxTracePerfRegistration.c)
 */

void __fastcall PopFxTraceDeviceRegistration(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v4; // rbx
  __int64 v5; // rcx
  const EVENT_DESCRIPTOR *v6; // rax
  unsigned int v7; // esi
  __int64 *v8; // rdx
  unsigned int v9; // ebx
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int v13; // ecx
  char *PoolWithTag; // rax
  _DWORD *v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // ebx
  char *v18; // r13
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 i; // r9
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const EVENT_DESCRIPTOR *EventDescriptor; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h] BYREF
  int v28; // [rsp+50h] [rbp-48h]

  if ( a2 )
  {
    v4 = &POP_ETW_EVENT_DEVICE_REGISTRATION_RUNDOWN;
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), 0, 1, *(unsigned int *)(a1 + 812));
    v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_DEVICE_REGISTRATION;
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v4) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v27 = 0LL;
    v28 = 0;
    PopPepGetDeviceVetoMasks(v5, (__int64)&v27);
    PopDiagTraceFxDeviceRegistration(
      v4,
      *(_DWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 48) + 280LL,
      *(_DWORD *)(a1 + 812),
      (__int64)&v27);
    v6 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_COMPONENT_REGISTRATION_RUNDOWN;
    if ( !a2 )
      v6 = &POP_ETW_EVENT_COMPONENT_REGISTRATION;
    EventDescriptor = v6;
    if ( EtwEventEnabled(PopDiagHandle, v6) )
    {
      v7 = *(_DWORD *)(a1 + 812);
      if ( v7 )
      {
        v8 = *(__int64 **)(a1 + 816);
        v9 = *(_DWORD *)(*v8 + 156);
        if ( v7 > 1 )
        {
          v10 = v8 + 1;
          v11 = v7 - 1;
          do
          {
            v12 = *v10;
            v13 = v9;
            ++v10;
            v9 = *(_DWORD *)(v12 + 156);
            if ( v9 <= v13 )
              v9 = v13;
            --v11;
          }
          while ( v11 );
        }
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 28 * v9, 0x4D584650u);
        v15 = PoolWithTag;
        if ( PoolWithTag )
        {
          v16 = v9;
          v17 = 0;
          v18 = &PoolWithTag[24 * v16];
          v19 = 0LL;
          do
          {
            v20 = *(_QWORD *)(v19 + *(_QWORD *)(a1 + 816));
            memset(v18, 0, 4LL * *(unsigned int *)(v20 + 156));
            PopPepGetComponentVetoMasks(*(_QWORD *)(a1 + 56), v17, (__int64)v18);
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v20 + 156); v15[2 * v22 + 5] = v23 )
            {
              v22 = 3 * i;
              *(_QWORD *)&v15[2 * v22] = *(_QWORD *)(*(_QWORD *)(v20 + 160) + 24 * i);
              *(_QWORD *)&v15[2 * v22 + 2] = *(_QWORD *)(*(_QWORD *)(v20 + 160) + 24 * i + 8);
              v15[2 * v22 + 4] = *(_DWORD *)(*(_QWORD *)(v20 + 160) + 24 * i + 16);
              v23 = *(_DWORD *)&v18[4 * i];
              i = (unsigned int)(i + 1);
            }
            PopDiagTraceFxComponentRegistration(
              EventDescriptor,
              *(_DWORD *)(v20 + 152),
              *(_DWORD *)(v20 + 156),
              (__int64)v15);
            v25 = *(_QWORD *)(v20 + 424);
            if ( v25 )
            {
              LOBYTE(v24) = a2;
              PopFxTracePerfRegistration(v25, v24);
            }
            ++v17;
            v19 += 8LL;
          }
          while ( v17 < v7 );
          ExFreePoolWithTag(v15, 0x4D584650u);
        }
      }
    }
  }
}
