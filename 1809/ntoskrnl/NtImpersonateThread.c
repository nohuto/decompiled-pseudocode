/*
 * XREFs of NtImpersonateThread @ 0x14069BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCreateClientSecurity @ 0x14064A390 (SeCreateClientSecurity.c)
 *     SeImpersonateClientEx @ 0x14069C0E0 (SeImpersonateClientEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtImpersonateThread(
        HANDLE ThreadHandle,
        HANDLE ThreadToImpersonate,
        PSECURITY_QUALITY_OF_SERVICE SecurityQualityOfService)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  int v6; // edi
  PVOID v7; // rbx
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+48h] [rbp-70h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+60h] [rbp-58h] BYREF
  PVOID v11; // [rsp+D8h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)SecurityQualityOfService & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ClientSecurityQos = *SecurityQualityOfService;
  result = ObReferenceObjectByHandle(
             ThreadToImpersonate,
             0x200u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v6 = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v11, 0LL);
    v7 = Object;
    if ( v6 >= 0 )
    {
      v6 = SeCreateClientSecurity((PETHREAD)Object, &ClientSecurityQos, 0, &ClientContext);
      if ( v6 >= 0 )
      {
        v6 = SeImpersonateClientEx(&ClientContext, (PETHREAD)v11);
        ObfDereferenceObject(ClientContext.ClientToken);
      }
      ObfDereferenceObject(v11);
    }
    ObfDereferenceObject(v7);
    return v6;
  }
  return result;
}
