/*
 * XREFs of sub_1800B6B70 @ 0x1800B6B70
 * Callers:
 *     sub_1800B5D5C @ 0x1800B5D5C (sub_1800B5D5C.c)
 * Callees:
 *     sub_1800B51AC @ 0x1800B51AC (sub_1800B51AC.c)
 *     sub_1800B52A0 @ 0x1800B52A0 (sub_1800B52A0.c)
 *     sub_1800B5394 @ 0x1800B5394 (sub_1800B5394.c)
 *     sub_1800B5488 @ 0x1800B5488 (sub_1800B5488.c)
 *     sub_1800B557C @ 0x1800B557C (sub_1800B557C.c)
 *     sub_1800B5670 @ 0x1800B5670 (sub_1800B5670.c)
 *     sub_1800B5764 @ 0x1800B5764 (sub_1800B5764.c)
 */

void __fastcall sub_1800B6B70(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 496;
  sub_1800B5488(a1 + 496);
  sub_1800B51AC(v1);
  sub_1800B5394(v1);
  sub_1800B5764(v1);
  sub_1800B52A0(v1);
  sub_1800B5670(v1);
  sub_1800B557C(v1);
  sub_1800B5858(v1);
}
