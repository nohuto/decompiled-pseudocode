/*
 * XREFs of Callback @ 0x18002EA00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E988 @ 0x18002E988 (sub_18002E988.c)
 *     sub_180030888 @ 0x180030888 (sub_180030888.c)
 *     sub_180030918 @ 0x180030918 (sub_180030918.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180084E98 @ 0x180084E98 (sub_180084E98.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010F260 @ 0x18010F260 (sub_18010F260.c)
 *     sub_18010F2FC @ 0x18010F2FC (sub_18010F2FC.c)
 */

void __fastcall Callback(PTP_CALLBACK_INSTANCE a1, _BYTE *a2, PTP_WAIT a3, int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (a2[8] & 4) == 0 )
    sub_18002E988((__int64)a2, a4);
  if ( *(_QWORD *)a2 )
    sub_180084E98(*(_QWORD *)a2, a2, a3);
  if ( (a2[8] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    sub_18010F260(0, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v6->SubProcessTag);
  sub_180030888(v12, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  (*((void (__fastcall **)(_QWORD, __int64))a2 + 4))(*((_QWORD *)a2 + 5), v9);
  v10 = *((_DWORD *)a2 + 2);
  if ( (v10 & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    v10 = *((_DWORD *)a2 + 2);
  }
  if ( (v10 & 4) != 0 )
    sub_18002E988((__int64)a2, a4);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  if ( *(_BYTE *)v7 )
    sub_18010F2FC(0, *((_QWORD *)a2 + 6), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v6->SubProcessTag);
  sub_180030918(v12[0]);
}
