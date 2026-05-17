/*
 * XREFs of sub_1800305A0 @ 0x1800305A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030888 @ 0x180030888 (sub_180030888.c)
 *     sub_180030918 @ 0x180030918 (sub_180030918.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180084E98 @ 0x180084E98 (sub_180084E98.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010F260 @ 0x18010F260 (sub_18010F260.c)
 *     sub_18010F2FC @ 0x18010F2FC (sub_18010F2FC.c)
 */

__int64 __fastcall sub_1800305A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  struct _TEB *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 )
      sub_180084E98();
    v4 = NtCurrentTeb();
    v5 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v3) )
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      sub_18010F260(0, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v4->SubProcessTag);
    sub_180030888(&v10, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v4->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v9 = 0LL;
      ZwSetInformationThread(-2LL, 5LL, &v9);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v7) )
      v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    if ( *(_BYTE *)v5 )
      sub_18010F2FC(0, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v4->SubProcessTag);
    return sub_180030918(v10);
  }
  return result;
}
