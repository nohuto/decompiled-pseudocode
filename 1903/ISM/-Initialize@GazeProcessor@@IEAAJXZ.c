/*
 * XREFs of ?Initialize@GazeProcessor@@IEAAJXZ @ 0x180125734
 * Callers:
 *     ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801255E0 (-Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18001B93C (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeProcessor::Initialize(GazeProcessor *this)
{
  struct ISystemContextProvider **v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, char *); // rbp
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v2 = (struct ISystemContextProvider **)((char *)this + 216);
  v3 = *((_QWORD *)this + 27);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = InputConfigContextProvider::Create(v2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(struct ISystemContextProvider *, char *))(*(_QWORD *)*v2 + 24LL))(
           *v2,
           (char *)this + 8);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v7 + 80LL);
      v9 = *((_QWORD *)this + 11);
      if ( v9 )
      {
        *((_QWORD *)this + 11) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v4 = v8(v7, *((_QWORD *)this + 8), (char *)this + 88);
      v5 = v4;
      if ( v4 >= 0 )
      {
        v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
        v11 = **v10;
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v14);
        v4 = v11(v10, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v14);
        v5 = v4;
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 24LL))(v14, (char *)this + 16);
          v5 = v4;
          if ( v4 >= 0 )
          {
            v5 = 0;
            goto LABEL_17;
          }
          v6 = 62LL;
        }
        else
        {
          v6 = 60LL;
        }
      }
      else
      {
        v6 = 57LL;
      }
    }
    else
    {
      v6 = 53LL;
    }
  }
  else
  {
    v6 = 51LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)(unsigned int)v4);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v14);
  return v5;
}
