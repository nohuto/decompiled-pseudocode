/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x14071559C
 * Callers:
 *     BiConvertElementToRegistryData @ 0x140715134 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071559C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14071565C (BiCreatePartitionDevice.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408F2940 (BiConvertNtFilePathToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071559C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14071565C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140715920 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140715CB8 (BiIsVolumePartitionInformationRetained.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408F2940 (BiConvertNtFilePathToBootEnvironment.c)
 */

__int64 BiConvertNtDeviceToBootEnvironment(const WCHAR *a1, unsigned int a2, unsigned int a3, ...)
{
  int v4; // edx
  _QWORD *v5; // r15
  char *v7; // rdi
  int v8; // edx
  int v9; // edx
  int PartitionDevice; // ebx
  __int64 result; // rax
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  unsigned int v19; // ebx
  __int64 v20; // r14
  __int64 v21; // rdx
  unsigned int v22; // eax
  const WCHAR *v23; // rdx
  int v24; // ecx
  void *PartitionVhdFilePathFromUnicodeString; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  char *v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rdx
  char *v31; // r9
  int v32; // eax
  char *v33; // rax
  unsigned int v34; // eax
  char *v35; // rax
  __int64 v36; // rax
  unsigned int *v37; // rbx
  unsigned int v38; // esi
  char *v39; // rax
  void *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // esi
  char *v43; // rax
  char *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  void *Src; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h] BYREF
  va_list Pa; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Pa, a3);
  P = va_arg(va1, PVOID);
  v4 = *(_DWORD *)a1;
  v5 = P;
  Src = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v7 = 0LL;
  v8 = v4 - 1;
  if ( !v8 )
  {
    if ( a2 < 0x14 )
      goto LABEL_10;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *(_DWORD *)v7 = 5;
      *((_DWORD *)v7 + 2) = 72;
      goto LABEL_6;
    }
    goto LABEL_67;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a2 >= 0x16 )
    {
      if ( (unsigned __int8)BiIsVolumePartitionInformationRetained(a1 + 10) )
      {
        v7 = *(char **)&DestinationString.Length;
        PartitionDevice = BiCreatePartitionDevice(a1 + 10);
        if ( PartitionDevice < 0 )
          goto LABEL_7;
        goto LABEL_6;
      }
      goto LABEL_11;
    }
LABEL_10:
    PartitionDevice = -1073741811;
    goto LABEL_9;
  }
  v12 = v9 - 1;
  if ( !v12 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v41 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v41 )
      goto LABEL_10;
    P = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment(
                        (char *)a1 + v41,
                        a2 - (unsigned int)v41,
                        a1 + 12,
                        a3,
                        (PVOID *)Pa);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v37 = (unsigned int *)P;
    v42 = *((_DWORD *)P + 1) + 20;
    v43 = (char *)ExAllocatePoolWithTag(PagedPool, v42, 0x4B444342u);
    v7 = v43;
    if ( v43 )
    {
      memset(v43, 0, v42);
      *(_DWORD *)v7 = 0;
      v40 = v7 + 20;
      *((_DWORD *)v7 + 2) = v42;
      *((_DWORD *)v7 + 4) = 5;
      goto LABEL_61;
    }
    goto LABEL_66;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v36 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v36 )
      goto LABEL_10;
    P = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment(
                        (char *)a1 + v36,
                        a2 - (unsigned int)v36,
                        a1 + 12,
                        a3,
                        (PVOID *)Pa);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v37 = (unsigned int *)P;
    v38 = *((_DWORD *)P + 1) + 40;
    v39 = (char *)ExAllocatePoolWithTag(PagedPool, v38, 0x4B444342u);
    v7 = v39;
    if ( v39 )
    {
      memset(v39, 0, v38);
      *(_DWORD *)v7 = 0;
      v40 = v7 + 40;
      *((_DWORD *)v7 + 1) = 1;
      *((_DWORD *)v7 + 2) = v38;
      *((_DWORD *)v7 + 4) = 3;
LABEL_61:
      memmove(v40, v37, v37[1]);
      ExFreePoolWithTag(v37, 0x4B444342u);
      goto LABEL_6;
    }
LABEL_66:
    ExFreePoolWithTag(v37, 0x4B444342u);
LABEL_67:
    PartitionDevice = -1073741670;
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a2 < 0x20 )
      goto LABEL_10;
    v34 = *((_DWORD *)a1 + 7);
    if ( v34 > 0x100000 )
      goto LABEL_10;
    v35 = (char *)ExAllocatePoolWithTag(PagedPool, v34, 0x4B444342u);
    v7 = v35;
    if ( v35 )
    {
      memmove(v35, a1 + 10, *((unsigned int *)a1 + 7));
      goto LABEL_6;
    }
    goto LABEL_67;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    if ( a2 < 0x24 )
      goto LABEL_10;
    v33 = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = v33;
    if ( v33 )
    {
      memset(v33, 0, 0x48uLL);
      *(_DWORD *)v7 = 7;
      *((_DWORD *)v7 + 2) = 72;
      *((_OWORD *)v7 + 1) = VmbFsInterfaceTypeGuid;
      *((_OWORD *)v7 + 2) = *(_OWORD *)(a1 + 10);
      goto LABEL_6;
    }
    goto LABEL_67;
  }
  if ( v15 != 1 )
    goto LABEL_10;
  if ( a2 < 0x22 )
    goto LABEL_10;
  v16 = *((unsigned int *)a1 + 6);
  if ( a2 <= (unsigned int)v16 )
    goto LABEL_10;
  v17 = 30;
  v18 = 0;
  if ( !(_DWORD)v16 )
    goto LABEL_32;
  v19 = a2 - v16;
  v20 = (__int64)a1 + v16;
  if ( *(_DWORD *)((char *)a1 + v16) != 3 || v19 < 0x2E )
    goto LABEL_10;
  v21 = *(unsigned int *)(v20 + 20);
  v22 = v19 - v21;
  v23 = (const WCHAR *)(v20 + v21);
  v24 = *(_DWORD *)v23;
  if ( *(_DWORD *)v23 == 2 )
  {
    if ( v22 < 0x16 )
      goto LABEL_10;
    RtlInitUnicodeString(&DestinationString, v23 + 10);
    PartitionVhdFilePathFromUnicodeString = (void *)BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
    if ( PartitionVhdFilePathFromUnicodeString )
    {
      ExFreePoolWithTag(PartitionVhdFilePathFromUnicodeString, 0x4B444342u);
LABEL_11:
      PartitionDevice = -1073741637;
      goto LABEL_7;
    }
  }
  else if ( (v24 != 8 || v22 < 0x22) && (v24 != 1 || v22 < 0x14) )
  {
    goto LABEL_10;
  }
  PartitionDevice = BiConvertNtDeviceToBootEnvironment(v20, v19, 0LL, &Src);
  if ( PartitionDevice >= 0 )
  {
    v18 = 40;
    v17 = *((_DWORD *)Src + 2) + 70;
LABEL_32:
    v26 = -1LL;
    if ( *((_DWORD *)a1 + 5) == 1 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a1[v27 + 16] );
      v17 += 2 * v27;
    }
    v28 = (char *)ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    v7 = v28;
    if ( !v28 )
    {
      v5 = P;
      PartitionDevice = -1073741670;
      goto LABEL_7;
    }
    memset(v28, 0, v17);
    *(_DWORD *)v7 = 8;
    *((_DWORD *)v7 + 2) = v17;
    if ( *((_DWORD *)a1 + 5) )
    {
      *((_DWORD *)v7 + 4) = 1;
      v30 = -1LL;
      do
        ++v30;
      while ( a1[v30 + 16] );
      wcscpy_s((wchar_t *)v7 + 14, v30 + 1, a1 + 16);
      do
        ++v26;
      while ( a1[v26 + 16] );
      v29 = 2 * v26 + 30;
    }
    else
    {
      *((_DWORD *)v7 + 4) = 0;
      v29 = 30;
      *((_DWORD *)v7 + 5) = *((_DWORD *)a1 + 7);
    }
    if ( Src )
    {
      v31 = &v7[v29];
      *(_DWORD *)v31 = 0;
      v32 = *((_DWORD *)Src + 2);
      *((_DWORD *)v31 + 4) = 6;
      *((_DWORD *)v31 + 2) = v18 + v32;
      memmove(&v31[v18], Src, *((unsigned int *)Src + 2));
      *((_DWORD *)v7 + 6) = v29;
    }
    v5 = P;
LABEL_6:
    PartitionDevice = 0;
  }
LABEL_7:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
LABEL_9:
  result = (unsigned int)PartitionDevice;
  *v5 = v7;
  return result;
}
