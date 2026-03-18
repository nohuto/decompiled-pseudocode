/*
 * XREFs of MiDereferenceFailedControlArea @ 0x1406EF838
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 *     MiFinishCreateSection @ 0x1405D74C0 (MiFinishCreateSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x140070F04 (MiDereferenceControlAreaBySection.c)
 *     MiAweControlArea @ 0x1400726B4 (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x1402D5BF8 (MiDeleteSectionAwe.c)
 */

__int64 __fastcall MiDereferenceFailedControlArea(int *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 8);
  if ( (v1 & 4) != 0 )
    return MiDereferenceControlAreaBySection(v2, (v1 & 1) == 0);
  result = MiAweControlArea(v2);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v4);
  return result;
}
