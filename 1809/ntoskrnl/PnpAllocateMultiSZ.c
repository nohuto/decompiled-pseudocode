/*
 * XREFs of PnpAllocateMultiSZ @ 0x1406D9244
 * Callers:
 *     PiSwPnPInfoInit @ 0x1406D9174 (PiSwPnPInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x1406D95D0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PnpGetMultiSzLength @ 0x140756F4C (PnpGetMultiSzLength.c)
 */

__int64 __fastcall PnpAllocateMultiSZ(void *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  int MultiSzLength; // ebx
  unsigned __int64 v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0LL;
  MultiSzLength = 0;
  if ( Src )
  {
    MultiSzLength = PnpGetMultiSzLength(Src, a2, &v12);
    if ( MultiSzLength >= 0 )
    {
      v7 = v12;
      if ( v12 > 2 )
      {
        if ( is_mul_ok(v12, 2uLL) )
        {
          MultiSzLength = 0;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v12, 0x57706E50u);
          *a4 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src, 2 * v7);
            v9 = 2 * v7;
            v10 = 2LL;
            do
            {
              v9 -= 2LL;
              *(_WORD *)(v9 + *a4) = 0;
              --v10;
            }
            while ( v10 );
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          return (unsigned int)-1073741675;
        }
      }
    }
  }
  return (unsigned int)MultiSzLength;
}
