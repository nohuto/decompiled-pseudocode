/*
 * XREFs of ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140039E68
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000BCF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000A090 (-CopyTo@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CConnectionInstance::AddCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rcx
  _QWORD *v26; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 *v28; // [rsp+60h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
  {
    if ( !*((_QWORD *)this + 3) )
    {
      v7 = 430LL;
LABEL_4:
      v8 = -2005139396;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)0x887C003CLL);
      return v8;
    }
    goto LABEL_27;
  }
  v10 = *(_DWORD *)(v6 + 40);
  if ( v10 != 2 )
  {
    if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
    {
      v7 = 459LL;
      goto LABEL_4;
    }
    v18 = *(_QWORD **)(v6 + 32);
    v28 = 0LL;
    v19 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*v18)(
            *v18,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v28);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 454LL;
      goto LABEL_22;
    }
    v19 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 104LL))(
            a2,
            a3,
            *((_QWORD *)this + 1),
            v28);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 455LL;
      goto LABEL_22;
    }
    v17 = v28;
    if ( v28 )
    {
      v16 = *v28;
      goto LABEL_26;
    }
LABEL_27:
    v21 = *((_QWORD *)this + 3);
    if ( !v21 )
      return 0LL;
    v22 = *(_DWORD *)(v21 + 40);
    if ( v22 == 2 )
    {
      v23 = *(_QWORD *)(v21 + 32);
      v28 = 0LL;
      v12 = ATL::CComPtrBase<IAudioMediaType>::CopyTo((_QWORD *)(v23 + 40), &v28);
      v13 = v12;
      v14 = v28;
      if ( v12 < 0 )
      {
        v15 = 472LL;
        goto LABEL_11;
      }
      v12 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 72LL))(
              a2,
              a3,
              v28,
              *((_QWORD *)this + 1));
      v13 = v12;
      if ( v12 < 0 )
      {
        v15 = 473LL;
        goto LABEL_11;
      }
      if ( v14 )
      {
        v24 = *v14;
        v25 = v14;
LABEL_35:
        (*(void (__fastcall **)(__int64 *))(v24 + 16))(v25);
      }
      return 0LL;
    }
    if ( ((v22 - 1) & 0xFFFFFFF9) != 0 || v22 == 7 )
    {
      v7 = 490LL;
      goto LABEL_4;
    }
    v26 = *(_QWORD **)(v21 + 32);
    v28 = 0LL;
    v19 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*v26)(
            *v26,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v28);
    v8 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 112LL))(
              a2,
              a3,
              *((_QWORD *)this + 1),
              v28);
      v8 = v19;
      if ( v19 >= 0 )
      {
        v25 = v28;
        if ( !v28 )
          return 0LL;
        v24 = *v28;
        goto LABEL_35;
      }
      v20 = 486LL;
    }
    else
    {
      v20 = 485LL;
    }
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v19);
    if ( v28 )
      (*(void (__fastcall **)(__int64 *))(*v28 + 16))(v28);
    return v8;
  }
  v11 = *(_QWORD *)(v6 + 32);
  v28 = 0LL;
  v12 = ATL::CComPtrBase<IAudioMediaType>::CopyTo((_QWORD *)(v11 + 40), &v28);
  v13 = v12;
  v14 = v28;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 88LL))(
            a2,
            a3,
            v28,
            *((_QWORD *)this + 1));
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 442LL;
      goto LABEL_11;
    }
    if ( v14 )
    {
      v16 = *v14;
      v17 = v14;
LABEL_26:
      (*(void (__fastcall **)(__int64 *))(v16 + 16))(v17);
      goto LABEL_27;
    }
    goto LABEL_27;
  }
  v15 = 441LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)(unsigned int)v12);
  if ( v14 )
    (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
  return v13;
}
