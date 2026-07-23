/*
 * XREFs of AlpcpCopyRequestData @ 0x14084BB10
 * Callers:
 *     NtReadRequestData @ 0x14084AE70 (NtReadRequestData.c)
 *     NtWriteRequestData @ 0x14084AF80 (NtWriteRequestData.c)
 * Callees:
 *     AlpcpAvailableBufferSize @ 0x140583068 (AlpcpAvailableBufferSize.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14061BE2C (AlpcpProbeAndCaptureMessageHeader.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     PsDereferencePrimaryToken @ 0x1406C4CB0 (PsDereferencePrimaryToken.c)
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
  unsigned __int64 v7; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  unsigned __int64 v13; // rdi
  __int64 *v14; // r9
  __int64 *v15; // rsi
  NTSTATUS result; // eax
  signed int v17; // ebx
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int16 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // r8
  _KPROCESS *Process; // rcx
  unsigned __int64 v27; // r9
  _KPROCESS *v28; // r8
  char *v29; // rdx
  ULONG_PTR v30; // [rsp+48h] [rbp-70h] BYREF
  PVOID PrimaryToken; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+58h] [rbp-60h] BYREF
  __m128i v33; // [rsp+60h] [rbp-58h]
  __int128 v34; // [rsp+70h] [rbp-48h] BYREF
  __int128 v35; // [rsp+80h] [rbp-38h]
  __int64 v36; // [rsp+90h] [rbp-28h]

  v7 = a4;
  v33 = 0uLL;
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
    AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&v34, 0);
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
    v34 = *(_OWORD *)a3;
    v35 = *(_OWORD *)(a3 + 16);
    v36 = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v34) )
    return -1073741811;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &PrimaryToken, HandleInformation);
  if ( result >= 0 )
  {
    v17 = AlpcpLookupMessage((__int64)PrimaryToken, SDWORD2(v35), v36, &v30);
    if ( v17 < 0 )
    {
LABEL_35:
      PsDereferencePrimaryToken(PrimaryToken);
      return v17;
    }
    v18 = *(_QWORD *)(v30 + 32);
    if ( v18 )
    {
      v17 = -1073741811;
      if ( *(_WORD *)(v30 + 246) )
      {
        v19 = AlpcpAvailableBufferSize(v30);
        v23 = *(unsigned __int16 *)(v20 + 242);
        if ( v19 <= v23 )
          v23 = v19;
        if ( v22 >= v23 || v7 >= (v23 - v22) >> 4 )
          goto LABEL_34;
        v24 = v20 + v21;
        if ( *(_DWORD *)(v24 + 240) > (unsigned int)v7 )
        {
          v33 = *(__m128i *)(v24 + 16 * v7 + 248);
          v17 = _mm_srli_si128(v33, 8).m128i_u32[0] < v13 ? 0xC000000D : 0;
        }
      }
      if ( v17 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( a1 )
        {
          Process = CurrentThread->ApcState.Process;
          v27 = v33.m128i_i64[0];
          v28 = *(_KPROCESS **)(v18 + 544);
          v29 = Address;
        }
        else
        {
          v28 = CurrentThread->ApcState.Process;
          v27 = (unsigned __int64)Address;
          v29 = (char *)v33.m128i_i64[0];
          Process = *(_KPROCESS **)(v18 + 544);
        }
        v17 = MmCopyVirtualMemory(Process, v29, v28, v27, v13, PreviousMode, (unsigned __int64 *)&v32);
        if ( v17 >= 0 )
        {
          if ( v15 )
            *v15 = v32;
        }
      }
    }
    else
    {
      v17 = -1073741790;
    }
LABEL_34:
    AlpcpUnlockMessage(v30);
    goto LABEL_35;
  }
  return result;
}
