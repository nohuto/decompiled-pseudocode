/*
 * XREFs of NtGdiDdDDIOpenAdapterFromLuid @ 0x1C006C070
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromLuid(ULONG64 a1)
{
  __int64 *v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int16 SuiteMask; // ax
  __int64 v8; // [rsp+20h] [rbp-18h]
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (__int64 *)MmUserProbeAddress;
  v8 = *v2;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
    return ((__int64 (__fastcall *)(ULONG64))qword_1C01A1810)(a1);
  if ( !qword_1C01A1760 )
    return ((__int64 (__fastcall *)(ULONG64))qword_1C01A1810)(a1);
  if ( (PVOID)PsGetCurrentProcess(65533LL) == gpepCSRSS )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C01A1810)(a1);
  if ( UserIsCurrentProcessDwm() )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C01A1810)(a1);
  RtlGetNtProductType(&ProductType);
  SuiteMask = RtlGetSuiteMask(v5, v4, v6);
  if ( ProductType != NtProductServer || (SuiteMask & 0x110) != 0x10 || v8 == qword_1C01A1754 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C01A1810)(a1);
  else
    return 3221225485LL;
}
