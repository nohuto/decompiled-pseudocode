/*
 * XREFs of DpiUnmapIommuContiguousInternal @ 0x1C0050B0C
 * Callers:
 *     DpiUnmapMemoryTrackerFromIoMmu @ 0x1C0050C74 (DpiUnmapMemoryTrackerFromIoMmu.c)
 *     DpiUnmapIommuContiguous @ 0x1C029D1A0 (DpiUnmapIommuContiguous.c)
 * Callees:
 *     DpiUnmapIommuIdentityRangeInternal @ 0x1C0050C0C (DpiUnmapIommuIdentityRangeInternal.c)
 */

void __fastcall DpiUnmapIommuContiguousInternal(int a1, struct _MDL *a2, SIZE_T a3, int a4, __int64 a5)
{
  SIZE_T v7; // rdi
  PMDL Mdl; // rax
  PMDL v10; // rsi
  struct _MDL *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+58h] [rbp-20h]
  struct _MDL *v17; // [rsp+60h] [rbp-18h]

  v7 = a3 >> 12;
  Mdl = MmCreateMdl(0LL, 0LL, a3);
  v10 = Mdl;
  if ( Mdl )
  {
    v11 = Mdl + 1;
    if ( (_DWORD)v7 )
    {
      v12 = (unsigned int)v7;
      do
      {
        v11->Next = a2;
        a2 = (struct _MDL *)((char *)a2 + 1);
        v11 = (struct _MDL *)((char *)v11 + 8);
        --v12;
      }
      while ( v12 );
    }
    DpiUnmapIommuIdentityRangeInternal(a1, (_DWORD)v10, 0, a4, a5);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v13 = 0LL;
    v14 = 56;
    v15 = 0LL;
    v16 = 4096LL;
    if ( (_DWORD)v7 )
    {
      v7 = (unsigned int)v7;
      do
      {
        v17 = a2;
        DpiUnmapIommuIdentityRangeInternal(a1, (unsigned int)&v13, 0, a4, a5);
        a2 = (struct _MDL *)((char *)a2 + 1);
        --v7;
      }
      while ( v7 );
    }
  }
}
