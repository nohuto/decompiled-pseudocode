/*
 * XREFs of NtAdjustGroupsToken @ 0x1406B6B70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BDE84 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BE0D0 (SeCaptureSidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     SepAdjustGroups @ 0x1406B6EA8 (SepAdjustGroups.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  PERESOURCE *v19; // r14
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  signed __int32 v23[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  char v26; // [rsp+50h] [rbp-58h]
  ULONG v27; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v28; // [rsp+58h] [rbp-50h]
  int GroupCount; // [rsp+5Ch] [rbp-4Ch]
  ULONG v30; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-44h] BYREF
  PERESOURCE *Object; // [rsp+68h] [rbp-40h] BYREF
  __int64 v33; // [rsp+70h] [rbp-38h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v35; // [rsp+C8h] [rbp+20h]

  v35 = BufferLength;
  GroupCount = 0;
  v33 = 0LL;
  v31 = 0;
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
                   (PVOID *)&v33,
                   &v31),
        v28 = result,
        result >= 0) )
  {
    v14 = ObReferenceObjectByHandle(
            TokenHandle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            (PVOID *)&Object,
            0LL);
    if ( v14 < 0 )
    {
      if ( v33 )
        SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
      return v14;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = Object;
      ExAcquireResourceExclusiveLite(Object[6], 1u);
      _InterlockedOr(v23, 0);
      v17 = v33;
      LOBYTE(v18) = ResetToDefault;
      v19 = Object;
      v20 = SepAdjustGroups(
              (int)Object,
              0,
              v18,
              GroupCount,
              v33,
              (__int64)v12,
              0LL,
              (__int64)&v27,
              (__int64)&v30,
              (__int64)&v34);
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
                (__int64)&v30,
                (__int64)&v34);
        if ( v12 )
          v12->GroupCount = v30;
        if ( (_BYTE)v34 )
          v19[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
LABEL_24:
        _InterlockedOr(v23, 0);
        ExReleaseResourceLite(v16[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        if ( v33 )
          SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
        return v28;
      }
      if ( v27 <= v35 )
      {
        v9 = (void *)(((unsigned __int64)&v12->Groups[v30].Sid + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v23, 0);
      ExReleaseResourceLite(v16[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(Object);
      if ( v33 )
        SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
      return -1073741789;
    }
  }
  return result;
}
