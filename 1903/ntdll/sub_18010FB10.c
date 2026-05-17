/*
 * XREFs of sub_18010FB10 @ 0x18010FB10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030888 @ 0x180030888 (sub_180030888.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010F260 @ 0x18010F260 (sub_18010F260.c)
 *     sub_18010F2FC @ 0x18010F2FC (sub_18010F2FC.c)
 */

void __fastcall sub_18010FB10(__int64 a1, struct _GUID *a2, __int64 a3, unsigned int *a4)
{
  void *v4; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(void **)a2[9].Data4;
  if ( v4 )
    RtlSetThreadSubProcessTag(v4);
  NtCurrentTeb()->ActivityId = a2[10];
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    sub_18010F260();
  sub_180030888(&v10, *(_QWORD *)a2[-1].Data4, a3, (__int64)NtCurrentTeb()->SubProcessTag);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))a2[-1].Data4)(*a4, *((_QWORD *)a4 + 1), a3);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  if ( *(_BYTE *)v8 )
    sub_18010F2FC();
  if ( *(_QWORD *)a2[9].Data4 )
  {
    RtlSetThreadSubProcessTag(0LL);
    *(_QWORD *)a2[9].Data4 = 0LL;
  }
  sub_180030918(v10);
}
