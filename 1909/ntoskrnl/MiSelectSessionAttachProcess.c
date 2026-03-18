/*
 * XREFs of MiSelectSessionAttachProcess @ 0x140002524
 * Callers:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MiGetNextSession @ 0x14008CB84 (MiGetNextSession.c)
 *     MiAttachToOwningSession @ 0x14012D08C (MiAttachToOwningSession.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x1402C68A0 (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14003F810 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall MiSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  if ( *(_QWORD *)(a1 + 960) && (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v1 = (_QWORD *)(a1 + 16);
    for ( i = *(_QWORD **)(a1 + 16); i != v1; i = (_QWORD *)*i )
    {
      v3 = i - 105;
      if ( (*((_BYTE *)i + 625) & 1) == 0
        && (*((_DWORD *)v3 + 195) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1467) & 0x60) != 0x40
        && (unsigned __int8)ObReferenceObjectSafeWithTag(i - 105, 1953261124LL) )
      {
        return i - 105;
      }
    }
  }
  return 0LL;
}
