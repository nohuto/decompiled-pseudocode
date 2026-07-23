/*
 * XREFs of MmMapApiSetView @ 0x140679604
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 */

__int64 __fastcall MmMapApiSetView(__int64 a1)
{
  __int64 ProcessServerSilo; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int16 v9; // r9
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    v3 = qword_140439E90;
  else
    v3 = *((_QWORD *)PsGetServerSiloGlobals(ProcessServerSilo) + 128);
  result = MmMapViewOfSection(v3, a1, &v10, 0LL, 0LL, &v12, &v11, 1, 0x400000, 2);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = v10;
    *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 104LL) = v10;
    v7 = 0LL;
    v8 = *(__int64 **)(a1 + 1064);
    if ( v8 )
      v7 = *v8;
    if ( v7 )
    {
      if ( v8 && ((v9 = *((_WORD *)v8 + 4), v9 == 332) || v9 == 452) )
        *(_DWORD *)(v7 + 56) = v6;
      else
        *(_QWORD *)(v7 + 104) = v6;
    }
    return v5;
  }
  return result;
}
