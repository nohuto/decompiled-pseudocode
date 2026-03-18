/*
 * XREFs of MiInitializeApiSets @ 0x1409BCEBC
 * Callers:
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     MmMapViewInSystemSpace @ 0x1405A23A0 (MmMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x14061B2D0 (MmCreateSection.c)
 */

__int64 __fastcall MiInitializeApiSets(__int64 a1)
{
  __int64 result; // rax
  PVOID v3; // rdi
  NTSTATUS v4; // ebx
  PVOID v5; // rbx
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID Section; // [rsp+68h] [rbp+10h] BYREF
  PVOID MappedBase; // [rsp+70h] [rbp+18h] BYREF

  ViewSize = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2656LL);
  result = MmCreateSection((int)&Section, 983071LL, 0, &ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
      return (unsigned int)v4;
    }
    else
    {
      v5 = MappedBase;
      memmove(
        MappedBase,
        *(const void **)(*(_QWORD *)(a1 + 240) + 2648LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2656LL));
      qword_140438DD0 = (__int64)v3;
      qword_140438DD8 = (__int64)v5;
      result = 0LL;
      qword_140438DE0 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2656LL);
    }
  }
  return result;
}
