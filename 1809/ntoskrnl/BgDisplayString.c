/*
 * XREFs of BgDisplayString @ 0x14095442C
 * Callers:
 *     BgkDrawText @ 0x1409542CC (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400BC780 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x1409555A0 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140406AD0 & 1) == 0 || (dword_140406AD0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140406B80 && qword_140406B98 )
  {
    v5 = BgpTxtDisplayString(qword_140406B98, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
