/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x14064C570
 * Callers:
 *     NtUnmapViewOfSection @ 0x14064C2F0 (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall NtUnmapViewOfSectionEx(ULONG_PTR a1, unsigned __int64 a2, int a3)
{
  char PreviousMode; // r9
  __int64 result; // rax
  unsigned int v5; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 && a2 > 0x7FFFFFFEFFFFLL )
    return 3221225497LL;
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v5 = MiUnmapViewOfSection((ULONG_PTR)Object);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v5;
  }
  return result;
}
