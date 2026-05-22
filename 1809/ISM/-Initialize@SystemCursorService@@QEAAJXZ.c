/*
 * XREFs of ?Initialize@SystemCursorService@@QEAAJXZ @ 0x1800953C4
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x180091C70 (-EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x1800D982C (-Initialize@CursorManager@@IEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorService::Initialize(SystemCursorService *this)
{
  __int64 v2; // rcx
  int v3; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  int v7; // edi
  int v8; // eax
  HRESULT v10; // eax
  int ActivationFactory; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-50h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v23[1] = -2LL;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_DWORD *)this + 34);
  v4 = malloc(0x58uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x58uLL);
  if ( v5 )
  {
    v5[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 6) = 1;
    *v5 = &CursorManager::`vftable'{for `ICursorManager'};
    v5[1] = &CursorManager::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
    v5[2] = &CursorManager::`vftable'{for `RefCountedObject'};
    v5[4] = 0LL;
    v5[5] = 0LL;
    v5[6] = 0LL;
    v6 = v5[4];
    if ( v6 )
    {
      v5[4] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v5[8] = 0LL;
    v5[9] = 0LL;
    v5[7] = this;
    *((_DWORD *)v5 + 20) = v3;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)0x8007000ELL);
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v8 = CursorManager::Initialize((CursorManager *)v5);
  v7 = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 3) = v5;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  if ( v7 < 0 )
    goto LABEL_16;
  v22 = 0LL;
  string = 0LL;
  v10 = WindowsCreateStringReference(L"Windows.UI.Composition.Compositor", 0x21u, &hstringHeader, &string);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    JUMPOUT(0x1800956EDLL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, &v22);
  v12 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v23[0] = 0LL;
    v13 = (**v22)(v22, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, v23);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v15 = v23[0];
      v16 = (__int64 *)((char *)this + 144);
      v17 = *((_QWORD *)this + 18);
      if ( v17 )
      {
        *v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v15 + 48LL))(
              v15,
              0LL,
              0LL,
              &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
              (char *)this + 144);
      v12 = v13;
      if ( v13 >= 0 )
      {
        v18 = *v16;
        v19 = *((_QWORD *)this + 19);
        if ( v19 )
        {
          *((_QWORD *)this + 19) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 72LL))(v18, (char *)this + 152);
        v12 = v13;
        if ( v13 >= 0 )
        {
          v12 = 0;
LABEL_32:
          v20 = v23[0];
          if ( v23[0] )
          {
            v23[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          goto LABEL_34;
        }
        v14 = 46LL;
      }
      else
      {
        v14 = 39LL;
      }
    }
    else
    {
      v14 = 34LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_34:
  v21 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[2])(v21);
  }
  return v12;
}
