/*
 * XREFs of MiAllocateInPageSupport @ 0x1400A6124
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x1400A61EC (MiGetInPageSupportBlock.c)
 */

__int64 __fastcall MiAllocateInPageSupport(unsigned __int64 a1, __int64 a2, unsigned int *a3, ULONG_PTR *a4)
{
  ULONG_PTR v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  char *v14; // rdi
  __int64 v15; // rax

  if ( a4 )
    v7 = *a4;
  else
    v7 = 0LL;
  v8 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v8 = 256;
  }
  v9 = a2 | 1;
  if ( v8 <= 0x10 )
    v9 = a2;
  v10 = v9;
  if ( a4 )
    v10 = v9 | 4;
  result = MiGetInPageSupportBlock(v10, a2);
  if ( !result )
  {
    if ( a4 )
    {
      MiUnlockProtoPoolPage(v7, 0x11u);
    }
    else
    {
      if ( (v9 & 1) == 0 )
        return 0LL;
      v9 &= ~1u;
      *a3 = 16;
    }
    v14 = (char *)MiGetInPageSupportBlock(v9, v12);
    if ( v14 )
      goto LABEL_15;
    if ( (v9 & 1) == 0 )
      return (__int64)v14;
    *a3 = 16;
    v14 = (char *)MiGetInPageSupportBlock(v9 & 0xFFFFFFFE, v13);
    if ( v14 )
    {
LABEL_15:
      if ( a4 )
      {
        v15 = MiLockProtoPoolPage(a1, 0LL);
        if ( !v15 )
        {
          MiFreeInPageSupportBlock(v14);
          return 0LL;
        }
        *a4 = v15;
      }
      return (__int64)v14;
    }
    return 0LL;
  }
  return result;
}
