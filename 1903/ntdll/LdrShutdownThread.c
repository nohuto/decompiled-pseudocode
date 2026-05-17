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

__int64 __fastcall LdrShutdownThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rbx
  struct _PEB *v5; // r13
  void *FlsData; // r14
  char v7; // si
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void **TlsExpansionSlots; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  PVOID FiberData; // r8
  __int64 v23; // [rsp+30h] [rbp-C8h] BYREF
  int v24; // [rsp+38h] [rbp-C0h]
  _BYTE v25[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-78h] BYREF
  int v27; // [rsp+88h] [rbp-70h]
  _BYTE v28[56]; // [rsp+90h] [rbp-68h] BYREF

  v4 = NtCurrentTeb();
  v5 = NtCurrentPeb();
  FlsData = v4->FlsData;
  if ( FlsData )
    sub_18006B424(a1, v4->FlsData, 1LL);
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
      if ( v5->ImageBaseAddress != (void *)v10[6] && (v8 & 0x40000) == 0 )
      {
        v11 = v10[7];
        if ( v11 )
        {
          v8 &= 0x80004u;
          if ( (_DWORD)v8 == 524292 )
          {
            v23 = 72LL;
            v24 = 1;
            memset(v25, 0, sizeof(v25));
            RtlActivateActivationContextUnsafeFast(&v23, v10[17]);
            if ( *((_WORD *)v10 + 55) )
              sub_18002507C(3LL, v10);
            sub_180024FBC(v11, v10[6], 3LL);
            RtlDeactivateActivationContextUnsafeFast(&v23);
          }
        }
      }
    }
    if ( *(_WORD *)(qword_180164FC8 + 110) )
    {
      v26 = 72LL;
      v27 = 1;
      memset(v28, 0, sizeof(v28));
      RtlActivateActivationContextUnsafeFast(&v26, *(_QWORD *)(qword_180164FC8 + 136));
      sub_18002507C(3LL, qword_180164FC8);
      RtlDeactivateActivationContextUnsafeFast(&v26);
    }
    sub_18002D75C(v8, 19LL);
    if ( !v7 )
      sub_180073E1C(v13, v12, v14, v15);
    sub_18006E194(v13, v12, v14, v15);
  }
  if ( FlsData )
  {
    v4->FlsData = 0LL;
    sub_18006B424(a1, FlsData, 2LL);
  }
  TlsExpansionSlots = v4->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v4->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection((__int64)&unk_180164FE0);
    RtlLeaveCriticalSection(&unk_180164FE0);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, FiberData);
  }
  RtlFreeThreadActivationContextStack(a1, a2, a3, a4);
  result = 1024LL;
  if ( (v4->SameTebFlags & 0x400) != 0 && dword_1801664E0 == 3 )
    return TpTrimPools(v18, v17, v19, v20);
  return result;
}
