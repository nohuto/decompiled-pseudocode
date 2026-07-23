/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x180076FF4
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMapping @ 0x180076F70 (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     memcmp @ 0x180093CC0 (memcmp.c)
 *     ZwAreMappedFilesTheSame @ 0x1800A1470 (ZwAreMappedFilesTheSame.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        PVOID File2MappedAsFile,
        void *Buf1,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  unsigned __int64 Root; // rax
  _QWORD *i; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  unsigned __int64 v12; // rcx
  volatile signed __int32 *v13; // rdi
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-28h] BYREF

  Root = (unsigned __int64)LdrpMappingInfoIndex.Root;
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 && LdrpMappingInfoIndex.Root )
    Root = (unsigned __int64)&LdrpMappingInfoIndex ^ (unsigned __int64)LdrpMappingInfoIndex.Root;
  i = 0LL;
  if ( Root )
  {
    v10 = *a3;
    while ( 1 )
    {
      if ( v10 < *(_DWORD *)(Root - 96) )
        goto LABEL_11;
      if ( v10 <= *(_DWORD *)(Root - 96) )
      {
        v11 = *(_DWORD *)(Root - 160);
        if ( a3[1] < v11 )
          goto LABEL_11;
        if ( a3[1] <= v11 )
          break;
      }
      v12 = *(_QWORD *)(Root + 8);
LABEL_12:
      if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 && v12 )
        Root ^= v12;
      else
        Root = v12;
      if ( !Root )
        goto LABEL_18;
    }
    i = (_QWORD *)Root;
LABEL_11:
    v12 = *(_QWORD *)Root;
    goto LABEL_12;
  }
LABEL_18:
  while ( i )
  {
    v13 = (volatile signed __int32 *)(i - 28);
    if ( RtlImageNtHeaderEx(3u, (PVOID)*(i - 22), 0LL, &OutHeaders) >= 0
      && !memcmp(Buf1, OutHeaders, 0x30uLL)
      && ZwAreMappedFilesTheSame(*((PVOID *)v13 + 6), File2MappedAsFile) >= 0 )
    {
      v19 = *((_QWORD *)v13 + 19);
      if ( *(_DWORD *)(v19 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v19 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement(v13 + 69);
      *a4 = v13;
      return i == 0LL ? 0xC0000135 : 0;
    }
    v14 = (_QWORD **)i[1];
    v15 = i;
    if ( v14 )
    {
      v16 = *v14;
      for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
        i = v16;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v15 )
          break;
        v15 = i;
      }
    }
    if ( !i )
      return i == 0LL ? 0xC0000135 : 0;
    v17 = *((_DWORD *)i - 24);
    if ( *a3 >= v17 && *a3 <= v17 )
    {
      v18 = *((_DWORD *)i - 40);
      if ( a3[1] >= v18 && a3[1] <= v18 )
        continue;
    }
    i = 0LL;
  }
  return i == 0LL ? 0xC0000135 : 0;
}
