/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x1408F9C40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x1400E5560 (EtwProviderEnabled.c)
 *     EtwpTiFillVadEventWrite @ 0x140330AAC (EtwpTiFillVadEventWrite.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpTiQueryVad @ 0x1408F9AE0 (EtwpTiQueryVad.c)
 */

void __fastcall EtwpTiVadQueryEventWriteCallback(unsigned int *P)
{
  int Vad; // ebp
  _QWORD *PoolWithTag; // rsi
  BOOLEAN v4; // al
  unsigned int i; // edi
  void *v6; // rcx
  void *v7; // rcx

  Vad = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 56LL * P[13], 0x6E734954u);
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
  for ( i = 0; i < P[13]; ++i )
  {
    if ( _bittest(&Vad, i) )
    {
      v6 = (void *)PoolWithTag[7 * i + 6];
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
