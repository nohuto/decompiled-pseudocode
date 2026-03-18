/*
 * XREFs of ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C012221C
 * Callers:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C0121E64 (--0PROXYPORT@@QEAA@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     Win32DestroySection @ 0x1C01C4188 (Win32DestroySection.c)
 *     Win32OpenSectionByHandle @ 0x1C01C41A4 (Win32OpenSectionByHandle.c)
 *     Win32MapViewInSessionSpace @ 0x1C01D57B0 (Win32MapViewInSessionSpace.c)
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
  PVOID v9; // r14
  NTSTATUS v12; // ebx
  __int64 v13; // r8
  __int64 v15; // [rsp+50h] [rbp-88h] BYREF
  void *PortHandle; // [rsp+58h] [rbp-80h] BYREF
  PVOID Object; // [rsp+60h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-70h] BYREF

  v9 = 0LL;
  v15 = 0LL;
  KeStackAttachProcess(gpepCSRSS, &ApcState);
  v12 = ZwSecureConnectPort(&PortHandle, a3, a4, ClientView, Sid, 0LL, MaxMessageLength, 0LL, 0LL);
  if ( v12 >= 0 )
  {
    v12 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0LL);
    v9 = Object;
    ZwClose(PortHandle);
    ClientView->ViewBase = 0LL;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v12 >= 0 )
  {
    v12 = Win32OpenSectionByHandle(ClientView->SectionHandle, 6LL, v13, &v15);
    if ( v12 < 0
      || (v12 = Win32MapViewInSessionSpace(v15, &ClientView->ViewBase, &ClientView->ViewSize),
          Win32DestroySection(v15),
          v12 < 0) )
    {
      ObfDereferenceObject(v9);
    }
    else
    {
      *a2 = v9;
    }
  }
  return (unsigned int)v12;
}
