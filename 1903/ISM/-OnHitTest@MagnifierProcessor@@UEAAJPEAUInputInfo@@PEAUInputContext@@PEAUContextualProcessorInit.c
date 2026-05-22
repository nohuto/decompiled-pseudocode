/*
 * XREFs of ?OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180105470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006AA70 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUPointerInputInfo@@@Z @ 0x180105268 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x1801064A8 (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x180106810 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801068E8 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MagnifierProcessor::OnHitTest(
        MagnifierProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v7; // rbx
  char *v8; // r15
  __int64 *DeviceState; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  bool v12; // al
  bool v13; // al
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, GUID *, __int64 *); // rdi
  int v16; // eax
  __int64 v18[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v18[1] = -2LL;
  v7 = (__int64 *)((char *)a4 + 8);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)a4 + 1);
  *(_DWORD *)a4 = 0;
  if ( (*(_DWORD *)a2 & 0x88) == 8 )
  {
    v8 = (char *)this + 32;
    if ( *((_QWORD *)this + 4) )
    {
      v21 = 0LL;
      DeviceState = MagnifierProcessor::GetDeviceState((__int64)this, v18, (__int64)a2);
      v10 = 0LL;
      if ( &v20 != DeviceState )
      {
        v10 = *DeviceState;
        *DeviceState = 0LL;
      }
      v20 = 0LL;
      v21 = v10;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v18);
      *(_BYTE *)(v10 + 16) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 48LL))(*(_QWORD *)v8 + 8LL);
      *(_BYTE *)(v10 + 17) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 56LL))(*(_QWORD *)v8 + 8LL);
      v11 = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v10 + 32, &v20, *((_QWORD *)a2 + 2))
          - *(_QWORD *)(v10 + 24);
      v12 = *(_BYTE *)(v10 + 33) && 1000000LL * *(_QWORD *)(v10 + 64) >= v11;
      *(_BYTE *)(v10 + 18) = v12;
      MagnifierRecognizer::Reset((MagnifierRecognizer *)(v10 + 32), (MagnifierProcessor *)((char *)this + 104));
      v13 = *(_BYTE *)(v10 + 16) || *(_BYTE *)(v10 + 17);
      *(_BYTE *)(v10 + 32) = v13;
      *(_BYTE *)(v10 + 35) = *(_BYTE *)(v10 + 17);
      v14 = *(_QWORD *)(v10 + 112);
      if ( v14 )
      {
        *(_QWORD *)(v10 + 112) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=(
        (__int64 (__fastcall ****)(_QWORD))(v10 + 120),
        (_QWORD *)this + 4);
      if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v10 + 32)) )
      {
        v15 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10;
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v7);
        v16 = v15(v10, &GUID_00000000_0000_0000_c000_000000000046, v7);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            71LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\m"
                     "agnifierprocessor.cpp",
            (const char *)(unsigned int)v16);
          __debugbreak();
        }
        *(_DWORD *)a4 = 1;
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v21);
    }
  }
  return 0LL;
}
