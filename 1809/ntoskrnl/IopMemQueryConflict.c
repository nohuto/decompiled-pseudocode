/*
 * XREFs of IopMemQueryConflict @ 0x140829DA0
 * Callers:
 *     <none>
 * Callees:
 *     IopIsPciRootBus @ 0x140829CA0 (IopIsPciRootBus.c)
 *     ArbQueryConflict @ 0x140906880 (ArbQueryConflict.c)
 */

__int64 __fastcall IopMemQueryConflict(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  NTSTATUS IsPciRootBus; // r11d
  unsigned int *v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // r10
  unsigned __int64 v9; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // rax
  bool v12; // cf
  char v13; // [rsp+40h] [rbp+18h] BYREF

  result = ArbQueryConflict();
  if ( (int)result < 0 )
    return result;
  IsPciRootBus = IopIsPciRootBus(*(PDEVICE_OBJECT *)a2, &v13);
  if ( IsPciRootBus < 0 || !v13 )
    return 0LL;
  v5 = *(unsigned int **)(a2 + 16);
  v6 = 0LL;
  v7 = *v5;
  v8 = **(_QWORD **)(a2 + 24);
  if ( !*v5 )
    goto LABEL_18;
  do
  {
    v9 = *(_QWORD *)(v8 + 24 * v6 + 8);
    if ( ArbMmConfigRange )
    {
      for ( i = ArbMmConfigRange + 8;
            i < 32 * (unsigned __int64)*(unsigned int *)(ArbMmConfigRange + 4) + ArbMmConfigRange + 8;
            i += 32LL )
      {
        if ( ((*(_BYTE *)(i + 1) - 3) & 0xFB) == 0 )
        {
          v11 = *(_QWORD *)(i + 16);
          v12 = v9 < v11;
          if ( v9 > v11 )
          {
            if ( *(_QWORD *)(i + 24) < v9 )
              continue;
            v12 = v9 < v11;
          }
          if ( !v12 || *(_QWORD *)(v8 + 24 * v6 + 16) >= v11 )
          {
            *(_OWORD *)(v8 + 24 * v6) = *(_OWORD *)(v8 + 24LL * --v7);
            *(_QWORD *)(v8 + 24 * v6 + 16) = *(_QWORD *)(v8 + 24LL * v7 + 16);
            goto LABEL_16;
          }
        }
      }
    }
    v6 = (unsigned int)(v6 + 1);
LABEL_16:
    ;
  }
  while ( (unsigned int)v6 < v7 );
  v5 = *(unsigned int **)(a2 + 16);
LABEL_18:
  *v5 = v7;
  return (unsigned int)IsPciRootBus;
}
