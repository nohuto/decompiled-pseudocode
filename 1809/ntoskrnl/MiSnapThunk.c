/*
 * XREFs of MiSnapThunk @ 0x14067A5F4
 * Callers:
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     strchr @ 0x140197000 (strchr.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 *     RtlPrefixString @ 0x14067A950 (RtlPrefixString.c)
 */

__int64 __fastcall MiSnapThunk(char *a1, __int64 a2, __int64 *a3, char **a4, unsigned __int16 *a5)
{
  char *v9; // rax
  char *v10; // r10
  __int64 v11; // rdx
  unsigned __int16 *v12; // rcx
  unsigned __int16 *v13; // rsi
  char *v14; // r14
  unsigned int v15; // edx
  char *v16; // rdi
  unsigned int v17; // r9d
  __int64 v18; // r11
  unsigned __int8 *v19; // rax
  char *v20; // rcx
  int v21; // r8d
  int v22; // edx
  unsigned __int16 v23; // dx
  char *v24; // rbx
  int v26; // r8d
  int v27; // ecx
  unsigned __int16 *v28; // rax
  int v29; // edx
  char *v30; // r11
  char v31; // r9
  int v32; // eax
  unsigned __int16 v33; // r14
  PVOID *v34; // rdi
  unsigned int v35; // esi
  char *v36; // r15
  __int64 v37; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v39; // r14
  PVOID v40; // rcx
  ANSI_STRING Size; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  v9 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, (PULONG)&Size.Length);
  v10 = v9;
  if ( !v9 )
    return 3221226083LL;
  v11 = *a3;
  v12 = a5;
  if ( *a3 >= 0 )
  {
    if ( !a5 )
      v12 = (unsigned __int16 *)(v11 + a2);
LABEL_5:
    v13 = v12 + 1;
    v14 = &a1[*((unsigned int *)v9 + 8)];
    v15 = *v12;
    v16 = &a1[*((unsigned int *)v9 + 9)];
    v17 = *((_DWORD *)v9 + 6);
    if ( v15 < v17 )
    {
      v18 = (unsigned __int16)v15;
      v19 = (unsigned __int8 *)(v12 + 1);
      v20 = (char *)(&a1[*(unsigned int *)&v14[4 * (unsigned __int16)v15]] - (char *)v13);
      do
      {
        v21 = (unsigned __int8)v20[(_QWORD)v19];
        v22 = *v19 - v21;
        if ( v22 )
          break;
        ++v19;
      }
      while ( v21 );
      if ( !v22 )
      {
        v23 = *(_WORD *)&v16[2 * v18];
        goto LABEL_11;
      }
    }
    v26 = 0;
    if ( v17 )
    {
      v27 = v17 - 1;
      if ( (int)(v17 - 1) >= 0 )
      {
        do
        {
          v28 = v13;
          v29 = (v27 + v26) >> 1;
          v30 = (char *)(&a1[*(unsigned int *)&v14[4 * v29]] - (char *)v13);
          while ( 1 )
          {
            v31 = *(_BYTE *)v28;
            if ( *(_BYTE *)v28 != v30[(_QWORD)v28] )
              break;
            v28 = (unsigned __int16 *)((char *)v28 + 1);
            if ( !v31 )
            {
              v32 = 0;
              goto LABEL_20;
            }
          }
          v32 = *(_BYTE *)v28 < v30[(_QWORD)v28] ? -1 : 1;
LABEL_20:
          if ( v32 < 0 )
          {
            if ( !v29 )
              return 3221226083LL;
            v27 = v29 - 1;
          }
          else
          {
            if ( v32 <= 0 )
              break;
            v26 = v29 + 1;
          }
        }
        while ( v27 >= v26 );
        if ( v27 >= v26 )
        {
          v23 = *(_WORD *)&v16[2 * v29];
          goto LABEL_11;
        }
      }
    }
    return 3221226083LL;
  }
  if ( a5 )
    goto LABEL_5;
  v23 = v11 - *((_WORD *)v9 + 8);
LABEL_11:
  if ( (unsigned int)v23 >= *((_DWORD *)v10 + 5) )
    return 3221226082LL;
  v24 = &a1[*(unsigned int *)&a1[4 * v23 + *((unsigned int *)v10 + 7)]];
  *a4 = v24;
  if ( v24 <= v10 || v24 >= &v10[*(unsigned int *)&Size.Length] )
    return 0LL;
  Size.Buffer = v24;
  v33 = 1 - (_WORD)v24 + (unsigned __int16)strchr(v24, 46);
  Size.Length = v33;
  Size.MaximumLength = v33;
  if ( RtlAnsiStringToUnicodeString(&DestinationString, &Size, 1u) < 0 )
    return 3221226083LL;
  v34 = (PVOID *)PsLoadedModuleList;
  v35 = -1073741213;
  while ( v34 != &PsLoadedModuleList )
  {
    if ( RtlPrefixString((const STRING *)&DestinationString, (const STRING *)(v34 + 11), 1u) )
    {
      v36 = &v24[v33];
      v37 = -1LL;
      do
        ++v37;
      while ( v36[v37] );
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v37 + 5, 0x20206D4Du);
      v39 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag + 1, v36, v37 + 1);
        *v39 = 0;
        v40 = v34[6];
        *(_QWORD *)&Size.Length = 0LL;
        v35 = MiSnapThunk((_DWORD)v40, a2, (unsigned int)&Size, (unsigned int)&Size, (__int64)v39);
        ExFreePoolWithTag(v39, 0);
        *a4 = *(char **)&Size.Length;
      }
      break;
    }
    v34 = (PVOID *)*v34;
  }
  RtlFreeAnsiString(&DestinationString);
  return v35;
}
