/*
 * XREFs of RtlpQueryExtendedInformationAllHeaps @ 0x18007B25C
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x18007B17C (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18007B34C (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationAllHeaps(__int64 a1)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_QWORD *, __int64); // rax
  _QWORD v6[22]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v7; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v8; // [rsp+D8h] [rbp+3Fh]
  int v9; // [rsp+E0h] [rbp+47h]

  if ( *(_DWORD *)a1 == 0x80000000 || (unsigned int)(*(_DWORD *)a1 - 1) <= 4 )
  {
    RtlpEnumProcessHeaps(RtlpLockUlockAllHeapsCallback, 1LL, 1LL);
    if ( *(_DWORD *)a1 == 0x80000000 )
      goto LABEL_3;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    v2 = RtlpEnumProcessHeaps(RtlpHeapQueryTotalReserveSize, &v7, 3LL);
    if ( v2 >= 0 )
    {
      memset(v6, 0, 0xA8uLL);
      v4 = *(_QWORD *)(a1 + 16);
      LODWORD(v6[4]) = v9;
      v6[2] = v7;
      v6[3] = v8;
      v5 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a1 + 8);
      LODWORD(v6[0]) = 1;
      v6[1] = 48LL;
      v2 = v5(v6, v4);
      if ( v2 >= 0 && *(_DWORD *)a1 >= 2u )
LABEL_3:
        v2 = RtlpEnumProcessHeaps(RtlpQueryExtendedInformationHeap, a1, 3LL);
    }
    RtlpEnumProcessHeaps(RtlpLockUlockAllHeapsCallback, 0LL, 1LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
