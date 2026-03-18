/*
 * XREFs of BgDisplayString @ 0x14095342C
 * Callers:
 *     BgkDrawText @ 0x1409532CC (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC820 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x1409545A0 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140405AD0 & 1) == 0 || (dword_140405AD0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140405B80 && qword_140405B98 )
  {
    v5 = BgpTxtDisplayString(qword_140405B98, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
