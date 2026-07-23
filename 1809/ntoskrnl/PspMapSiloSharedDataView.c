/*
 * XREFs of PspMapSiloSharedDataView @ 0x1406795CC
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 */

__int64 __fastcall PspMapSiloSharedDataView(__int64 a1)
{
  __int64 ProcessServerSilo; // rsi
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    return 0LL;
  v7 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  result = MmMapViewOfSection(
             *(_QWORD *)(*(_QWORD *)(ProcessServerSilo + 1256) + 1128LL),
             a1,
             &v7,
             0LL,
             0LL,
             &v9,
             &v8,
             1,
             0x400000,
             2);
  if ( (int)result >= 0 )
  {
    v4 = v7;
    *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 144LL) = v7;
    v5 = 0LL;
    v6 = *(__int64 **)(a1 + 1064);
    if ( v6 )
      v5 = *v6;
    if ( v5 )
      *(_DWORD *)(v5 + 80) = v4;
    return 0LL;
  }
  return result;
}
