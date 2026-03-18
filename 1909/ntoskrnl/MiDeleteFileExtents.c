/*
 * XREFs of MiDeleteFileExtents @ 0x14064E8E0
 * Callers:
 *     MiDeleteControlArea @ 0x1400BF77C (MiDeleteControlArea.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 * Callees:
 *     MiControlAreaUsingCopyExtents @ 0x1400BF880 (MiControlAreaUsingCopyExtents.c)
 *     MiDeleteImageExtentList @ 0x14088C184 (MiDeleteImageExtentList.c)
 */

__int64 __fastcall MiDeleteFileExtents(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx

  result = MiControlAreaUsingCopyExtents(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(v2 + 96);
    if ( (*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      result = MiDeleteImageExtentList((PVOID)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0uLL));
      *(_QWORD *)(v3 + 48) = 0LL;
    }
  }
  return result;
}
