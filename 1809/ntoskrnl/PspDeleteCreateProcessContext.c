/*
 * XREFs of PspDeleteCreateProcessContext @ 0x140624608
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x140623100 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x140623378 (PspBuildCreateProcessContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 */

void __fastcall PspDeleteCreateProcessContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  PVOID *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  unsigned __int64 v16; // rdi
  PVOID *v17; // rdx
  void *v18; // rcx

  v2 = *(void **)(a1 + 168);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = *(void **)(a1 + 176);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(void **)(a1 + 128);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x72437350u);
  v6 = *(void **)(a1 + 184);
  if ( v6 )
    ObCloseHandle(v6, 0);
  v7 = *(void **)(a1 + 192);
  if ( v7 )
    ObCloseHandle(v7, 0);
  v8 = *(void **)(a1 + 200);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 208), 0);
  v9 = *(void **)(a1 + 280);
  if ( v9 && v9 != (void *)(a1 + 264) )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 296);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(PVOID **)(a1 + 392);
  if ( v11 )
  {
    v16 = 0LL;
    if ( *(_DWORD *)(a1 + 404) )
    {
      v17 = *(PVOID **)(a1 + 392);
      do
      {
        if ( v11[v16] )
        {
          ObfDereferenceObjectWithTag(v11[v16], 0x6C4A7350u);
          v11 = *(PVOID **)(a1 + 392);
          v17 = v11;
        }
        ++v16;
      }
      while ( v16 < *(unsigned int *)(a1 + 404) );
      v11 = v17;
    }
    ExFreePoolWithTag(v11, 0x6C4A7350u);
  }
  v12 = *(void **)(a1 + 384);
  if ( v12 )
  {
    memset(v12, 0, *(unsigned int *)(a1 + 400));
    ExFreePoolWithTag(*(PVOID *)(a1 + 384), 0);
  }
  v13 = *(void **)(a1 + 416);
  if ( v13 )
  {
    memset(v13, 0, *(unsigned int *)(a1 + 424));
    ExFreePoolWithTag(*(PVOID *)(a1 + 416), 0);
  }
  v14 = *(_QWORD *)(a1 + 432);
  if ( v14 )
  {
    v18 = *(void **)(v14 + 8);
    if ( v18 || (v18 = *(void **)(v14 + 24)) != 0LL )
      ExFreePoolWithTag(v18, 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 432), 0);
  }
  v15 = *(void **)(a1 + 464);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a1 + 464) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 232));
}
