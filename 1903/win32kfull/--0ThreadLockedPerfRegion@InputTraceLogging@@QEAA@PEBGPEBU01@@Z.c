/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E63C
 * Callers:
 *     NtUserSendInput @ 0x1C001DEB0 (NtUserSendInput.c)
 *     EditionHandleMitSignal @ 0x1C001E550 (EditionHandleMitSignal.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C00422E4 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     EditionLLMouseButtonHook @ 0x1C00B5980 (EditionLLMouseButtonHook.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C0117130 (-OnPointerCursorOperation@@YAXXZ.c)
 *     ProcessHidRawInput @ 0x1C01D82A0 (ProcessHidRawInput.c)
 *     EditionLLMouseWheelHook @ 0x1C01DC7F0 (EditionLLMouseWheelHook.c)
 *     OnPTPMouseOperation @ 0x1C02030C0 (OnPTPMouseOperation.c)
 *     NtUserInjectTouchInput @ 0x1C02309A0 (NtUserInjectTouchInput.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C001E6A4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

LPCWSTR **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        LPCWSTR **this,
        const unsigned __int16 *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  LPCWSTR *v7; // rax
  __int64 CurrentThreadWin32Thread; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  *this = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(1LL) )
  {
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      v7 = (LPCWSTR *)Win32AllocateFromPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      *this = v7;
      if ( v7 )
      {
        *v7 = a2;
        (*this)[5] = 0LL;
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
        if ( CurrentThreadWin32Thread )
          _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (LPCWSTR)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( dword_1C03222C0 > 6u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 1uLL) )
        {
          TlgCreateWsz(&pDesc, **this);
          TlgWrite(
            (TraceLoggingHProvider)&dword_1C03222C0,
            &unk_1C02E6D86,
            (LPCGUID)(*this + 1),
            (LPCGUID)(*this)[5],
            3u,
            &pData);
        }
        PushW32ThreadLock(this, *this + 6, lambda_01d02e0fe91b87acfd5bf6b036e4910e_::_lambda_invoker_cdecl_);
      }
    }
  }
  return this;
}
