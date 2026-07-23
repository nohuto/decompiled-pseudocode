/*
 * XREFs of sub_180082050 @ 0x180082050
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18010F128 @ 0x18010F128 (sub_18010F128.c)
 */

__int64 __fastcall sub_180082050(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  int v2; // edi
  _QWORD *v3; // rbx
  __int64 v5; // r8

  v2 = a2;
  v3 = (_QWORD *)(a2 - 200);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    sub_18010F128(v3[18], v2, v3[10], v3[11], v3[13]);
  return sub_180030488(Instance, (__int64)v3, 0x102u);
}
