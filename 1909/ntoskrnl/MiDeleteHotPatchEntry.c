/*
 * XREFs of MiDeleteHotPatchEntry @ 0x14088D7B0
 * Callers:
 *     MiDeleteImageHotPatchState @ 0x14088D96C (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x14088DFC4 (MiHotPatchImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmUnsecureVirtualMemory @ 0x14060C520 (MmUnsecureVirtualMemory.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 */

void __fastcall MiDeleteHotPatchEntry(UNICODE_STRING *P)
{
  _KPROCESS *Process; // rsi
  wchar_t *Buffer; // rdi
  wchar_t *v4; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  while ( 1 )
  {
    Buffer = P[3].Buffer;
    if ( !Buffer )
      break;
    P[3].Buffer = *(wchar_t **)Buffer;
    MmUnsecureVirtualMemory(*((HANDLE *)Buffer + 2));
    MiUnmapViewOfSection((ULONG_PTR)Process, *((_QWORD *)Buffer + 1), 0, 0);
    ExFreePoolWithTag(Buffer, 0);
  }
  RtlFreeAnsiString(P + 4);
  v4 = P[2].Buffer;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
}
