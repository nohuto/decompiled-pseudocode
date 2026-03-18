/*
 * XREFs of MiDereferenceFailedControlArea @ 0x1406F1448
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 *     MiFinishCreateSection @ 0x1405D7C80 (MiFinishCreateSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x140071174 (MiDereferenceControlAreaBySection.c)
 *     MiAweControlArea @ 0x140072924 (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x1402D5958 (MiDeleteSectionAwe.c)
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
