/*
 * XREFs of ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800424C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18004BFB0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::ConnectToSaDevice(CBaseStreamGroupProxy *a1, __int64 a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 v13; // rdi
  unsigned int v14; // eax
  int v15; // eax
  _QWORD v17[8]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 96));
  v7 = *((_QWORD *)a1 + 11);
  if ( v7 )
  {
    if ( v7 == a2 )
    {
LABEL_10:
      v9 = 0;
      goto LABEL_11;
    }
    v9 = -2005139410;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x887C002ELL);
  }
  else
  {
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v19);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v8);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 10) + 80LL))(
              *((_QWORD *)a1 + 10),
              v19,
              a3);
      v9 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A6,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v10);
      }
      else
      {
        if ( *((_QWORD *)a1 + 11) != a2 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          v11 = *((_QWORD *)a1 + 11);
          *((_QWORD *)a1 + 11) = a2;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v17[0] = off_18015C440;
        v17[7] = v17;
        (*(void (__fastcall **)(CBaseStreamGroupProxy *, _QWORD *))(*(_QWORD *)a1 + 360LL))(a1, v17);
        (*(void (__fastcall **)(_QWORD, CBaseStreamGroupProxy *))(**((_QWORD **)a1 + 11) + 160LL))(
          *((_QWORD *)a1 + 11),
          a1);
        v12 = (__int64 *)*((_QWORD *)a1 + 11);
        v13 = *v12;
        v14 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a1 + 144LL))(a1);
        v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(v13 + 72))(v12, 0LL, v14, 0xFFFFFFFFLL);
        v9 = v15;
        if ( v15 >= 0 )
        {
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          goto LABEL_10;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4AE,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v15);
        CBaseStreamGroupProxy::DisconnectFromSaDevice(a1);
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  }
LABEL_11:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
