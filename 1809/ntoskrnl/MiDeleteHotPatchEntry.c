/*
 * XREFs of MiDeleteHotPatchEntry @ 0x140855D98
 * Callers:
 *     MiDeleteImageHotPatchState @ 0x140855F3C (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
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
