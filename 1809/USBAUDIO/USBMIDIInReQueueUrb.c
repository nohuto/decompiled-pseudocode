/*
 * XREFs of USBMIDIInReQueueUrb @ 0x1C0006690
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInGetCurrentTime @ 0x1C0002E9C (USBMidiInGetCurrentTime.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0006588 (WPP_RECORDER_SF_DDDD.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C002F3D8 (USBMidiInInitializeUrbAndIrp.c)
 */

void __fastcall USBMIDIInReQueueUrb(PDEVICE_OBJECT DeviceObject, char *Context)
{
  KSPIN_LOCK *v2; // rbp
  struct _DEVICE_OBJECT *v3; // r14
  KIRQL v5; // al
  unsigned __int64 v6; // rdi
  KIRQL v7; // si
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r12d
  unsigned __int8 *v12; // r15
  int v13; // r13d
  KIRQL v14; // al
  char *v15; // r14
  char *i; // rsi
  __int64 v17; // r13
  _QWORD *v18; // rcx
  __int64 *v19; // r14
  __int64 v20; // rax
  __int64 **v21; // rcx
  struct _KSPIN *v22; // rcx
  KIRQL v23; // al
  KIRQL v24; // al
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdx
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]

  v2 = (KSPIN_LOCK *)(Context + 104);
  v3 = DeviceObject;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 13);
  v6 = (unsigned __int64)*((unsigned int *)Context + 17) << 6;
  v7 = v5;
  v8 = *((_QWORD *)Context + 20) + v6 == 0;
  v9 = *((_QWORD *)Context + 20) + v6;
  while ( !v8 && !Context[41] )
  {
    *(_BYTE *)(v9 + 48) = 0;
    KeReleaseSpinLock(v2, v7);
    if ( *(int *)(*(_QWORD *)(v9 + 24) + 48LL) >= 0 )
    {
      v10 = *(_QWORD *)(v9 + 32);
      if ( *(int *)(v10 + 4) >= 0 )
      {
        v11 = *(_DWORD *)(v10 + 36);
        v12 = *(unsigned __int8 **)(v9 + 40);
        if ( v11 >= 4 )
        {
          do
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v30) = v12[3];
              LODWORD(v29) = v12[2];
              LODWORD(v28) = v12[1];
              LODWORD(v27) = *v12;
              WPP_RECORDER_SF_DDDD(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v12[2],
                v12[1],
                v27 & 0xF,
                (__int64)&WPP_edf1398985dc3328a639e6ab348ceffa_Traceguids,
                v27,
                v28,
                v29,
                v30);
            }
            if ( (*v12 & 0xFu) >= 2 )
            {
              v13 = *v12 >> 4;
              v14 = KeAcquireSpinLockRaiseToDpc(v2);
              v15 = Context + 48;
              for ( i = (char *)*((_QWORD *)Context + 6); i != v15 && *((_DWORD *)i + 5) != v13; i = *(char **)i )
                ;
              KeReleaseSpinLock(v2, v14);
              if ( i != v15 )
              {
                v17 = *(_QWORD *)(*((_QWORD *)i + 3) + 16LL);
                NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 112));
                if ( i[32] )
                {
                  v18 = i + 80;
                  v19 = (__int64 *)*((_QWORD *)i + 10);
                  if ( v19 != (__int64 *)(i + 80) )
                  {
                    if ( (_QWORD *)v19[1] != v18
                      || (v20 = *v19, *(__int64 **)(*v19 + 8) != v19)
                      || (*v18 = v20,
                          *(_QWORD *)(v20 + 8) = v18,
                          *((_DWORD *)v19 + 6) = *(_DWORD *)v12,
                          v19[2] = USBMidiInGetCurrentTime(),
                          v21 = (__int64 **)*((_QWORD *)i + 9),
                          *v21 != (__int64 *)(i + 64)) )
                    {
                      __fastfail(3u);
                    }
                    *v19 = (__int64)(i + 64);
                    v19[1] = (__int64)v21;
                    *v21 = v19;
                    *((_QWORD *)i + 9) = v19;
                  }
                  if ( !i[33] )
                  {
                    v22 = (struct _KSPIN *)*((_QWORD *)i + 3);
                    i[33] = 1;
                    KsPinAttemptProcessing(v22, 1u);
                  }
                }
                KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 112), NewIrql);
              }
            }
            v12 += 4;
            v11 -= 4;
          }
          while ( v11 >= 4 );
          v3 = DeviceObject;
        }
      }
    }
    if ( !Context[41] )
    {
      USBMidiInInitializeUrbAndIrp(v9);
      v23 = KeAcquireSpinLockRaiseToDpc(v2);
      _InterlockedIncrement((volatile signed __int32 *)Context + 16);
      KeReleaseSpinLock(v2, v23);
      IofCallDriver(v3, *(PIRP *)(v9 + 24));
    }
    v24 = KeAcquireSpinLockRaiseToDpc(v2);
    ++*((_DWORD *)Context + 17);
    v7 = v24;
    v25 = *((_DWORD *)Context + 17);
    if ( 16 * *((_DWORD *)Context + 6) == v25 )
    {
      *((_DWORD *)Context + 17) = 0;
      v25 = 0;
    }
    v26 = *((_QWORD *)Context + 20) + ((unsigned __int64)v25 << 6);
    v9 = v26 & -(__int64)(*(_BYTE *)(v26 + 48) != 0);
    v8 = v9 == 0;
  }
  Context[72] = 0;
  KeSetEvent((PRKEVENT)(Context + 112), 0, 0);
  KeReleaseSpinLock(v2, v7);
}
