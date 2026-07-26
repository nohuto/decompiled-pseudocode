/*
 * XREFs of NdisGetRefCount @ 0x1C0072250
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0072014 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
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
  ULONG v9; // eax
  unsigned __int8 NumOverflowTaggedEntries; // cl
  unsigned __int8 *p_RefCount; // rax
  __int64 v12; // rdx
  int v13; // ecx
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
      BitMapHeader.SizeOfBitMap = *(unsigned __int8 *)(result + 2);
      BitMapHeader.Buffer = (unsigned int *)(result + 16);
      v9 = RtlNumberOfSetBits(&BitMapHeader);
      NumOverflowTaggedEntries = v3->NumOverflowTaggedEntries;
      v1 = v9;
      if ( NumOverflowTaggedEntries )
      {
        p_RefCount = &v3->TaggedRefCounts.Tags->RefCount;
        v12 = NumOverflowTaggedEntries;
        do
        {
          v13 = *p_RefCount;
          p_RefCount += 2;
          v1 += v13;
          --v12;
        }
        while ( v12 );
      }
    }
    result = v1 + 1;
    if ( (v3->Flags & 2) == 0 )
      return v1;
  }
  return result;
}
