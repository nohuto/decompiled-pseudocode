/*
 * XREFs of sub_1800B8400 @ 0x1800B8400
 * Callers:
 *     sub_18013300B @ 0x18013300B (sub_18013300B.c)
 *     ?dtor$1@?0??_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z@4HA @ 0x180133023 (-dtor$1@-0--_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_Cancellat.c)
 *     sub_18013302F @ 0x18013302F (sub_18013302F.c)
 *     sub_18013303B @ 0x18013303B (sub_18013303B.c)
 * Callees:
 *     sub_1800B7F20 @ 0x1800B7F20 (sub_1800B7F20.c)
 */

__int64 __fastcall sub_1800B8400(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  sub_1800B7F20(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
