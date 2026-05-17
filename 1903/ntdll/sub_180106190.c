/*
 * XREFs of sub_180106190 @ 0x180106190
 * Callers:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_1800445F8 @ 0x1800445F8 (sub_1800445F8.c)
 *     sub_18004622C @ 0x18004622C (sub_18004622C.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     sub_1800F2ED4 @ 0x1800F2ED4 (sub_1800F2ED4.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_180104AC0 @ 0x180104AC0 (sub_180104AC0.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 * Callees:
 *     <none>
 */

struct _PEB *sub_180106190()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    byte_1801638C1 = 0;
  }
  return result;
}
