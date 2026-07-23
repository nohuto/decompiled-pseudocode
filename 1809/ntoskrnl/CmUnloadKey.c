/*
 * XREFs of CmUnloadKey @ 0x140692FD8
 * Callers:
 *     NtUnloadKeyEx @ 0x140692E90 (NtUnloadKeyEx.c)
 *     NtUnloadKey @ 0x140703AF0 (NtUnloadKey.c)
 *     NtUnloadKey2 @ 0x140720490 (NtUnloadKey2.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmConvertHandleToKernelHandle @ 0x1405B87C0 (CmConvertHandleToKernelHandle.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpRetryBackOff @ 0x1407F9CA4 (CmpRetryBackOff.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, void *a4)
{
  HANDLE v4; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  char v8; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rax
  BOOLEAN v11; // r13
  unsigned __int16 Length; // si
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  wchar_t *v14; // rdi
  void *v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rdx
  unsigned int v26; // [rsp+40h] [rbp-258h]
  PVOID v28; // [rsp+48h] [rbp-250h] BYREF
  PVOID v29; // [rsp+50h] [rbp-248h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-238h] BYREF
  unsigned int v31; // [rsp+70h] [rbp-228h]
  int v32; // [rsp+74h] [rbp-224h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-220h]
  HANDLE v34; // [rsp+80h] [rbp-218h] BYREF
  _SLIST_ENTRY v35; // [rsp+88h] [rbp-210h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-200h]
  PVOID Object; // [rsp+A0h] [rbp-1F8h] BYREF
  UNICODE_STRING v38; // [rsp+B0h] [rbp-1E8h]
  __int128 v39; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-1C8h]
  __int128 v41; // [rsp+E0h] [rbp-1B8h]
  _QWORD v42[6]; // [rsp+F0h] [rbp-1A8h] BYREF
  _QWORD v43[38]; // [rsp+120h] [rbp-178h] BYREF

  v4 = a4;
  Handle = a4;
  v31 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v43, 0, 0x128uLL);
  v43[19] = &v43[18];
  v43[18] = &v43[18];
  memset(&v43[27], 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = 0LL;
  v29 = 0LL;
  Privileges = 0LL;
  v34 = 0LL;
  memset(v42, 0, 0x28uLL);
  v8 = 0;
  *((_QWORD *)&v35.Next + 1) = &v35;
  v35.Next = &v35;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v11 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_52:
    LODWORD(v20) = -1073741431;
LABEL_54:
    v26 = v20;
    goto LABEL_37;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    LODWORD(v20) = -1073741727;
    goto LABEL_54;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    LODWORD(v20) = -1073741811;
    goto LABEL_54;
  }
  if ( PreviousMode == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v39 = *(_OWORD *)a1;
  v40 = *(_OWORD *)(a1 + 16);
  v41 = *(_OWORD *)(a1 + 32);
  if ( PreviousMode == 1 )
  {
    v16 = v40;
    if ( (unsigned __int64)v40 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v17 = *(_DWORD *)v16;
    *(_DWORD *)&v38.Length = v17;
    v18 = *(_QWORD *)(v16 + 8);
    v38.Buffer = (wchar_t *)v18;
    DestinationString = v38;
    if ( (_WORD)v17 )
    {
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v18 + (unsigned __int16)v17;
      if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(
                                                           0x7FFFFFFF0000LL,
                                                           DestinationString.Length,
                                                           0x35374D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      LODWORD(v20) = -1073741670;
      v26 = -1073741670;
      goto LABEL_37;
    }
    v14 = (wchar_t *)TransientPoolWithQuotaTag;
    memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v14;
    v4 = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  *(_QWORD *)&v40 = &DestinationString;
  v41 = 0LL;
  if ( PreviousMode == 1 )
  {
    LODWORD(v20) = CmConvertHandleToKernelHandle(*((void **)&v39 + 1), v15, 1, 0, &v34);
    v26 = v20;
    if ( (int)v20 < 0 )
      goto LABEL_37;
    *((_QWORD *)&v39 + 1) = v34;
  }
  LODWORD(v43[3]) = 0;
  LODWORD(v43[0]) = 4;
  v21 = ObReferenceObjectByNameEx((__int64)&v39, 0LL, 0, (__int64)CmKeyObjectType, 0, (__int64)v43, &v28);
  if ( v21 == -1073741772 )
    v21 = -1073741811;
  v20 = (unsigned int)v21;
  v26 = v21;
  if ( v21 >= 0 )
  {
    if ( v4 )
    {
      LODWORD(v20) = ObReferenceObjectByHandle(v4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v29 = Object;
      v26 = v20;
      if ( (int)v20 < 0 )
        goto LABEL_37;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
      goto LABEL_34;
    v42[0] = v28;
    v42[1] = v29;
    v22 = CmpCallCallBacksEx(0x22u, (__int64)v42, 0LL, 1, 0x23u, (__int64)v28, &v35);
    v20 = (unsigned int)v22;
    v26 = v22;
    if ( v22 >= 0 )
    {
      v8 = 1;
LABEL_34:
      v32 = 0;
      v23 = v31;
      while ( (CmpShutdownRundown & 1) == 0 )
      {
        LOBYTE(v20) = a3;
        LODWORD(v20) = CmpPerformUnloadKey(v28, v23, v20, v29);
        v26 = v20;
        if ( (_DWORD)v20 != -1073741267 )
          goto LABEL_37;
        CmpRetryBackOff(&v32, v24, 3221226029LL);
      }
      goto LABEL_52;
    }
    if ( v22 == -1073740541 )
    {
      LODWORD(v20) = 0;
      v26 = 0;
    }
  }
LABEL_37:
  if ( v8 )
    v26 = CmPostCallbackNotificationEx(0x23u, (__int64)v28, v20, (__int64)v42, 0LL, &v35);
  if ( v29 )
    ObfDereferenceObject(v29);
  if ( v28 )
    ObfDereferenceObject(v28);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v34 )
    ZwClose(v34);
  CmpCleanupParseContext((__int64)v43, 0);
  if ( v11 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v26;
}
