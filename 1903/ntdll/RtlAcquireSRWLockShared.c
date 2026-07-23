/*
 * XREFs of RtlAcquireSRWLockShared @ 0x18001A940
 * Callers:
 *     sub_1800019C8 @ 0x1800019C8 (sub_1800019C8.c)
 *     sub_1800066EC @ 0x1800066EC (sub_1800066EC.c)
 *     sub_1800097B0 @ 0x1800097B0 (sub_1800097B0.c)
 *     sub_18000A060 @ 0x18000A060 (sub_18000A060.c)
 *     sub_18000AA3C @ 0x18000AA3C (sub_18000AA3C.c)
 *     sub_18001ABAC @ 0x18001ABAC (sub_18001ABAC.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_18003E150 @ 0x18003E150 (sub_18003E150.c)
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_180046F54 @ 0x180046F54 (sub_180046F54.c)
 *     sub_180049F08 @ 0x180049F08 (sub_180049F08.c)
 *     sub_18004DDEC @ 0x18004DDEC (sub_18004DDEC.c)
 *     sub_18004E7DC @ 0x18004E7DC (sub_18004E7DC.c)
 *     sub_18004F318 @ 0x18004F318 (sub_18004F318.c)
 *     sub_18004F3A8 @ 0x18004F3A8 (sub_18004F3A8.c)
 *     sub_180055D84 @ 0x180055D84 (sub_180055D84.c)
 *     TpTrimPools @ 0x1800607C0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180060AE0 (RtlSleepConditionVariableSRW.c)
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_180067A40 @ 0x180067A40 (sub_180067A40.c)
 *     sub_18006B424 @ 0x18006B424 (sub_18006B424.c)
 *     sub_18006B980 @ 0x18006B980 (sub_18006B980.c)
 *     sub_18006BAC0 @ 0x18006BAC0 (sub_18006BAC0.c)
 *     sub_18006CCF0 @ 0x18006CCF0 (sub_18006CCF0.c)
 *     sub_18006E194 @ 0x18006E194 (sub_18006E194.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_180073F4C @ 0x180073F4C (sub_180073F4C.c)
 *     sub_180074610 @ 0x180074610 (sub_180074610.c)
 *     sub_18007D570 @ 0x18007D570 (sub_18007D570.c)
 *     sub_18007E7CC @ 0x18007E7CC (sub_18007E7CC.c)
 *     RtlQueryProtectedPolicy @ 0x18007FAE0 (RtlQueryProtectedPolicy.c)
 *     sub_180083D40 @ 0x180083D40 (sub_180083D40.c)
 *     sub_180084338 @ 0x180084338 (sub_180084338.c)
 *     sub_18008BC70 @ 0x18008BC70 (sub_18008BC70.c)
 *     sub_18008BDC0 @ 0x18008BDC0 (sub_18008BDC0.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7870 (RtlQueryProcessLockInformation.c)
 *     sub_1800E02E0 @ 0x1800E02E0 (sub_1800E02E0.c)
 *     RtlBarrier_0 @ 0x1800EA614 (RtlBarrier_0.c)
 *     sub_180101B5C @ 0x180101B5C (sub_180101B5C.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 *     sub_180102800 @ 0x180102800 (sub_180102800.c)
 *     sub_180114B68 @ 0x180114B68 (sub_180114B68.c)
 *     sub_1801155A4 @ 0x1801155A4 (sub_1801155A4.c)
 * Callees:
 *     sub_1800365A0 @ 0x1800365A0 (sub_1800365A0.c)
 *     sub_180036790 @ 0x180036790 (sub_180036790.c)
 *     sub_180077EA8 @ 0x180077EA8 (sub_180077EA8.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A0010 (ZwWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 i; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 UniqueThread; // rcx
  unsigned __int64 Ptr; // rdi
  __int64 v7; // rbx
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-28h]
  unsigned int v18[9]; // [rsp+44h] [rbp-24h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = 0;
  UniqueThread = 17LL;
  Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Ptr )
  {
    while ( 1 )
    {
      v7 = (Ptr >> 1) & 1;
      if ( (Ptr & 1) != 0 && (v7 || (Ptr & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)sub_180036790(UniqueThread, i, v2, v3, v13) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v16 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v18[0] = 2;
        v15 = 0LL;
        if ( v7 )
        {
          v14 = 0LL;
          v17 = -1;
          UniqueThread = (unsigned __int8)Ptr;
          v13 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          i = (unsigned __int64)&v13 | Ptr & 8 | 7;
          LOBYTE(UniqueThread) = (Ptr & 4) == 0;
        }
        else
        {
          v17 = -2;
          v14 = &v13;
          i = (unsigned __int64)&v13 + 3;
        }
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, i, Ptr);
        v9 = Ptr == v10;
        Ptr = v10;
        if ( !v9 )
          goto LABEL_14;
        if ( (_BYTE)UniqueThread )
          sub_180077EA8(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v2 = __rdtsc();
            v3 = v2 + (unsigned int)dword_180163EC4;
            while ( 1 )
            {
              i = 0LL;
              __asm { monitorx rax, rcx, rdx }
              UniqueThread = v18[0];
              if ( (v18[0] & 2) == 0 )
                break;
              UniqueThread = v2;
              v12 = __rdtsc();
              i = (unsigned __int64)HIDWORD(v12) << 32;
              v2 = v12;
              if ( v12 <= UniqueThread || v12 >= v3 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              UniqueThread = v18[0];
              if ( (v18[0] & 2) == 0 || (_DWORD)i == dword_180163EC4 / (unsigned int)MEMORY[0x7FFE02D6] )
                break;
              _mm_pause();
            }
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v18, 1u) )
        {
          do
            ZwWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v18[0] & 4) == 0 );
        }
      }
      else
      {
        v8 = (Ptr | 1) + 16;
        if ( v7 )
          v8 = Ptr | 1;
        if ( Ptr == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8, Ptr) )
          return;
LABEL_14:
        sub_1800365A0(&v19);
        _m_prefetchw(SRWLock);
        Ptr = (unsigned __int64)SRWLock->Ptr;
      }
    }
  }
}
