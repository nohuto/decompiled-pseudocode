/*
 * XREFs of HampConnectionInitialize @ 0x180007140
 * Callers:
 *     HampConnectionCreate @ 0x180007080 (HampConnectionCreate.c)
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

void *__fastcall HampConnectionInitialize(_OWORD *a1, void *a2, __int64 a3)
{
  void *result; // rax

  memset_0((void *)a3, 0, 0x78uLL);
  if ( a1 )
    *(_OWORD *)(a3 + 96) = *a1;
  if ( a2 == &unk_180013840 )
  {
    *(_DWORD *)(a3 + 112) = 0;
    memset_0((void *)(a3 + 16), 0, 0x50uLL);
    *(_QWORD *)(a3 + 40) = 0LL;
    *(_QWORD *)(a3 + 48) = 0LL;
    RtlInitializeSRWLock(a3 + 24);
    result = (void *)(a3 + 56);
    *(_QWORD *)(a3 + 64) = a3 + 56;
    *(_QWORD *)(a3 + 56) = a3 + 56;
    *(_QWORD *)(a3 + 72) = HampConnectionDeliverPayload;
    *(_QWORD *)(a3 + 80) = HampConnectionObjectCompareToObject;
    *(_QWORD *)(a3 + 88) = HampConnectionObjectCompareToMessage;
    return result;
  }
  if ( a2 == &unk_1800137E0 )
  {
    *(_DWORD *)(a3 + 112) = 2;
    return (void *)HamIpcChannelInitialize(
                     HampConnectionDeliverPayload,
                     HampConnectionObjectCompareToObject,
                     HampConnectionObjectCompareToMessage,
                     a3 + 16);
  }
  result = &unk_180013900;
  if ( a2 == &unk_180013900 )
  {
    *(_DWORD *)(a3 + 112) = 6;
    return result;
  }
  if ( a2 == &unk_180013960 )
  {
    *(_DWORD *)(a3 + 112) = 1;
    return (void *)HamIpcChannelInitialize(
                     HampConnectionDeliverPayload,
                     HampConnectionObjectCompareToObject,
                     HampConnectionObjectCompareToMessage,
                     a3 + 16);
  }
  if ( a2 == &unk_180013A20 )
  {
    *(_DWORD *)(a3 + 112) = 3;
    return (void *)HamIpcChannelInitialize(
                     HampConnectionDeliverPayload,
                     HampConnectionObjectCompareToObject,
                     HampConnectionObjectCompareToMessage,
                     a3 + 16);
  }
  result = &unk_1800139C0;
  if ( a2 == &unk_1800139C0 )
  {
    *(_DWORD *)(a3 + 112) = 4;
  }
  else
  {
    result = &unk_180013A80;
    if ( a2 == &unk_180013A80 )
      *(_DWORD *)(a3 + 112) = 5;
    else
      *(_DWORD *)(a3 + 112) = 7;
  }
  return result;
}
