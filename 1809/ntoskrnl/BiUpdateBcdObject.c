/*
 * XREFs of BiUpdateBcdObject @ 0x1408F5BA8
 * Callers:
 *     BiBindEfiEntries @ 0x1408F3454 (BiBindEfiEntries.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140714240 (BcdCloseObject.c)
 *     BiGetRegistryValue @ 0x140714444 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140715024 (BiSetRegistryValue.c)
 *     BiGetDeviceFromEfiPath @ 0x1408F4DBC (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1408F4F48 (BiGetFilePathFromEfiPath.c)
 */

__int64 __fastcall BiUpdateBcdObject(void *a1, const GUID *a2)
{
  ULONG *v2; // rsi
  PVOID v4; // r12
  void *v5; // r13
  PVOID PoolWithTag; // r14
  NTSTATUS v7; // eax
  HANDLE v8; // rdi
  int v9; // ebx
  ULONG v10; // eax
  BCD_FLAGS v11; // r8d
  _WORD *v12; // r15
  __int64 v13; // rax
  SIZE_T v14; // rbx
  NTSTATUS ElementDataWithFlags; // eax
  BCD_FLAGS v16; // r8d
  BCD_FLAGS v17; // r8d
  __int64 v18; // rax
  char *v19; // rbx
  PVOID v20; // rsi
  BCD_FLAGS v21; // r8d
  BCD_FLAGS v22; // r8d
  void *Source2; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  HANDLE BcdObjectHandle; // [rsp+40h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A0h] [rbp+50h] BYREF
  PVOID Buffer; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(ULONG **)a2[2].Data4;
  Buffer = 0LL;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  Source2 = 0LL;
  v28 = 0;
  PoolWithTag = 0LL;
  BcdObjectHandle = 0LL;
  BufferSize = 0;
  v7 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v8 = BcdObjectHandle;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_33;
  if ( (a2[3].Data1 & 2) != 0 )
  {
    if ( (int)BiGetRegistryValue(
                (__int64)BcdObjectHandle,
                L"FirmwareVariable",
                (__int64)L"Description",
                3,
                &Source2,
                &v28) >= 0
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
        ElementDataWithFlags = BcdGetElementDataWithFlags(v8, 0x12000004u, v11, 0LL, &BufferSize);
        if ( ElementDataWithFlags == -1073741789 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferSize, 0x4B444342u);
          if ( !PoolWithTag )
          {
LABEL_15:
            BiDeleteElement(v8, 0x12000004u);
            BcdSetElementDataWithFlags(v8, 0x12000004u, v17, v12, v14);
LABEL_16:
            v18 = v2[5];
            if ( *(ULONG *)((char *)v2 + v18 + 8) == 4 )
            {
              v19 = (char *)v2 + v18;
              if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v18 + 12, &Buffer, &BufferSize) < 0 )
              {
                v20 = Buffer;
              }
              else
              {
                BiDeleteElement(v8, 0x11000001u);
                v20 = Buffer;
                BcdSetElementDataWithFlags(v8, 0x11000001u, v21, Buffer, BufferSize);
              }
              if ( BiGetFilePathFromEfiPath((__int64)(v19 + 12), &P, &BufferSize) < 0 )
              {
                v4 = P;
              }
              else
              {
                BiDeleteElement(v8, 0x12000002u);
                v4 = P;
                BcdSetElementDataWithFlags(v8, 0x12000002u, v22, P, BufferSize);
              }
            }
            else
            {
              v20 = Buffer;
            }
            v9 = 0;
            if ( v20 )
              ExFreePoolWithTag(v20, 0x4B444342u);
            if ( v4 )
              ExFreePoolWithTag(v4, 0x4B444342u);
            goto LABEL_31;
          }
          ElementDataWithFlags = BcdGetElementDataWithFlags(v8, 0x12000004u, v16, PoolWithTag, &BufferSize);
        }
        if ( ElementDataWithFlags >= 0
          && PoolWithTag
          && BufferSize == (_DWORD)v14
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
    a2[3].Data1 |= 2u;
    goto LABEL_6;
  }
LABEL_31:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
LABEL_33:
  if ( v8 )
    BcdCloseObject(v8);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
  return (unsigned int)v9;
}
