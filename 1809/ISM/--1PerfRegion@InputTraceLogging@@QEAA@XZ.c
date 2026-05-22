/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180081A1C
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800822EC (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180083740 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_IDENTIFICATION_MESSAGE_const_____ptr64_::_Do_call @ 0x180085CD0 (std--_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_ea_180085CD0.c)
 *     std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const_____ptr64_::_Do_call @ 0x180085D20 (std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOA_ea_180085D20.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C2300 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C25EC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3220 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$5 @ 0x180131DB1 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$5.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$0 @ 0x180132665 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$0 @ 0x180133D62 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$5 @ 0x180133D86 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$5.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$0 @ 0x180133DBC (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$6 @ 0x180133DE0 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$6.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // r10
  LPCGUID v4; // rdx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  LPCGUID v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  const wchar_t *v10; // [rsp+60h] [rbp-28h]
  __int64 v11; // [rsp+68h] [rbp-20h]

  v2 = InputTraceLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 6u && (*((_BYTE *)v2 + 16) & 1) != 0 && (*((_QWORD *)v2 + 3) & 1LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = (LPCGUID)&sourceString;
    LODWORD(v5) = 0;
    if ( *(_QWORD *)this )
    {
      v4 = *(LPCGUID *)this;
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(*(_QWORD *)this + 2 * v5) );
    }
    v7 = v4;
    v8 = 2 * v5 + 2;
    v10 = L"Stop";
    v9 = 0;
    v11 = 10LL;
    TlgWrite(v3, &unk_180168AA0, (LPCGUID)((char *)this + 8), *((LPCGUID *)this + 5), 4u, &pData);
  }
}
