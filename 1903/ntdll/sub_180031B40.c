/*
 * XREFs of sub_180031B40 @ 0x180031B40
 * Callers:
 *     sub_180031A74 @ 0x180031A74 (sub_180031A74.c)
 *     sub_180031AA0 @ 0x180031AA0 (sub_180031AA0.c)
 *     sub_180062AF0 @ 0x180062AF0 (sub_180062AF0.c)
 *     sub_1800787D4 @ 0x1800787D4 (sub_1800787D4.c)
 *     sub_18007D710 @ 0x18007D710 (sub_18007D710.c)
 *     TpAllocJobNotification @ 0x18007E070 (TpAllocJobNotification.c)
 *     sub_180082BF0 @ 0x180082BF0 (sub_180082BF0.c)
 *     sub_180083B60 @ 0x180083B60 (sub_180083B60.c)
 *     sub_18010FC5C @ 0x18010FC5C (sub_18010FC5C.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 */

void __fastcall sub_180031B40(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  void *v5; // rcx
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = v2 + a2;
    if ( v2 <= 0 )
    {
      if ( v3 <= 0 )
        return;
      v4 = 1;
    }
    else
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
    }
    v5 = *(void **)(a1 + 56);
    WorkerFactoryInformation = v4;
    ZwSetInformationWorkerFactory(v5, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
  }
}
