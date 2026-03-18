/*
 * XREFs of FindCachedSMP @ 0x1C00D37FC
 * Callers:
 *     GetCachedSMP @ 0x1C00D362C (GetCachedSMP.c)
 * Callees:
 *     CreateStandardMonoPattern @ 0x1C012A568 (CreateStandardMonoPattern.c)
 */

__int64 **__fastcall FindCachedSMP(__int64 a1, int a2)
{
  int v2; // r14d
  _QWORD *v5; // r8
  _QWORD *v6; // r9
  _QWORD *v7; // rdi
  __int64 **i; // rcx
  __int64 **result; // rax
  _QWORD *v10; // rax
  PVOID v11; // rcx
  unsigned int v12; // eax
  char *v13; // rax
  char *v14; // rbx
  __int16 v15; // ax
  __int16 v16; // cx
  _QWORD *v17; // rbx
  _QWORD *v18; // rsi
  _QWORD *j; // rax
  _QWORD *v20; // rdi
  void *v21; // rcx
  __int16 v22; // [rsp+20h] [rbp-20h] BYREF
  char v23; // [rsp+22h] [rbp-1Eh]
  char v24; // [rsp+23h] [rbp-1Dh]
  __int16 v25; // [rsp+24h] [rbp-1Ch]
  __int16 v26; // [rsp+26h] [rbp-1Ah]
  __int16 v27; // [rsp+28h] [rbp-18h]
  __int16 v28; // [rsp+2Ah] [rbp-16h]
  char *v29; // [rsp+30h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 28);
  EngAcquireSemaphore(hsem);
  v5 = pv;
  if ( pv )
  {
    v6 = 0LL;
    while ( *(_DWORD *)v5 != v2 )
    {
      v6 = v5;
      v5 = (_QWORD *)v5[1];
      if ( !v5 )
        goto LABEL_11;
    }
    if ( v6 )
    {
      v6[1] = v5[1];
      v5[1] = pv;
      pv = v5;
    }
    v7 = v5 + 2;
    for ( i = (__int64 **)v5[2]; i; i = (__int64 **)*i )
    {
      if ( *((unsigned __int16 *)i + 4) == a2 )
        return i;
    }
  }
  else
  {
LABEL_11:
    if ( (unsigned __int16)word_1C0327006 >= 0xAu )
    {
      v17 = pv;
      v18 = 0LL;
      for ( j = (_QWORD *)*((_QWORD *)pv + 1); j; j = (_QWORD *)j[1] )
      {
        v18 = v17;
        v17 = j;
      }
      v20 = (_QWORD *)v17[2];
      while ( 1 )
      {
        v21 = v20;
        if ( !v20 )
          break;
        v20 = (_QWORD *)*v20;
        EngFreeMem(v21);
      }
      EngFreeMem(v17);
      v18[1] = 0LL;
      --word_1C0327006;
    }
    v10 = EngAllocMem(0, 0x18u, 0x32305448u);
    if ( !v10 )
      goto LABEL_26;
    v11 = pv;
    v7 = v10 + 2;
    v10[2] = 0LL;
    ++word_1C0327006;
    *(_DWORD *)v10 = v2;
    v10[1] = v11;
    pv = v10;
  }
  v29 = 0LL;
  v22 = 1;
  v23 = 1;
  v24 = a2;
  v25 = 3848;
  v12 = CreateStandardMonoPattern(a1, &v22);
  if ( v12 + 16 >= v12 )
  {
    v13 = (char *)EngAllocMem(0, v12 + 16, 0x33305448u);
    v14 = v13;
    if ( v13 )
    {
      v29 = v13 + 16;
      CreateStandardMonoPattern(a1, &v22);
      v15 = v26;
      *(_QWORD *)v14 = *v7;
      *((_WORD *)v14 + 5) = v27;
      v16 = v28;
      *((_WORD *)v14 + 7) = v15;
      result = (__int64 **)v14;
      *((_WORD *)v14 + 6) = v16;
      *((_WORD *)v14 + 4) = a2;
      *v7 = v14;
      return result;
    }
  }
LABEL_26:
  EngReleaseSemaphore(hsem);
  return 0LL;
}
