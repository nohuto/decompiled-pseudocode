/*
 * XREFs of MiDereferenceFailedControlArea @ 0x1406D0344
 * Callers:
 *     MiFinishCreateSection @ 0x1405DE0B0 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiDereferenceControlAreaBySection @ 0x14007645C (MiDereferenceControlAreaBySection.c)
 *     MiAweControlArea @ 0x140077E6C (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x1402B03D4 (MiDeleteSectionAwe.c)
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
