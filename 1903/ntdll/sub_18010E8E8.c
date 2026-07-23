/*
 * XREFs of sub_18010E8E8 @ 0x18010E8E8
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

void __fastcall sub_18010E8E8(void *Src, unsigned int a2)
{
  RtlAcquireSRWLockExclusive(&stru_180166478);
  dword_18016658C = a2;
  memmove(&unk_180163460, Src, 8LL * a2);
  RtlReleaseSRWLockExclusive(&stru_180166478);
}
