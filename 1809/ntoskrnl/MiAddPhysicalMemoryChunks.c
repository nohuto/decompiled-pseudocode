/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x14084E040
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 *     MmAddPhysicalMemory @ 0x14084EB00 (MmAddPhysicalMemory.c)
 * Callees:
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiAddPhysicalMemoryChunks(ULONG_PTR *a1, __int64 *a2, __int64 *a3, int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v5 = *a3;
  v13 = *a2;
  v12 = v5;
  v8 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = MiAddPhysicalMemory(a1, &v13, &v12, a4, 0LL);
      if ( v9 < 0 )
        break;
      v13 += v12;
      v8 += v12;
      v12 = v5 - v8;
      if ( v5 == v8 )
        goto LABEL_4;
    }
    if ( v9 != -1073741670 && v9 != -1073741523 || v12 == 4096 )
      break;
    v11 = v12 / 2;
    HIDWORD(v12) = (unsigned __int64)(v12 / 2) >> 32;
    LODWORD(v12) = v11 & 0xFFFFF000;
  }
LABEL_4:
  result = (unsigned int)v9;
  *a3 = v8;
  return result;
}
