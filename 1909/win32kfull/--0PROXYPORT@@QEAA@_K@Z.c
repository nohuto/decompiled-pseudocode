/*
 * XREFs of ??0PROXYPORT@@QEAA@_K@Z @ 0x1C01030CC
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0099FBC (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C0103474 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

PROXYPORT *__fastcall PROXYPORT::PROXYPORT(PROXYPORT *this)
{
  int v2; // r15d
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v9; // rdi
  int v10; // r14d
  NTSTATUS v11; // esi
  int v12; // eax
  int v13; // edi
  void **v15; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG AllocationAttributes[2]; // [rsp+28h] [rbp-D8h]
  struct _REMOTE_PORT_VIEW *FileHandle; // [rsp+30h] [rbp-D0h]
  void *v19; // [rsp+40h] [rbp-C0h]
  unsigned int *v20; // [rsp+48h] [rbp-B8h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 CopyOnOpen[3]; // [rsp+51h] [rbp-AFh] BYREF
  PVOID TokenInformation; // [rsp+54h] [rbp-ACh] BYREF
  struct _LUID AuthenticationId; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  struct _PORT_VIEW v26; // [rsp+70h] [rbp-90h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v28; // [rsp+A4h] [rbp-5Ch] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v32; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[264]; // [rsp+100h] [rbp+0h] BYREF

  memset(&v26, 0, sizeof(v26));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_WORD *)(&v32.EffectiveOnly + 1) = 0;
  HIDWORD(TokenInformation) = 0;
  memset(Dst, 0, 0x208uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)this = 0LL;
  if ( ZwQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessSessionInformation,
         (char *)&TokenInformation + 4,
         4u,
         0LL) >= 0 )
  {
    v2 = HIDWORD(TokenInformation);
    v32.Length = 0;
    v32.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&v32.ContextTrackingMode = 257;
    v3 = PALLOCMEM2(0x40uLL, 1953525831LL, 1);
    *(_QWORD *)this = v3;
    if ( v3 )
    {
      v3[15] = 0;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 56LL) = 0;
      **(_QWORD **)this = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      MaximumSize.QuadPart = 0x400000LL;
      v26.SectionHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateSection(&v26.SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
        goto LABEL_23;
      P = 0LL;
      AuthenticationId = 0LL;
      LODWORD(TokenInformation) = 0;
      if ( !(unsigned __int8)PsIsThreadImpersonating(KeGetCurrentThread())
        || (v10 = 1,
            (v9 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, &ImpersonationLevel)) == 0LL) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5, v4, v6, v7);
        v9 = PsReferencePrimaryToken(CurrentProcess);
        v10 = 0;
      }
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
        goto LABEL_23;
      v12 = (int)TokenInformation;
      v26.Length = 48;
      v26.SectionOffset = 0;
      v26.ViewSize = 0x400000LL;
      if ( (unsigned int)TokenInformation < 0x2000 )
        v12 = 0x2000;
      LODWORD(TokenInformation) = v12;
      LODWORD(FileHandle) = AuthenticationId.HighPart;
      AllocationAttributes[0] = AuthenticationId.LowPart;
      LODWORD(ReturnLength) = v2;
      *(_OWORD *)&v26.ViewBase = 0LL;
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
              &v32,
              &v26,
              *(void **)P,
              FileHandle,
              &v28,
              v19,
              v20);
      if ( v13 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 16LL) = MmSecureVirtualMemory(v26.ViewBase, v26.ViewSize, 4u);
        if ( *(_QWORD *)(*(_QWORD *)this + 16LL) )
        {
          *(_QWORD *)(*(_QWORD *)this + 8LL) = v26.SectionHandle;
          *(_QWORD *)(*(_QWORD *)this + 24LL) = v26.ViewBase;
          *(_QWORD *)(*(_QWORD *)this + 32LL) = v26.ViewSize;
          *(_QWORD *)(*(_QWORD *)this + 40LL) = v26.ViewRemoteBase;
          *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)(*(_QWORD *)this + 40LL)
                                              - *(_QWORD *)(*(_QWORD *)this + 24LL);
          *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
        }
      }
      ExFreePoolWithTag(P, 0);
      if ( v13 < 0 || !*(_QWORD *)(*(_QWORD *)this + 16LL) )
      {
LABEL_23:
        if ( v26.SectionHandle )
          ZwClose(v26.SectionHandle);
        v15 = *(void ***)this;
        if ( **(_QWORD **)this )
        {
          ObfDereferenceObject(**(PVOID **)this);
          v15 = *(void ***)this;
        }
        Win32FreePool(v15);
        *(_QWORD *)this = 0LL;
      }
    }
  }
  return this;
}
