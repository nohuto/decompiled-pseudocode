/*
 * XREFs of ??0PROXYPORT@@QEAA@_K@Z @ 0x1C00195F0
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00190FC (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C0019328 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

PROXYPORT *__fastcall PROXYPORT::PROXYPORT(PROXYPORT *this)
{
  int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r15d
  PACCESS_TOKEN v7; // rsi
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v9; // rdi
  int v10; // r14d
  NTSTATUS v11; // esi
  int v12; // eax
  int v13; // edi
  __int64 v15; // rcx
  PULONG ReturnLength; // [rsp+28h] [rbp-E0h]
  ULONG AllocationAttributes[2]; // [rsp+30h] [rbp-D8h]
  struct _REMOTE_PORT_VIEW *FileHandle; // [rsp+38h] [rbp-D0h]
  unsigned __int8 CopyOnOpen[4]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID TokenInformation; // [rsp+5Ch] [rbp-ACh] BYREF
  struct _LUID AuthenticationId; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h] BYREF
  struct _PORT_VIEW v23; // [rsp+78h] [rbp-90h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v25; // [rsp+ACh] [rbp-5Ch] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v29; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t Dst[264]; // [rsp+108h] [rbp+0h] BYREF

  memset(Dst, 0, 0x208uLL);
  *(_QWORD *)this = 0LL;
  if ( ZwQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessSessionInformation,
         (char *)&TokenInformation + 4,
         4u,
         0LL) < 0 )
    return this;
  v2 = HIDWORD(TokenInformation);
  v29.Length = 0;
  v29.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&v29.ContextTrackingMode = 257;
  v3 = PALLOCMEM2(0x40uLL);
  *(_QWORD *)this = v3;
  if ( !v3 )
    return this;
  *(_DWORD *)(v3 + 60) = 0;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 56LL) = 0;
  **(_QWORD **)this = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  MaximumSize.QuadPart = 0x400000LL;
  v23.SectionHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateSection(&v23.SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
    goto LABEL_24;
  P = 0LL;
  AuthenticationId = 0LL;
  LODWORD(TokenInformation) = 0;
  if ( (unsigned __int8)PsIsThreadImpersonating(KeGetCurrentThread()) )
  {
    v6 = 1;
    v9 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen[1], CopyOnOpen, &ImpersonationLevel);
    v7 = v9;
    if ( v9 )
      goto LABEL_7;
  }
  else
  {
    v6 = 0;
    v7 = 0LL;
  }
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5, v4);
  v9 = PsReferencePrimaryToken(CurrentProcess);
LABEL_7:
  v10 = v7 != 0LL ? v6 : 0;
  v11 = SeQueryAuthenticationIdToken(v9, &AuthenticationId);
  if ( v11 >= 0 )
  {
    v11 = SeQueryInformationToken(v9, TokenIntegrityLevel, &TokenInformation);
    if ( v11 >= 0 )
      v11 = SeQueryInformationToken(v9, TokenUser, &P);
  }
  if ( v10 )
    PsDereferenceImpersonationToken(v9);
  else
    PsDereferencePrimaryToken(v9);
  if ( v11 < 0 )
    goto LABEL_24;
  v12 = (int)TokenInformation;
  v23.Length = 48;
  v23.SectionOffset = 0;
  v23.ViewSize = 0x400000LL;
  if ( (unsigned int)TokenInformation < 0x2000 )
    v12 = 0x2000;
  LODWORD(TokenInformation) = v12;
  LODWORD(FileHandle) = AuthenticationId.HighPart;
  AllocationAttributes[0] = AuthenticationId.LowPart;
  LODWORD(ReturnLength) = v2;
  *(_OWORD *)&v23.ViewBase = 0LL;
  swprintf_s(
    Dst,
    0x104uLL,
    L"%s_%x_%x_%x_%x",
    L"\\RPC Control\\UmpdProxy",
    ReturnLength,
    *(_QWORD *)AllocationAttributes);
  RtlInitUnicodeString(&DestinationString, Dst);
  v13 = PROXYPORT::SecureConnectPort(
          *(PROXYPORT **)P,
          *(void ***)this,
          &DestinationString,
          &v29,
          &v23,
          *(PSID *)P,
          FileHandle,
          &v25);
  if ( v13 >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 16LL) = MmSecureVirtualMemory(v23.ViewBase, v23.ViewSize, 4u);
    if ( *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL) = v23.SectionHandle;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = v23.ViewBase;
      *(_QWORD *)(*(_QWORD *)this + 32LL) = v23.ViewSize;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = v23.ViewRemoteBase;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)(*(_QWORD *)this + 40LL) - *(_QWORD *)(*(_QWORD *)this + 24LL);
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
    }
  }
  ExFreePoolWithTag(P, 0);
  if ( v13 < 0 || !*(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
LABEL_24:
    if ( v23.SectionHandle )
      ZwClose(v23.SectionHandle);
    v15 = *(_QWORD *)this;
    if ( **(_QWORD **)this )
    {
      ObfDereferenceObject(**(PVOID **)this);
      v15 = *(_QWORD *)this;
    }
    Win32FreePool(v15);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
