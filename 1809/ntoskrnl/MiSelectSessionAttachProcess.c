/*
 * XREFs of MiSelectSessionAttachProcess @ 0x14007E604
 * Callers:
 *     MiGetNextSession @ 0x140012754 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     MiAttachToOwningSession @ 0x14011A53C (MiAttachToOwningSession.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x1402AEEF0 (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall MiSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  if ( *(_QWORD *)(a1 + 7872) && (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v1 = (_QWORD *)(a1 + 16);
    for ( i = *(_QWORD **)(a1 + 16); i != v1; i = (_QWORD *)*i )
    {
      v3 = i - 104;
      if ( (*((_BYTE *)i + 633) & 1) == 0
        && (*((_DWORD *)v3 + 193) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1467) & 0x60) != 0x40
        && ObReferenceObjectSafeWithTag((__int64)(i - 104)) )
      {
        return i - 104;
      }
    }
  }
  return 0LL;
}
