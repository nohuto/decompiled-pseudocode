/*
 * XREFs of EtwpFreeStackCache @ 0x1408C4B80
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     EtwpEnableStackCaching @ 0x1408C4A28 (EtwpEnableStackCaching.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeStackCache(char *P)
{
  __int64 i; // rsi
  char *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  PSLIST_ENTRY v7; // rbx
  PSLIST_ENTRY v8; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
  {
    while ( 1 )
    {
      v3 = &P[16 * i + 32 + 8 * i];
      v4 = *(_QWORD **)v3;
      if ( *(char **)v3 == v3 )
        break;
      if ( (char *)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
        __fastfail(3u);
      *(_QWORD *)v3 = v5;
      v5[1] = v3;
      do
      {
        v6 = (_QWORD *)v4[2];
        ExFreePoolWithTag(v4, 0);
        v4 = v6;
      }
      while ( v6 );
    }
  }
  v7 = RtlpInterlockedFlushSList((PSLIST_HEADER)P + 1);
  while ( v7 )
  {
    v8 = v7;
    v7 = v7->Next;
    ExFreePoolWithTag(v8, 0);
  }
  ExFreePoolWithTag(P, 0);
}
