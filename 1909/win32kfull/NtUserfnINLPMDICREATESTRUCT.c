/*
 * XREFs of NtUserfnINLPMDICREATESTRUCT @ 0x1C0237D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C001BF88 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C001BFD0 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserfnINLPMDICREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _OWORD v15[6]; // [rsp+40h] [rbp-68h] BYREF

  memset(v15, 0, 0x58uLL);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v15[0] = *(_OWORD *)a4;
  v15[1] = *(_OWORD *)(a4 + 16);
  v15[2] = *(_OWORD *)(a4 + 32);
  *(_QWORD *)&v15[3] = *(_QWORD *)(a4 + 48);
  v11 = *((_QWORD *)&v15[0] + 1);
  if ( a7 )
  {
    if ( *((_QWORD *)&v15[0] + 1) )
      v11 = *((_QWORD *)&v15[0] + 1);
    RtlInitLargeAnsiString((__int64)&v15[3] + 8, v11);
    v12 = *(_QWORD *)&v15[0];
    if ( (*(_QWORD *)&v15[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v15[0] )
        v12 = *(_QWORD *)&v15[0];
    }
    else
    {
      v12 = 0LL;
    }
    RtlInitLargeAnsiString((__int64)&v15[4] + 8, v12);
  }
  else
  {
    if ( *((_QWORD *)&v15[0] + 1) )
    {
      if ( (BYTE8(v15[0]) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = *((_QWORD *)&v15[0] + 1);
    }
    RtlInitLargeUnicodeString((__int64)&v15[3] + 8, v11);
    v13 = *(_QWORD *)&v15[0];
    if ( (*(_QWORD *)&v15[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v15[0] )
      {
        if ( (v15[0] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = *(_QWORD *)&v15[0];
      }
    }
    else
    {
      v13 = 0LL;
    }
    RtlInitLargeUnicodeString((__int64)&v15[4] + 8, v13);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v15,
           a5);
}
