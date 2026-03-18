/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x140296B74
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140189844 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     RtlRandomEx @ 0x14008F010 (RtlRandomEx.c)
 *     MmFreeContiguousMemory @ 0x1400F4E90 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x1400F5CB0 (MmAllocateContiguousNodeMemory.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x1401C2810 (ZwFilterBootOption.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KdCopyDataBlock @ 0x1402A18A4 (KdCopyDataBlock.c)
 *     IoSetEnvironmentVariableEx @ 0x14085ADC0 (IoSetEnvironmentVariableEx.c)
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
    dword_140468004 = 0;
    LODWORD(qword_140467FF0) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(1LL, 270532611LL, 637534368LL);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    v3 = (PVOID *)&unk_140467FD8;
    qword_140467FE8 = 9112LL;
    v4 = (__int64 *)&unk_140467FD8;
    v5 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140467FE8, 0LL, -1LL, 0, 4u, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_140467FE8);
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
        LODWORD(qword_140467FF8) = v9;
        v10 = __rdtsc();
        HIDWORD(qword_140467FF8) = v10;
        RtlRandomEx((PULONG)&qword_140467FF8 + 1);
        v11 = IoSetEnvironmentVariableEx(L"DumpInstance", 7);
        if ( v11 < 0 )
        {
          dword_140468004 = v11;
          qword_140467FF8 = 0x4547415045474150LL;
        }
        dword_140467FD4 = 1;
        goto LABEL_18;
      }
    }
    dword_140468004 = -1073741801;
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
