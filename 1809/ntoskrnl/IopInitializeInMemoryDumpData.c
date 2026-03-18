/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x140281648
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140180C60 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MmAllocateContiguousNodeMemory @ 0x1400E6460 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x140122FA0 (MmFreeContiguousMemory.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x1401B9D10 (ZwFilterBootOption.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     KdCopyDataBlock @ 0x14028B9B8 (KdCopyDataBlock.c)
 *     IoSetEnvironmentVariableEx @ 0x140821608 (IoSetEnvironmentVariableEx.c)
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
    dword_14043C794 = 0;
    LODWORD(qword_14043C780) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(1LL, 270532611LL, 637534368LL);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    v3 = (PVOID *)&unk_14043C768;
    qword_14043C778 = 9112LL;
    v4 = (__int64 *)&unk_14043C768;
    v5 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_14043C778, 0LL, -1LL, 0, 4u, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_14043C778);
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
        LODWORD(qword_14043C788) = v9;
        v10 = __rdtsc();
        HIDWORD(qword_14043C788) = v10;
        HIDWORD(qword_14043C788) = ExGenRandom(1) & 0x7FFFFFFF;
        v11 = IoSetEnvironmentVariableEx(L"DumpInstance", 7);
        if ( v11 < 0 )
        {
          dword_14043C794 = v11;
          qword_14043C788 = 0x4547415045474150LL;
        }
        dword_14043C764 = 1;
        goto LABEL_18;
      }
    }
    dword_14043C794 = -1073741801;
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
