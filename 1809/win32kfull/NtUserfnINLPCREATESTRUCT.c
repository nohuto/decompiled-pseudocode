/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1C00B04A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C00B068C (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00B06D4 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPCREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // r10
  _OWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  _OWORD v16[3]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+80h] [rbp-38h]
  _BYTE v19[16]; // [rsp+90h] [rbp-28h] BYREF
  _BYTE v20[16]; // [rsp+A0h] [rbp-18h] BYREF

  v11 = 0LL;
  if ( a4 )
  {
    v12 = (_OWORD *)a4;
    if ( a4 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    v16[0] = *v12;
    v16[1] = v12[1];
    v16[2] = v12[2];
    v17 = v12[3];
    v18 = v12[4];
    v13 = *((_QWORD *)&v17 + 1);
    if ( a7 )
    {
      RtlInitLargeAnsiString(v19);
      if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(v20);
    }
    else
    {
      if ( *((_QWORD *)&v17 + 1) )
      {
        if ( (BYTE8(v17) & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = *((_QWORD *)&v17 + 1);
      }
      RtlInitLargeUnicodeString(v19, v13);
      v14 = v18;
      if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v18 )
        {
          if ( (v18 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v14 = v18;
        }
        RtlInitLargeUnicodeString(v20, v14);
      }
    }
  }
  else if ( a2 == 129 )
  {
    return v11;
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           (unsigned __int64)v16 & -(__int64)(a4 != 0),
           a5);
}
