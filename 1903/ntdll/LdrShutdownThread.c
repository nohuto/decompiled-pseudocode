/*
 * XREFs of LdrShutdownThread @ 0x180022A20
 * Callers:
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     TpTrimPools @ 0x1800607C0 (TpTrimPools.c)
 *     sub_18006B424 @ 0x18006B424 (sub_18006B424.c)
 *     sub_18006E194 @ 0x18006E194 (sub_18006E194.c)
 *     RtlFreeThreadActivationContextStack @ 0x18006E980 (RtlFreeThreadActivationContextStack.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void __noreturn LdrShutdownThread(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _TEB *v4; // rbx
  struct _PEB *v5; // r13
  PVOID FlsData; // r14
  char v7; // si
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID *TlsExpansionSlots; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID FiberData; // r8
  __int64 v22; // [rsp+30h] [rbp-C8h] BYREF
  int v23; // [rsp+38h] [rbp-C0h]
  _BYTE v24[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+80h] [rbp-78h] BYREF
  int v26; // [rsp+88h] [rbp-70h]
  _BYTE v27[56]; // [rsp+90h] [rbp-68h] BYREF

  v4 = NtCurrentTeb();
  v5 = NtCurrentPeb();
  FlsData = v4->FlsData;
  if ( FlsData )
    sub_18006B424(v1, v4->FlsData, 1LL);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v4->SameTebFlags & 0x2000) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      sub_18002E73C(0LL);
    }
    sub_18002D7BC();
    v9 = (__int64 *)qword_1801653F8;
    while ( v9 != &qword_1801653F0 )
    {
      v10 = v9 - 4;
      v9 = (__int64 *)v9[1];
      v8 = *((unsigned int *)v10 + 26);
      if ( v5->ImageBaseAddress != (PVOID)v10[6] && (v8 & 0x40000) == 0 )
      {
        v11 = v10[7];
        if ( v11 )
        {
          v8 &= 0x80004u;
          if ( (_DWORD)v8 == 524292 )
          {
            v22 = 72LL;
            v23 = 1;
            memset(v24, 0, sizeof(v24));
            RtlActivateActivationContextUnsafeFast(&v22, v10[17]);
            if ( *((_WORD *)v10 + 55) )
              sub_18002507C(3LL, v10);
            sub_180024FBC(v11, v10[6], 3LL);
            RtlDeactivateActivationContextUnsafeFast(&v22);
          }
        }
      }
    }
    if ( *(_WORD *)(qword_180164FC8 + 110) )
    {
      v25 = 72LL;
      v26 = 1;
      memset(v27, 0, sizeof(v27));
      RtlActivateActivationContextUnsafeFast(&v25, *(_QWORD *)(qword_180164FC8 + 136));
      sub_18002507C(3LL, qword_180164FC8);
      RtlDeactivateActivationContextUnsafeFast(&v25);
    }
    sub_18002D75C(v8, 19LL);
    if ( !v7 )
      sub_180073E1C(v13, v12, v14, v15);
    sub_18006E194(v13, v12, v14, v15);
  }
  if ( FlsData )
  {
    v4->FlsData = 0LL;
    sub_18006B424(v1, FlsData, 2LL);
  }
  TlsExpansionSlots = v4->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v4->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&stru_180164FE0);
    RtlLeaveCriticalSection(&stru_180164FE0);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(v1, v0, v2, v3);
  if ( (v4->SameTebFlags & 0x400) != 0 && dword_1801664E0 == 3 )
    TpTrimPools(v18, v17, v19, v20);
}
