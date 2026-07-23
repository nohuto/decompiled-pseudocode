/*
 * XREFs of sub_180106798 @ 0x180106798
 * Callers:
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_18010496C @ 0x18010496C (sub_18010496C.c)
 *     sub_180104AC0 @ 0x180104AC0 (sub_180104AC0.c)
 *     sub_180104DB4 @ 0x180104DB4 (sub_180104DB4.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

char __fastcall sub_180106798(PVOID *Src, char a2)
{
  PVOID *v3; // rsi
  PVOID v4; // rcx
  size_t v5; // r8
  SIZE_T v6; // rdi
  ULONG_PTR v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rax
  ULONG_PTR v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !byte_180166A44 )
    return 1;
  v3 = Src + 27;
  v4 = Src[27];
  if ( v4 )
    goto LABEL_5;
  v12 = *((unsigned __int16 *)Src + 105);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &v12, 0x1000u, 4u) < 0 )
    return 1;
  v4 = *v3;
  a2 = 1;
LABEL_5:
  v5 = *((unsigned __int16 *)Src + 105);
  v12 = v5;
  if ( a2 )
  {
    memmove(v4, Src, v5);
    v7 = v12;
    v6 = v12;
  }
  else
  {
    v6 = RtlCompareMemory(Src, v4, v5);
    v7 = v12;
  }
  if ( v7 == v6 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    (char *)Src + v6,
    *(_DWORD *)((char *)Src + v6),
    *(_DWORD *)((char *)*v3 + v6));
  v8 = 0;
  if ( "Entry" )
  {
    v9 = 0LL;
    v10 = 0LL;
    while ( v6 < *(unsigned int *)((char *)&unk_180119660 + v10) || v6 >= *((unsigned int *)&unk_180119660 + 4 * v8 + 4) )
    {
      v10 = 16LL * ++v8;
      v9 = v8;
      if ( !*(_QWORD *)((char *)&unk_180119660 + v10 + 8) )
        return 0;
    }
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("    This is located in the %s field of the heap header.\n", *((const char **)&unk_180119660 + 2 * v9 + 1));
  }
  return 0;
}
