/*
 * XREFs of PsRootSiloInformation @ 0x140887BC0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PspGetNextSilo @ 0x140601968 (PspGetNextSilo.c)
 */

__int64 __fastcall PsRootSiloInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r12
  unsigned int v5; // edi
  struct _LIST_ENTRY *CurrentSilo; // r15
  __int64 v8; // rsi
  int v9; // ebx
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *NextSilo; // rax
  struct _LIST_ENTRY *v12; // r8

  v3 = a2;
  v5 = 4;
  if ( a2 < 4 )
    return 3221225507LL;
  CurrentSilo = PsGetCurrentSilo();
  v8 = 0LL;
  v9 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    NextSilo = (struct _LIST_ENTRY *)PspGetNextSilo(i, 0);
    v12 = NextSilo;
    if ( !NextSilo )
      break;
    if ( NextSilo != CurrentSilo )
    {
      if ( CurrentSilo )
      {
        while ( NextSilo != CurrentSilo )
        {
          NextSilo = NextSilo[67].Flink;
          if ( !NextSilo )
            goto LABEL_9;
        }
      }
      if ( (unsigned __int64)v5 + 4 > v3 )
      {
        v9 = -1073741789;
        ObfDereferenceObjectWithTag(v12, 0x6E457350u);
        break;
      }
      a1[v8 + 1] = HIDWORD(v12[76].Flink);
      v5 += 4;
      v8 = (unsigned int)(v8 + 1);
    }
LABEL_9:
    ;
  }
  if ( v9 >= 0 )
  {
    *a1 = v8;
    *a3 = v5;
  }
  return (unsigned int)v9;
}
