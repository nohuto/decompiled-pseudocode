/*
 * XREFs of NtGdiDdDDIOpenAdapterFromLuid @ 0x1C00864C0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromLuid(ULONG64 a1)
{
  __int64 *v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int16 SuiteMask; // ax
  __int64 v9; // [rsp+20h] [rbp-18h]
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  v9 = *v2;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
    return ((__int64 (__fastcall *)(ULONG64))qword_1C01CD6B0)(a1);
  if ( !Object )
    return ((__int64 (__fastcall *)(ULONG64))qword_1C01CD6B0)(a1);
  if ( (PVOID)PsGetCurrentProcess(65533LL) == gpepCSRSS )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C01CD6B0)(a1);
  if ( UserIsCurrentProcessDwm(v4) )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C01CD6B0)(a1);
  RtlGetNtProductType(&ProductType);
  SuiteMask = RtlGetSuiteMask(v6, v5, v7);
  if ( ProductType != NtProductServer || (SuiteMask & 0x110) != 0x10 || v9 == qword_1C01CE2F4 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C01CD6B0)(a1);
  else
    return 3221225485LL;
}
