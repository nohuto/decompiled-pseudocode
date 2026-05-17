/*
 * XREFs of RtlValidateHeap @ 0x180070350
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800EFA30 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     sub_180040614 @ 0x180040614 (sub_180040614.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_180103B60 @ 0x180103B60 (sub_180103B60.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

bool __fastcall RtlValidateHeap(__int64 a1, int a2, unsigned __int64 a3)
{
  char v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rcx
  bool v12; // di
  int v13; // r10d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  char v17; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v12 = 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap(a1);
    v13 = sub_180040614(a2);
    v14 = *(_DWORD *)(a1 + 220);
    v15 = 0;
    if ( v14 )
      LOBYTE(v15) = v14 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v16 = v13 | 1;
    if ( !v15 )
      v16 = v13;
    if ( a3 )
    {
      if ( (dword_18016273C & 2) != 0 )
        a3 -= *(_QWORD *)(a3 - 16);
      v12 = sub_180040320(a1, a3, v16) != -1;
    }
    if ( (a2 & 1) == 0 )
      RtlUnlockHeap(a1);
    return v12;
  }
  else
  {
    v17 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v17 = _guard_dispatch_icall_fptr();
    }
    else if ( sub_180019C74((_DWORD *)a1, "RtlValidateHeap") )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)a2) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = 1;
      }
      if ( a3 )
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        v9 = sub_1800704A4(a1, v8, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v7) = 1;
        v9 = sub_1801061B8(a1, v7);
      }
      v17 = v9;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v10 = 2147353472LL;
    if ( *(_BYTE *)v10 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_180103B60(a1);
    }
    return v17;
  }
}
