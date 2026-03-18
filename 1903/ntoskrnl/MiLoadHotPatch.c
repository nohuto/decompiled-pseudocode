/*
 * XREFs of MiLoadHotPatch @ 0x14088EEB0
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x14070E710 (MiApplyRequiredDriverHotPatches.c)
 *     NtManageHotPatch @ 0x1408920D0 (NtManageHotPatch.c)
 *     MmRegisterHotPatch @ 0x140A3C83C (MmRegisterHotPatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     VslApplyHotPatch @ 0x14028F0C0 (VslApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiAllocateSecureImageActivePatch @ 0x1405B0DFC (MiAllocateSecureImageActivePatch.c)
 *     MiInsertSecureImageActivePatch @ 0x1405B0F28 (MiInsertSecureImageActivePatch.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     VslDetermineHotPatchType @ 0x1408521B8 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x14088D430 (MiAllocateHotPatchRecord.c)
 *     MiApplyHotPatchToDriver @ 0x14088D7AC (MiApplyHotPatchToDriver.c)
 *     MiHotPatchAllProcesses @ 0x14088E6EC (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x14088ED68 (MiInsertHotPatchRecord.c)
 *     MiLogHotPatchOperationStatus @ 0x14088FBF8 (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x140890210 (MiOpenHotPatchFile.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408912B4 (MiPromoteControlAreaToStrongCode.c)
 */

__int64 __fastcall MiLoadHotPatch(const void **SourceString, int a2, int *a3, unsigned int *a4)
{
  int v4; // r15d
  int *v6; // r13
  _QWORD *HotPatchRecord; // r14
  int v10; // eax
  int v11; // ebx
  NTSTATUS v12; // edi
  unsigned int *v13; // rdi
  int v14; // eax
  int v15; // esi
  char v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rdi
  UNICODE_STRING *SecureImageActivePatch; // rsi
  NTSTATUS v22; // eax
  int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // ecx
  __int64 v26; // [rsp+48h] [rbp-29h] BYREF
  __int64 v27; // [rsp+50h] [rbp-21h] BYREF
  struct _KTHREAD *Lock; // [rsp+58h] [rbp-19h]
  PVOID v29; // [rsp+60h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-9h] BYREF
  PVOID Object; // [rsp+70h] [rbp-1h] BYREF
  wchar_t *v32; // [rsp+78h] [rbp+7h] BYREF
  __int64 v33; // [rsp+80h] [rbp+Fh]
  int v34; // [rsp+88h] [rbp+17h]

  v4 = 0;
  v32 = 0LL;
  v6 = a3;
  v33 = 0LL;
  v34 = 0;
  if ( !dword_1404648B0 )
    return 3221225485LL;
  Lock = 0LL;
  HotPatchRecord = 0LL;
  v29 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v27 = 0LL;
  LODWORD(v26) = 1;
  v10 = MiOpenHotPatchFile((_DWORD)SourceString, 1, 0, (unsigned int)&Handle, (__int64)&v29, 0LL, (__int64)&v27, 0LL);
  v11 = v27;
  v12 = v10;
  if ( v10 < 0 )
    goto LABEL_29;
  v13 = a4;
  v14 = HIDWORD(v27);
  *v6 = v27;
  *a4 = v14;
  if ( a2 )
  {
    HotPatchRecord = MiAllocateHotPatchRecord(*v6, v14, SourceString);
    if ( !HotPatchRecord )
    {
      v12 = -1073741670;
LABEL_30:
      MiLogHotPatchOperationStatus(v11, HIDWORD(v27), (_DWORD)SourceString, v12, 1);
      SecureImageActivePatch = 0LL;
      goto LABEL_31;
    }
  }
  Lock = MmAcquireLoadLock();
  if ( HotPatchRecord )
    MiInsertHotPatchRecord((unsigned __int64 *)&MiGlobalHotPatchList, HotPatchRecord, 0);
  v15 = 1073741879;
  if ( (MiFlags & 0x8000) != 0 )
  {
    v12 = VslDetermineHotPatchType(*v6, *a4, &v26);
    if ( v12 < 0 )
      goto LABEL_29;
    v16 = v26;
    if ( (v26 & 1) == 0 )
    {
      v20 = 0LL;
      goto LABEL_16;
    }
    v12 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v12 >= 0 )
    {
      v17 = MiSectionControlArea((__int64)v29);
      v12 = MiPromoteControlAreaToStrongCode(v17, v19, v18, &v26);
      if ( v12 >= 0 )
      {
        v20 = v26;
LABEL_16:
        LODWORD(v26) = 0;
        if ( (v16 & 2) != 0 )
        {
          SecureImageActivePatch = MiAllocateSecureImageActivePatch((PCUNICODE_STRING)SourceString);
          if ( SecureImageActivePatch )
          {
            v22 = VslApplyHotPatch(v20, (__int64)v29, 0LL, 0LL, 0LL, (__int64)&v32);
            v4 = v34;
            v12 = v22;
          }
          else
          {
            v12 = -1073741670;
          }
          MiLogHotPatchOperationStatus(v11, HIDWORD(v27), (_DWORD)SourceString, v12, 2);
          if ( v12 < 0 )
          {
LABEL_31:
            if ( Lock )
              MmReleaseLoadLock((__int64)Lock);
            goto LABEL_33;
          }
          SecureImageActivePatch[1].Buffer = v32;
          *(_QWORD *)&SecureImageActivePatch[2].Length = v33;
          LODWORD(SecureImageActivePatch[2].Buffer) = v4;
          MiInsertSecureImageActivePatch(SecureImageActivePatch);
          v15 = v12;
        }
        v13 = a4;
        v6 = a3;
        v23 = MiApplyHotPatchToDriver((unsigned int)*a3, *a4, (__int64)SourceString);
        if ( v23 == -1073741515 )
        {
          v23 = 1073741879;
        }
        else if ( v23 < 0 )
        {
          v15 = v23;
        }
        if ( v15 == 1073741879 )
          v15 = v23;
        goto LABEL_28;
      }
    }
LABEL_29:
    SecureImageActivePatch = 0LL;
    if ( v12 == 1073741879 )
      goto LABEL_31;
    goto LABEL_30;
  }
LABEL_28:
  MmReleaseLoadLock((__int64)Lock);
  v24 = *v13;
  v25 = *v6;
  Lock = 0LL;
  MiHotPatchAllProcesses(v25, v24);
  v12 = v15;
  SecureImageActivePatch = 0LL;
  if ( (_DWORD)v26 )
    goto LABEL_29;
LABEL_33:
  if ( v29 )
    ObfDereferenceObject(v29);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( SecureImageActivePatch )
    ExFreePoolWithTag(SecureImageActivePatch, 0);
  return (unsigned int)v12;
}
