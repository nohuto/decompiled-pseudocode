/*
 * XREFs of ?OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CEA70
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBULegacyInputInfo@@@Z @ 0x1800CF164 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1800D0004 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1800D013C (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MagnifierProcessor::OnHitTest(
        MagnifierProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 *DeviceState; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  char *v12; // r14
  __int64 v13; // rax
  bool v14; // cc
  char v15; // al
  char v16; // al
  __int64 v17; // rcx
  void (__fastcall ***v18)(_QWORD); // rcx
  void (__fastcall ***v19)(_QWORD); // rdi
  __int64 v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v7 = (__int64 *)((char *)a4 + 8);
  v8 = *((_QWORD *)a4 + 1);
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64, struct InputInfo *, struct InputContext *))(*(_QWORD *)v8 + 16LL))(v8, a2, a3);
  }
  *(_DWORD *)a4 = 0;
  if ( (*(_DWORD *)a2 & 0x88) == 8 && *((_QWORD *)this + 4) )
  {
    v25 = 0LL;
    DeviceState = (__int64 *)MagnifierProcessor::GetDeviceState(this, &v24, a2);
    v10 = 0LL;
    if ( &v25 != DeviceState )
    {
      v10 = *DeviceState;
      *DeviceState = 0LL;
    }
    v25 = v10;
    v11 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    *(_BYTE *)(v10 + 16) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 48LL))(*((_QWORD *)this + 4) + 8LL);
    *(_BYTE *)(v10 + 17) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 56LL))(*((_QWORD *)this + 4) + 8LL);
    v12 = (char *)(v10 + 32);
    v13 = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v10 + 32, &v24, *((_QWORD *)a2 + 2)) - *(_QWORD *)(v10 + 24);
    if ( !*(_BYTE *)(v10 + 33) || (v14 = 1000000LL * *(_QWORD *)(v10 + 64) < v13, v15 = 1, v14) )
      v15 = 0;
    *(_BYTE *)(v10 + 18) = v15;
    MagnifierRecognizer::Reset((MagnifierRecognizer *)(v10 + 32), (MagnifierProcessor *)((char *)this + 104));
    if ( *(_BYTE *)(v10 + 16) || (v16 = 0, *(_BYTE *)(v10 + 17)) )
      v16 = 1;
    *v12 = v16;
    *(_BYTE *)(v10 + 35) = *(_BYTE *)(v10 + 17);
    v17 = *(_QWORD *)(v10 + 112);
    if ( v17 )
    {
      *(_QWORD *)(v10 + 112) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = *(void (__fastcall ****)(_QWORD))(v10 + 120);
    v19 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
    if ( v18 != v19 )
    {
      if ( v19 )
      {
        (**v19)(v19);
        v18 = *(void (__fastcall ****)(_QWORD))(v10 + 120);
      }
      *(_QWORD *)(v10 + 120) = v19;
      if ( v18 )
        (*v18)[1](v18);
    }
    if ( *v12 || *(_BYTE *)(v10 + 35) )
    {
      v20 = *v7;
      if ( *v7 )
      {
        *v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
              v10,
              &GUID_00000000_0000_0000_c000_000000000046,
              v7);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x47,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
          (const char *)(unsigned int)v21);
        JUMPOUT(0x1800CEC86LL);
      }
      *(_DWORD *)a4 = 1;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
