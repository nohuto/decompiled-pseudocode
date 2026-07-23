/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18011470C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180111F60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     PssValidateSnapshotDescriptor @ 0x18009FE38 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A0A40 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A0A80 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A0AE0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x180111FE0 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  unsigned __int64 v5; // rsi
  PVOID *v9; // r15
  unsigned int v10; // r13d
  signed int v11; // ebx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  void *v24; // rdx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 v31; // rax
  SIZE_T v32; // r15
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v35; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v39; // [rsp+68h] [rbp-98h]
  PVOID *v40; // [rsp+70h] [rbp-90h]
  _QWORD v41[144]; // [rsp+80h] [rbp-80h] BYREF
  __int64 Buffer[111]; // [rsp+500h] [rbp+400h] BYREF
  unsigned int v43; // [rsp+878h] [rbp+778h]
  HANDLE v44; // [rsp+880h] [rbp+780h]
  __int64 v45; // [rsp+888h] [rbp+788h]
  HANDLE v46; // [rsp+898h] [rbp+798h]
  HANDLE v47; // [rsp+8B0h] [rbp+7B0h]
  HANDLE v48; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v49; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v50; // [rsp+968h] [rbp+868h]

  v5 = 0LL;
  v40 = BaseAddress;
  v39 = a4;
  BaseAddressa = 0LL;
  v35 = 0LL;
  *a4 = 0LL;
  v9 = a4;
  v10 = 0;
  memset(v41, 0, 0x478uLL);
  v11 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x478uLL, &BufferSize);
  if ( v11 < 0 )
    goto LABEL_51;
  if ( BufferSize == 1144 )
  {
    if ( LODWORD(Buffer[0]) == 1146311504 )
    {
      v11 = PssValidateSnapshotDescriptor(Buffer);
      if ( v11 >= 0 )
      {
        v12 = (unsigned __int64)v43 << 6;
        v13 = 0xFFFFFFFFLL;
        if ( v12 <= 0xFFFFFFFF )
          v13 = (unsigned int)v12;
        v11 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v12 <= 0xFFFFFFFF )
        {
          v10 = -1;
          if ( (unsigned int)v13 < 0xFFFFFB88 )
            v10 = v13 + 1144;
          v11 = (unsigned int)v13 >= 0xFFFFFB88 ? 0xC0000095 : 0;
          if ( (unsigned int)(v13 + 1144) >= 0x478 )
          {
            v14 = 8LL;
            v15 = v41;
            v16 = Buffer;
            do
            {
              v17 = *((_OWORD *)v16 + 1);
              *(_OWORD *)v15 = *(_OWORD *)v16;
              v18 = *((_OWORD *)v16 + 2);
              *((_OWORD *)v15 + 1) = v17;
              v19 = *((_OWORD *)v16 + 3);
              *((_OWORD *)v15 + 2) = v18;
              v20 = *((_OWORD *)v16 + 4);
              *((_OWORD *)v15 + 3) = v19;
              v21 = *((_OWORD *)v16 + 5);
              *((_OWORD *)v15 + 4) = v20;
              v22 = *((_OWORD *)v16 + 6);
              *((_OWORD *)v15 + 5) = v21;
              v23 = *((_OWORD *)v16 + 7);
              v16 += 16;
              *((_OWORD *)v15 + 6) = v22;
              v15 += 16;
              *((_OWORD *)v15 - 1) = v23;
              --v14;
            }
            while ( v14 );
            v24 = (void *)Buffer[109];
            v25 = *((_OWORD *)v16 + 1);
            *(_OWORD *)v15 = *(_OWORD *)v16;
            v26 = *((_OWORD *)v16 + 2);
            *((_OWORD *)v15 + 1) = v25;
            v27 = *((_OWORD *)v16 + 3);
            *((_OWORD *)v15 + 2) = v26;
            v28 = *((_OWORD *)v16 + 4);
            *((_OWORD *)v15 + 3) = v27;
            v29 = *((_OWORD *)v16 + 5);
            *((_OWORD *)v15 + 4) = v28;
            v30 = *((_OWORD *)v16 + 6);
            v31 = v16[14];
            *((_OWORD *)v15 + 5) = v29;
            *((_OWORD *)v15 + 6) = v30;
            v15[14] = v31;
            v41[109] = 0LL;
            v41[112] = 0LL;
            v41[115] = 0LL;
            v41[118] = 0LL;
            v41[122] = 0LL;
            v41[126] = 0LL;
            v41[141] = 0LL;
            if ( v24 )
            {
              v11 = ZwDuplicateObject(ProcessHandle, v24, SourceProcessHandle, (PHANDLE)&v41[109], 0, 0, 2u);
              if ( v11 < 0 )
                goto LABEL_51;
            }
            if ( v44 )
            {
              v11 = ZwDuplicateObject(ProcessHandle, v44, SourceProcessHandle, (PHANDLE)&v41[112], 0, 0, 2u);
              if ( v11 < 0 )
                goto LABEL_51;
            }
            if ( v46 )
            {
              v11 = ZwDuplicateObject(ProcessHandle, v46, SourceProcessHandle, (PHANDLE)&v41[115], 0, 0, 2u);
              if ( v11 < 0 )
                goto LABEL_51;
            }
            if ( v47 )
            {
              v11 = ZwDuplicateObject(ProcessHandle, v47, SourceProcessHandle, (PHANDLE)&v41[118], 0, 0, 2u);
              if ( v11 < 0 )
                goto LABEL_51;
            }
            if ( v48 )
            {
              v11 = ZwDuplicateObject(ProcessHandle, v48, SourceProcessHandle, (PHANDLE)&v41[122], 0, 0, 2u);
              if ( v11 < 0 )
                goto LABEL_51;
            }
            if ( v49 )
            {
              v11 = ZwDuplicateObject(ProcessHandle, v49, SourceProcessHandle, (PHANDLE)&v41[126], 0, 0, 2u);
              if ( v11 < 0 )
                goto LABEL_51;
            }
            if ( v50 )
            {
              v11 = ZwDuplicateObject(ProcessHandle, v50, SourceProcessHandle, (PHANDLE)&v41[141], 0, 0, 2u);
              if ( v11 < 0 )
                goto LABEL_51;
            }
            RegionSize = v10;
            BaseAddressa = 0LL;
            v11 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
            if ( v11 < 0 )
              goto LABEL_51;
            HIDWORD(v41[0]) = HIDWORD(v41[0]) & 0xFFFFFFF8 | 1;
            if ( v41[113] )
              v41[113] = (char *)BaseAddressa + 1144;
            if ( LOWORD(v41[35]) )
              v41[36] = (char *)BaseAddressa + 296;
            v11 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v41, 0x478uLL, 0LL);
            if ( v11 < 0 )
              goto LABEL_51;
            if ( v45 )
            {
              v35 = 0LL;
              RegionSize = 1LL;
              v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, 0LL, &RegionSize, 0x1000u, 4u);
              if ( v11 < 0 )
                goto LABEL_51;
              if ( v13 )
              {
                while ( 1 )
                {
                  v32 = v13 - v5;
                  if ( RegionSize <= v13 - v5 )
                    v32 = RegionSize;
                  v11 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v5 + v45), v35, v32, &BufferSize);
                  if ( v11 < 0 )
                    goto LABEL_51;
                  if ( BufferSize != v32 )
                    goto LABEL_50;
                  v11 = NtWriteVirtualMemory(
                          SourceProcessHandle,
                          (char *)BaseAddressa + v5 + 1144,
                          v35,
                          BufferSize,
                          &NumberOfBytesWritten);
                  if ( v11 < 0 )
                    goto LABEL_51;
                  if ( NumberOfBytesWritten != BufferSize )
                  {
LABEL_50:
                    v11 = -2147483635;
                    goto LABEL_51;
                  }
                  v5 += NumberOfBytesWritten;
                  if ( v5 >= v13 )
                  {
                    v9 = v39;
                    break;
                  }
                }
              }
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, &RegionSize, 0x8000u);
              v35 = 0LL;
            }
            v11 = 0;
            *v9 = BaseAddressa;
          }
        }
        if ( v11 >= 0 )
          goto LABEL_69;
      }
    }
    else
    {
      v11 = -1073741816;
    }
  }
  else
  {
    v11 = -2147483635;
  }
LABEL_51:
  if ( v35 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v10;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v41[126] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[126], 0LL, 0LL, 0, 0, 1u);
  if ( v41[122] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[122], 0LL, 0LL, 0, 0, 1u);
  if ( v41[115] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[115], 0LL, 0LL, 0, 0, 1u);
  if ( v41[118] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[118], 0LL, 0LL, 0, 0, 1u);
  if ( v41[112] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[112], 0LL, 0LL, 0, 0, 1u);
  if ( v41[109] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[109], 0LL, 0LL, 0, 0, 1u);
  if ( v41[141] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[141], 0LL, 0LL, 0, 0, 1u);
LABEL_69:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, v40);
  return (unsigned int)v11;
}
