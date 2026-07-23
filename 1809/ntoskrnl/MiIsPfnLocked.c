/*
 * XREFs of MiIsPfnLocked @ 0x14013B298
 * Callers:
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MmAreMdlPagesLocked @ 0x140925CC8 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiPfnIsNonPagedPool @ 0x1402B932C (MiPfnIsNonPagedPool.c)
 */

__int64 __fastcall MiIsPfnLocked(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // r10d
  __int64 result; // rax

  v1 = *(unsigned __int16 *)(a1 + 32);
  v2 = 1;
  if ( v1 > (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    return v2;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
    return v2;
  if ( (unsigned __int16)v1 > 1u )
    return v2;
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 1 )
    return v2;
  if ( (*(_DWORD *)a1 & 1) == 0 )
    return v2;
  result = MiPfnIsNonPagedPool();
  if ( (_DWORD)result )
    return v2;
  return result;
}
