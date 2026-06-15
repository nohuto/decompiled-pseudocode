/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000C070
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000BCF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140007D0C (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___ @ 0x140017AD4 (wil--details--lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___--_lambda_call__lambda_d6c9.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400329C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x140035B10 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, __int64, _QWORD, int); // rax
  int v9; // r12d
  unsigned int v10; // edx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-C8h]
  char *v16; // [rsp+28h] [rbp-C0h]
  int v17; // [rsp+30h] [rbp-B8h]
  int v18; // [rsp+38h] [rbp-B0h]
  int v19; // [rsp+40h] [rbp-A8h]
  int v20; // [rsp+48h] [rbp-A0h]
  int v21; // [rsp+50h] [rbp-98h]
  int v22; // [rsp+58h] [rbp-90h]
  int v23; // [rsp+60h] [rbp-88h]
  int v24; // [rsp+68h] [rbp-80h]
  int v25; // [rsp+70h] [rbp-78h]
  int v26; // [rsp+78h] [rbp-70h]
  __int128 v27; // [rsp+88h] [rbp-60h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF
  char v29; // [rsp+A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v31; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+100h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_DWORD *)(v5 + 40) == 2 )
      break;
LABEL_11:
    if ( !v4 )
      return 0LL;
  }
  v31 = *(_QWORD *)(v5 + 32);
  *(_QWORD *)&v27 = &v31;
  *((_QWORD *)&v27 + 1) = this;
  v28 = v27;
  v29 = 1;
  v6 = *(_QWORD *)(v31 + 40);
  v32 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *((_QWORD *)this + 19);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int))(*(_QWORD *)v7 + 56LL);
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v9 = v8(v7, a2, v6, 0LL, 1);
    if ( v9 < 0 )
    {
      v26 = *(unsigned __int8 *)(v31 + 23);
      v25 = *(unsigned __int8 *)(v31 + 22);
      v24 = *(unsigned __int8 *)(v31 + 21);
      v23 = *(unsigned __int8 *)(v31 + 20);
      v22 = *(unsigned __int8 *)(v31 + 19);
      v21 = *(unsigned __int8 *)(v31 + 18);
      v20 = *(unsigned __int8 *)(v31 + 17);
      v19 = *(unsigned __int8 *)(v31 + 16);
      v18 = *(unsigned __int16 *)(v31 + 14);
      v17 = *(unsigned __int16 *)(v31 + 12);
      v13 = *(_DWORD *)(v31 + 8);
      v14 = 3041LL;
      goto LABEL_18;
    }
    goto LABEL_7;
  }
  v9 = v8(v7, a2, v6, 0LL, 0);
  if ( v9 >= 0 )
  {
LABEL_7:
    v10 = *(_DWORD *)(v31 + 4);
    if ( v10 )
    {
      v12 = TrackSystemEffectBehavior(*((_QWORD *)this + 24), v10, 1, 0, v31 + 8, SLODWORD(FLOAT_1_0));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBED,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v12,
          v15);
    }
    v29 = 0;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___(&v28);
    goto LABEL_11;
  }
  v26 = *(unsigned __int8 *)(v31 + 23);
  v25 = *(unsigned __int8 *)(v31 + 22);
  v24 = *(unsigned __int8 *)(v31 + 21);
  v23 = *(unsigned __int8 *)(v31 + 20);
  v22 = *(unsigned __int8 *)(v31 + 19);
  v21 = *(unsigned __int8 *)(v31 + 18);
  v20 = *(unsigned __int8 *)(v31 + 17);
  v19 = *(unsigned __int8 *)(v31 + 16);
  v18 = *(unsigned __int16 *)(v31 + 14);
  v17 = *(unsigned __int16 *)(v31 + 12);
  v13 = *(_DWORD *)(v31 + 8);
  v14 = 3046LL;
LABEL_18:
  LODWORD(v16) = v13;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v9,
    (int)"Activate failed for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    -2LL);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v32);
  wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___(&v28);
  return (unsigned int)v9;
}
