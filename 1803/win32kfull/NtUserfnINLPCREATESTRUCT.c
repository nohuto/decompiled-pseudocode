/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1C0021F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C0022154 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00E6434 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPCREATESTRUCT(__int64 a1, int a2, __int64 a3, ULONG64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // r10
  ULONG64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int128 v13; // [rsp+70h] [rbp-48h]
  __int128 v14; // [rsp+80h] [rbp-38h]
  _BYTE v15[16]; // [rsp+90h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+A0h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( a4 )
  {
    v8 = a4;
    if ( a4 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    v13 = *(_OWORD *)(v8 + 48);
    v14 = *(_OWORD *)(v8 + 64);
    v9 = *(_QWORD *)(v8 + 56);
    if ( a7 )
    {
      if ( *((_QWORD *)&v13 + 1) )
        v9 = *(_QWORD *)(v8 + 56);
      RtlInitLargeAnsiString(v15, v9);
      v11 = v14;
      if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v14 )
          v11 = v14;
        RtlInitLargeAnsiString(v16, v11);
      }
    }
    else
    {
      if ( *((_QWORD *)&v13 + 1) )
      {
        if ( (BYTE8(v13) & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = *(_QWORD *)(v8 + 56);
      }
      RtlInitLargeUnicodeString(v15, v9);
      v10 = v14;
      if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v14 )
        {
          if ( (v14 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v14;
        }
        RtlInitLargeUnicodeString(v16, v10);
      }
    }
  }
  else if ( a2 == 129 )
  {
    return v7;
  }
  return _guard_dispatch_icall_fptr();
}
