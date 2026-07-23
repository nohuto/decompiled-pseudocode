/*
 * XREFs of NtSetTimerEx @ 0x140008A80
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x14009AAB4 (ExpSetTimerObject2.c)
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14010535C (PoCaptureReasonContext.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  __int64 v4; // rdi
  unsigned __int8 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  void *v10; // r12
  char v11; // r15
  __int64 v12; // r13
  int v13; // edi
  struct _OBJECT_TYPE *v14; // rax
  int v15; // eax
  NTSTATUS result; // eax
  char v17[4]; // [rsp+50h] [rbp-78h] BYREF
  int v18; // [rsp+54h] [rbp-74h]
  __int64 v19; // [rsp+58h] [rbp-70h]
  void *v20; // [rsp+60h] [rbp-68h] BYREF
  PVOID Object; // [rsp+68h] [rbp-60h] BYREF
  _OWORD v22[3]; // [rsp+70h] [rbp-58h] BYREF

  v4 = TimerSetInformationLength;
  memset(v22, 0, sizeof(v22));
  v7 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  if ( v7 && (_DWORD)v4 )
  {
    if ( ((unsigned __int8)TimerSetInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TimerSetInformation + v4 > 0x7FFFFFFF0000LL
      || (char *)TimerSetInformation + v4 < TimerSetInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( TimerSetInformationClass )
    return -1073741821;
  if ( (_DWORD)v4 != 48 )
    return -1073741820;
  if ( v7 )
  {
    v22[0] = *(_OWORD *)TimerSetInformation;
    v22[1] = *((_OWORD *)TimerSetInformation + 1);
    v22[2] = *((_OWORD *)TimerSetInformation + 2);
    TimerSetInformation = v22;
  }
  v8 = *((_DWORD *)TimerSetInformation + 8);
  if ( v8 > 0x7FFFFFFF )
    return -1073741583;
  v9 = *((_QWORD *)TimerSetInformation + 3);
  if ( !v9 )
  {
    v10 = 0LL;
    v11 = 0;
    goto LABEL_15;
  }
  result = PoCaptureReasonContext(v9, v7, 0, 0, (__int64)v17, (__int64)&v20);
  if ( result >= 0 )
  {
    v8 = *((_DWORD *)TimerSetInformation + 8);
    v10 = v20;
    v11 = v17[0];
LABEL_15:
    v19 = *((_QWORD *)TimerSetInformation + 5);
    v18 = *((_DWORD *)TimerSetInformation + 9);
    v12 = *((_QWORD *)TimerSetInformation + 2);
    v20 = (void *)*((_QWORD *)TimerSetInformation + 1);
    v13 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, v7, &Object, 0LL);
    if ( v13 < 0 )
    {
LABEL_20:
      if ( v13 >= 0 && v13 != 1073741861 )
        return v13;
      goto LABEL_37;
    }
    v14 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v14 == ExpIRTimerObjectType )
    {
      if ( !v20 && !v12 && !v10 && !v18 && !v19 )
      {
        v15 = ExpSetTimerObject2(Object);
        goto LABEL_19;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v13 = -1073741811;
    }
    else
    {
      if ( v14 == ExTimerObjectType )
      {
        v15 = ExpSetTimerObject((ULONG_PTR)Object, v12, (__int64)v10, v11, v8, v18, v19);
LABEL_19:
        v13 = v15;
        goto LABEL_20;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v13 = -1073741788;
    }
LABEL_37:
    if ( v10 )
      PoDestroyReasonContext(v10);
    return v13;
  }
  return result;
}
