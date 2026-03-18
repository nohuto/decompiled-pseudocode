/*
 * XREFs of EtwpWriteBufferCompressed @ 0x140908468
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140907A28 (EtwpSavePersistedLogger.c)
 * Callees:
 *     RtlCompressBuffer @ 0x14012B710 (RtlCompressBuffer.c)
 *     ZwWriteFile @ 0x1401C01D0 (ZwWriteFile.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, UCHAR *a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  int v5; // r10d
  UCHAR *v6; // r9
  ULONG v7; // r10d
  int v9; // esi
  NTSTATUS v10; // eax
  unsigned int v11; // ebp
  ULONG v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  ULONG v16; // ecx
  ULONG Length; // eax
  NTSTATUS v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  __int64 v23; // r9
  int v24; // edx
  int v25; // eax
  unsigned int v26; // edx
  int v27; // ecx
  int v28; // eax
  char *v29; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  ULONG v32; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 52);
  v4 = *(_QWORD *)(a1 + 40) + 72LL;
  v5 = *(_DWORD *)(a1 + 48) - v2;
  IoStatusBlock.Pointer = 0LL;
  v6 = (UCHAR *)(v2 + v4);
  IoStatusBlock.Information = 0LL;
  v7 = v5 - 72;
  if ( v7 >= *(_DWORD *)(a1 + 16) )
    v7 = *(_DWORD *)(a1 + 16);
  v9 = 0;
  v10 = RtlCompressBuffer(3u, a2 + 72, *((_DWORD *)a2 + 12) - 72, v6, v7, 0, &v32, *(PVOID *)(a1 + 32));
  v11 = v10;
  if ( v10 == -1073741789 )
  {
    v12 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 40) + *(unsigned int *)(a1 + 52)), a2, v12);
  }
  else
  {
    if ( v10 < 0 )
    {
      ++*(_DWORD *)(a1 + 24);
      return v11;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v13 = *(unsigned int *)(a1 + 52);
    v14 = *(_QWORD *)(a1 + 40);
    *(_OWORD *)(v13 + v14) = *(_OWORD *)a2;
    *(_OWORD *)(v13 + v14 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v13 + v14 + 32) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v13 + v14 + 48) = *((_OWORD *)a2 + 3);
    *(_QWORD *)(v13 + v14 + 64) = *((_QWORD *)a2 + 8);
    v12 = v32 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 52) + *(_QWORD *)(a1 + 40)) = v12;
  v15 = *(_DWORD *)(a1 + 52);
  ++*(_DWORD *)(a1 + 56);
  v16 = v12 + v15;
  Length = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 52) = v16;
  if ( v16 >= Length )
  {
    v18 = ZwWriteFile(
            *(HANDLE *)a1,
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 40),
            Length,
            (PLARGE_INTEGER)(a1 + 8),
            0LL);
    v19 = *(_DWORD *)(a1 + 56);
    v11 = v18;
    if ( v18 < 0 )
    {
      v20 = *(_DWORD *)(a1 + 24) + v19;
      v21 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 52) = v21;
      LOBYTE(v9) = v21 != 0;
      v22 = v20 - 1;
      if ( !v21 )
        v22 = v20;
      *(_DWORD *)(a1 + 24) = v22;
      goto LABEL_16;
    }
    v23 = *(unsigned int *)(a1 + 16);
    v24 = *(_DWORD *)(a1 + 52);
    v25 = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(a1 + 8) += v23;
    v26 = v24 - v23;
    *(_DWORD *)(a1 + 52) = v26;
    *(_DWORD *)(a1 + 60) = v26;
    v27 = v19 + v25;
    if ( !v26 )
    {
      *(_DWORD *)(a1 + 20) = v27;
LABEL_16:
      *(_DWORD *)(a1 + 56) = v9;
      return v11;
    }
    v28 = v27 - 1;
    v29 = *(char **)(a1 + 40);
    *(_DWORD *)(a1 + 20) = v28;
    *(_DWORD *)(a1 + 56) = 1;
    memmove(v29, &v29[v23], v26);
  }
  return v11;
}
