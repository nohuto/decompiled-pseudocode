/*
 * XREFs of ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C0019328
 * Callers:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C00195F0 (--0PROXYPORT@@QEAA@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall PROXYPORT::SecureConnectPort(
        PROXYPORT *this,
        void **a2,
        struct _UNICODE_STRING *a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        struct _PORT_VIEW *ClientView,
        PSID Sid,
        struct _REMOTE_PORT_VIEW *a7,
        unsigned int *MaxMessageLength)
{
  PVOID v11; // r15
  NTSTATUS v12; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // rdi
  __int64 CurrentProcess; // rax
  void *PortHandle; // [rsp+50h] [rbp-59h] BYREF
  _DWORD v20[2]; // [rsp+58h] [rbp-51h] BYREF
  PVOID Object; // [rsp+60h] [rbp-49h] BYREF
  PVOID v22; // [rsp+68h] [rbp-41h] BYREF
  _KAPC_STATE ApcState; // [rsp+70h] [rbp-39h] BYREF

  v11 = 0LL;
  KeStackAttachProcess(gpepCSRSS, &ApcState);
  v12 = ZwSecureConnectPort(&PortHandle, a3, a4, ClientView, Sid, 0LL, MaxMessageLength, 0LL, 0LL);
  if ( v12 >= 0 )
  {
    v12 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0LL);
    v11 = Object;
    ZwClose(PortHandle);
    ClientView->ViewBase = 0LL;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v12 >= 0 )
  {
    v13 = ObReferenceObjectByHandle(ClientView->SectionHandle, 6u, MmSectionObjectType, 0, &v22, 0LL);
    v16 = v22;
    v12 = v13;
    if ( v13 < 0
      || (v20[0] = ClientView->SectionOffset,
          v20[1] = 0,
          CurrentProcess = PsGetCurrentProcess(v15, v14),
          v12 = MmMapViewOfSection(
                  v16,
                  CurrentProcess,
                  &ClientView->ViewBase,
                  0LL,
                  0LL,
                  v20,
                  &ClientView->ViewSize,
                  2,
                  0,
                  4),
          ObfDereferenceObject(v16),
          v12 < 0) )
    {
      ObfDereferenceObject(v11);
    }
    else
    {
      *a2 = v11;
    }
  }
  return (unsigned int)v12;
}
