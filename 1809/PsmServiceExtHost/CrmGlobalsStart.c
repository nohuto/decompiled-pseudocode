/*
 * XREFs of CrmGlobalsStart @ 0x180045F50
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180041FAC (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CrmRegistrationInitialize @ 0x18003BD58 (CrmRegistrationInitialize.c)
 *     TraceLoggingRegisterEx @ 0x180041218 (TraceLoggingRegisterEx.c)
 *     CrmRegistrationStartWithActivity @ 0x1800460D4 (CrmRegistrationStartWithActivity.c)
 */

__int64 CrmGlobalsStart()
{
  RPC_STATUS v0; // eax
  char *Heap; // rax
  char *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // ebx
  PVOID v7; // rax
  __int64 v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v0 = UuidCreate(&Uuid);
  if ( v0 )
  {
    return (unsigned int)I_RpcMapWin32Status(v0);
  }
  else
  {
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18009B128, 0LL, 0LL);
    RtlGetDeviceFamilyInfoEnum(0LL, &dword_18009BCB8, &unk_18009BCBC);
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x6C0uLL);
    v2 = Heap;
    if ( Heap )
    {
      P = Heap;
      v3 = (__int64)Heap;
      dword_18009BCA0 = 12;
      v4 = 12LL;
      do
      {
        CrmRegistrationInitialize(v3);
        v3 += 144LL;
        --v4;
      }
      while ( v4 );
      while ( 1 )
      {
        v6 = CrmRegistrationStartWithActivity(&v2[144 * v4], (unsigned int)(v4 + 5), v5, 1LL);
        if ( v6 < 0 )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= 0xC )
        {
          v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
          qword_18009BCA8 = v7;
          if ( !v7 )
            return (unsigned int)-1073741801;
          CrmRegistrationInitialize((__int64)v7);
          v6 = CrmRegistrationStartWithActivity(qword_18009BCA8, 17LL, v8, 2LL);
          if ( v6 >= 0 )
          {
            v6 = TpAllocTimer(&qword_18009BCB0, CrmGlobalsPeriodicRundown, CrmGlobals, 0LL);
            if ( v6 >= 0 )
            {
              v10 = -36000000000LL;
              TpSetTimer(qword_18009BCB0, &v10, 3600000LL, 900000LL);
            }
          }
          return (unsigned int)v6;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v6;
}
