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

void __fastcall sub_1800305A0(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  __int64 v4; // rcx
  struct _TEB *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 ThreadInformation; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_BYTE *)a2 + 88) || !_InterlockedExchange((volatile __int32 *)a2 + 23, 1) )
  {
    v4 = *((_QWORD *)a2 + 2);
    if ( v4 )
      sub_180084E98(v4, a2, a3);
    v5 = NtCurrentTeb();
    v6 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      sub_18010F260(0, *((_QWORD *)a2 + 8), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v5->SubProcessTag);
    sub_180030888(&v9, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), v5->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v6 )
      sub_18010F2FC(0, *((_QWORD *)a2 + 8), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v5->SubProcessTag);
    sub_180030918(v9);
  }
}
