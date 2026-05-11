/*
 * XREFs of USBCaptureBytePosition @ 0x1C00061C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C0002574 (WPP_RECORDER_SF_ii.c)
 *     USBHwGetCurrentFrame @ 0x1C0002E44 (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C0002E9C (USBMidiInGetCurrentTime.c)
 *     USBHwGetClockRatio @ 0x1C0003050 (USBHwGetClockRatio.c)
 */

__int64 __fastcall USBCaptureBytePosition(struct _KSPIN *a1, union _LARGE_INTEGER *a2)
{
  __int64 Context; // rdi
  unsigned int v3; // esi
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r14
  int AvailableByteCount; // r12d
  KIRQL v9; // al
  KIRQL v10; // al
  union _LARGE_INTEGER v11; // rcx
  union _LARGE_INTEGER v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int64 v16; // rsi
  unsigned __int64 CurrentTime; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  union _LARGE_INTEGER v21; // rax
  bool v22; // cc
  __int64 v24; // [rsp+40h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-18h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+48h]
  unsigned int v28; // [rsp+B8h] [rbp+50h] BYREF
  LONG OutputBufferBytes; // [rsp+C0h] [rbp+58h] BYREF
  LONG InputDataBytes; // [rsp+C8h] [rbp+60h] BYREF

  Context = (__int64)a1->Context;
  v3 = 0;
  v28 = 0;
  v25 = 0LL;
  v5 = *(_QWORD *)(Context + 152);
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  AvailableByteCount = KsPinGetAvailableByteCount(a1, &InputDataBytes, &OutputBufferBytes);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
  NewIrql = v9;
  if ( !*(_BYTE *)(v5 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), v9);
    USBHwGetClockRatio(Context, &v25, &v24);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
    v6 = v26;
    v3 = v25;
    v7 = v24;
    NewIrql = v10;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  v11 = *(union _LARGE_INTEGER *)(Context + 80);
  a2[3] = v11;
  a2[2] = v11;
  if ( *(_BYTE *)(Context + 45) )
  {
    AvailableByteCount = USBHwGetCurrentFrame(*(_QWORD *)(Context + 16), &v28);
    if ( AvailableByteCount < 0 )
      goto LABEL_20;
    v12 = *(union _LARGE_INTEGER *)(Context + 88);
    v13 = v28;
    a2[2] = v12;
    v14 = *(unsigned int *)(v5 + 104);
    if ( v13 - v14 >= 0 )
    {
      v15 = *(unsigned int *)(v5 + 100);
      if ( v7 )
      {
        if ( (unsigned int)v14 <= v3 )
          v16 = v6 - v7 * (v3 - (unsigned int)v14);
        else
          v16 = v6 + v7 * ((unsigned int)v14 - v3);
        CurrentTime = USBMidiInGetCurrentTime();
        if ( v16 > CurrentTime )
          v16 = CurrentTime;
        v18 = CurrentTime - v16;
        v19 = ((CurrentTime - v16) * v15 * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64;
        v20 = (CurrentTime - v16) * v15 / 0x989680;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_ii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v19,
            v18,
            0x1Bu,
            (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
            v20,
            v18);
        a2[2].QuadPart += v20;
        v12 = a2[2];
      }
      else
      {
        v12.QuadPart += (int)v15 * ((int)v13 - (int)v14) / 0x3E8u;
        a2[2] = v12;
      }
    }
    v21 = *(union _LARGE_INTEGER *)(Context + 96);
    v22 = v21.QuadPart <= (unsigned __int64)v12.QuadPart;
  }
  else
  {
    v21 = *(union _LARGE_INTEGER *)(Context + 96);
    v22 = v21.QuadPart <= (unsigned __int64)v11.QuadPart;
  }
  if ( !v22 )
    a2[2] = v21;
LABEL_20:
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(Context + 96) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), NewIrql);
  return (unsigned int)AvailableByteCount;
}
