/*
 * XREFs of USBCaptureBytePosition @ 0x1C0006230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C00023D4 (WPP_RECORDER_SF_ii.c)
 *     USBHwGetCurrentFrame @ 0x1C0002CA4 (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C0002CFC (USBMidiInGetCurrentTime.c)
 *     USBHwGetClockRatio @ 0x1C0002EB8 (USBHwGetClockRatio.c)
 */

__int64 __fastcall USBCaptureBytePosition(struct _KSPIN *a1, union _LARGE_INTEGER *a2)
{
  __int64 Context; // rsi
  unsigned int v3; // edi
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned int AvailableByteCount; // r12d
  KIRQL v9; // al
  KIRQL v10; // al
  union _LARGE_INTEGER v11; // rcx
  int CurrentFrame; // eax
  union _LARGE_INTEGER v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r12
  unsigned __int64 v17; // rdi
  unsigned __int64 CurrentTime; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  union _LARGE_INTEGER v22; // rax
  bool v23; // cc
  LONG InputDataBytes; // [rsp+40h] [rbp-28h] BYREF
  __int64 v26; // [rsp+48h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-18h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+48h]
  __int64 v29; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+58h] BYREF
  LONG OutputBufferBytes; // [rsp+C8h] [rbp+60h] BYREF

  Context = (__int64)a1->Context;
  v3 = 0;
  v30 = 0;
  v26 = 0LL;
  v5 = *(_QWORD *)(Context + 152);
  v6 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  AvailableByteCount = KsPinGetAvailableByteCount(a1, &InputDataBytes, &OutputBufferBytes);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
  NewIrql = v9;
  if ( !*(_BYTE *)(v5 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), v9);
    USBHwGetClockRatio(Context, &v26, &v29);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
    v6 = v27;
    v3 = v26;
    v7 = v29;
    NewIrql = v10;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  v11 = *(union _LARGE_INTEGER *)(Context + 80);
  a2[3] = v11;
  a2[2] = v11;
  if ( *(_BYTE *)(Context + 45) )
  {
    CurrentFrame = USBHwGetCurrentFrame(*(_QWORD *)(Context + 16), &v30);
    LODWORD(v29) = CurrentFrame;
    if ( CurrentFrame < 0 )
    {
      AvailableByteCount = CurrentFrame;
      goto LABEL_22;
    }
    v13 = *(union _LARGE_INTEGER *)(Context + 88);
    v14 = v30;
    a2[2] = v13;
    v15 = *(unsigned int *)(v5 + 104);
    if ( v14 - v15 >= 0 )
    {
      v16 = *(unsigned int *)(v5 + 100);
      if ( v7 )
      {
        if ( (unsigned int)v15 <= v3 )
          v17 = v6 - v7 * (v3 - (unsigned int)v15);
        else
          v17 = v6 + v7 * ((unsigned int)v15 - v3);
        CurrentTime = USBMidiInGetCurrentTime();
        if ( v17 > CurrentTime )
          v17 = CurrentTime;
        v19 = CurrentTime - v17;
        v20 = (CurrentTime - v17) * v16;
        v21 = v20 / 0x989680;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_ii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (v20 * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64,
            v19,
            0x1Bu,
            (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
            v21,
            v19);
        a2[2].QuadPart += v21;
        v13 = a2[2];
      }
      else
      {
        v13.QuadPart += (int)v16 * ((int)v14 - (int)v15) / 0x3E8u;
        a2[2] = v13;
      }
    }
    v22 = *(union _LARGE_INTEGER *)(Context + 96);
    AvailableByteCount = v29;
    v23 = v22.QuadPart <= (unsigned __int64)v13.QuadPart;
  }
  else
  {
    v22 = *(union _LARGE_INTEGER *)(Context + 96);
    v23 = v22.QuadPart <= (unsigned __int64)v11.QuadPart;
  }
  if ( !v23 )
    a2[2] = v22;
LABEL_22:
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(Context + 96) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), NewIrql);
  return AvailableByteCount;
}
