/*
 * XREFs of KiIntRedirectConnnect @ 0x14016E538
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14016E388 (KiIntSteerChooseInitialTargetProcessors.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KiIntRedirectConnnect(__int64 *a1, unsigned int a2, __int64 a3)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v7; // r9d
  _QWORD *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x5249654Bu);
  v7 = 0;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_WORD *)PoolWithTag + 4) = *(_WORD *)(a3 + 32);
    *PoolWithTag = *(_QWORD *)(a3 + 24);
    *((_BYTE *)PoolWithTag + 16) = 0;
    if ( a2 )
    {
      v9 = a2;
      do
      {
        v10 = *a1++;
        *(_QWORD *)(v10 + 240) = v8;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
