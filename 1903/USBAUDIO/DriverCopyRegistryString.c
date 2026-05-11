/*
 * XREFs of DriverCopyRegistryString @ 0x1C0021454
 * Callers:
 *     DriverEntry @ 0x1C0020EAC (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C00123C0 (memmove.c)
 */

__int64 __fastcall DriverCopyRegistryString(__int64 a1, const void **a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  PVOID v6; // rax

  v2 = 0;
  if ( !a2 )
  {
    g_RegistryPath = 0LL;
    return v2;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x41627845u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *(_WORD *)PoolWithTag = *(_WORD *)a2;
  *((_WORD *)PoolWithTag + 1) = *((_WORD *)a2 + 1);
  if ( a2[1] )
  {
    v6 = ExAllocatePoolWithTag(PagedPool, *((_WORD *)a2 + 1) & 0xFFFE, 0x41627845u);
    v5[1] = v6;
    if ( !v6 )
    {
      v2 = -1073741670;
      ExFreePool(v5);
      return v2;
    }
    memmove(v6, a2[1], *(unsigned __int16 *)a2);
  }
  else
  {
    PoolWithTag[1] = 0LL;
  }
  g_RegistryPath = v5;
  return v2;
}
