/*
 * XREFs of USBMidiInResetEventQueues @ 0x1C0006D7C
 * Callers:
 *     USBMidiInStateChangePin @ 0x1C0006E50 (USBMidiInStateChangePin.c)
 * Callees:
 *     memset @ 0x1C0012700 (memset.c)
 */

void __fastcall USBMidiInResetEventQueues(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al
  _QWORD **v5; // rdi
  KIRQL v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 152);
  v3 = (KSPIN_LOCK *)(v1 + 112);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 112));
  *(_BYTE *)(v2 + 32) = 0;
  v5 = (_QWORD **)(v2 + 64);
  v6 = v4;
  while ( 1 )
  {
    v9 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v9[1] != v5
      || (v7 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9)
      || (*v5 = v7, v7[1] = v5, memset(v9, 0, 0x20uLL), v8 = *(_QWORD **)(v2 + 88), *v8 != v2 + 80) )
    {
      __fastfail(3u);
    }
    *v9 = v2 + 80;
    v9[1] = v8;
    *v8 = v9;
    *(_QWORD *)(v2 + 88) = v9;
  }
  KeReleaseSpinLock(v3, v6);
}
