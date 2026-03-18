/*
 * XREFs of NtSetTimerEx @ 0x1400089F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x1400BAC44 (ExpSetTimerObject2.c)
 *     PoCaptureReasonContext @ 0x1400EB528 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x1400ECD28 (PoDestroyReasonContext.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetTimerEx(void *a1, int a2, _OWORD *a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned __int8 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  void *v10; // r12
  char v11; // r15
  __int64 v12; // r13
  NTSTATUS v13; // edi
  struct _OBJECT_TYPE *v14; // rax
  NTSTATUS v15; // eax
  __int64 result; // rax
  char v17[4]; // [rsp+50h] [rbp-78h] BYREF
  int v18; // [rsp+54h] [rbp-74h]
  __int64 v19; // [rsp+58h] [rbp-70h]
  void *v20; // [rsp+60h] [rbp-68h] BYREF
  PVOID Object; // [rsp+68h] [rbp-60h] BYREF
  _OWORD v22[3]; // [rsp+70h] [rbp-58h] BYREF

  v4 = a4;
  memset(v22, 0, sizeof(v22));
  v7 = KeGetCurrentThread()->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  if ( v7 && (_DWORD)v4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a3 + v4 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)a3 + v4) < a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a2 )
    return 3221225475LL;
  if ( (_DWORD)v4 != 48 )
    return 3221225476LL;
  if ( v7 )
  {
    v22[0] = *a3;
    v22[1] = a3[1];
    v22[2] = a3[2];
    a3 = v22;
  }
  v8 = *((_DWORD *)a3 + 8);
  if ( v8 > 0x7FFFFFFF )
    return 3221225713LL;
  v9 = *((_QWORD *)a3 + 3);
  if ( !v9 )
  {
    v10 = 0LL;
    v11 = 0;
    goto LABEL_15;
  }
  result = PoCaptureReasonContext(v9, v7, 0, 0, (__int64)v17, (__int64)&v20);
  if ( (int)result >= 0 )
  {
    v8 = *((_DWORD *)a3 + 8);
    v10 = v20;
    v11 = v17[0];
LABEL_15:
    v19 = *((_QWORD *)a3 + 5);
    v18 = *((_DWORD *)a3 + 9);
    v12 = *((_QWORD *)a3 + 2);
    v20 = (void *)*((_QWORD *)a3 + 1);
    v13 = ObReferenceObjectByHandle(a1, 2u, 0LL, v7, &Object, 0LL);
    if ( v13 < 0 )
    {
LABEL_20:
      if ( v13 >= 0 && v13 != 1073741861 )
        return (unsigned int)v13;
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
    return (unsigned int)v13;
  }
  return result;
}
