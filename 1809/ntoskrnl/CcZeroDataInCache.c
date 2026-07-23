/*
 * XREFs of CcZeroDataInCache @ 0x1400E0844
 * Callers:
 *     CcZeroData @ 0x1400E0CA0 (CcZeroData.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, signed __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v7; // esi
  signed __int64 v8; // rbx
  char v9; // bl
  char *v10; // r14
  unsigned int v12; // [rsp+54h] [rbp-64h]
  unsigned int v13; // [rsp+58h] [rbp-60h]
  struct _MDL *MemoryDescriptorList; // [rsp+60h] [rbp-58h]
  PVOID BcbVoid; // [rsp+68h] [rbp-50h] BYREF
  PVOID VirtualAddress; // [rsp+70h] [rbp-48h] BYREF
  signed __int64 v17; // [rsp+78h] [rbp-40h] BYREF
  signed __int64 v18; // [rsp+80h] [rbp-38h] BYREF
  char v19; // [rsp+C8h] [rbp+10h]

  v7 = 0;
  v8 = *a2;
  v18 = *a2;
  BcbVoid = 0LL;
  VirtualAddress = 0LL;
  v19 = 1;
  while ( (unsigned __int8)CcPinFileData(a1, &v18, a3 - v7, 0, 1, a4, (ULONG_PTR *)&BcbVoid, &VirtualAddress, &v17) )
  {
    v12 = v17 - v8;
    v13 = v17 - v8 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, (int)v17 - (int)v8, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v9 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages((__int64)MemoryDescriptorList, 0, 0);
    BYTE5(KeGetCurrentThread()[1].Queue) = v9 - 2;
    LODWORD(v8) = v17;
    v18 = v17;
    MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress, v12);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx((char *)BcbVoid, 0LL, 0);
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
    CcUnpinFileDataEx(v10, 0LL, 0);
  return v19;
}
