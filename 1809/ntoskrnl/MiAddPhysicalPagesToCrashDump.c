/*
 * XREFs of MiAddPhysicalPagesToCrashDump @ 0x1402ADDCC
 * Callers:
 *     MmGetDumpRange @ 0x1402AE4F8 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiAddPhysicalPagesToCrashDump(void (__fastcall **a1)(_QWORD, __int64, __int64))
{
  _DWORD *v1; // rdx
  unsigned int v2; // edi
  unsigned int v4; // ebp
  __int64 v5; // r14
  _QWORD *v6; // rbx
  char v7; // cl
  __int64 result; // rax

  v1 = MmPhysicalMemoryBlock;
  v2 = 0;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    while ( 1 )
    {
      v4 = 0;
      v5 = *(_QWORD *)&v1[4 * v2 + 4];
      if ( *(_QWORD *)&v1[4 * v2 + 6] )
        break;
LABEL_14:
      if ( ++v2 >= *v1 )
        return result;
    }
    v6 = (_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL);
    while ( 1 )
    {
      if ( (*((_BYTE *)v6 - 6) & 0xC0) == 0x40 )
      {
        v7 = *((_BYTE *)v6 - 6) & 7;
        if ( v7 == 6 )
        {
          if ( ((*v6 >> 54) & 7) == 1
            || (*(v6 - 2) & 0x3FFFFFFFFFFFFFFFLL) != 0 && (*v6 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          {
            goto LABEL_13;
          }
        }
        else if ( (unsigned __int8)(v7 - 2) > 1u || (*(_DWORD *)(v6 - 3) & 0x400LL) != 0 )
        {
          goto LABEL_13;
        }
        (*a1)(a1, v5, 1LL);
      }
LABEL_13:
      v1 = MmPhysicalMemoryBlock;
      ++v4;
      ++v5;
      result = v4;
      v6 += 6;
      if ( (unsigned __int64)v4 >= *((_QWORD *)MmPhysicalMemoryBlock + 2 * v2 + 3) )
        goto LABEL_14;
    }
  }
  return result;
}
