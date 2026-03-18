/*
 * XREFs of BgDisplayString @ 0x1409934EC
 * Callers:
 *     BgkDrawText @ 0x14099335C (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E3A00 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x1409946C8 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14042C010 & 1) == 0 || (dword_14042C010 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_14042C0C0 && qword_14042C0D8 )
  {
    v5 = BgpTxtDisplayString(qword_14042C0D8, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
