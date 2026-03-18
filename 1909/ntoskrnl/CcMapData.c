/*
 * XREFs of CcMapData @ 0x14064DF90
 * Callers:
 *     <none>
 * Callees:
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x1400B6060 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400B64C0 (CcMapAndRead.c)
 */

BOOLEAN __stdcall CcMapData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v6; // bl
  PVOID SharedCacheMap; // rcx
  void *VirtualAddress; // rax
  __int64 *v11; // rdi
  BOOLEAN result; // al
  _QWORD v13[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v6 = Flags;
  if ( (Flags & 1) != 0 )
    __incgsdword(0x5E10u);
  else
    __incgsdword(0x5E0Cu);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( (Flags & 1) != 0 )
  {
    VirtualAddress = (void *)CcGetVirtualAddress(
                               (__int64)SharedCacheMap,
                               FileOffset->QuadPart,
                               &v14,
                               &v15,
                               (Flags >> 6) & 1,
                               0);
    v11 = (__int64 *)Buffer;
    *Buffer = VirtualAddress;
  }
  else
  {
    v11 = (__int64 *)Buffer;
    result = CcPinFileData(
               (__int64)FileObject,
               (__int64 *)FileOffset,
               Length,
               1,
               0,
               Flags,
               (ULONG_PTR *)&v14,
               Buffer,
               v13);
    if ( !result )
    {
      __incgsdword(0x5E4Cu);
      return result;
    }
  }
  if ( (v6 & 0x10) == 0 )
    CcMapAndRead(Length, 0, 1, *v11);
  __addgsdword(0x5E50u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  *Bcb = (char *)v14 + 1;
  return 1;
}
