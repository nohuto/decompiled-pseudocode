/*
 * XREFs of ACPICMLidWorker @ 0x1C004D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIButtonEvent @ 0x1C002F108 (ACPIButtonEvent.c)
 */

__int64 __fastcall ACPICMLidWorker(__int64 a1, char a2)
{
  char v2; // di
  int v5; // eax
  void *v6; // rcx
  void *v7; // r8
  __int64 v8; // rdx
  int v10; // r14d
  char v11; // r15
  KIRQL v12; // al
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v5 = ACPIGet((__int64 *)a1, 1145654367, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v16, 0LL);
  if ( v5 >= 0 )
  {
    if ( v16 )
    {
      v10 = 1;
      v11 = 1;
    }
    else
    {
      v10 = 0;
      v11 = 0;
    }
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    *(_BYTE *)(a1 + 192) = v11;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v12);
    v13 = ((a2 & 1) + 2) << 18;
    v14 = v13 | 0x80000000;
    v15 = v13 | 4;
    if ( !v10 )
      v14 = v15;
    return ACPIButtonEvent(*(_QWORD *)(a1 + 720), v14);
  }
  else
  {
    v6 = &unk_1C006E28A;
    v7 = &unk_1C006E28A;
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v2 = a1;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(void **)(a1 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(void **)(a1 + 568);
      }
    }
    return WPP_RECORDER_SF_Lqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             0x11u,
             0x18u,
             (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
             v5,
             v2,
             (__int64)v6,
             (__int64)v7);
  }
}
