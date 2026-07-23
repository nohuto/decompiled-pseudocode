/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x1408BE940
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x1400F1800 (EtwProviderEnabled.c)
 *     EtwpTiFillVadEventWrite @ 0x14031301C (EtwpTiFillVadEventWrite.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpTiQueryVad @ 0x1408BE7F0 (EtwpTiQueryVad.c)
 */

void __fastcall EtwpTiVadQueryEventWriteCallback(unsigned int *P)
{
  int Vad; // ebp
  _QWORD *PoolWithTag; // rsi
  BOOLEAN v4; // al
  __int64 i; // rdi
  void *v6; // rcx
  void *v7; // rcx

  Vad = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * P[13], 0x6E734954u);
  if ( PoolWithTag )
  {
    v4 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000uLL);
    Vad = EtwpTiQueryVad((__int64)PoolWithTag, *((_KPROCESS **)P + 8), *((PVOID **)P + 9), P[13], v4);
  }
  EtwpTiFillVadEventWrite(
    *((PEVENT_DATA_DESCRIPTOR *)P + 4),
    P[12],
    1,
    (__int64)PoolWithTag,
    Vad,
    P[13],
    *((PCEVENT_DESCRIPTOR *)P + 7));
  for ( i = 0LL; (unsigned int)i < P[13]; i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&Vad, i) )
    {
      v6 = (void *)PoolWithTag[6 * i + 5];
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v7 = (void *)*((_QWORD *)P + 8);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x69547445u);
  ExFreePoolWithTag(P, 0);
}
