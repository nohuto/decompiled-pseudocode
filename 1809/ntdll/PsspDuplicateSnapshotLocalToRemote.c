/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180114174
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180111F60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180089530 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     PssValidateSnapshotDescriptor @ 0x18009FE38 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A0A40 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A0A80 (ZwDuplicateObject.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, int a4)
{
  __int64 result; // rax
  PVOID v8; // r14
  unsigned int v9; // r15d
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  _QWORD *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  void *v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  void *v34; // rdx
  void *v35; // rdx
  void *v36; // rdx
  void *v37; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD Buffer[144]; // [rsp+60h] [rbp-A0h] BYREF

  v39 = a4;
  result = PssValidateSnapshotDescriptor((__int64 *)a1);
  if ( (int)result < 0 )
    return result;
  v8 = 0LL;
  BaseAddress = 0LL;
  v9 = 0;
  memset(Buffer, 0, 0x478uLL);
  v10 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  v11 = -1;
  if ( v10 <= 0xFFFFFFFF )
    v11 = *(_DWORD *)(a1 + 888) << 6;
  v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v10 <= 0xFFFFFFFF )
  {
    v9 = -1;
    if ( v11 < 0xFFFFFB88 )
      v9 = v11 + 1144;
    v12 = v11 >= 0xFFFFFB88 ? 0xC0000095 : 0;
    if ( v11 + 1144 >= 0x478 )
    {
      v13 = 8LL;
      v14 = (_OWORD *)a1;
      v15 = Buffer;
      do
      {
        v16 = v14[1];
        *(_OWORD *)v15 = *v14;
        v17 = v14[2];
        *((_OWORD *)v15 + 1) = v16;
        v18 = v14[3];
        *((_OWORD *)v15 + 2) = v17;
        v19 = v14[4];
        *((_OWORD *)v15 + 3) = v18;
        v20 = v14[5];
        *((_OWORD *)v15 + 4) = v19;
        v21 = v14[6];
        *((_OWORD *)v15 + 5) = v20;
        v22 = v14[7];
        v14 += 8;
        *((_OWORD *)v15 + 6) = v21;
        v15 += 16;
        *((_OWORD *)v15 - 1) = v22;
        --v13;
      }
      while ( v13 );
      v23 = *(void **)(a1 + 872);
      v24 = v14[1];
      *(_OWORD *)v15 = *v14;
      v25 = v14[2];
      *((_OWORD *)v15 + 1) = v24;
      v26 = v14[3];
      *((_OWORD *)v15 + 2) = v25;
      v27 = v14[4];
      *((_OWORD *)v15 + 3) = v26;
      v28 = v14[5];
      *((_OWORD *)v15 + 4) = v27;
      v29 = v14[6];
      v30 = *((_QWORD *)v14 + 14);
      *((_OWORD *)v15 + 5) = v28;
      *((_OWORD *)v15 + 6) = v29;
      v15[14] = v30;
      Buffer[109] = 0LL;
      Buffer[112] = 0LL;
      Buffer[115] = 0LL;
      Buffer[118] = 0LL;
      Buffer[122] = 0LL;
      Buffer[126] = 0LL;
      Buffer[141] = 0LL;
      if ( v23 )
      {
        v12 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v23, a2, (PHANDLE)&Buffer[109], 0, 0, 2u);
        if ( v12 < 0 )
          goto LABEL_54;
      }
      v31 = *(void **)(a1 + 896);
      if ( v31 )
      {
        v12 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, (PHANDLE)&Buffer[112], 0, 0, 2u);
        if ( v12 < 0 )
          goto LABEL_54;
      }
      v32 = *(void **)(a1 + 920);
      if ( v32 )
      {
        v12 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, (PHANDLE)&Buffer[115], 0, 0, 2u);
        if ( v12 < 0 )
          goto LABEL_54;
      }
      v33 = *(void **)(a1 + 944);
      if ( v33 )
      {
        v12 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, a2, (PHANDLE)&Buffer[118], 0, 0, 2u);
        if ( v12 < 0 )
          goto LABEL_54;
      }
      v34 = *(void **)(a1 + 976);
      if ( v34 )
      {
        v12 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, a2, (PHANDLE)&Buffer[122], 0, 0, 2u);
        if ( v12 < 0 )
          goto LABEL_54;
      }
      v35 = *(void **)(a1 + 1008);
      if ( v35 )
      {
        v12 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v35, a2, (PHANDLE)&Buffer[126], 0, 0, 2u);
        if ( v12 < 0 )
          goto LABEL_54;
      }
      v36 = *(void **)(a1 + 1128);
      if ( v36 )
      {
        v12 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v36, a2, (PHANDLE)&Buffer[141], 0, 0, 2u);
        if ( v12 < 0 )
          goto LABEL_54;
      }
      RegionSize[0] = v9;
      BaseAddress = 0LL;
      v12 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
      if ( v12 < 0 )
        goto LABEL_54;
      HIDWORD(Buffer[0]) = HIDWORD(Buffer[0]) & 0xFFFFFFF8 | 1;
      if ( *(_QWORD *)(a1 + 904) )
        Buffer[113] = (char *)BaseAddress + 1144;
      if ( *(_WORD *)(a1 + 280) )
        Buffer[36] = (char *)BaseAddress + 296;
      v12 = NtWriteVirtualMemory(a2, BaseAddress, Buffer, 0x478uLL, 0LL);
      if ( v12 < 0
        || (v37 = *(void **)(a1 + 904)) != 0LL
        && (v12 = NtWriteVirtualMemory(a2, (PVOID)Buffer[113], v37, v11, 0LL), v12 < 0) )
      {
LABEL_54:
        v8 = BaseAddress;
        goto LABEL_34;
      }
      v8 = BaseAddress;
      v12 = 0;
      *a3 = BaseAddress;
    }
  }
  if ( v12 < 0 )
  {
LABEL_34:
    if ( v8 )
    {
      RegionSize[0] = v9;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
    }
    if ( Buffer[126] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[126], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[122] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[122], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[115] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[115], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[118] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[118], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[112] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[112], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[109] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[109], 0LL, 0LL, 0, 0, 1u);
    if ( Buffer[141] )
      ZwDuplicateObject(a2, (HANDLE)Buffer[141], 0LL, 0LL, 0, 0, 1u);
  }
  if ( (v39 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v12;
}
