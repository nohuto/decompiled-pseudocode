/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x140712E64
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140712E64 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x140715368 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x140715DA4 (BiVerifyBootPartition.c)
 * Callees:
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140712E64 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x140715DA4 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1408F2888 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(_WORD *Src, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  int v6; // r8d
  char *v7; // rbx
  SIZE_T v10; // r15
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  signed int v14; // edi
  __int64 v15; // rsi
  void *v16; // r12
  __int64 v17; // rsi
  char *v18; // rax
  size_t v19; // r8
  char *v20; // rcx
  PVOID v21; // rdx
  void *v22; // r13
  int v24; // r8d
  SIZE_T v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  int NtPartitionPath; // eax
  __int64 v29; // rax
  PVOID PoolWithTag; // rax
  size_t v31; // r8
  char *v32; // rax
  const wchar_t *v33; // r8
  char *v34; // rax
  unsigned int v35; // esi
  char *v36; // rax
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rdi
  __int64 v40; // rax
  char *v41; // rsi
  bool v42; // zf
  unsigned __int64 v43; // rcx
  char *v44; // r12
  __int64 v45; // rsi
  unsigned int v46; // ecx
  unsigned int v47; // esi
  unsigned int v48; // edi
  unsigned int v49; // r13d
  char *v50; // rax
  signed int v51; // eax
  unsigned int Size; // [rsp+30h] [rbp-38h] BYREF
  int Size_4; // [rsp+34h] [rbp-34h]
  size_t v54; // [rsp+38h] [rbp-30h] BYREF
  PVOID v55; // [rsp+40h] [rbp-28h]
  void *Srca; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+50h] [rbp-18h]
  char *v58; // [rsp+58h] [rbp-10h]
  char v59; // [rsp+B0h] [rbp+48h]

  P = 0LL;
  v6 = *(_DWORD *)Src;
  v7 = 0LL;
  v58 = 0LL;
  Srca = 0LL;
  v55 = 0LL;
  LODWORD(v10) = 0;
  v59 = 0;
  Size_4 = 0;
  if ( v6 )
  {
    v11 = v6 - 2;
    if ( v11 )
    {
      v12 = v11 - 3;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
          goto LABEL_5;
        v24 = v13 - 1;
        if ( v24 )
        {
          if ( v24 != 1 )
            goto LABEL_87;
          v25 = 34LL;
          v26 = -1LL;
          LODWORD(v10) = 34;
          Size_4 = 34;
          if ( *((_DWORD *)Src + 4) == 1 )
          {
            v10 = -1LL;
            do
              ++v10;
            while ( Src[v10 + 14] );
            LODWORD(v10) = 2 * v10 + 34;
            Size_4 = v10;
            v25 = (unsigned int)v10;
          }
          v27 = *((unsigned int *)Src + 6);
          Size = 0;
          if ( (_DWORD)v27 )
          {
            if ( (a3 & 0x20) != 0 )
              goto LABEL_92;
            NtPartitionPath = BiGetNtPartitionPath(Src, &Srca);
            v22 = Srca;
            P = Srca;
            if ( NtPartitionPath >= 0 )
            {
              v59 = 1;
              v29 = -1LL;
              do
                ++v29;
              while ( *((_WORD *)Srca + v29) );
              LODWORD(v54) = 2 * v29 + 2;
              Size = 2 * v29 + 22;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x4B444342u);
              v55 = PoolWithTag;
              if ( !PoolWithTag )
              {
                v14 = -1073741670;
                goto LABEL_19;
              }
              memset(PoolWithTag, 0, Size);
              v31 = (unsigned int)v54;
              *(_DWORD *)v55 = 2;
              memmove((char *)v55 + 20, v22, v31);
            }
            if ( !v55 )
            {
LABEL_92:
              if ( (unsigned int)(*((_DWORD *)Src + 2) - v27) < 0x4C )
                goto LABEL_87;
              v14 = BiConvertBootEnvironmentDeviceToNt((char *)Src + v27 + 40, (__int64)&Size);
              if ( v14 < 0 )
                goto LABEL_84;
            }
            LODWORD(v27) = v25;
            LODWORD(v10) = v25 + Size;
            v25 = (unsigned int)v25 + Size;
          }
          v32 = (char *)ExAllocatePoolWithTag(PagedPool, v25, 0x4B444342u);
          v7 = v32;
          if ( !v32 )
            goto LABEL_21;
          memset(v32, 0, v25);
          *(_DWORD *)v7 = 8;
          if ( *((_DWORD *)Src + 4) )
          {
            *((_DWORD *)v7 + 5) = 1;
            v33 = Src + 14;
            do
              ++v26;
            while ( v33[v26] );
            wcscpy_s((wchar_t *)v7 + 16, v26 + 1, v33);
          }
          else
          {
            *((_DWORD *)v7 + 5) = 0;
            *((_DWORD *)v7 + 7) = *((_DWORD *)Src + 5);
          }
          if ( v55 )
          {
            *((_DWORD *)v7 + 6) = v27;
            v19 = Size;
            v21 = v55;
            v20 = &v7[(unsigned int)v27];
LABEL_12:
            memmove(v20, v21, v19);
          }
        }
        else
        {
          LODWORD(v10) = 36;
          v34 = (char *)ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
          v7 = v34;
          if ( !v34 )
            goto LABEL_21;
          memset(v34, 0, 0x24uLL);
          *(_DWORD *)v7 = 7;
          *(_OWORD *)(v7 + 20) = *((_OWORD *)Src + 2);
        }
      }
      else
      {
        LODWORD(v10) = 20;
        v7 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
        if ( !v7 )
          goto LABEL_21;
        *(_QWORD *)v7 = 0LL;
        *((_QWORD *)v7 + 1) = 0LL;
        *((_DWORD *)v7 + 4) = 0;
        *(_DWORD *)v7 = 1;
      }
      v14 = 0;
      goto LABEL_14;
    }
LABEL_5:
    v14 = BiVerifyBootPartition((_DWORD)Src, 0, 0, 0, 0LL, (__int64)&v54);
    if ( v14 < 0 )
      goto LABEL_84;
    v15 = (unsigned int)v54;
    if ( (a3 & 0x20) != 0 && (_DWORD)v54 )
    {
      v14 = -1073741823;
      goto LABEL_55;
    }
    v14 = BiGetNtPartitionPath(Src, &Srca);
    if ( v14 < 0 )
    {
      P = Srca;
LABEL_55:
      if ( !(_DWORD)v15 )
        goto LABEL_83;
      v14 = BiConvertBootEnvironmentDeviceToNt((char *)Src + v15, (__int64)&Size);
      if ( v14 >= 0 )
      {
        LODWORD(v10) = Size + 34;
        Size_4 = Size + 34;
        v35 = Size + 34;
        v36 = (char *)ExAllocatePoolWithTag(PagedPool, Size + 34, 0x4B444342u);
        v58 = v36;
        v7 = v36;
        if ( v36 )
        {
          memset(v36, 0, v35);
          *(_DWORD *)v7 = 8;
          v37 = 301989890;
          *((_DWORD *)v7 + 5) = 0;
          if ( a2 )
          {
            if ( a2 == 553648129 )
            {
              v37 = 570425346;
            }
            else if ( a2 == 285212739 )
            {
              v37 = 301989956;
            }
          }
          *((_DWORD *)v7 + 7) = v37;
          *((_DWORD *)v7 + 6) = 34;
          memmove(v7 + 34, v55, Size);
          goto LABEL_83;
        }
        goto LABEL_21;
      }
      goto LABEL_84;
    }
    v16 = Srca;
    v17 = -1LL;
    P = Srca;
    v59 = 1;
    do
      ++v17;
    while ( *((_WORD *)Srca + v17) );
    LODWORD(v10) = 2 * v17 + 22;
    v18 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x4B444342u);
    v7 = v18;
    if ( !v18 )
      goto LABEL_21;
    memset(v18, 0, (unsigned int)v10);
    v19 = (unsigned int)(2 * v17 + 2);
    v20 = v7 + 20;
    v21 = v16;
    *(_DWORD *)v7 = 2;
    goto LABEL_12;
  }
  v38 = *((_DWORD *)Src + 4);
  if ( v38 != 3 && v38 != 5 )
    goto LABEL_87;
  v39 = 18LL;
  if ( v38 != 3 )
    v39 = 8LL;
  v40 = 52LL;
  v41 = (char *)&Src[v39 + 8];
  v42 = v38 == 3;
  v43 = *((unsigned int *)Src + 2);
  if ( !v42 )
    v40 = 32LL;
  if ( v43 < v40 + 12 || *((_DWORD *)v41 + 2) > (unsigned int)(v43 - v40) )
  {
    v14 = -1073741811;
    goto LABEL_83;
  }
  v14 = BiConvertBootEnvironmentDeviceToNt(&Src[v39 + 8], (__int64)&Size);
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)v55 == 3 )
      goto LABEL_87;
    v44 = &v41[*((unsigned int *)v41 + 2)];
    P = v44;
    v45 = -1LL;
    do
      ++v45;
    while ( *(_WORD *)&v44[2 * v45] );
    v46 = -1;
    v47 = 2 * v45 + 2;
    if ( v47 + 32 >= 0x20 )
      v46 = v47 + 32;
    v14 = v47 >= 0xFFFFFFE0 ? 0xC0000095 : 0;
    if ( v47 + 32 < 0x20 || (v14 = v46 + Size < v46 ? 0xC0000095 : 0, v46 + Size < v46) )
    {
LABEL_83:
      if ( v14 < 0 )
        goto LABEL_84;
LABEL_14:
      *a4 = v7;
      *a5 = v10;
      goto LABEL_15;
    }
    v48 = (v47 + 31) & 0xFFFFFFF8;
    v10 = Size + v48;
    v49 = Size + v48;
    v50 = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
    v7 = v50;
    if ( v50 )
    {
      memset(v50, 0, v49);
      memmove(v7 + 24, v44, v47);
      *((_DWORD *)v7 + 5) = v48;
      memmove(&v7[v48], v55, Size);
      *(_DWORD *)v7 = 4 - (*((_DWORD *)Src + 4) != 3);
      v14 = 0;
      goto LABEL_14;
    }
LABEL_21:
    v14 = -1073741670;
    goto LABEL_15;
  }
LABEL_84:
  if ( v14 == -1073741670 )
    goto LABEL_88;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
LABEL_87:
  v51 = BiConvertBootEnvironmentDeviceToUnknown(Src);
  v7 = v58;
  v14 = v51;
  LODWORD(v10) = Size_4;
LABEL_88:
  if ( v14 >= 0 )
    goto LABEL_14;
LABEL_15:
  if ( v55 )
    ExFreePoolWithTag(v55, 0x4B444342u);
  if ( v59 )
  {
    v22 = P;
LABEL_19:
    ExFreePoolWithTag(v22, 0x4B444342u);
  }
  return (unsigned int)v14;
}
