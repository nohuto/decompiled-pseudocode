/*
 * XREFs of BgpConsoleSetTextColor @ 0x140994000
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  BgpFwAcquireLock();
  v4 = qword_1404F2AD8;
  v5 = 0;
  if ( qword_1404F2AD8 )
  {
    if ( a1 )
      *(_DWORD *)(qword_1404F2AD8 + 12) = *a1;
    if ( a2 )
      *(_DWORD *)(v4 + 16) = *a2;
  }
  else
  {
    v5 = -1073741823;
  }
  BgpFwReleaseLock();
  return v5;
}
