/*
 * XREFs of BiUpdateBcdObject @ 0x1408F4908
 * Callers:
 *     BiBindEfiEntries @ 0x1408F21B4 (BiBindEfiEntries.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BB0 (RtlCompareMemory.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BiDeleteElement @ 0x1407125BC (BiDeleteElement.c)
 *     BcdOpenObject @ 0x140712E44 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FC0 (BcdCloseObject.c)
 *     BiGetRegistryValue @ 0x1407131C4 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x140713390 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713570 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140713DA4 (BiSetRegistryValue.c)
 *     BiGetDeviceFromEfiPath @ 0x1408F3B1C (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1408F3CA8 (BiGetFilePathFromEfiPath.c)
 */

__int64 __fastcall BiUpdateBcdObject(__int64 a1, __int64 a2)
{
  ULONG *v2; // rsi
  PVOID v4; // r12
  void *v5; // r13
  PVOID PoolWithTag; // r14
  int v7; // eax
  void *v8; // rdi
  int v9; // ebx
  ULONG v10; // eax
  __int64 v11; // r8
  _WORD *v12; // r15
  __int64 v13; // rax
  SIZE_T v14; // rbx
  int ElementDataWithFlags; // eax
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rbx
  PVOID v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r8
  void *Source2; // [rsp+30h] [rbp-20h] BYREF
  PVOID v25; // [rsp+38h] [rbp-18h] BYREF
  void *v26; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(ULONG **)(a2 + 40);
  P = 0LL;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0LL;
  Source2 = 0LL;
  v28 = 0;
  PoolWithTag = 0LL;
  v26 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v7 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &v26);
  v8 = v26;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_33;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    if ( (int)BiGetRegistryValue((__int64)v26, L"FirmwareVariable", (__int64)L"Description", 3, &Source2, &v28) >= 0
      && (v10 = v2[1], v10 == v28) )
    {
      v5 = Source2;
      if ( RtlCompareMemory(v2, Source2, v10) == v2[1] )
      {
LABEL_6:
        v12 = (_WORD *)((char *)v2 + v2[4]);
        v13 = -1LL;
        do
          ++v13;
        while ( v12[v13] );
        v14 = (unsigned int)(2 * v13 + 2);
        ElementDataWithFlags = BcdGetElementDataWithFlags((__int64)v8, 0x12000004u, v11, 0LL, &NumberOfBytes);
        if ( ElementDataWithFlags == -1073741789 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
          if ( !PoolWithTag )
          {
LABEL_15:
            BiDeleteElement(v8, 0x12000004u);
            BcdSetElementDataWithFlags(v8, 0x12000004u, v17, (__int64)v12, v14);
LABEL_16:
            v18 = v2[5];
            if ( *(ULONG *)((char *)v2 + v18 + 8) == 4 )
            {
              v19 = (char *)v2 + v18;
              if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v18 + 12, &P, (unsigned int *)&NumberOfBytes) < 0 )
              {
                v20 = P;
              }
              else
              {
                BiDeleteElement(v8, 0x11000001u);
                v20 = P;
                BcdSetElementDataWithFlags(v8, 0x11000001u, v21, (__int64)P, NumberOfBytes);
              }
              if ( BiGetFilePathFromEfiPath((__int64)(v19 + 12), &v25, (unsigned int *)&NumberOfBytes) < 0 )
              {
                v4 = v25;
              }
              else
              {
                BiDeleteElement(v8, 0x12000002u);
                v4 = v25;
                BcdSetElementDataWithFlags(v8, 0x12000002u, v22, (__int64)v25, NumberOfBytes);
              }
            }
            else
            {
              v20 = P;
            }
            v9 = 0;
            if ( v20 )
              ExFreePoolWithTag(v20, 0x4B444342u);
            if ( v4 )
              ExFreePoolWithTag(v4, 0x4B444342u);
            goto LABEL_31;
          }
          ElementDataWithFlags = BcdGetElementDataWithFlags(
                                   (__int64)v8,
                                   0x12000004u,
                                   v16,
                                   (__int64)PoolWithTag,
                                   &NumberOfBytes);
        }
        if ( ElementDataWithFlags >= 0
          && PoolWithTag
          && (_DWORD)NumberOfBytes == (_DWORD)v14
          && RtlCompareMemory(v12, PoolWithTag, v14) == v14 )
        {
          goto LABEL_16;
        }
        goto LABEL_15;
      }
    }
    else
    {
      v5 = Source2;
    }
  }
  v9 = BiSetRegistryValue((__int64)v8, L"FirmwareVariable", L"Description", 3u, v2, v2[1]);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a2 + 48) |= 2u;
    goto LABEL_6;
  }
LABEL_31:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
LABEL_33:
  if ( v8 )
    BcdCloseObject((__int64)v8);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
  return (unsigned int)v9;
}
