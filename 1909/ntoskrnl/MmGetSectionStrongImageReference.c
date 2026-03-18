/*
 * XREFs of MmGetSectionStrongImageReference @ 0x140898700
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspGetSystemDllSecureHandle @ 0x140A3DB50 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MiGetSectionStrongImageReference @ 0x1408986B0 (MiGetSectionStrongImageReference.c)
 */

NTSTATUS __fastcall MmGetSectionStrongImageReference(void *a1, KPROCESSOR_MODE a2, PVOID a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  int SectionStrongImageReference; // ebx
  PVOID v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || (result = ObReferenceObjectByHandle(a1, 0, MmSectionObjectType, a2, &v11, 0LL), a3 = v11, result >= 0) )
  {
    v8 = MiSectionControlArea((__int64)a3);
    if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(v8 + 92) & 0xC0000) != 0 )
    {
      v9 = *(_QWORD *)(v8 + 96);
      if ( *(_QWORD *)(v9 + 56)
        || (SectionStrongImageReference = MiGetSectionStrongImageReference(*(_QWORD *)(v8 + 96)),
            SectionStrongImageReference >= 0) )
      {
        SectionStrongImageReference = 0;
        *a4 = *(_QWORD *)(v9 + 56);
      }
    }
    else
    {
      SectionStrongImageReference = -1073741811;
    }
    if ( a1 )
      ObfDereferenceObject(a3);
    return SectionStrongImageReference;
  }
  return result;
}
