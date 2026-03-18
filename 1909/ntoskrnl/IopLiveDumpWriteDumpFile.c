/*
 * XREFs of IopLiveDumpWriteDumpFile @ 0x140859E68
 * Callers:
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140858C90 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x14029B8B0 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlNumberOfSetBitsEx @ 0x14030D500 (RtlNumberOfSetBitsEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopLiveDumpCheckTermination @ 0x1408596E4 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1408597A8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteBuffer @ 0x140859DA8 (IopLiveDumpWriteBuffer.c)
 *     IopLiveDumpWriteSecondaryData @ 0x14085A7CC (IopLiveDumpWriteSecondaryData.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFile(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  void *v3; // r12
  void *v4; // rbp
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // r15
  struct _KTHREAD *CurrentThread; // r13
  int SecureDumpHeader; // edi
  ULONG v10; // r8d
  __int64 v11; // r15
  __int64 v12; // rax
  LARGE_INTEGER v13; // rcx
  SIZE_T v14; // rdx
  _DWORD *PoolWithTag; // rax
  ULONG v16; // r8d
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 384);
  v2 = a1 + 488;
  v3 = *(void **)(a1 + 64);
  v4 = 0LL;
  if ( *(_BYTE *)(a1 + 656) )
    v6.QuadPart = *(_QWORD *)(v1 + 8224) + *(unsigned int *)(a1 + 664);
  else
    v6 = *(LARGE_INTEGER *)(v1 + 8224);
  ByteOffset = v6;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !*(_QWORD *)(a1 + 536) )
  {
LABEL_11:
    v11 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
    SecureDumpHeader = IopLiveDumpWriteSecondaryData(v3, a1);
    if ( SecureDumpHeader < 0 )
      goto LABEL_22;
    v12 = *(unsigned int *)(a1 + 664);
    v13 = ByteOffset;
    *(_DWORD *)(v1 + 4176) |= 0x10u;
    *(_QWORD *)(v1 + 4000) = v13.QuadPart - v12;
    *(_DWORD *)(v1 + 0x2000) = 1347241043;
    *(_DWORD *)(v1 + 8196) = 1347245380;
    *(_QWORD *)(v1 + 8232) = v11;
    if ( *(_BYTE *)(a1 + 656) )
    {
      v14 = *(unsigned int *)(a1 + 664);
      ByteOffset.QuadPart = v14;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x706D644Cu);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        SecureDumpHeader = -1073741670;
        goto LABEL_22;
      }
      SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v1, PoolWithTag, *(_DWORD *)(a1 + 664));
      if ( SecureDumpHeader < 0 )
        goto LABEL_20;
    }
    else
    {
      ByteOffset.QuadPart = 0LL;
    }
    SecureDumpHeader = IopLiveDumpWriteBuffer(v3, (PVOID)v1, *(_DWORD *)(v1 + 8224), &ByteOffset, a1, 0);
    if ( *(_BYTE *)(a1 + 656) )
    {
      v16 = *(_DWORD *)(a1 + 664);
      ByteOffset.QuadPart = 0LL;
      SecureDumpHeader = IopLiveDumpWriteBuffer(v3, v4, v16, &ByteOffset, a1, 1);
    }
LABEL_20:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    goto LABEL_22;
  }
  while ( 1 )
  {
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      break;
    v10 = v7 >= *(_QWORD *)(v2 + 48) - 1LL ? *(_DWORD *)(v2 + 32) << 12 : 0x40000;
    SecureDumpHeader = IopLiveDumpWriteBuffer(v3, *(PVOID *)(*(_QWORD *)(v2 + 64) + 8 * v7), v10, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      break;
    MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 8 * v7), 0x40000uLL);
    *(_QWORD *)(*(_QWORD *)(v2 + 64) + 8 * v7++) = 0LL;
    if ( v7 >= *(_QWORD *)(v2 + 48) )
      goto LABEL_11;
  }
LABEL_22:
  IopLiveDumpFreeDumpBuffers(v2);
  return (unsigned int)SecureDumpHeader;
}
