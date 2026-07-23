/*
 * XREFs of CmLoadDifferencingKey @ 0x14063BC6C
 * Callers:
 *     NtLoadKey3 @ 0x1405B03B0 (NtLoadKey3.c)
 *     NtLoadKeyEx @ 0x14063BC10 (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x1406F1A40 (NtLoadKey2.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 *     VrpLoadDifferencingHive @ 0x140846830 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008CFF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByName @ 0x1405C6D50 (ObReferenceObjectByName.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     SeTokenType @ 0x1405E5200 (SeTokenType.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     CmpTraceHiveLoadStop @ 0x14063C7F4 (CmpTraceHiveLoadStop.c)
 *     CmpTraceHiveLoadStart @ 0x14063D4A4 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x14063D520 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x14063D5C0 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x14063D8D8 (CmCheckNoTxContext.c)
 *     ObDeleteCapturedInsertInfo @ 0x14063DD70 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x14063DDF0 (CmReleaseLoadKeyContext.c)
 *     CmPostCallbackNotificationEx @ 0x14064DA30 (CmPostCallbackNotificationEx.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     CmLoadKey @ 0x14068BED4 (CmLoadKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        void *a2,
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
  char v15; // r15
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r8d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int16 Length; // si
  wchar_t *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rdx
  HANDLE v28; // r13
  PVOID v29; // rbx
  int v30; // eax
  int v31; // eax
  UNICODE_STRING *p_DestinationString; // rax
  PVOID v33; // rbx
  int HandleInformation; // [rsp+28h] [rbp-350h]
  char v36; // [rsp+60h] [rbp-318h]
  char v37; // [rsp+63h] [rbp-315h]
  char v38; // [rsp+64h] [rbp-314h]
  PVOID v39[2]; // [rsp+70h] [rbp-308h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-2F8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp-2E8h] BYREF
  HANDLE *v42; // [rsp+98h] [rbp-2E0h]
  UNICODE_STRING *v43; // [rsp+A0h] [rbp-2D8h] BYREF
  PVOID v44; // [rsp+A8h] [rbp-2D0h]
  PVOID v45; // [rsp+B0h] [rbp-2C8h]
  PVOID v46; // [rsp+B8h] [rbp-2C0h] BYREF
  PVOID v47; // [rsp+C0h] [rbp-2B8h] BYREF
  UNICODE_STRING v48; // [rsp+C8h] [rbp-2B0h] BYREF
  unsigned int v49; // [rsp+D8h] [rbp-2A0h]
  HANDLE v50; // [rsp+E0h] [rbp-298h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+E8h] [rbp-290h]
  HANDLE Handle; // [rsp+F0h] [rbp-288h]
  _QWORD v53[2]; // [rsp+F8h] [rbp-280h] BYREF
  _SLIST_ENTRY v54; // [rsp+108h] [rbp-270h] BYREF
  __int64 v55; // [rsp+118h] [rbp-260h]
  UNICODE_STRING v56; // [rsp+120h] [rbp-258h]
  HANDLE v57; // [rsp+130h] [rbp-248h]
  PVOID Token; // [rsp+138h] [rbp-240h] BYREF
  PVOID v59; // [rsp+140h] [rbp-238h] BYREF
  HANDLE v60; // [rsp+148h] [rbp-230h] BYREF
  int v61[2]; // [rsp+150h] [rbp-228h]
  PVOID Object; // [rsp+158h] [rbp-220h] BYREF
  int v63[2]; // [rsp+160h] [rbp-218h]
  _OWORD v64[3]; // [rsp+168h] [rbp-210h] BYREF
  _QWORD v65[12]; // [rsp+1A0h] [rbp-1D8h] BYREF
  _QWORD v66[38]; // [rsp+200h] [rbp-178h] BYREF

  *(_QWORD *)v61 = a4;
  v47 = a2;
  v49 = a3;
  Handle = a5;
  v42 = a7;
  *(_QWORD *)v63 = a9;
  v57 = a11;
  memset(v64, 0, sizeof(v64));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  v43 = 0LL;
  memset(v66, 0, 0x128uLL);
  v37 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v38 = 0;
  RtlInitUnicodeString(&v48, 0LL);
  v39[0] = 0LL;
  BugCheckParameter4 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  Privileges = 0LL;
  memset(v66, 0, 0x128uLL);
  v66[19] = &v66[18];
  v66[18] = &v66[18];
  memset(&v66[27], 0, 0x50uLL);
  v44 = 0LL;
  v15 = CmpAcquireShutdownRundown();
  v36 = v15;
  if ( !v15 )
  {
    v16 = -1073741431;
    goto LABEL_97;
  }
  v14 = 0;
  if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 )
    goto LABEL_4;
  if ( a10 )
  {
    if ( !a9 )
    {
      v16 = -1073741576;
      goto LABEL_97;
    }
    if ( (a3 & 0x4000) == 0 )
      goto LABEL_4;
  }
  if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
  {
LABEL_4:
    v16 = -1073741583;
    goto LABEL_97;
  }
  v16 = CmCheckNoTxContext();
  if ( v16 >= 0 )
  {
    if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v16 = -1073741727;
LABEL_96:
      v15 = v36;
      goto LABEL_97;
    }
    if ( (a3 & 0x810) != 0 )
    {
      if ( !v42 )
      {
LABEL_19:
        v16 = -1073741579;
        goto LABEL_96;
      }
      if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
      {
        v16 = -1073741583;
        goto LABEL_96;
      }
    }
    else
    {
      if ( v42 )
        goto LABEL_19;
      if ( Handle )
      {
        v16 = -1073741581;
        goto LABEL_96;
      }
    }
    LOBYTE(v17) = PreviousMode;
    v16 = CmpNameFromAttributes(v47, v17, &v48);
    if ( v16 < 0 )
      goto LABEL_96;
    if ( PreviousMode == 1 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (a3 & 0x810) != 0 )
      {
        v18 = (__int64)v42;
        if ( (unsigned __int64)v42 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v18 = 0LL;
      }
    }
    v64[0] = *(_OWORD *)a1;
    v64[1] = *(_OWORD *)(a1 + 16);
    v64[2] = *(_OWORD *)(a1 + 32);
    if ( (a3 & 0x10) != 0 && *((_QWORD *)&v64[0] + 1) )
    {
      v16 = -1073741585;
      goto LABEL_97;
    }
    if ( PreviousMode == 1 )
    {
      v56 = (UNICODE_STRING)0LL;
      v19 = *(_QWORD *)&v64[1];
      if ( *(_QWORD *)&v64[1] >= 0x7FFFFFFF0000uLL )
        v19 = 0x7FFFFFFF0000LL;
      v20 = *(_DWORD *)v19;
      *(_DWORD *)&v56.Length = v20;
      v21 = *(_QWORD *)(v19 + 8);
      v56.Buffer = (wchar_t *)v21;
      DestinationString = v56;
      if ( (_WORD)v20 )
      {
        if ( (v21 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = v21 + (unsigned __int16)v20;
        if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
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
        v16 = -1073741670;
        v14 = 0;
        goto LABEL_97;
      }
      v24 = (wchar_t *)Privileges;
      memmove(Privileges, DestinationString.Buffer, Length);
      DestinationString.Length = Length;
      DestinationString.MaximumLength = Length;
      DestinationString.Buffer = v24;
      v14 = 0;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    *(_QWORD *)&v64[1] = &DestinationString;
    *(_QWORD *)&v64[2] = 0LL;
    if ( *(_QWORD *)v61 )
    {
      v16 = CmObReferenceObjectByHandle(*(void **)v61, 0, v25, PreviousMode, v39, 0LL);
      if ( v16 < 0 )
        goto LABEL_96;
    }
    if ( Handle )
    {
      v16 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v45 = Object;
      if ( v16 < 0 )
        goto LABEL_96;
    }
    if ( *(_QWORD *)v63 )
    {
      v16 = CmObReferenceObjectByHandle(*(void **)v63, 0, v25, PreviousMode, &v46, 0LL);
      if ( v16 < 0 )
        goto LABEL_96;
    }
    if ( v57 )
    {
      v16 = ObReferenceObjectByHandle(v57, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
      v44 = Token;
      if ( v16 < 0 )
        goto LABEL_96;
      if ( SeTokenType(Token) != TokenImpersonation )
      {
        v16 = -1073741656;
        goto LABEL_96;
      }
    }
    KeEnterCriticalRegion();
    v38 = 1;
    LOBYTE(v26) = PreviousMode;
    v16 = CmConvertHandleToKernelHandle(*((_QWORD *)&v64[0] + 1), v27, v26, 131097LL, &v50);
    if ( v16 < 0 )
      goto LABEL_96;
    v28 = v50;
    *((_QWORD *)&v64[0] + 1) = v50;
    v29 = 0LL;
    memset(v65, 0, sizeof(v65));
    v54.Next = 0LL;
    *((_QWORD *)&v54.Next + 1) = 0LL;
    v55 = 0LL;
    v53[1] = v53;
    v53[0] = v53;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      if ( v28 )
      {
        ObReferenceObjectByHandle(v28, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v59, 0LL);
        v29 = v59;
      }
      v65[10] = 2LL;
      v65[0] = v29;
      v65[1] = &DestinationString;
      v65[2] = &v48;
      LODWORD(v65[3]) = a3;
      v65[4] = v39[0];
      v65[5] = v45;
      LODWORD(v65[6]) = DesiredAccess;
      v65[7] = v42;
      v65[11] = v44;
      v54.Next = (_SLIST_ENTRY *)v65;
      *((_QWORD *)&v54.Next + 1) = v46;
      LOBYTE(v55) = a10;
      v16 = CmpCallCallBacksEx(0x20u, (__int64)v65, &v54, 1, 0x21u, 0LL, (__int64)v53);
    }
    if ( v16 < 0 )
    {
      if ( v16 == -1073740541 )
      {
        v16 = 0;
        v37 = 1;
      }
      v14 = 0;
    }
    else
    {
      CmpTraceHiveLoadStart(&v48, a3);
      v14 = 1;
      if ( (a3 & 0x10) != 0 )
      {
        CmpReleaseShutdownRundown();
        v36 = 0;
        v30 = CmLoadAppKey(
                (__int64)v64,
                &v48,
                a3,
                (__int64)v39[0],
                (struct _KEVENT *)v45,
                (POBJECT_HANDLE_INFORMATION)v44,
                PreviousMode,
                (__int64 *)&v43,
                &BugCheckParameter4);
      }
      else
      {
        LOBYTE(HandleInformation) = a10;
        v30 = CmLoadKey(
                v64,
                &v48,
                a3,
                v39[0],
                v46,
                HandleInformation,
                v45,
                v44,
                PreviousMode,
                &v43,
                &BugCheckParameter4);
      }
      v16 = CmPostCallbackNotificationEx(33, (_DWORD)v29, v30, (unsigned int)v65, (__int64)&v54, (__int64)v53);
    }
    if ( v29 )
      ObfDereferenceObject(v29);
    if ( v39[0] )
    {
      ObfDereferenceObject(v39[0]);
      v39[0] = 0LL;
    }
    if ( v16 < 0 || (a3 & 0x810) == 0 || v37 )
      goto LABEL_96;
    v47 = 0LL;
    v31 = v66[0];
    if ( (a3 & 0x10) != 0 )
      v31 = 64;
    LODWORD(v66[0]) = v31;
    p_DestinationString = &DestinationString;
    if ( v43 )
      p_DestinationString = v43;
    v43 = p_DestinationString;
    v16 = ObReferenceObjectByName(
            (__int64)p_DestinationString,
            64,
            0LL,
            0,
            (__int64)CmKeyObjectType,
            0,
            (__int64)v66,
            &v47);
    if ( v16 >= 0 )
    {
      v33 = v47;
      ObDeleteCapturedInsertInfo(v47);
      v16 = ObOpenObjectByPointer(
              v33,
              PreviousMode != 0 ? 64 : 576,
              0LL,
              DesiredAccess,
              (POBJECT_TYPE)CmKeyObjectType,
              PreviousMode,
              &v60);
      ObfDereferenceObject(v33);
      if ( v16 >= 0 )
        *v42 = v60;
    }
    if ( BugCheckParameter4 )
    {
      if ( (a3 & 0x10) != 0 )
        CmReleaseLoadKeyContext(BugCheckParameter4);
      else
        CmpDereferenceKeyControlBlock(BugCheckParameter4);
      BugCheckParameter4 = 0LL;
    }
    if ( v16 >= 0 )
      goto LABEL_96;
    v15 = v36;
    if ( (a3 & 0x800) != 0 )
      v16 = 0;
  }
LABEL_97:
  if ( BugCheckParameter4 )
    CmReleaseLoadKeyContext(BugCheckParameter4);
  if ( v43 && v43 != &DestinationString )
    CmpFreeTransientPoolWithTag(v43, 0x624E4D43u);
  if ( v50 )
    ZwClose(v50);
  if ( v38 )
    KeLeaveCriticalRegion();
  if ( v44 )
    ObfDereferenceObject(v44);
  if ( v46 )
    ObfDereferenceObject(v46);
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( v39[0] )
    ObfDereferenceObject(v39[0]);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v48.Buffer )
    ExFreePoolWithTag(v48.Buffer, 0);
  CmpCleanupParseContext((__int64)v66, 0);
  if ( v15 )
    CmpReleaseShutdownRundown();
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v16);
  return (unsigned int)v16;
}
