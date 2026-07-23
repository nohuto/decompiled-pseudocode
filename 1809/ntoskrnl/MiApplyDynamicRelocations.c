/*
 * XREFs of MiApplyDynamicRelocations @ 0x1409D3650
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x1409D341C (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     LdrApplyDynamicRelocations @ 0x140187824 (LdrApplyDynamicRelocations.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14074CC3C (MiCaptureDynamicRelocationTableRva.c)
 */

NTSTATUS __fastcall MiApplyDynamicRelocations(char *BaseAddress, __int64 Size, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  NTSTATUS v8; // eax
  unsigned int *v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-C8h]
  int NtHeader; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-98h] BYREF
  char *v17; // [rsp+58h] [rbp-90h]
  __int64 v18; // [rsp+60h] [rbp-88h]
  __int64 v19; // [rsp+68h] [rbp-80h]

  v5 = a3;
  v6 = Size;
  if ( (MiFlags & 0x8000) != 0 )
  {
    v17 = BaseAddress;
    v18 = a3;
    v19 = a4;
    return VslpEnterIumSecureMode(2u, 212LL, 0, (__int64)v16);
  }
  else
  {
    LOWORD(a3) = 10;
    LOBYTE(Size) = 1;
    v8 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, Size, a3, (__int64)&NtHeader, &v15);
    v9 = (unsigned int *)v15;
    if ( v8 < 0 )
      v9 = 0LL;
    if ( !v9 || NtHeader != *v9 )
      return 0;
    result = MiCaptureDynamicRelocationTableRva(
               BaseAddress,
               v6,
               0LL,
               523,
               (__int64)v9,
               *v9,
               (PIMAGE_NT_HEADERS)&NtHeader);
    if ( result >= 0 )
      return LdrApplyDynamicRelocations((__int64)BaseAddress, &BaseAddress[NtHeader], v11, v12, v13, v5, a4);
    if ( result == -1073741637 )
      return 0;
  }
  return result;
}
