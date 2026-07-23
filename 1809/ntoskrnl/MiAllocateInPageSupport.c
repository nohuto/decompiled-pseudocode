/*
 * XREFs of MiAllocateInPageSupport @ 0x14002C548
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiAllocateInPageSupport(__int64 a1, unsigned int a2, unsigned int *a3, __int64 *a4)
{
  __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  void *v13; // rdi
  __int64 v14; // rax

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
  result = MiGetInPageSupportBlock(v10);
  if ( !result )
  {
    if ( a4 )
    {
      LOBYTE(v12) = 17;
      MiUnlockProtoPoolPage(v7, v12);
    }
    else
    {
      if ( (v9 & 1) == 0 )
        return 0LL;
      v9 &= ~1u;
      *a3 = 16;
    }
    v13 = (void *)MiGetInPageSupportBlock(v9);
    if ( v13 )
      goto LABEL_15;
    if ( (v9 & 1) == 0 )
      return (__int64)v13;
    *a3 = 16;
    v13 = (void *)MiGetInPageSupportBlock(v9 & 0xFFFFFFFE);
    if ( v13 )
    {
LABEL_15:
      if ( a4 )
      {
        v14 = MiLockProtoPoolPage(a1, 0LL);
        if ( !v14 )
        {
          MiFreeInPageSupportBlock(v13);
          return 0LL;
        }
        *a4 = v14;
      }
      return (__int64)v13;
    }
    return 0LL;
  }
  return result;
}
