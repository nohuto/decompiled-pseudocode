/*
 * XREFs of AlpcpCopyRequestData @ 0x140885DF0
 * Callers:
 *     NtReadRequestData @ 0x1408850F0 (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x140885200 (NtWriteRequestData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x140647008 (AlpcpProbeAndCaptureMessageHeader.c)
 *     MmCopyVirtualMemory @ 0x14064CFB0 (MmCopyVirtualMemory.c)
 */

NTSTATUS __fastcall AlpcpCopyRequestData(
        char a1,
        void *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        __int64 *a7)
{
  __int64 v7; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  unsigned __int64 v13; // rdi
  __int64 *v14; // r9
  __int64 *v15; // rsi
  NTSTATUS result; // eax
  __int64 v17; // r9
  signed int v18; // ebx
  ULONG_PTR v19; // rcx
  __int64 v20; // r10
  __int16 v21; // ax
  ULONG_PTR v22; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rcx
  char *v25; // r9
  __int64 v26; // r8
  char *v27; // rdx
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  __int64 v29; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-60h] BYREF
  __m128i v31; // [rsp+60h] [rbp-58h]
  _OWORD v32[3]; // [rsp+70h] [rbp-48h] BYREF

  v7 = a4;
  memset(v32, 0, 0x28uLL);
  v31 = 0uLL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  HandleInformation = 0LL;
  if ( PreviousMode )
  {
    v13 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > 0x7FFFFFFF0000LL || &Address[Length] < Address) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    AlpcpProbeAndCaptureMessageHeader(a3, (__int64)v32, 0);
    v15 = a7;
    if ( a7 )
    {
      if ( a7 < v14 )
        v14 = a7;
      *v14 = *v14;
    }
  }
  else
  {
    v32[0] = *(_OWORD *)a3;
    v32[1] = *(_OWORD *)(a3 + 16);
    *(_QWORD *)&v32[2] = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v32[0]) )
    return -1073741811;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &Object, HandleInformation);
  if ( result >= 0 )
  {
    v18 = AlpcpLookupMessage((__int64)Object, DWORD2(v32[1]), v32[2], v17, &BugCheckParameter2);
    if ( v18 >= 0 )
    {
      v19 = BugCheckParameter2;
      v20 = *(_QWORD *)(BugCheckParameter2 + 32);
      if ( v20 )
      {
        v18 = -1073741811;
        v21 = *(_WORD *)(BugCheckParameter2 + 246);
        if ( v21 )
        {
          v22 = BugCheckParameter2 + v21;
          if ( *(_DWORD *)(v22 + 240) > (unsigned int)v7 )
          {
            v31 = *(__m128i *)(v22 + 16 * v7 + 248);
            v18 = _mm_srli_si128(v31, 8).m128i_u32[0] < v13 ? 0xC000000D : 0;
          }
        }
        if ( v18 >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a1 )
          {
            Process = (__int64)CurrentThread->ApcState.Process;
            v25 = (char *)v31.m128i_i64[0];
            v26 = *(_QWORD *)(v20 + 544);
            v27 = Address;
          }
          else
          {
            v26 = (__int64)CurrentThread->ApcState.Process;
            v25 = Address;
            v27 = (char *)v31.m128i_i64[0];
            Process = *(_QWORD *)(v20 + 544);
          }
          v18 = MmCopyVirtualMemory(Process, v27, v26, v25, v13, PreviousMode, (unsigned __int64 *)&v29);
          if ( v18 >= 0 )
          {
            if ( v15 )
              *v15 = v29;
          }
          v19 = BugCheckParameter2;
        }
        AlpcpUnlockMessage(v19);
      }
      else
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        v18 = -1073741790;
      }
    }
    ObfDereferenceObject(Object);
    return v18;
  }
  return result;
}
