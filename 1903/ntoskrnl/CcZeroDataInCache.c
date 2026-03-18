/*
 * XREFs of CcZeroDataInCache @ 0x1400FCA34
 * Callers:
 *     CcZeroData @ 0x1400FC620 (CcZeroData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  char v9; // bl
  char *v10; // r14
  unsigned int v12; // [rsp+54h] [rbp-64h]
  unsigned int v13; // [rsp+58h] [rbp-60h]
  PMDL MemoryDescriptorList; // [rsp+60h] [rbp-58h]
  PVOID BcbVoid; // [rsp+68h] [rbp-50h] BYREF
  __int64 v16; // [rsp+70h] [rbp-48h] BYREF
  PVOID VirtualAddress; // [rsp+78h] [rbp-40h] BYREF
  __int64 v18; // [rsp+80h] [rbp-38h] BYREF
  char v19; // [rsp+C8h] [rbp+10h]

  v7 = 0;
  v16 = 0LL;
  v8 = *a2;
  v18 = *a2;
  BcbVoid = 0LL;
  VirtualAddress = 0LL;
  v19 = 1;
  while ( (unsigned __int8)CcPinFileData(a1, &v18, a3 - v7, 0, 1, a4, (ULONG_PTR *)&BcbVoid, &VirtualAddress, &v16) )
  {
    v12 = v16 - v8;
    v13 = v16 - v8 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, (int)v16 - (int)v8, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v9 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages(MemoryDescriptorList, 0, 0);
    BYTE5(KeGetCurrentThread()[1].Queue) = v9 - 2;
    LODWORD(v8) = v16;
    v18 = v16;
    MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress, v12);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx((char *)BcbVoid, 0, 0);
    v10 = 0LL;
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    v7 = v13;
    if ( a3 <= v13 )
      goto LABEL_8;
  }
  v19 = 0;
  v10 = (char *)BcbVoid;
LABEL_8:
  if ( v10 )
    CcUnpinFileDataEx(v10, 0, 0);
  return v19;
}
