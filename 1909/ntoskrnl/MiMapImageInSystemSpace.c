/*
 * XREFs of MiMapImageInSystemSpace @ 0x140643C44
 * Callers:
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1406423A4 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiParseComImage @ 0x1406DFA74 (MiParseComImage.c)
 *     MiGetSystemAddressForImage @ 0x140712478 (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x14088FA30 (MiOpenHotPatchFile.c)
 *     MiCreateSessionDriverProtos @ 0x14089B424 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiControlAreaRequiresCharge @ 0x140071490 (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MiGetControlAreaPartition @ 0x1400979D0 (MiGetControlAreaPartition.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA344 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiMapViewInSystemSpace @ 0x140647E94 (MiMapViewInSystemSpace.c)
 *     MiMapImageInSystemProcess @ 0x1408870CC (MiMapImageInSystemProcess.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 *v7; // rax
  unsigned int v8; // esi
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // r14
  __int64 SessionId; // rax
  unsigned int v12; // r15d
  int v13; // r12d
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  _KPROCESS *v16; // r13
  int v17; // r14d
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v19[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v21; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v19, 0, sizeof(v19));
  *(_QWORD *)a3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(*a1 + 56) + 64LL);
  if ( !v6 )
    return 3221225595LL;
  if ( (unsigned int)MiControlAreaRequiresCharge((__int64)a1, 4LL) == 1 )
  {
    v7 = 0LL;
  }
  else
  {
    result = MiReferenceActiveSubsection(a1 + 16, 648, 0x11u);
    if ( (int)result < 0 )
      return result;
    v7 = a1;
  }
  *(_QWORD *)(a3 + 8) = v7;
  if ( (a2 & 1) != 0 )
    v8 = *(_DWORD *)(*a1 + 8);
  else
    v8 = (v6 >> 12) + ((v6 & 0xFFF) != 0);
  v19[6] = (unsigned __int64)v8 << 12;
  v9 = MiReferenceControlAreaFile((__int64)a1);
  v10 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
    v19[5] = v9 | 1;
  else
    v19[5] = a1;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  LODWORD(v19[7]) |= 0x20u;
  v21 = 0LL;
  v12 = a2 | 8;
  HIDWORD(v19[7]) = HIDWORD(v19[7]) & 0x80000002 | ((SessionId & 0x7FFFF) << 12) | 2;
  v22 = v8 << 12;
  v13 = MiMapViewInSystemSpace(
          (unsigned int)v19,
          (unsigned int)&unk_140464660,
          (unsigned int)&v20,
          (unsigned int)&v22,
          (__int64)&v21,
          1LL,
          v12);
  MiDereferenceControlAreaFile((__int64)a1, v10);
  if ( v13 >= 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
LABEL_10:
    *(_QWORD *)(a3 + 24) = AnyMultiplexedVm;
    *(_QWORD *)a3 = v20;
    result = 0LL;
    *(_DWORD *)(a3 + 16) = v8;
    return result;
  }
  if ( (v12 & 2) != 0 )
  {
    v18 = 0LL;
    v16 = *(_KPROCESS **)(*(_QWORD *)(MiGetControlAreaPartition((__int64)a1) + 168) + 104LL);
    KiStackAttachProcess(v16, 0, a3 + 32);
    v17 = MiMapImageInSystemProcess(a1, v12, &v20, &v18);
    if ( v17 >= 0 )
    {
      AnyMultiplexedVm = (char *)&v16[1].IdealNode[6];
      goto LABEL_10;
    }
    KiUnstackDetachProcess((struct _KTHREAD *)(a3 + 32), 0);
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v17;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v13;
  }
}
