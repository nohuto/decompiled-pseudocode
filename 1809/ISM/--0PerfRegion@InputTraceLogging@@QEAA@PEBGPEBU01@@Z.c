/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800818C8
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800822EC (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180083740 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_IDENTIFICATION_MESSAGE_const_____ptr64_::_Do_call @ 0x180085CD0 (std--_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_ea_180085CD0.c)
 *     std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const_____ptr64_::_Do_call @ 0x180085D20 (std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOA_ea_180085D20.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C2300 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C25EC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3220 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

InputTraceLogging::PerfRegion *__fastcall InputTraceLogging::PerfRegion::PerfRegion(
        InputTraceLogging::PerfRegion *this,
        const unsigned __int16 *a2,
        const struct InputTraceLogging::PerfRegion *a3)
{
  GUID *v3; // rdi
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  const WCHAR *v10; // r8
  __int64 v11; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+5Ch] [rbp-2Ch]
  const wchar_t *v17; // [rsp+60h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp-20h]

  *(_QWORD *)this = a2;
  v3 = (GUID *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v5 = (_OWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( a3 )
  {
    v6 = *(_OWORD *)((char *)a3 + 8);
    *((_QWORD *)this + 5) = v5;
    *v5 = v6;
  }
  v7 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v7 )
  {
    if ( (*((_BYTE *)v7 + 16) & 1) != 0 && (*((_QWORD *)v7 + 3) & 1LL) == *((_QWORD *)v7 + 3) )
    {
      EventActivityIdControl(3u, v3);
      v8 = InputTraceLogging::Provider();
      v9 = v8;
      if ( *(_DWORD *)v8 > 6u && (*((_BYTE *)v8 + 16) & 1) != 0 && (*((_QWORD *)v8 + 3) & 1LL) == *((_QWORD *)v8 + 3) )
      {
        v10 = &sourceString;
        LODWORD(v11) = 0;
        if ( *(_QWORD *)this )
        {
          v10 = *(const WCHAR **)this;
          v11 = -1LL;
          do
            ++v11;
          while ( *(_WORD *)(*(_QWORD *)this + 2 * v11) );
        }
        v14 = v10;
        v15 = 2 * v11 + 2;
        v17 = L"Start";
        v16 = 0;
        v18 = 12LL;
        TlgWrite(v9, &unk_180168A75, v3, *((LPCGUID *)this + 5), 4u, &pData);
      }
    }
  }
  return this;
}
