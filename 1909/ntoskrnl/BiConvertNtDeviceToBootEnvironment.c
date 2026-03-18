/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x14074060C
 * Callers:
 *     BiConvertElementToRegistryData @ 0x140740194 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14074060C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1407406CC (BiCreatePartitionDevice.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14092ED84 (BiConvertNtFilePathToBootEnvironment.c)
 * Callees:
 *     wcscpy_s @ 0x1401A6C50 (wcscpy_s.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14074060C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1407406CC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x140740AC4 (BiGetPartitionVhdFilePath.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140740DD0 (BiIsVolumePartitionInformationRetained.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14092ED84 (BiConvertNtFilePathToBootEnvironment.c)
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
  int v23; // ecx
  void *PartitionVhdFilePath; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  char *v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // rdx
  char *v30; // r9
  int v31; // eax
  char *v32; // rax
  unsigned int v33; // eax
  char *v34; // rax
  __int64 v35; // rax
  unsigned int *v36; // rbx
  unsigned int v37; // esi
  char *v38; // rax
  void *v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // esi
  char *v42; // rax
  char *PoolWithTag; // rax
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
    goto LABEL_68;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a2 >= 0x16 )
    {
      if ( (unsigned __int8)BiIsVolumePartitionInformationRetained(a1 + 10) )
      {
        v7 = 0LL;
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
    v40 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v40 )
      goto LABEL_10;
    P = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment(
                        (char *)a1 + v40,
                        a2 - (unsigned int)v40,
                        a1 + 12,
                        a3,
                        (PVOID *)Pa);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v36 = (unsigned int *)P;
    v41 = *((_DWORD *)P + 1) + 20;
    v42 = (char *)ExAllocatePoolWithTag(PagedPool, v41, 0x4B444342u);
    v7 = v42;
    if ( v42 )
    {
      memset(v42, 0, v41);
      *(_DWORD *)v7 = 0;
      v39 = v7 + 20;
      *((_DWORD *)v7 + 2) = v41;
      *((_DWORD *)v7 + 4) = 5;
      goto LABEL_62;
    }
    goto LABEL_67;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v35 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v35 )
      goto LABEL_10;
    P = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment(
                        (char *)a1 + v35,
                        a2 - (unsigned int)v35,
                        a1 + 12,
                        a3,
                        (PVOID *)Pa);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v36 = (unsigned int *)P;
    v37 = *((_DWORD *)P + 1) + 40;
    v38 = (char *)ExAllocatePoolWithTag(PagedPool, v37, 0x4B444342u);
    v7 = v38;
    if ( v38 )
    {
      memset(v38, 0, v37);
      *(_DWORD *)v7 = 0;
      v39 = v7 + 40;
      *((_DWORD *)v7 + 1) = 1;
      *((_DWORD *)v7 + 2) = v37;
      *((_DWORD *)v7 + 4) = 3;
LABEL_62:
      memmove(v39, v36, v36[1]);
      ExFreePoolWithTag(v36, 0x4B444342u);
      goto LABEL_6;
    }
LABEL_67:
    ExFreePoolWithTag(v36, 0x4B444342u);
LABEL_68:
    PartitionDevice = -1073741670;
    goto LABEL_7;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a2 < 0x20 )
      goto LABEL_10;
    v33 = *((_DWORD *)a1 + 7);
    if ( v33 > 0x100000 )
      goto LABEL_10;
    v34 = (char *)ExAllocatePoolWithTag(PagedPool, v33, 0x4B444342u);
    v7 = v34;
    if ( v34 )
    {
      memmove(v34, a1 + 10, *((unsigned int *)a1 + 7));
      goto LABEL_6;
    }
    goto LABEL_68;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    if ( a2 < 0x24 )
      goto LABEL_10;
    v32 = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = v32;
    if ( v32 )
    {
      memset(v32, 0, 0x48uLL);
      *(_DWORD *)v7 = 7;
      *((_DWORD *)v7 + 2) = 72;
      *((_OWORD *)v7 + 1) = VmbFsInterfaceTypeGuid;
      *((_OWORD *)v7 + 2) = *(_OWORD *)(a1 + 10);
      goto LABEL_6;
    }
    goto LABEL_68;
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
    goto LABEL_33;
  v19 = a2 - v16;
  v20 = (__int64)a1 + v16;
  if ( *(_DWORD *)((char *)a1 + v16) != 3 || v19 < 0x2E )
    goto LABEL_10;
  v21 = *(unsigned int *)(v20 + 20);
  v22 = v19 - v21;
  v23 = *(_DWORD *)(v21 + v20);
  if ( v23 == 2 )
  {
    if ( v22 < 0x16 )
      goto LABEL_10;
    PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath((PCWSTR)(v21 + v20 + 20));
    if ( PartitionVhdFilePath )
    {
      ExFreePoolWithTag(PartitionVhdFilePath, 0x4B444342u);
LABEL_11:
      PartitionDevice = -1073741637;
      goto LABEL_7;
    }
  }
  else if ( v23 != 6 && (v23 != 8 || v22 < 0x22) && (v23 != 1 || v22 < 0x14) )
  {
    goto LABEL_10;
  }
  PartitionDevice = BiConvertNtDeviceToBootEnvironment(v20, v19, 0LL, &Src);
  if ( PartitionDevice >= 0 )
  {
    v18 = 40;
    v17 = *((_DWORD *)Src + 2) + 70;
LABEL_33:
    v25 = -1LL;
    if ( *((_DWORD *)a1 + 5) == 1 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a1[v26 + 16] );
      v17 += 2 * v26;
    }
    v27 = (char *)ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    v7 = v27;
    if ( !v27 )
    {
      v5 = P;
      PartitionDevice = -1073741670;
      goto LABEL_7;
    }
    memset(v27, 0, v17);
    *(_DWORD *)v7 = 8;
    *((_DWORD *)v7 + 2) = v17;
    if ( *((_DWORD *)a1 + 5) )
    {
      *((_DWORD *)v7 + 4) = 1;
      v29 = -1LL;
      do
        ++v29;
      while ( a1[v29 + 16] );
      wcscpy_s((wchar_t *)v7 + 14, v29 + 1, a1 + 16);
      do
        ++v25;
      while ( a1[v25 + 16] );
      v28 = 2 * v25 + 30;
    }
    else
    {
      *((_DWORD *)v7 + 4) = 0;
      v28 = 30;
      *((_DWORD *)v7 + 5) = *((_DWORD *)a1 + 7);
    }
    if ( Src )
    {
      v30 = &v7[v28];
      *(_DWORD *)v30 = 0;
      v31 = *((_DWORD *)Src + 2);
      *((_DWORD *)v30 + 4) = 6;
      *((_DWORD *)v30 + 2) = v18 + v31;
      memmove(&v30[v18], Src, *((unsigned int *)Src + 2));
      *((_DWORD *)v7 + 6) = v28;
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
