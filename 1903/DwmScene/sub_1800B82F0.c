/*
 * XREFs of sub_1800B82F0 @ 0x1800B82F0
 * Callers:
 *     sub_180132EFB @ 0x180132EFB (sub_180132EFB.c)
 *     ?dtor$1@?0??_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z@4HA @ 0x180132F13 (-dtor$1@-0--_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_Cancellat.c)
 *     sub_180132F1F @ 0x180132F1F (sub_180132F1F.c)
 *     sub_180132F2B @ 0x180132F2B (sub_180132F2B.c)
 * Callees:
 *     sub_1800B7E10 @ 0x1800B7E10 (sub_1800B7E10.c)
 */

__int64 __fastcall sub_1800B82F0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  sub_1800B7E10(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
