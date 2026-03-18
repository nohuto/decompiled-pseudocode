/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C00AE7DC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     NtUserSendInput @ 0x1C00AE4F0 (NtUserSendInput.c)
 *     EditionHandleMitSignal @ 0x1C00AE650 (EditionHandleMitSignal.c)
 *     EditionLLMouseButtonHook @ 0x1C00B47C0 (EditionLLMouseButtonHook.c)
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 *     ProcessHidRawInput @ 0x1C01C4EB0 (ProcessHidRawInput.c)
 *     EditionLLMouseWheelHook @ 0x1C01C8ED0 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C0218BE0 (NtUserInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00AE850 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

LPCWSTR **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        LPCWSTR **this,
        const unsigned __int16 *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  __int64 v6; // rdx
  LPCWSTR *v8; // rax
  __int64 CurrentThreadWin32Thread; // rax
  signed __int32 v10; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+70h] [rbp-38h] BYREF
  signed __int32 *v14; // [rsp+80h] [rbp-28h]
  int v15; // [rsp+88h] [rbp-20h]
  int v16; // [rsp+8Ch] [rbp-1Ch]

  *this = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(1LL) )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) )
    {
      v8 = (LPCWSTR *)Win32AllocateFromPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      *this = v8;
      if ( v8 )
      {
        *v8 = a2;
        (*this)[5] = 0LL;
        v10 = 0x80000000;
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
        if ( CurrentThreadWin32Thread )
          v10 = _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (LPCWSTR)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( dword_1C030D340 > 6u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 1uLL) )
        {
          TlgCreateWsz(&pDesc, **this);
          TlgCreateWsz(&v13, L"Start");
          v16 = 0;
          v14 = &v10;
          v15 = 4;
          TlgWrite(
            (TraceLoggingHProvider)&dword_1C030D340,
            &unk_1C02D4960,
            (LPCGUID)(*this + 1),
            (LPCGUID)(*this)[5],
            5u,
            &pData);
        }
        PushW32ThreadLock(this, *this + 6, lambda_01d02e0fe91b87acfd5bf6b036e4910e_::_lambda_invoker_cdecl_);
      }
    }
  }
  return this;
}
