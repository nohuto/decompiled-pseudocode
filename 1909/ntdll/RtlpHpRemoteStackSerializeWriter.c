/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x1800F0F20
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x18009D390 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

NTSTATUS __fastcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, __int64 a3)
{
  size_t v4; // rdi
  __int64 v6; // rcx
  ULONG_PTR *ViewSize; // r14
  ULONG_PTR v8; // rsi
  __int64 v9; // rdx
  PVOID *v10; // r12
  LARGE_INTEGER *SectionOffset; // r15
  size_t v12; // rsi
  SIZE_T CommitSize; // rcx
  SIZE_T v14; // rax
  NTSTATUS result; // eax

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    v6 = *(_QWORD *)(a3 + 72);
    ViewSize = (ULONG_PTR *)(a3 + 56);
    v8 = *(_QWORD *)(a3 + 56);
    if ( v6 + Size <= v8 )
    {
LABEL_10:
      memmove((void *)(*(_QWORD *)(a3 + 48) + v6), Src, v4);
      *(_QWORD *)(a3 + 72) += v4;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 72);
      v10 = (PVOID *)(a3 + 48);
      SectionOffset = (LARGE_INTEGER *)(a3 + 64);
      while ( 1 )
      {
        v12 = v8 - v9;
        memmove((char *)*v10 + v9, Src, v12);
        v4 -= v12;
        SectionOffset->QuadPart += *ViewSize;
        Src += v12;
        if ( SectionOffset->QuadPart >= *(_QWORD *)(a3 + 8) )
          break;
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v10);
        CommitSize = *ViewSize;
        v14 = *(_QWORD *)(a3 + 8) - SectionOffset->QuadPart;
        *v10 = 0LL;
        if ( CommitSize >= v14 )
          CommitSize = v14;
        *ViewSize = CommitSize;
        result = ZwMapViewOfSection(
                   *(HANDLE *)a3,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   v10,
                   0LL,
                   CommitSize,
                   SectionOffset,
                   ViewSize,
                   ViewUnmap,
                   0,
                   4u);
        if ( result < 0 )
          return result;
        *(_QWORD *)(a3 + 72) = 0LL;
        v9 = 0LL;
        v8 = *ViewSize;
        v6 = 0LL;
        if ( v4 <= *ViewSize )
          goto LABEL_10;
      }
      *(_DWORD *)(a3 + 28) = -1073741789;
    }
  }
  return 0;
}
