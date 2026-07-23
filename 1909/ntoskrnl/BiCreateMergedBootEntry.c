/*
 * XREFs of BiCreateMergedBootEntry @ 0x1409306A8
 * Callers:
 *     BiUpdateEfiEntry @ 0x140932330 (BiUpdateEfiEntry.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiGetDeviceFromEfiPath @ 0x140931238 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1409313C4 (BiGetFilePathFromEfiPath.c)
 *     BiTranslateFilePath @ 0x140931EE8 (BiTranslateFilePath.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, _WORD *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  __int64 v5; // r12
  _WORD *v6; // rax
  _WORD *v7; // rbx
  _DWORD *v9; // rdi
  _WORD *v10; // r15
  _FILE_PATH *v11; // r14
  int DeviceFromEfiPath; // ebx
  int FilePathFromEfiPath; // eax
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // ebx
  _FILE_PATH *PoolWithTag; // rax
  void *v21; // rdx
  int v22; // eax
  unsigned int v23; // edx
  int v24; // r8d
  int v25; // r9d
  unsigned int v26; // r12d
  PVOID v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rcx
  size_t v30; // r8
  _DWORD *v31; // r12
  char v32; // [rsp+20h] [rbp-30h]
  _DWORD Size[3]; // [rsp+24h] [rbp-2Ch] BYREF
  size_t v34; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v35; // [rsp+38h] [rbp-18h]
  void *Src; // [rsp+40h] [rbp-10h]
  char v38; // [rsp+A0h] [rbp+50h]

  v5 = -1LL;
  Src = 0LL;
  v6 = a4;
  v35 = 0LL;
  v7 = a2;
  v38 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v32 = 0;
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
    if ( !a4 )
      goto LABEL_24;
    v35 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    DeviceFromEfiPath = BiGetDeviceFromEfiPath(v9 + 3);
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_32;
    Src = (char *)Src + 20;
    v6 = a4;
  }
  if ( v6 )
  {
    v10 = v6;
    goto LABEL_14;
  }
  v9 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
  v35 = v9;
  FilePathFromEfiPath = BiGetFilePathFromEfiPath(v9 + 3, &Size[1], &v34);
  v10 = *(_WORD **)&Size[1];
  DeviceFromEfiPath = FilePathFromEfiPath;
  if ( FilePathFromEfiPath >= 0 )
  {
    v32 = 1;
LABEL_14:
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)Src + v15) );
    v16 = 2 * v15 + 2;
    v17 = -1LL;
    Size[0] = v16;
    do
      ++v17;
    while ( v10[v17] );
    Size[1] = 2 * v17 + 2;
    v18 = v16 + Size[1];
    if ( v16 + Size[1] < v16 )
      goto LABEL_31;
    v19 = v18 + 12;
    if ( v18 + 12 < v18 )
      goto LABEL_31;
    PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B444342u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_21:
      DeviceFromEfiPath = -1073741670;
      goto LABEL_32;
    }
    v21 = Src;
    PoolWithTag->Length = v19;
    PoolWithTag->Version = 1;
    PoolWithTag->Type = 3;
    memmove(PoolWithTag->FilePath, v21, Size[0]);
    memmove(&v11->FilePath[Size[0]], v10, Size[1]);
    v22 = BiTranslateFilePath(v11, 4u);
    v9 = v35;
    DeviceFromEfiPath = v22;
    if ( v22 < 0 )
      goto LABEL_32;
    v7 = a2;
    v38 = 1;
LABEL_24:
    if ( !v7 )
      v7 = (_WORD *)((char *)a1 + (unsigned int)a1[4]);
    do
      ++v5;
    while ( v7[v5] );
    v23 = a1[6];
    v24 = 2 * v5 + 2;
    LODWORD(v34) = v24;
    if ( v23 + v24 >= v23 )
    {
      v25 = v9[1];
      if ( v25 + v23 + v24 + 36 >= v23 + v24 )
      {
        Size[1] = (v23 + 31) & 0xFFFFFFFC;
        Size[0] = (v24 + Size[1] + 3) & 0xFFFFFFFC;
        v26 = v25 + Size[0];
        v27 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v25 + Size[0]), 0x4B444342u);
        Src = v27;
        if ( v27 )
        {
          memset(v27, 0, v26);
          v28 = Src;
          v29 = Size[1];
          v30 = (unsigned int)v34;
          *((_DWORD *)Src + 1) = v26;
          v31 = Src;
          *v28 = 1;
          v31[2] = a1[2];
          v31[3] = a1[3];
          v31[4] = v29;
          v31[5] = Size[0];
          v31[6] = a1[6];
          memmove((char *)v31 + v29, v7, v30);
          memmove((char *)v31 + Size[0], v9, (unsigned int)v9[1]);
          memmove(v31 + 7, a1 + 7, (unsigned int)a1[6]);
          DeviceFromEfiPath = 0;
          *a5 = v31;
          goto LABEL_32;
        }
        goto LABEL_21;
      }
    }
LABEL_31:
    DeviceFromEfiPath = -1073741675;
  }
LABEL_32:
  if ( v38 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  if ( v32 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B444342u);
  return (unsigned int)DeviceFromEfiPath;
}
