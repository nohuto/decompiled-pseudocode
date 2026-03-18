/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x14064AE60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x14064B500 (AlpcpCreateSecurityContext.c)
 *     AlpcpDeleteBlob @ 0x14064BD0C (AlpcpDeleteBlob.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSecurityContext(HANDLE Handle, int a2, __m128i *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v7; // rcx
  __m128i v8; // xmm1
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  NTSTATUS SecurityContext; // edi
  PVOID v13; // r15
  ULONG_PTR v14; // rbx
  unsigned __int64 v16; // xmm1_8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+40h] [rbp-38h]
  __int64 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  v19 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a3;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 23) = *(_BYTE *)(v7 + 23);
      v8 = *a3;
      v22 = a3[1].m128i_i64[0];
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v18 = *(_QWORD *)v11;
        v19 = *(_DWORD *)(v11 + 8);
      }
    }
    else
    {
      v16 = _mm_srli_si128(*a3, 8).m128i_u64[0];
      v10 = v16;
      if ( v16 )
      {
        v18 = *(_QWORD *)v16;
        v19 = *(_DWORD *)(v16 + 8);
      }
    }
    SecurityContext = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      if ( !v10 )
      {
        v18 = *(_QWORD *)((char *)Object + 260);
        v19 = *((_DWORD *)Object + 67);
      }
      v13 = Object;
      SecurityContext = AlpcpCreateSecurityContext(Object, KeGetCurrentThread(), (__int64)&BugCheckParameter2);
      if ( SecurityContext >= 0 )
      {
        v14 = BugCheckParameter2;
        a3[1].m128i_i64[0] = *(_QWORD *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v14);
      }
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)SecurityContext;
}
