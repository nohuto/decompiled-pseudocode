/*
 * XREFs of CmLoadDifferencingKey @ 0x1405B5DBC
 * Callers:
 *     NtLoadKey3 @ 0x1405813D0 (NtLoadKey3.c)
 *     NtLoadKeyEx @ 0x1405B5D60 (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x140710840 (NtLoadKey2.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     VrpLoadDifferencingHive @ 0x14080EAF8 (VrpLoadDifferencingHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpTraceHiveLoadStop @ 0x1405B6994 (CmpTraceHiveLoadStop.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmpTraceHiveLoadStart @ 0x1405B8744 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x1405B87C0 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x1405B8860 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1405B8B6C (CmCheckNoTxContext.c)
 *     ObDeleteCapturedInsertInfo @ 0x1405B8BB0 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x1405B8C30 (CmReleaseLoadKeyContext.c)
 *     ObReferenceObjectByName @ 0x1405C9DA0 (ObReferenceObjectByName.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     SeTokenType @ 0x1406C3BD0 (SeTokenType.c)
 *     CmLoadKey @ 0x1406C9E18 (CmLoadKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8,
        __int64 a9,
        char a10,
        void *a11,
        KPROCESSOR_MODE PreviousMode)
{
  char v14; // r13
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v16; // di
  NTSTATUS v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int16 Length; // di
  wchar_t *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  struct _KTHREAD *v29; // rax
  HANDLE v30; // r13
  PVOID v31; // rbx
  int v32; // r9d
  int v33; // eax
  int v34; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  PVOID v36; // rbx
  int HandleInformation; // [rsp+28h] [rbp-370h]
  int v39; // [rsp+30h] [rbp-368h]
  int v40; // [rsp+60h] [rbp-338h]
  char v41; // [rsp+66h] [rbp-332h]
  char v42; // [rsp+67h] [rbp-331h]
  BOOLEAN v43; // [rsp+68h] [rbp-330h]
  PVOID v44; // [rsp+70h] [rbp-328h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-320h] BYREF
  void *v46[2]; // [rsp+80h] [rbp-318h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-308h] BYREF
  HANDLE *v48; // [rsp+A0h] [rbp-2F8h]
  PVOID v49; // [rsp+A8h] [rbp-2F0h]
  PVOID v50; // [rsp+B0h] [rbp-2E8h]
  PVOID v51; // [rsp+B8h] [rbp-2E0h] BYREF
  unsigned int v52; // [rsp+C0h] [rbp-2D8h]
  HANDLE v53; // [rsp+C8h] [rbp-2D0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+D0h] [rbp-2C8h]
  UNICODE_STRING v55; // [rsp+D8h] [rbp-2C0h] BYREF
  PVOID v56; // [rsp+E8h] [rbp-2B0h]
  HANDLE Handle; // [rsp+F0h] [rbp-2A8h]
  PVOID v58; // [rsp+F8h] [rbp-2A0h]
  _QWORD v59[2]; // [rsp+100h] [rbp-298h] BYREF
  _QWORD *v60; // [rsp+110h] [rbp-288h] BYREF
  PVOID v61; // [rsp+118h] [rbp-280h]
  __int64 v62; // [rsp+120h] [rbp-278h]
  UNICODE_STRING v63; // [rsp+130h] [rbp-268h]
  __int64 v64; // [rsp+140h] [rbp-258h]
  HANDLE v65; // [rsp+148h] [rbp-250h]
  PVOID Token; // [rsp+150h] [rbp-248h] BYREF
  PVOID v67; // [rsp+158h] [rbp-240h] BYREF
  HANDLE v68; // [rsp+160h] [rbp-238h] BYREF
  __int64 v69; // [rsp+168h] [rbp-230h]
  PVOID Object; // [rsp+170h] [rbp-228h] BYREF
  _OWORD v71[3]; // [rsp+178h] [rbp-220h] BYREF
  _QWORD v72[12]; // [rsp+1B0h] [rbp-1E8h] BYREF
  PVOID v73[2]; // [rsp+210h] [rbp-188h] BYREF
  _QWORD v74[38]; // [rsp+220h] [rbp-178h] BYREF

  v69 = a4;
  *(_QWORD *)&v63.Length = a2;
  v52 = a3;
  Handle = a5;
  v48 = a7;
  v64 = a9;
  v65 = a11;
  memset(v71, 0, sizeof(v71));
  v46[0] = 0LL;
  v41 = 0;
  v14 = 0;
  CmpInitializeThreadInfo(v73);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v42 = 0;
  RtlInitUnicodeString(&v55, 0LL);
  v44 = 0LL;
  BugCheckParameter2 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v50 = 0LL;
  Privileges = 0LL;
  memset(v74, 0, 0x128uLL);
  v74[19] = &v74[18];
  v74[18] = &v74[18];
  memset(&v74[27], 0, 0x50uLL);
  v49 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v16 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v43 = v16;
  if ( !v16 )
  {
    v17 = -1073741431;
LABEL_5:
    v40 = v17;
    goto LABEL_99;
  }
  v14 = 0;
  if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 )
    goto LABEL_7;
  if ( a10 )
  {
    if ( !a9 )
    {
      v17 = -1073741576;
      goto LABEL_5;
    }
    if ( (a3 & 0x4000) == 0 )
      goto LABEL_7;
  }
  if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
    goto LABEL_7;
  v17 = CmCheckNoTxContext();
  v40 = v17;
  if ( v17 < 0 )
    goto LABEL_99;
  if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v17 = -1073741727;
    goto LABEL_5;
  }
  if ( (a3 & 0x810) == 0 )
  {
    if ( v48 )
      goto LABEL_22;
    if ( Handle )
    {
      v17 = -1073741581;
      goto LABEL_5;
    }
    goto LABEL_24;
  }
  if ( !v48 )
  {
LABEL_22:
    v17 = -1073741579;
    goto LABEL_5;
  }
  if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
  {
LABEL_7:
    v17 = -1073741583;
    goto LABEL_5;
  }
LABEL_24:
  LOBYTE(v18) = PreviousMode;
  v17 = CmpNameFromAttributes(*(_QWORD *)&v63.Length, v18, &v55);
  v40 = v17;
  if ( v17 < 0 )
    goto LABEL_99;
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a3 & 0x810) != 0 )
    {
      v19 = (__int64)v48;
      if ( (unsigned __int64)v48 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v19 = 0LL;
    }
  }
  v71[0] = *(_OWORD *)a1;
  v71[1] = *(_OWORD *)(a1 + 16);
  v71[2] = *(_OWORD *)(a1 + 32);
  if ( (a3 & 0x10) != 0 && *((_QWORD *)&v71[0] + 1) )
  {
    v17 = -1073741585;
    v40 = -1073741585;
    goto LABEL_99;
  }
  if ( PreviousMode == 1 )
  {
    v20 = *(_QWORD *)&v71[1];
    if ( *(_QWORD *)&v71[1] >= 0x7FFFFFFF0000uLL )
      v20 = 0x7FFFFFFF0000LL;
    v21 = *(_DWORD *)v20;
    *(_DWORD *)&v63.Length = v21;
    v22 = *(_QWORD *)(v20 + 8);
    v63.Buffer = (wchar_t *)v22;
    DestinationString = v63;
    if ( (_WORD)v21 )
    {
      if ( (v22 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = v22 + (unsigned __int16)v21;
      if ( v23 > 0x7FFFFFFF0000LL || v23 < v22 )
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
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(
                                   0x7FFFFFFF0000LL,
                                   DestinationString.Length,
                                   0x6B624D43u);
    if ( !Privileges )
    {
      v17 = -1073741670;
      v40 = -1073741670;
      v14 = 0;
      goto LABEL_99;
    }
    v25 = (wchar_t *)Privileges;
    memmove(Privileges, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v25;
    v14 = 0;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  *(_QWORD *)&v71[1] = &DestinationString;
  *(_QWORD *)&v71[2] = 0LL;
  if ( !v69
    || (LOBYTE(v28) = PreviousMode,
        v17 = CmObReferenceObjectByHandle(v69, 0, v27, v28, (__int64)&v44, 0LL),
        v40 = v17,
        v17 >= 0) )
  {
    if ( !Handle
      || (v17 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL),
          v50 = Object,
          v40 = v17,
          v17 >= 0) )
    {
      if ( !v64
        || (LOBYTE(v28) = PreviousMode,
            v17 = CmObReferenceObjectByHandle(v64, 0, v27, v28, (__int64)&v51, 0LL),
            v40 = v17,
            v17 >= 0) )
      {
        if ( v65 )
        {
          v17 = ObReferenceObjectByHandle(v65, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
          v49 = Token;
          v40 = v17;
          if ( v17 < 0 )
            goto LABEL_99;
          if ( SeTokenType(Token) != TokenImpersonation )
          {
            v17 = -1073741656;
            goto LABEL_5;
          }
        }
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v42 = 1;
        LOBYTE(v27) = PreviousMode;
        v17 = CmConvertHandleToKernelHandle(*((_QWORD *)&v71[0] + 1), v26, v27, 131097LL, &v53);
        v40 = v17;
        if ( v17 >= 0 )
        {
          v30 = v53;
          *((_QWORD *)&v71[0] + 1) = v53;
          v31 = 0LL;
          v58 = 0LL;
          memset(v72, 0, sizeof(v72));
          v60 = 0LL;
          v61 = 0LL;
          v62 = 0LL;
          v59[1] = v59;
          v59[0] = v59;
          if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
          {
            if ( v30 )
            {
              ObReferenceObjectByHandle(v30, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v67, 0LL);
              v31 = v67;
              v58 = v67;
            }
            v72[10] = 2LL;
            v72[0] = v31;
            v72[1] = &DestinationString;
            v72[2] = &v55;
            LODWORD(v72[3]) = a3;
            v72[4] = v44;
            v72[5] = v50;
            LODWORD(v72[6]) = DesiredAccess;
            v72[7] = v48;
            v72[11] = v49;
            v60 = v72;
            v61 = v51;
            LOBYTE(v62) = a10;
            LOBYTE(v32) = 1;
            v17 = CmpCallCallBacksEx(32, (unsigned int)v72, (unsigned int)&v60, v32, 33, 0LL, (__int64)v59);
            v40 = v17;
          }
          if ( v17 < 0 )
          {
            if ( v17 == -1073740541 )
            {
              v17 = 0;
              v40 = 0;
              v41 = 1;
            }
            v14 = 0;
          }
          else
          {
            CmpTraceHiveLoadStart(&v55, a3);
            v14 = 1;
            if ( (a3 & 0x10) != 0 )
            {
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v43 = 0;
              LOBYTE(v39) = PreviousMode;
              v33 = CmLoadAppKey(v71, &v55, a3, v44, v50, v49, v39, v46, &BugCheckParameter2);
              v31 = v58;
            }
            else
            {
              LOBYTE(HandleInformation) = a10;
              v33 = CmLoadKey(
                      v71,
                      &v55,
                      a3,
                      v44,
                      v51,
                      HandleInformation,
                      v50,
                      v49,
                      PreviousMode,
                      v46,
                      &BugCheckParameter2);
            }
            v17 = CmPostCallbackNotificationEx(33, (_DWORD)v31, v33, (unsigned int)v72, (__int64)&v60, (__int64)v59);
            v40 = v17;
          }
          if ( v31 )
            ObfDereferenceObject(v31);
          if ( v44 )
          {
            ObfDereferenceObject(v44);
            v44 = 0LL;
          }
          if ( v17 >= 0 && (a3 & 0x810) != 0 && !v41 )
          {
            v56 = 0LL;
            v34 = v74[0];
            if ( (a3 & 0x10) != 0 )
              v34 = 64;
            LODWORD(v74[0]) = v34;
            p_DestinationString = &DestinationString;
            if ( v46[0] )
              p_DestinationString = (UNICODE_STRING *)v46[0];
            v46[0] = p_DestinationString;
            v17 = ObReferenceObjectByName(p_DestinationString, 64LL, 0LL);
            v40 = v17;
            if ( v17 >= 0 )
            {
              v36 = v56;
              ObDeleteCapturedInsertInfo(v56);
              v17 = ObOpenObjectByPointer(
                      v36,
                      PreviousMode != 0 ? 64 : 576,
                      0LL,
                      DesiredAccess,
                      (POBJECT_TYPE)CmKeyObjectType,
                      PreviousMode,
                      &v68);
              v40 = v17;
              ObfDereferenceObject(v36);
              if ( v17 >= 0 )
                *v48 = v68;
            }
            if ( BugCheckParameter2 )
            {
              if ( (a3 & 0x10) != 0 )
                CmReleaseLoadKeyContext(BugCheckParameter2);
              else
                CmpDereferenceKeyControlBlock(BugCheckParameter2);
              BugCheckParameter2 = 0LL;
            }
            if ( v17 < 0 && (a3 & 0x800) != 0 )
            {
              v17 = 0;
              v40 = 0;
            }
          }
        }
      }
    }
  }
LABEL_99:
  if ( BugCheckParameter2 )
    CmReleaseLoadKeyContext(BugCheckParameter2);
  if ( v46[0] && v46[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(v46[0], 0x624E4D43u);
  if ( v53 )
    ZwClose(v53);
  if ( v42 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = v40;
  }
  if ( v49 )
    ObfDereferenceObject(v49);
  if ( v51 )
    ObfDereferenceObject(v51);
  if ( v50 )
    ObfDereferenceObject(v50);
  if ( v44 )
    ObfDereferenceObject(v44);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v55.Buffer )
    ExFreePoolWithTag(v55.Buffer, 0);
  CmpCleanupParseContext(v74, 0LL);
  if ( v43 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = v40;
  }
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v17);
  CmCleanupThreadInfo(v73);
  return (unsigned int)v17;
}
