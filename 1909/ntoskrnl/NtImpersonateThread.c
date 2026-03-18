/*
 * XREFs of NtImpersonateThread @ 0x1406D5A60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeImpersonateClientEx @ 0x1405E5000 (SeImpersonateClientEx.c)
 *     SeCreateClientSecurity @ 0x1405E5240 (SeCreateClientSecurity.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtImpersonateThread(
        HANDLE ThreadHandle,
        HANDLE ThreadToImpersonate,
        PSECURITY_QUALITY_OF_SERVICE SecurityQualityOfService)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  int v8; // edi
  PVOID v9; // rbx
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+38h] [rbp-80h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+60h] [rbp-58h] BYREF
  PVOID v13; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  memset(&ClientContext, 0, sizeof(ClientContext));
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
    v8 = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v13, 0LL);
    v9 = Object;
    if ( v8 >= 0 )
    {
      v8 = SeCreateClientSecurity((PETHREAD)Object, &ClientSecurityQos, 0, &ClientContext);
      if ( v8 >= 0 )
      {
        v8 = SeImpersonateClientEx(&ClientContext, (PETHREAD)v13);
        ObfDereferenceObject(ClientContext.ClientToken);
      }
      ObfDereferenceObject(v13);
    }
    ObfDereferenceObject(v9);
    return v8;
  }
  return result;
}
