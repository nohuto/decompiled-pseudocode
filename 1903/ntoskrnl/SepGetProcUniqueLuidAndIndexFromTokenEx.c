/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x14031E7BC
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140092040 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14031E560 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x14031E6F4 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromTokenEx(char a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  char v4; // si
  unsigned int ProcUniqueLuidAndIndexFromAttributeInfo; // edi
  struct _KTHREAD *CurrentThread; // rax

  v4 = 0;
  ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    if ( !a1 && KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v4 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    }
    ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                *(_QWORD *)(a2 + 776),
                                                a3,
                                                a4);
    if ( v4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegion();
    }
  }
  return ProcUniqueLuidAndIndexFromAttributeInfo;
}
