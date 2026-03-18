/*
 * XREFs of CcPinMappedData @ 0x140687950
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1400D5C50 (CcFreeVirtualAddress.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400D8B90 (ExAcquireSharedStarveExclusive.c)
 *     CcUnpinData @ 0x14060AAD0 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x14072A2E0 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPinMappedData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb)
{
  char v5; // r10
  PLARGE_INTEGER v6; // r9
  _DWORD *SharedCacheMap; // r13
  LONGLONG v10; // rbx
  LONGLONG v11; // rdi
  PVOID *v12; // r12
  BOOLEAN v13; // bl
  PVOID Obcb; // [rsp+58h] [rbp-60h] BYREF
  PVOID *v16; // [rsp+60h] [rbp-58h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-50h] BYREF
  LONGLONG v18; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v19[8]; // [rsp+78h] [rbp-40h] BYREF
  char v21; // [rsp+D8h] [rbp+20h]

  v21 = Flags;
  v5 = Flags;
  v6 = FileOffset;
  v18 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v16 = &Obcb;
  if ( ((unsigned __int8)*Bcb & 1) == 0 )
    return 1;
  *Bcb = (char *)*Bcb - 1;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  __incgsdword(0x5E14u);
  if ( *(_WORD *)*Bcb != 765 )
  {
    v10 = v18;
    v11 = QuadPart;
    v12 = v16;
    while ( 1 )
    {
      if ( Obcb )
      {
        if ( v12 == &Obcb )
        {
          Obcb = (PVOID)CcAllocateObcb(v6, Length);
          v12 = (PVOID *)((char *)Obcb + 16);
          v16 = (PVOID *)((char *)Obcb + 16);
          v5 = v21;
        }
        Length += v11 - v10;
        v11 = v10;
        QuadPart = v10;
        v16 = ++v12;
      }
      if ( !(unsigned __int8)CcPinFileData(
                               (__int64)FileObject,
                               &QuadPart,
                               Length,
                               (SharedCacheMap[38] & 0x200) == 0,
                               0,
                               v5,
                               (ULONG_PTR *)v12,
                               v19,
                               &v18) )
        goto LABEL_13;
      v10 = v18;
      v6 = FileOffset;
      v5 = v21;
      if ( v18 - v11 >= Length )
      {
        CcFreeVirtualAddress((__int64)*Bcb);
        *Bcb = Obcb;
        goto LABEL_8;
      }
    }
  }
  if ( !ExAcquireSharedStarveExclusive((PERESOURCE)((char *)*Bcb + 72), v5 & 1) )
  {
LABEL_13:
    v13 = 0;
    goto LABEL_14;
  }
LABEL_8:
  v13 = 1;
LABEL_14:
  if ( !v13 )
  {
    *Bcb = (char *)*Bcb + 1;
    if ( Obcb )
      CcUnpinData(Obcb);
  }
  return v13;
}
