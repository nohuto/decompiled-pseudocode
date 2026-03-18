/*
 * XREFs of NtAdjustGroupsToken @ 0x14061F370
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061DCF4 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061DF40 (SeCaptureSidAndAttributesArray.c)
 *     SepAdjustGroups @ 0x14061F6A4 (SepAdjustGroups.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  void *v9; // r12
  char PreviousMode; // di
  __int64 v11; // rsi
  PTOKEN_GROUPS v12; // rbx
  NTSTATUS result; // eax
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v16; // rsi
  __int64 v17; // r13
  int v18; // r8d
  _QWORD *v19; // r14
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  signed __int32 v23[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-90h]
  PSID DestinationSid; // [rsp+30h] [rbp-88h]
  char v26; // [rsp+50h] [rbp-68h]
  ULONG v27; // [rsp+54h] [rbp-64h] BYREF
  NTSTATUS v28; // [rsp+58h] [rbp-60h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  __int64 v30; // [rsp+68h] [rbp-50h] BYREF
  int GroupCount; // [rsp+70h] [rbp-48h]
  ULONG v32; // [rsp+74h] [rbp-44h] BYREF
  unsigned int v33; // [rsp+78h] [rbp-40h] BYREF
  __int64 v34; // [rsp+80h] [rbp-38h]
  __int64 v35; // [rsp+C8h] [rbp+10h] BYREF
  ULONG v36; // [rsp+D8h] [rbp+20h]

  v36 = BufferLength;
  GroupCount = 0;
  v30 = 0LL;
  v33 = 0;
  v27 = 0;
  v9 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ResetToDefault )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
    }
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v12 = PreviousState;
  }
  if ( ResetToDefault
    || (GroupCount = NewState->GroupCount,
        result = SeCaptureSidAndAttributesArray(
                   (char *)NewState->Groups,
                   GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   v24,
                   (int)DestinationSid,
                   (PVOID *)&v30,
                   &v33),
        v28 = result,
        result >= 0) )
  {
    v14 = ObReferenceObjectByHandle(
            TokenHandle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            &Object,
            0LL);
    if ( v14 < 0 )
    {
      if ( v30 )
        SeReleaseLuidAndAttributesArray((void *)v30, PreviousMode);
      return v14;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = (PERESOURCE *)Object;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
      _InterlockedOr(v23, 0);
      v17 = v30;
      LOBYTE(v18) = ResetToDefault;
      v19 = Object;
      v20 = SepAdjustGroups(
              (int)Object,
              0,
              v18,
              GroupCount,
              v30,
              (__int64)v12,
              0LL,
              (__int64)&v27,
              (__int64)&v32,
              (__int64)&v35);
      v28 = v20;
      if ( v12 )
      {
        v21 = (int)ReturnLength;
        *ReturnLength = v27;
      }
      if ( v20 < 0 )
        goto LABEL_24;
      if ( !v12 )
      {
LABEL_20:
        LOBYTE(v22) = ResetToDefault;
        LOBYTE(v21) = 1;
        v28 = SepAdjustGroups(
                (int)v19,
                v21,
                v22,
                GroupCount,
                v17,
                (__int64)v12,
                v9,
                (__int64)&v27,
                (__int64)&v32,
                (__int64)&v35);
        if ( v12 )
          v12->GroupCount = v32;
        if ( (_BYTE)v35 )
        {
          v34 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v19[7] = v34;
        }
LABEL_24:
        _InterlockedOr(v23, 0);
        ExReleaseResourceLite(v16[6]);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Object);
        if ( v30 )
          SeReleaseLuidAndAttributesArray((void *)v30, PreviousMode);
        return v28;
      }
      if ( v27 <= v36 )
      {
        v9 = (void *)(((unsigned __int64)&v12->Groups[v32].Sid + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v23, 0);
      ExReleaseResourceLite(v16[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(Object);
      if ( v30 )
        SeReleaseLuidAndAttributesArray((void *)v30, PreviousMode);
      return -1073741789;
    }
  }
  return result;
}
