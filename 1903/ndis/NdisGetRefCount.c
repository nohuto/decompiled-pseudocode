/*
 * XREFs of NdisGetRefCount @ 0x1C00C7B70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0006570 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 */

unsigned __int64 __fastcall NdisGetRefCount(ULONG_PTR a1)
{
  ULONG v1; // edi
  unsigned __int64 result; // rax
  struct _NDIS_REFCOUNT_BLOCK *v3; // rbx
  unsigned __int8 v4; // al
  unsigned int *v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  ULONG v10; // eax
  unsigned __int8 NumOverflowTaggedEntries; // cl
  unsigned __int8 *p_RefCount; // rax
  __int64 v13; // rdx
  int v14; // ecx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  result = (unsigned __int64)ndisRefCountBlockFromRefCountHandle(a1);
  v3 = (struct _NDIS_REFCOUNT_BLOCK *)result;
  if ( result )
  {
    if ( *(_BYTE *)(result + 1) )
    {
      if ( *(_BYTE *)(result + 1) == 1 )
      {
        v4 = *(_BYTE *)(result + 2);
        if ( v4 )
        {
          v5 = (unsigned int *)v3->RefWithStack + 14;
          v6 = v4;
          do
          {
            v7 = *v5;
            v8 = *v5 >> 1;
            v5 += 16;
            v1 += (v8 & 0x7FFF) - (v7 >> 17);
            --v6;
          }
          while ( v6 );
        }
      }
    }
    else
    {
      v9 = *(unsigned __int8 *)(result + 2);
      *(&BitMapHeader.SizeOfBitMap + 1) = 0;
      BitMapHeader.SizeOfBitMap = v9;
      BitMapHeader.Buffer = v3->TaggedRefCounts.RefMask;
      v10 = RtlNumberOfSetBits(&BitMapHeader);
      NumOverflowTaggedEntries = v3->NumOverflowTaggedEntries;
      v1 = v10;
      if ( NumOverflowTaggedEntries )
      {
        p_RefCount = &v3->TaggedRefCounts.Tags->RefCount;
        v13 = NumOverflowTaggedEntries;
        do
        {
          v14 = *p_RefCount;
          p_RefCount += 2;
          v1 += v14;
          --v13;
        }
        while ( v13 );
      }
    }
    result = v1 + 1;
    if ( (v3->Flags & 2) == 0 )
      return v1;
  }
  return result;
}
