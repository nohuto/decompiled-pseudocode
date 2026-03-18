/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x140296E14
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140189294 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     RtlRandomEx @ 0x1400E3D90 (RtlRandomEx.c)
 *     MmFreeContiguousMemory @ 0x140116D70 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140117B90 (MmAllocateContiguousNodeMemory.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x1401C1C90 (ZwFilterBootOption.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KdCopyDataBlock @ 0x1402A1B44 (KdCopyDataBlock.c)
 *     IoSetEnvironmentVariableEx @ 0x14085B6C0 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r12
  int v2; // eax
  PVOID *v3; // rdi
  __int64 *v4; // r14
  unsigned int v5; // r15d
  void *ContiguousNodeMemory; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-40h]

  v0 = 2LL;
  *(_QWORD *)&v12 = 0x302E4594353594B3LL;
  *((_QWORD *)&v12 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_1404682C4 = 0;
    LODWORD(qword_1404682B0) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(1LL, 270532611LL, 637534368LL);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    v3 = (PVOID *)&unk_140468298;
    qword_1404682A8 = 9112LL;
    v4 = (__int64 *)&unk_140468298;
    v5 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_1404682A8, 0LL, -1LL, 0, 4u, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_1404682A8);
      v8 = *v4;
      *(_OWORD *)v8 = v12;
      *(_QWORD *)(v8 + 16) = 0x199B7088610836E8LL;
      if ( v1 )
        KdCopyDataBlock(*v4 + 8216, v7);
      ++v5;
      ++v4;
      if ( v5 >= 2 )
      {
        v9 = __rdtsc();
        LODWORD(qword_1404682B8) = v9;
        v10 = __rdtsc();
        HIDWORD(qword_1404682B8) = v10;
        RtlRandomEx((PULONG)&qword_1404682B8 + 1);
        v11 = IoSetEnvironmentVariableEx(L"DumpInstance", 7);
        if ( v11 < 0 )
        {
          dword_1404682C4 = v11;
          qword_1404682B8 = 0x4547415045474150LL;
        }
        dword_140468294 = 1;
        goto LABEL_18;
      }
    }
    dword_1404682C4 = -1073741801;
    do
    {
      if ( *v3 )
      {
        MmFreeContiguousMemory(*v3);
        *v3 = 0LL;
      }
      ++v3;
      --v0;
    }
    while ( v0 );
LABEL_18:
    _InterlockedExchange(InMemData, 0);
  }
}
