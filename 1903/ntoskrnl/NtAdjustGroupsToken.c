/*
 * XREFs of NtAdjustGroupsToken @ 0x14061D860
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061C1E4 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061C430 (SeCaptureSidAndAttributesArray.c)
 *     SepAdjustGroups @ 0x14061DB88 (SepAdjustGroups.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  NTSTATUS v27; // [rsp+54h] [rbp-64h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  __int64 v29; // [rsp+60h] [rbp-58h] BYREF
  ULONG v30; // [rsp+68h] [rbp-50h] BYREF
  ULONG GroupCount; // [rsp+6Ch] [rbp-4Ch]
  ULONG v32; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-44h] BYREF
  __int64 v34; // [rsp+78h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp+10h] BYREF
  ULONG v36; // [rsp+D8h] [rbp+20h]

  v36 = BufferLength;
  GroupCount = 0;
  v29 = 0LL;
  v33 = 0;
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
                   (PVOID *)&v29,
                   &v33),
        v27 = result,
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
      if ( v29 )
        SeReleaseLuidAndAttributesArray((void *)v29, PreviousMode);
      return v14;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = (PERESOURCE *)Object;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
      _InterlockedOr(v23, 0);
      v17 = v29;
      LOBYTE(v18) = ResetToDefault;
      v19 = Object;
      v20 = SepAdjustGroups(
              (int)Object,
              0,
              v18,
              GroupCount,
              v29,
              (__int64)v12,
              0LL,
              (__int64)&v30,
              (__int64)&v32,
              (__int64)&v35);
      v27 = v20;
      if ( v12 )
      {
        v21 = (int)ReturnLength;
        *ReturnLength = v30;
      }
      if ( v20 < 0 )
        goto LABEL_24;
      if ( !v12 )
      {
LABEL_20:
        LOBYTE(v22) = ResetToDefault;
        LOBYTE(v21) = 1;
        v27 = SepAdjustGroups(
                (int)v19,
                v21,
                v22,
                GroupCount,
                v17,
                (__int64)v12,
                v9,
                (__int64)&v30,
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
        if ( v29 )
          SeReleaseLuidAndAttributesArray((void *)v29, PreviousMode);
        return v27;
      }
      if ( v30 <= v36 )
      {
        v9 = (void *)(((unsigned __int64)&v12->Groups[v32].Sid + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v23, 0);
      ExReleaseResourceLite(v16[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(Object);
      if ( v29 )
        SeReleaseLuidAndAttributesArray((void *)v29, PreviousMode);
      return -1073741789;
    }
  }
  return result;
}
