/*
 * XREFs of sub_1800E6AAC @ 0x1800E6AAC
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlInterlockedPushListSList @ 0x1800A0260 (RtlInterlockedPushListSList.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 sub_1800E6AAC()
{
  _QWORD *v0; // r8
  _QWORD *v1; // rax

  dword_180164EEC = 0;
  if ( ((unsigned __int8)&stru_180166180 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &unk_180163D40;
  stru_180166180 = 0uLL;
  do
  {
    v1 = v0 + 6;
    *v0 = v0 + 6;
    v0 = v1;
  }
  while ( v1 <= qword_180163E60 );
  *v1 = 0LL;
  RtlInterlockedPushListSList(&stru_180166180, (signed __int64)&unk_180163D40, qword_180163E90, 8);
  return 0LL;
}
