/*
 * XREFs of BiCreateMergedBootEntry @ 0x1408F4238
 * Callers:
 *     BiUpdateEfiEntry @ 0x1408F5E88 (BiUpdateEfiEntry.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiGetDeviceFromEfiPath @ 0x1408F4DBC (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1408F4F48 (BiGetFilePathFromEfiPath.c)
 *     BiTranslateFilePath @ 0x1408F5A48 (BiTranslateFilePath.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, char *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  _WORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // r12
  _DWORD *v9; // rdi
  _WORD *v10; // r14
  _FILE_PATH *v11; // r15
  signed int DeviceFromEfiPath; // ebx
  int FilePathFromEfiPath; // eax
  __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // rax
  SIZE_T v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  _FILE_PATH *PoolWithTag; // rax
  __int64 v23; // rbx
  void *v24; // rdx
  size_t v25; // r8
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // r8d
  unsigned int v29; // eax
  int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // ebx
  _DWORD *v33; // rax
  _DWORD *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // eax
  char v38; // [rsp+20h] [rbp-30h]
  _DWORD Size[3]; // [rsp+24h] [rbp-2Ch] BYREF
  size_t v40; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v41; // [rsp+38h] [rbp-18h]
  void *Src; // [rsp+40h] [rbp-10h]
  char *v43; // [rsp+98h] [rbp+48h]
  char v44; // [rsp+A0h] [rbp+50h]

  v43 = a2;
  v5 = a4;
  v6 = 0xFFFFFFFFLL;
  Src = 0LL;
  v7 = -1LL;
  v41 = 0LL;
  v44 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v38 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a3 )
  {
    if ( *a3 == 5 )
      return 3221225486LL;
    if ( *a3 != 2 )
      return 3221225485LL;
    Src = a3 + 5;
  }
  else
  {
    v9 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    if ( !v5 )
      goto LABEL_28;
    v41 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    DeviceFromEfiPath = BiGetDeviceFromEfiPath(v9 + 3);
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_37;
    Src = (char *)Src + 20;
    v5 = a4;
  }
  if ( v5 )
  {
    v10 = v5;
    goto LABEL_14;
  }
  v9 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
  v41 = v9;
  FilePathFromEfiPath = BiGetFilePathFromEfiPath(v9 + 3, &Size[1], &v40, v6);
  v10 = *(_WORD **)&Size[1];
  DeviceFromEfiPath = FilePathFromEfiPath;
  if ( FilePathFromEfiPath >= 0 )
  {
    v38 = 1;
LABEL_14:
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)Src + v15) );
    v16 = 2 * v15 + 2;
    v17 = -1LL;
    Size[1] = v16;
    do
      ++v17;
    while ( v10[v17] );
    v18 = 0xFFFFFFFFLL;
    LODWORD(v40) = 2 * v17 + 2;
    v19 = -1;
    v20 = v16 + v40;
    if ( v16 + (unsigned int)v40 >= v16 )
      v19 = v16 + v40;
    DeviceFromEfiPath = v20 < v16 ? 0xC0000095 : 0;
    if ( v20 < v16 )
      goto LABEL_37;
    v21 = v19 + 12;
    if ( v19 + 12 >= v19 )
      v18 = v21;
    DeviceFromEfiPath = v21 < v19 ? 0xC0000095 : 0;
    Size[0] = v18;
    if ( v21 < v19 )
      goto LABEL_37;
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_25:
      DeviceFromEfiPath = -1073741670;
      goto LABEL_37;
    }
    v23 = Size[1];
    v24 = Src;
    v25 = Size[1];
    PoolWithTag->Version = 1;
    PoolWithTag->Length = Size[0];
    PoolWithTag->Type = 3;
    memmove(PoolWithTag->FilePath, v24, v25);
    memmove(&v11->FilePath[v23], v10, (unsigned int)v40);
    v26 = BiTranslateFilePath(v11, 4u);
    v9 = v41;
    DeviceFromEfiPath = v26;
    if ( v26 < 0 )
      goto LABEL_37;
    a2 = v43;
    LODWORD(v6) = -1;
    v44 = 1;
LABEL_28:
    if ( !a2 )
    {
      a2 = (char *)a1 + (unsigned int)a1[4];
      v43 = a2;
    }
    do
      ++v7;
    while ( *(_WORD *)&a2[2 * v7] );
    v27 = a1[6];
    v28 = 2 * v7 + 2;
    Size[0] = v28;
    v29 = v27 + v28;
    if ( v27 + v28 >= v27 )
      LODWORD(v6) = v27 + v28;
    DeviceFromEfiPath = v29 < v27 ? 0xC0000095 : 0;
    if ( v29 < v27 )
      goto LABEL_37;
    v30 = v9[1];
    v31 = v30 + v6 + 36;
    DeviceFromEfiPath = v31 < (unsigned int)v6 ? 0xC0000095 : 0;
    if ( v31 < (unsigned int)v6 )
      goto LABEL_37;
    LODWORD(v40) = (v27 + 31) & 0xFFFFFFFC;
    Size[1] = (v28 + v40 + 3) & 0xFFFFFFFC;
    v32 = v30 + Size[1];
    v33 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v30 + Size[1]), 0x4B444342u);
    v34 = v33;
    if ( v33 )
    {
      memset(v33, 0, v32);
      v35 = (unsigned int)v40;
      v34[1] = v32;
      v36 = Size[1];
      *v34 = 1;
      v34[2] = a1[2];
      v37 = a1[3];
      v34[4] = v35;
      v34[3] = v37;
      v34[5] = v36;
      v34[6] = a1[6];
      memmove((char *)v34 + v35, v43, Size[0]);
      memmove((char *)v34 + v36, v9, (unsigned int)v9[1]);
      memmove(v34 + 7, a1 + 7, (unsigned int)a1[6]);
      DeviceFromEfiPath = 0;
      *a5 = v34;
      goto LABEL_37;
    }
    goto LABEL_25;
  }
LABEL_37:
  if ( v44 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  if ( v38 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B444342u);
  return (unsigned int)DeviceFromEfiPath;
}
