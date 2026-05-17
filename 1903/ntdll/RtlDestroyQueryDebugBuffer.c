/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800757A0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D7F80 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     sub_1800757D8 @ 0x1800757D8 (sub_1800757D8.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(_QWORD *a1)
{
  sub_1800757D8(a1, 0LL, 0LL, 0LL);
  ZwClose(*a1);
  ZwUnmapViewOfSection(-1LL);
  return 0LL;
}
