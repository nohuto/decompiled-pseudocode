/*
 * XREFs of NtOpenThreadTokenEx @ 0x140649A40
 * Callers:
 *     NtOpenThreadToken @ 0x140649A20 (NtOpenThreadToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     SepCreateImpersonationTokenDacl @ 0x140631A64 (SepCreateImpersonationTokenDacl.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     PsRestoreImpersonation @ 0x140649ED0 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x14064A030 (PsDisableImpersonation.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     PsSwapImpersonationToken @ 0x14069CF60 (PsSwapImpersonationToken.c)
 *     SepSetTokenTrust @ 0x1406A5908 (SepSetTokenTrust.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  BOOLEAN v5; // di
  void *v7; // r12
  KPROCESSOR_MODE PreviousMode; // r13
  int v9; // esi
  ULONG v10; // esi
  __int64 v11; // rcx
  NTSTATUS result; // eax
  _DWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *v15; // r14
  _DWORD *v16; // rdi
  char v17; // r15
  NTSTATUS inserted; // eax
  _QWORD *v19; // rbx
  PACL v20; // rdi
  NTSTATUS v21; // r14d
  bool v22; // r13
  struct _KPROCESS *v23; // rdi
  PACCESS_TOKEN v24; // rbx
  __int64 v25; // rax
  BOOLEAN v26; // [rsp+40h] [rbp-D8h]
  char v27; // [rsp+41h] [rbp-D7h]
  bool v28; // [rsp+42h] [rbp-D6h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  PVOID v30; // [rsp+50h] [rbp-C8h] BYREF
  int v31; // [rsp+58h] [rbp-C0h]
  PACL Dacl; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-B0h]
  HANDLE Handle; // [rsp+70h] [rbp-A8h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+78h] [rbp-A0h] BYREF
  int v36; // [rsp+88h] [rbp-90h] BYREF
  __int64 v37; // [rsp+90h] [rbp-88h]
  __int64 v38; // [rsp+98h] [rbp-80h]
  ULONG v39; // [rsp+A0h] [rbp-78h]
  _BYTE *v40; // [rsp+A8h] [rbp-70h]
  __int64 v41; // [rsp+B0h] [rbp-68h]
  _BYTE SecurityDescriptor[48]; // [rsp+C0h] [rbp-58h] BYREF

  v5 = OpenAsSelf;
  v7 = 0LL;
  v30 = 0LL;
  ImpersonationState.Token = 0LL;
  *(_QWORD *)&ImpersonationState.CopyOnOpen = 0LL;
  v26 = 0;
  Handle = 0LL;
  Dacl = 0LL;
  v33 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 73714;
  if ( PreviousMode )
    v9 = 7666;
  v10 = HandleAttributes & v9;
  if ( PreviousMode )
  {
    v11 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  result = ObReferenceObjectByHandle(
             ThreadHandle,
             0x800u,
             (POBJECT_TYPE)PsThreadType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v13 = Object;
    if ( (*((_DWORD *)Object + 436) & 8) == 0 )
      goto LABEL_9;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (signed __int64 *)((char *)Object + 1728);
    ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1728, 0LL);
    if ( (v13[436] & 8) != 0 )
    {
      v16 = Object;
      v7 = (void *)(*((_QWORD *)Object + 205) & 0xFFFFFFFFFFFFFFF8uLL);
      v27 = BYTE1(v13[436]) & 1;
      ObfReferenceObject(v7);
      v31 = v16[410] & 3;
      v28 = (v16[410] & 4) != 0;
      v5 = OpenAsSelf;
    }
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( !v7 )
    {
LABEL_9:
      ObfDereferenceObject(Object);
      return -1073741700;
    }
    if ( v31 <= 0 )
    {
      ObfDereferenceObject(v7);
      ObfDereferenceObject(Object);
      return -1073741658;
    }
    if ( v5 )
      v26 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    v17 = v27;
    if ( v27 )
    {
      if ( v5 )
      {
        if ( ImpersonationState.Token )
        {
          v33 = *((_QWORD *)ImpersonationState.Token + 138);
          v22 = 1;
        }
        else
        {
          v22 = 0;
        }
      }
      else
      {
        v25 = *((_QWORD *)Object + 238);
        if ( v25 )
          v33 = *(_QWORD *)(v25 + 1104);
        v22 = v25 != 0;
      }
      v23 = (struct _KPROCESS *)*((_QWORD *)Object + 68);
      v24 = PsReferencePrimaryToken(v23);
      v21 = SepCreateImpersonationTokenDacl((__int64)v7, (__int64)v24, &Dacl);
      ObFastDereferenceObject((signed __int64 *)&v23[1].Affinity.Bitmap[5], (unsigned __int64)v24);
      v20 = Dacl;
      if ( v21 < 0 )
        goto LABEL_53;
      if ( Dacl )
      {
        memset(SecurityDescriptor, 0, 0x28uLL);
        SecurityDescriptor[0] = 1;
        RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
      }
      v36 = 48;
      v37 = 0LL;
      v39 = v10;
      v38 = 0LL;
      v40 = v20 ? SecurityDescriptor : 0LL;
      v41 = 0LL;
      v21 = SepDuplicateToken((_DWORD)v7, (unsigned int)&v36, v28, 2, v31, 0, 0, (__int64)&v30);
      if ( v21 < 0 )
      {
LABEL_53:
        v19 = v30;
        goto LABEL_22;
      }
      v19 = v30;
      if ( v22 )
        v21 = SepSetTokenTrust(v30, v33);
      if ( v21 < 0 )
        goto LABEL_22;
      ObfReferenceObject(v19);
      inserted = ObInsertObjectEx(v19, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&Handle);
    }
    else
    {
      inserted = ObOpenObjectByPointer(
                   v7,
                   v10,
                   0LL,
                   DesiredAccess,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &Handle);
      v19 = v30;
      v20 = Dacl;
    }
    v21 = inserted;
LABEL_22:
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v26 )
    {
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v19 = v30;
      v17 = v27;
    }
    if ( v21 >= 0 && v17 )
      PsSwapImpersonationToken(Object, v7, v19);
    ObfDereferenceObject(v7);
    if ( v19 )
      ObfDereferenceObject(v19);
    ObfDereferenceObject(Object);
    if ( v21 >= 0 )
      *TokenHandle = Handle;
    return v21;
  }
  return result;
}
