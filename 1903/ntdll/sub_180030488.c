/*
 * XREFs of sub_180030488 @ 0x180030488
 * Callers:
 *     sub_180030390 @ 0x180030390 (sub_180030390.c)
 *     sub_180082050 @ 0x180082050 (sub_180082050.c)
 * Callees:
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     sub_180030888 @ 0x180030888 (sub_180030888.c)
 *     sub_180030918 @ 0x180030918 (sub_180030918.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_180033474 @ 0x180033474 (sub_180033474.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010F260 @ 0x18010F260 (sub_18010F260.c)
 *     sub_18010F2FC @ 0x18010F2FC (sub_18010F2FC.c)
 */

__int64 __fastcall sub_180030488(PTP_CALLBACK_INSTANCE Instance, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = sub_180032F0C(Instance);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    sub_180033474(Instance);
LABEL_4:
    v7 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      sub_18010F260(*(_QWORD *)(a2 + 144), a2 + 392, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    sub_180030888(&v10, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 80);
    *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64, _QWORD))(a2 + 80))(
      Instance,
      *(_QWORD *)(a2 + 88),
      a2,
      a3);
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v7 )
      sub_18010F2FC(*(_QWORD *)(a2 + 144), a2 + 392, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    return sub_180030918(v10);
  }
  if ( LdrAddRefDll(0, *(PVOID *)(a2 + 136)) >= 0 )
  {
    *((_DWORD *)Instance + 36) |= 0x100u;
    *((_QWORD *)Instance + 21) = v6;
    goto LABEL_3;
  }
  sub_180066BBC(a2 + 56, 0xFFFFFFFFLL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}
