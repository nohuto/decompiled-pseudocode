/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x14073DC24
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14073DC24 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x1407403C8 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x140740ECC (BiVerifyBootPartition.c)
 * Callees:
 *     wcscpy_s @ 0x1401A6C50 (wcscpy_s.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14073DC24 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14073DD94 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x140740ECC (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14092ECD4 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(_OWORD *Src, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  char *v8; // r13
  char *v9; // rbx
  int v10; // r8d
  SIZE_T v11; // r15
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // edi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  char *v19; // rax
  int v21; // r8d
  SIZE_T v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  int NtPartitionPath; // eax
  __int64 v26; // rax
  PVOID v27; // rax
  size_t v28; // r8
  char *v29; // rax
  const wchar_t *v30; // r8
  char *PoolWithTag; // rax
  unsigned int v32; // esi
  char *v33; // rax
  int v34; // eax
  int v35; // ecx
  __int64 v36; // rdi
  __int64 v37; // rax
  char *v38; // rsi
  bool v39; // zf
  unsigned __int64 v40; // rcx
  __int64 v41; // rsi
  unsigned int v42; // edi
  unsigned int v43; // ecx
  int v44; // esi
  unsigned int v45; // r12d
  char *v46; // rax
  int v47; // eax
  unsigned int Size; // [rsp+30h] [rbp-38h] BYREF
  int Size_4; // [rsp+34h] [rbp-34h]
  size_t v50; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h]
  void *Srca; // [rsp+48h] [rbp-20h] BYREF
  char *v53; // [rsp+50h] [rbp-18h]
  char v54; // [rsp+B0h] [rbp+48h]

  v8 = 0LL;
  Srca = 0LL;
  P = 0LL;
  v9 = 0LL;
  v10 = *(_DWORD *)Src;
  LODWORD(v11) = 0;
  v54 = 0;
  v53 = 0LL;
  Size_4 = 0;
  if ( v10 )
  {
    v12 = v10 - 2;
    if ( v12 )
    {
      v13 = v12 - 3;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
          goto LABEL_5;
        v21 = v14 - 1;
        if ( !v21 )
        {
          LODWORD(v11) = 36;
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
          v9 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_19;
          memset(PoolWithTag, 0, 0x24uLL);
          *(_DWORD *)v9 = 7;
          *(_OWORD *)(v9 + 20) = Src[2];
          goto LABEL_12;
        }
        if ( v21 != 1 )
          goto LABEL_83;
        v22 = 34LL;
        v23 = -1LL;
        LODWORD(v11) = 34;
        Size_4 = 34;
        if ( *((_DWORD *)Src + 4) == 1 )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( *((_WORD *)Src + v11 + 14) );
          LODWORD(v11) = 2 * v11 + 34;
          Size_4 = v11;
          v22 = (unsigned int)v11;
        }
        v24 = *((unsigned int *)Src + 6);
        Size = 0;
        if ( (_DWORD)v24 )
        {
          if ( (a3 & 0x20) != 0 )
            goto LABEL_88;
          NtPartitionPath = BiGetNtPartitionPath(Src, &Srca);
          v8 = (char *)Srca;
          if ( NtPartitionPath >= 0 )
          {
            v54 = 1;
            v26 = -1LL;
            do
              ++v26;
            while ( *((_WORD *)Srca + v26) );
            LODWORD(v50) = 2 * v26 + 2;
            Size = 2 * v26 + 22;
            v27 = ExAllocatePoolWithTag(PagedPool, Size, 0x4B444342u);
            P = v27;
            if ( !v27 )
            {
              v15 = -1073741670;
LABEL_17:
              ExFreePoolWithTag(v8, 0x4B444342u);
              return (unsigned int)v15;
            }
            memset(v27, 0, Size);
            v28 = (unsigned int)v50;
            *(_DWORD *)P = 2;
            memmove((char *)P + 20, v8, v28);
          }
          if ( !P )
          {
LABEL_88:
            if ( (unsigned int)(*((_DWORD *)Src + 2) - v24) < 0x4C )
              goto LABEL_83;
            v15 = BiConvertBootEnvironmentDeviceToNt((char *)Src + v24 + 40, (__int64)&Size);
            if ( v15 < 0 )
              goto LABEL_80;
          }
          LODWORD(v24) = v22;
          LODWORD(v11) = v22 + Size;
          v22 = (unsigned int)v22 + Size;
        }
        v29 = (char *)ExAllocatePoolWithTag(PagedPool, v22, 0x4B444342u);
        v9 = v29;
        if ( !v29 )
          goto LABEL_19;
        memset(v29, 0, v22);
        *(_DWORD *)v9 = 8;
        if ( *((_DWORD *)Src + 4) )
        {
          *((_DWORD *)v9 + 5) = 1;
          v30 = (const wchar_t *)Src + 14;
          do
            ++v23;
          while ( v30[v23] );
          wcscpy_s((wchar_t *)v9 + 16, v23 + 1, v30);
        }
        else
        {
          *((_DWORD *)v9 + 5) = 0;
          *((_DWORD *)v9 + 7) = *((_DWORD *)Src + 5);
        }
        if ( P )
        {
          *((_DWORD *)v9 + 6) = v24;
          memmove(&v9[(unsigned int)v24], P, Size);
        }
      }
      else
      {
        LODWORD(v11) = 20;
        v9 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
        if ( !v9 )
          goto LABEL_19;
        *(_QWORD *)v9 = 0LL;
        *((_QWORD *)v9 + 1) = 0LL;
        *((_DWORD *)v9 + 4) = 0;
        *(_DWORD *)v9 = 1;
      }
      v15 = 0;
      goto LABEL_13;
    }
LABEL_5:
    v15 = BiVerifyBootPartition((_DWORD)Src, 0, 0, 0, 0LL, (__int64)&v50);
    if ( v15 < 0 )
      goto LABEL_80;
    v16 = (unsigned int)v50;
    if ( (a3 & 0x20) != 0 && (_DWORD)v50 )
    {
      v15 = -1073741823;
LABEL_53:
      if ( !(_DWORD)v16 )
        goto LABEL_79;
      v15 = BiConvertBootEnvironmentDeviceToNt((char *)Src + v16, (__int64)&Size);
      if ( v15 >= 0 )
      {
        LODWORD(v11) = Size + 34;
        Size_4 = Size + 34;
        v32 = Size + 34;
        v33 = (char *)ExAllocatePoolWithTag(PagedPool, Size + 34, 0x4B444342u);
        v53 = v33;
        v9 = v33;
        if ( v33 )
        {
          memset(v33, 0, v32);
          *(_DWORD *)v9 = 8;
          *((_DWORD *)v9 + 5) = 0;
          v34 = 301989890;
          if ( a2 )
          {
            if ( a2 == 553648129 )
            {
              v34 = 570425346;
            }
            else if ( a2 == 285212739 )
            {
              v34 = 301989956;
            }
          }
          *((_DWORD *)v9 + 7) = v34;
          *((_DWORD *)v9 + 6) = 34;
          memmove(v9 + 34, P, Size);
LABEL_79:
          if ( v15 < 0 )
            goto LABEL_80;
LABEL_13:
          *a4 = v9;
          *a5 = v11;
          goto LABEL_14;
        }
LABEL_19:
        v15 = -1073741670;
        goto LABEL_14;
      }
      goto LABEL_80;
    }
    v17 = BiGetNtPartitionPath(Src, &Srca);
    v8 = (char *)Srca;
    v15 = v17;
    if ( v17 < 0 )
      goto LABEL_53;
    v54 = 1;
    v18 = -1LL;
    do
      ++v18;
    while ( *((_WORD *)Srca + v18) );
    LODWORD(v11) = 2 * v18 + 22;
    v19 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x4B444342u);
    v9 = v19;
    if ( !v19 )
      goto LABEL_19;
    memset(v19, 0, (unsigned int)v11);
    *(_DWORD *)v9 = 2;
    memmove(v9 + 20, v8, (unsigned int)(2 * v18 + 2));
LABEL_12:
    v15 = 0;
    goto LABEL_13;
  }
  v35 = *((_DWORD *)Src + 4);
  if ( v35 != 3 && v35 != 5 )
    goto LABEL_83;
  v36 = 36LL;
  if ( v35 != 3 )
    v36 = 16LL;
  v37 = 52LL;
  v38 = (char *)Src + v36 + 16;
  v39 = v35 == 3;
  v40 = *((unsigned int *)Src + 2);
  if ( !v39 )
    v37 = 32LL;
  if ( v40 < v37 + 12 || *((_DWORD *)v38 + 2) > (unsigned int)(v40 - v37) )
  {
    v15 = -1073741811;
    goto LABEL_79;
  }
  v15 = BiConvertBootEnvironmentDeviceToNt((char *)Src + v36 + 16, (__int64)&Size);
  if ( v15 >= 0 )
  {
    if ( *(_DWORD *)P == 3 )
      goto LABEL_83;
    v8 = &v38[*((unsigned int *)v38 + 2)];
    v41 = -1LL;
    do
      ++v41;
    while ( *(_WORD *)&v8[2 * v41] );
    v42 = 2 * v41 + 2;
    v43 = 2 * v41 + 34;
    if ( v43 < 0x20 || v43 + Size < v43 )
      goto LABEL_83;
    v44 = (2 * v41 + 33) & 0xFFFFFFF8;
    v11 = Size + v44;
    v45 = Size + v44;
    v46 = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x4B444342u);
    v9 = v46;
    if ( v46 )
    {
      memset(v46, 0, v45);
      memmove(v9 + 24, v8, v42);
      *((_DWORD *)v9 + 5) = v44;
      memmove(&v9[v44], P, Size);
      *(_DWORD *)v9 = 4 - (*((_DWORD *)Src + 4) != 3);
      v15 = 0;
      goto LABEL_13;
    }
    goto LABEL_19;
  }
LABEL_80:
  if ( v15 == -1073741670 )
    goto LABEL_84;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x4B444342u);
LABEL_83:
  v47 = BiConvertBootEnvironmentDeviceToUnknown(Src);
  v9 = v53;
  v15 = v47;
  LODWORD(v11) = Size_4;
LABEL_84:
  if ( v15 >= 0 )
    goto LABEL_13;
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  if ( v54 )
    goto LABEL_17;
  return (unsigned int)v15;
}
