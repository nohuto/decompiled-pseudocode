/*
 * XREFs of ExpAllocateFannedOutPushLock @ 0x1401677E8
 * Callers:
 *     ExpTryExpandAutoExpandPushLock @ 0x1401675F8 (ExpTryExpandAutoExpandPushLock.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 *     ExSaAllocate @ 0x140167894 (ExSaAllocate.c)
 */

unsigned __int64 __fastcall ExpAllocateFannedOutPushLock(__int64 a1, char a2)
{
  unsigned __int64 v3; // rbx
  ULONG MaximumProcessorCount; // eax
  __int64 *v5; // r11
  unsigned int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdx

  v3 = ExSaAllocate(16LL, (a2 & 1) == 0);
  if ( v3 != -1LL )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount )
    {
      v5 = (__int64 *)ExSaPageArrays;
      v6 = ((unsigned int)v3 >> 13) & 0x3FFFF;
      v7 = (v3 >> 4) & 0x1FF;
      v8 = MaximumProcessorCount;
      do
      {
        v9 = *v5;
        _BitScanReverse(&v10, v6);
        ++v5;
        v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8LL * (v10 - 2)) + 8LL * (v6 ^ (1 << v10)) + 8);
        *(_QWORD *)(v11 + 8 * v7) = 0LL;
        *(_QWORD *)(v11 + 8 * v7 + 8) = a1;
        --v8;
      }
      while ( v8 );
    }
  }
  return v3;
}
