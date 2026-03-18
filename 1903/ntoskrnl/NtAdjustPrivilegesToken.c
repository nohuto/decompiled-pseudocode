/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1406741A0
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x1408D4B7C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061C1E4 (SeReleaseLuidAndAttributesArray.c)
 *     SepAdjustPrivileges @ 0x140674560 (SepAdjustPrivileges.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1406749EC (SeCaptureLuidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  char PreviousMode; // r14
  __int64 v11; // rsi
  char *v12; // rcx
  PTOKEN_PRIVILEGES v13; // rbx
  NTSTATUS result; // eax
  int v15; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v17; // rsi
  __int64 v18; // r12
  int v19; // r8d
  _QWORD *v20; // rdi
  int v21; // edx
  int v22; // r8d
  ULONG v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-B8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-98h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-90h]
  __int64 v27; // [rsp+30h] [rbp-88h]
  char v28; // [rsp+50h] [rbp-68h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-64h]
  ULONG v30; // [rsp+58h] [rbp-60h] BYREF
  ULONG v31; // [rsp+5Ch] [rbp-5Ch] BYREF
  PVOID v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h] BYREF
  NTSTATUS v34; // [rsp+70h] [rbp-48h]
  _DWORD v35[3]; // [rsp+74h] [rbp-44h] BYREF
  __int64 v36; // [rsp+80h] [rbp-38h]
  char v37; // [rsp+C8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  v33 = 0LL;
  v35[0] = 0;
  v30 = 0;
  v31 = 0;
  v37 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = PreviousMode;
  if ( PreviousMode )
  {
    if ( DisableAllPrivileges )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
      PrivilegeCount = NewState->PrivilegeCount;
      v35[1] = 12 * (PrivilegeCount - 1) + 16;
      if ( 12 * (PrivilegeCount - 1) != -16 )
      {
        v12 = (char *)&NewState->Privileges[PrivilegeCount];
        if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < (char *)NewState )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v13 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
LABEL_16:
    if ( !DisableAllPrivileges )
    {
      result = SeCaptureLuidAndAttributesArray(
                 NewState->Privileges,
                 (int)Object,
                 (int)HandleInformation,
                 v27,
                 (__int64)&v33,
                 (__int64)v35);
      v34 = result;
      if ( result < 0 )
        return result;
    }
    goto LABEL_18;
  }
  v13 = PreviousState;
  if ( !DisableAllPrivileges )
  {
    PrivilegeCount = NewState->PrivilegeCount;
    goto LABEL_16;
  }
LABEL_18:
  v15 = ObReferenceObjectByHandle(
          TokenHandle,
          v13 != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v32,
          0LL);
  if ( v15 < 0 )
  {
    if ( v33 )
      SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
    return v15;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = (PERESOURCE *)v32;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v32 + 6), 1u);
    _InterlockedOr(v24, 0);
    v18 = v33;
    LOBYTE(v19) = DisableAllPrivileges;
    v20 = v32;
    SepAdjustPrivileges(
      (_DWORD)v32,
      0,
      v19,
      PrivilegeCount,
      v33,
      (__int64)v13,
      (__int64)&v30,
      (__int64)&v31,
      (__int64)&v37);
    if ( v13 && (*ReturnLength = v30, v30 > BufferLength) )
    {
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(v17[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v32);
      if ( v33 )
        SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
      return -1073741789;
    }
    else
    {
      LOBYTE(v22) = DisableAllPrivileges;
      LOBYTE(v21) = 1;
      v34 = SepAdjustPrivileges(
              (_DWORD)v20,
              v21,
              v22,
              PrivilegeCount,
              v18,
              (__int64)v13,
              (__int64)&v30,
              (__int64)&v31,
              (__int64)&v37);
      if ( v13 )
      {
        v23 = v31;
        v13->PrivilegeCount = v31;
        if ( !v23 )
        {
          v13->Privileges[0].Luid = 0LL;
          v13->Privileges[0].Attributes = 0;
        }
      }
      if ( v37 )
      {
        v36 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        v20[7] = v36;
      }
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(v17[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v32);
      if ( v33 )
        SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
      return v34;
    }
  }
}
