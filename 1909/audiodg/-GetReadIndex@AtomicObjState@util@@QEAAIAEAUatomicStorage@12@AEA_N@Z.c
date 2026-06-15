/*
 * XREFs of ?GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z @ 0x14005C64C
 * Callers:
 *     ?_AcquireRead@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEBUClockingSection@@AEA_N@Z @ 0x14005D4E0 (-_AcquireRead@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 */

__int64 __fastcall util::AtomicObjState::GetReadIndex(
        util::AtomicObjState *this,
        struct util::AtomicObjState::atomicStorage *a2,
        bool *a3)
{
  signed __int32 v5; // r10d
  bool v6; // dl
  unsigned __int32 v7; // ecx
  bool v8; // zf
  signed __int32 v9; // eax
  int v11; // [rsp+0h] [rbp-18h]
  __int16 v12; // [rsp+4h] [rbp-14h]

  v5 = _InterlockedCompareExchange((volatile signed __int32 *)a2, 0, 0);
  v6 = v5 != *(_DWORD *)this;
  *a3 = v6;
  if ( v6 )
  {
    v11 = 83887106;
    v12 = 769;
    do
    {
      v7 = *((unsigned __int8 *)&v11 + (v5 & 0xFFFFFFF7));
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a2, v7, v5);
      v8 = v5 == v9;
      v5 = v9;
    }
    while ( !v8 );
    *(_DWORD *)this = v7;
  }
  else
  {
    v7 = *(_DWORD *)this;
  }
  return v7 >> 1;
}
