/*
 * XREFs of BgkDisplayString @ 0x14027DC80
 * Callers:
 *     <none>
 * Callees:
 *     BgkDisplayStringEx @ 0x14027DD34 (BgkDisplayStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall BgkDisplayString(char *a1)
{
  char *v1; // rbx
  __int64 v3; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v5; // rsi
  int v6; // edx
  _WORD *v7; // rcx
  __int64 v8; // r8
  __int16 v9; // ax
  char v10; // bl

  v1 = a1;
  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * (unsigned int)(v3 + 1), 0x4B494742u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    v7 = PoolWithTag;
    v6 = v3;
    v8 = (unsigned int)v3;
    do
    {
      v9 = *v1++;
      *v7++ = v9;
      --v8;
    }
    while ( v8 );
  }
  v5[v6] = 0;
  v10 = BgkDisplayStringEx(v5);
  ExFreePoolWithTag(v5, 0x4B494742u);
  return v10;
}
