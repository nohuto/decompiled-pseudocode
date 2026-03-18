/*
 * XREFs of MmGetSectionStrongImageReference @ 0x14085C368
 * Callers:
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     PspGetSystemDllSecureHandle @ 0x1409F8288 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x140075E70 (MiSectionControlArea.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     MiGetSectionStrongImageReference @ 0x14085C318 (MiGetSectionStrongImageReference.c)
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
    if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(v8 + 92) & 0x180000) != 0 )
    {
      v9 = *(_QWORD *)(v8 + 96);
      if ( *(_QWORD *)(v9 + 48)
        || (SectionStrongImageReference = MiGetSectionStrongImageReference(*(_QWORD *)(v8 + 96)),
            SectionStrongImageReference >= 0) )
      {
        SectionStrongImageReference = 0;
        *a4 = *(_QWORD *)(v9 + 48);
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
