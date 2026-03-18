/*
 * XREFs of NtUserfnINLPMDICREATESTRUCT @ 0x1C021FEC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C00B068C (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00B06D4 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rdx
  _OWORD v14[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]
  _BYTE v16[16]; // [rsp+78h] [rbp-30h] BYREF
  _BYTE v17[32]; // [rsp+88h] [rbp-20h] BYREF

  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v14[0] = *(_OWORD *)a4;
  v14[1] = *(_OWORD *)(a4 + 16);
  v14[2] = *(_OWORD *)(a4 + 32);
  v15 = *(_QWORD *)(a4 + 48);
  v9 = *((_QWORD *)&v14[0] + 1);
  if ( a7 )
  {
    if ( *((_QWORD *)&v14[0] + 1) )
      v9 = *((_QWORD *)&v14[0] + 1);
    RtlInitLargeAnsiString((__int64)v16, v9);
    v10 = *(_QWORD *)&v14[0];
    if ( (*(_QWORD *)&v14[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v14[0] )
        v10 = *(_QWORD *)&v14[0];
    }
    else
    {
      v10 = 0LL;
    }
    RtlInitLargeAnsiString((__int64)v17, v10);
  }
  else
  {
    if ( *((_QWORD *)&v14[0] + 1) )
    {
      if ( (BYTE8(v14[0]) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = *((_QWORD *)&v14[0] + 1);
    }
    RtlInitLargeUnicodeString((__int64)v16, v9);
    v12 = *(_QWORD *)&v14[0];
    if ( (*(_QWORD *)&v14[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v14[0] )
      {
        if ( (v14[0] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = *(_QWORD *)&v14[0];
      }
    }
    else
    {
      v12 = 0LL;
    }
    RtlInitLargeUnicodeString((__int64)v17, v12);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           v11,
           v14,
           a5);
}
