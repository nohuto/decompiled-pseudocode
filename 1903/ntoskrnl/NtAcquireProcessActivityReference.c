/*
 * XREFs of NtAcquireProcessActivityReference @ 0x1406F7810
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140128F54 (ExCpuSetResourceManagerAccessCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     PspCreateActivityReference @ 0x1406F7910 (PspCreateActivityReference.c)
 */

int __fastcall NtAcquireProcessActivityReference(__int64 *a1, void *a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // r8
  int result; // eax
  PVOID v9; // rbx
  int ActivityReference; // edi
  __int64 v11[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  if ( a3 )
    return -1073741583;
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByHandleWithTag(
               a2,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x63417350u,
               &Object,
               0LL);
    if ( result >= 0 )
    {
      v9 = Object;
      ActivityReference = PspCreateActivityReference(Object, (__int64)v11);
      if ( ActivityReference >= 0 )
        *a1 = v11[0];
      ObfDereferenceObjectWithTag(v9, 0x63417350u);
      return ActivityReference;
    }
  }
  return result;
}
