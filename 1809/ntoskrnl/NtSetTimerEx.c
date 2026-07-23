/*
 * XREFs of NtSetTimerEx @ 0x14001D530
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x1400020AC (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x1400FC158 (ExpSetTimerObject2.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _OWORD *v4; // rbx
  unsigned __int8 v6; // si
  char *v7; // rcx
  unsigned int v8; // r14d
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r12
  char v11; // r15
  __int64 v12; // r13
  int v13; // edi
  struct _OBJECT_TYPE *v14; // rax
  int v15; // eax
  NTSTATUS result; // eax
  char v17[4]; // [rsp+50h] [rbp-68h] BYREF
  int v18; // [rsp+54h] [rbp-64h]
  __int64 v19; // [rsp+58h] [rbp-60h]
  _QWORD *v20; // [rsp+60h] [rbp-58h] BYREF
  PVOID Object; // [rsp+68h] [rbp-50h] BYREF
  _OWORD v22[3]; // [rsp+70h] [rbp-48h] BYREF

  v4 = TimerSetInformation;
  v6 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v6 && TimerSetInformationLength )
  {
    if ( ((unsigned __int8)TimerSetInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)TimerSetInformation + TimerSetInformationLength;
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < TimerSetInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( TimerSetInformationClass )
    return -1073741821;
  if ( TimerSetInformationLength != 48 )
    return -1073741820;
  if ( v6 )
  {
    v22[0] = *(_OWORD *)TimerSetInformation;
    v22[1] = *((_OWORD *)TimerSetInformation + 1);
    v22[2] = *((_OWORD *)TimerSetInformation + 2);
    v4 = v22;
  }
  v8 = *((_DWORD *)v4 + 8);
  if ( v8 > 0x7FFFFFFF )
    return -1073741583;
  v9 = *((_QWORD *)v4 + 3);
  if ( !v9 )
  {
    v10 = 0LL;
    v11 = 0;
    goto LABEL_15;
  }
  result = PoCaptureReasonContext(v9, v6, 0LL, 0, (__int64)v17, (PVOID *)&v20);
  if ( result >= 0 )
  {
    v8 = *((_DWORD *)v4 + 8);
    v10 = v20;
    v11 = v17[0];
LABEL_15:
    v12 = *((_QWORD *)v4 + 5);
    v18 = *((_DWORD *)v4 + 9);
    v19 = *((_QWORD *)v4 + 2);
    v20 = (_QWORD *)*((_QWORD *)v4 + 1);
    v13 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, v6, &Object, 0LL);
    if ( v13 < 0 )
    {
LABEL_20:
      if ( v13 >= 0 && v13 != 1073741861 )
        return v13;
      goto LABEL_38;
    }
    v14 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v14 == ExpIRTimerObjectType )
    {
      if ( !v20 && !v19 && !v10 && !v8 && !v18 && !v12 )
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
        v15 = ExpSetTimerObject((ULONG_PTR)Object, v19, (__int64)v10, v11, v8, v18, v12);
LABEL_19:
        v13 = v15;
        goto LABEL_20;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v13 = -1073741788;
    }
LABEL_38:
    if ( v10 )
      PoDestroyReasonContext(v10);
    return v13;
  }
  return result;
}
