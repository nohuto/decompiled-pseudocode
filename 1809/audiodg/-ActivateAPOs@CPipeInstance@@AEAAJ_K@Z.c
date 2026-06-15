/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140009C90
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140009910 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000A500 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000AB80 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140037E7C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003B14C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rdi
  HRESULT v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, __int64, _QWORD); // rax
  int v9; // r12d
  unsigned int v10; // esi
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  int ppv; // [rsp+20h] [rbp-89h]
  int ppva; // [rsp+20h] [rbp-89h]
  char *v20; // [rsp+28h] [rbp-81h]
  int v21; // [rsp+30h] [rbp-79h]
  int v22; // [rsp+38h] [rbp-71h]
  int v23; // [rsp+40h] [rbp-69h]
  int v24; // [rsp+48h] [rbp-61h]
  int v25; // [rsp+50h] [rbp-59h]
  int v26; // [rsp+58h] [rbp-51h]
  int v27; // [rsp+60h] [rbp-49h]
  int v28; // [rsp+68h] [rbp-41h]
  int v29; // [rsp+70h] [rbp-39h]
  int v30; // [rsp+78h] [rbp-31h]
  __int64 v31; // [rsp+80h] [rbp-29h] BYREF
  __int64 v32; // [rsp+88h] [rbp-21h]
  __int128 v33; // [rsp+90h] [rbp-19h]
  __int128 v34; // [rsp+A0h] [rbp-9h]
  char v35; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v37; // [rsp+110h] [rbp+67h] BYREF
  __int64 v38; // [rsp+118h] [rbp+6Fh]
  __int64 v39; // [rsp+120h] [rbp+77h] BYREF
  LPVOID v40; // [rsp+128h] [rbp+7Fh] BYREF

  v38 = a2;
  v32 = -2LL;
  v3 = *((_QWORD *)this + 3);
  if ( !v3 )
    return 0LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v5 + 40) == 2 )
      break;
LABEL_12:
    if ( !v3 )
      return 0LL;
  }
  v37 = *(_QWORD *)(v5 + 32);
  *(_QWORD *)&v33 = &v37;
  *((_QWORD *)&v33 + 1) = this;
  v34 = v33;
  v35 = 1;
  v6 = *(_QWORD *)(v37 + 40);
  v31 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    a2 = v38;
  }
  v7 = *((_QWORD *)this + 18);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 56LL);
  if ( *((_DWORD *)this + 3) == 1 )
  {
    ppv = 1;
    v9 = v8(v7, a2, v6, 0LL);
    if ( v9 < 0 )
    {
      v14 = v37;
      v30 = *(unsigned __int8 *)(v37 + 23);
      v29 = *(unsigned __int8 *)(v37 + 22);
      v15 = 3035LL;
      goto LABEL_28;
    }
    goto LABEL_8;
  }
  ppv = 0;
  v9 = v8(v7, a2, v6, 0LL);
  if ( v9 >= 0 )
  {
LABEL_8:
    v10 = *(_DWORD *)(v37 + 4);
    if ( v10 )
    {
      v12 = *((_QWORD *)this + 23);
      v40 = 0LL;
      v39 = 0LL;
      if ( (unsigned int)GetClassFromEndpointId(v12) != 3 )
      {
        v4 = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &v40);
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v40 + 40LL))(v40, v12, &v39);
          if ( v4 >= 0 )
          {
            LOBYTE(v13) = 1;
            v4 = TrackSystemEffectBehavior(v39, v10, v13, 0LL);
          }
        }
      }
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      if ( v40 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v40 + 16LL))(v40);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBE7,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v4,
          ppv);
      v4 = 0;
    }
    v35 = 0;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    a2 = v38;
    goto LABEL_12;
  }
  v14 = v37;
  v30 = *(unsigned __int8 *)(v37 + 23);
  v29 = *(unsigned __int8 *)(v37 + 22);
  v15 = 3040LL;
LABEL_28:
  v28 = *(unsigned __int8 *)(v14 + 21);
  v27 = *(unsigned __int8 *)(v14 + 20);
  v26 = *(unsigned __int8 *)(v14 + 19);
  v25 = *(unsigned __int8 *)(v14 + 18);
  v24 = *(unsigned __int8 *)(v14 + 17);
  v23 = *(unsigned __int8 *)(v14 + 16);
  v22 = *(unsigned __int16 *)(v14 + 14);
  v21 = *(unsigned __int16 *)(v14 + 12);
  LODWORD(v20) = *(_DWORD *)(v14 + 8);
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)v15,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v9,
    (int)"Activate failed for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v31);
  v16 = *(unsigned int *)(v37 + 4);
  if ( (_DWORD)v16 )
  {
    v17 = TrackSystemEffectBehavior(*((_QWORD *)this + 23), v16, 0LL);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBD1,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v17,
        ppva);
  }
  return (unsigned int)v9;
}
