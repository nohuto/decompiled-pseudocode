/*
 * XREFs of ExWaitForRundownProtectionReleaseCacheAware @ 0x14000E780
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 *     RawVerifyVolume @ 0x1402EC484 (RawVerifyVolume.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     RawUserFsCtrl @ 0x140701740 (RawUserFsCtrl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

void __stdcall ExWaitForRundownProtectionReleaseCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRef)
{
  unsigned int Number; // ecx
  unsigned __int64 v3; // r9
  unsigned int v4; // r11d
  int v5; // edx
  __int64 v6; // rax
  signed __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+38h] [rbp-28h] BYREF
  char v9; // [rsp+3Ah] [rbp-26h]
  int v10; // [rsp+3Ch] [rbp-24h]
  _QWORD v11[4]; // [rsp+40h] [rbp-20h] BYREF

  v7 = 0LL;
  Number = RunRef->Number;
  v3 = 0LL;
  v4 = 0;
  if ( Number )
  {
    do
    {
      v5 = v4 % Number;
      ++v4;
      v6 = _InterlockedExchange64(
             (volatile __int64 *)((char *)RunRef->RunRefs + RunRef->RunRefSize * v5),
             (__int64)&v7 + 1);
      Number = RunRef->Number;
      v3 += v6;
    }
    while ( v4 < Number );
    if ( v3 )
    {
      v10 = 0;
      v11[1] = v11;
      v11[0] = v11;
      Object = 1;
      v9 = 6;
      if ( _InterlockedExchangeAdd64(&v7, v3 >> 1) != -(__int64)(v3 >> 1) )
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
  }
}
