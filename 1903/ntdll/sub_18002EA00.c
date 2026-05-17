/*
 * XREFs of sub_18002EA00 @ 0x18002EA00
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

__int64 __fastcall sub_18002EA00(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 UniqueThread_low; // rcx
  struct _TEB *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v14[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    sub_18002E988(a2, a4);
  UniqueThread_low = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    sub_180084E98();
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
  {
    UniqueThread_low = LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    *(_DWORD *)(a2 + 88) = UniqueThread_low;
  }
  v7 = NtCurrentTeb();
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(UniqueThread_low) )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    sub_18010F260(0, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v7->SubProcessTag);
  sub_180030888(v14, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v7->SubProcessTag);
  LOBYTE(v10) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v10);
  v11 = *(unsigned int *)(a2 + 8);
  if ( (v11 & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v13 = 0LL;
    ZwSetInformationThread(-2LL, 5LL, &v13);
    v11 = *(unsigned int *)(a2 + 8);
  }
  if ( (v11 & 4) != 0 )
    sub_18002E988(a2, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v11) )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  if ( *(_BYTE *)v8 )
    sub_18010F2FC(0, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v7->SubProcessTag);
  return sub_180030918(v14[0]);
}
