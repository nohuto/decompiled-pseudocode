/*
 * XREFs of SmpExpandKnownDllsPath @ 0x14000663C
 * Callers:
 *     SmpOpenKnownDllsHandles @ 0x1400066E0 (SmpOpenKnownDllsHandles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpExpandKnownDllsPath(PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  USHORT v4; // si
  WCHAR *Heap; // rax
  unsigned int v6; // ebx

  v4 = SmpSystemRoot.Length + Source->Length + 2;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
  v6 = 0;
  Destination->Buffer = Heap;
  if ( Heap )
  {
    Destination->Length = 0;
    Destination->MaximumLength = v4;
    RtlCopyUnicodeString(Destination, &SmpSystemRoot);
    RtlAppendUnicodeStringToString(Destination, Source);
    Destination->Buffer[(unsigned __int64)Destination->Length >> 1] = 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
