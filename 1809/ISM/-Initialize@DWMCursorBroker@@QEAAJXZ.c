/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180106064
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18009DCBC (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800C07A8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x1800C07E0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this, __int64 a2)
{
  int Descriptor; // eax
  const char *v4; // r9
  unsigned int v5; // ebx
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  char v25; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v27; // [rsp+88h] [rbp+10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+18h]

  v24 = 0LL;
  v25 = 0;
  v27 = 0;
  v28 = 0LL;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v24, a2, (__int64)L"System\\Input\\CursorBrokerPort");
  v5 = Descriptor;
  v6 = retaddr;
  if ( Descriptor >= 0 )
  {
    if ( !ISMTestMode::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x20,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
        v4);
      __debugbreak();
    }
    if ( *(_BYTE *)ISMTestMode::s_instance )
      goto LABEL_9;
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
    {
      *((_QWORD *)this + 5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    Descriptor = DCompositionCreateDevice3(0LL, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, (char *)this + 40);
    v5 = Descriptor;
    if ( Descriptor >= 0 )
    {
LABEL_9:
      v9 = (__int64 *)((char *)this + 176);
      v10 = *((_QWORD *)this + 22);
      if ( v10 )
      {
        *v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      Descriptor = CoreUICreate((char *)this + 176);
      v5 = Descriptor;
      if ( Descriptor >= 0 )
      {
        v11 = *v9;
        v12 = (_QWORD *)((char *)this + 200);
        v13 = *((_QWORD *)this + 25);
        if ( v13 )
        {
          *v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v11 + 48LL))(
                v11,
                v24,
                L"System\\Input\\CursorBrokerPort",
                (char *)this + 200);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x51,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
            (const char *)(unsigned int)v14);
          __debugbreak();
        }
        v15 = (_QWORD *)((char *)this + 184);
        v16 = *((_QWORD *)this + 23);
        if ( v16 )
        {
          *v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        Descriptor = CoreUIFactoryCreate((char *)this + 184);
        v5 = Descriptor;
        if ( Descriptor >= 0 )
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v15 + 24LL))(
                  *v15,
                  &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
                  &v27);
          if ( v17 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x57,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
              (const char *)(unsigned int)v17);
            JUMPOUT(0x180106349LL);
          }
          v18 = *v15;
          v19 = *((_QWORD *)this + 24);
          if ( v19 )
          {
            *((_QWORD *)this + 24) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v20 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const char *, _QWORD, char *))(*(_QWORD *)v18 + 32LL))(
                  v18,
                  (char *)this + 8,
                  0LL,
                  v27,
                  L"System\\Input\\CursorBrokerEndpoint",
                  *v12,
                  (char *)this + 192);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x5F,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
              (const char *)(unsigned int)v20);
            __debugbreak();
          }
          v21 = (_QWORD *)((char *)this + 384);
          v22 = *((_QWORD *)this + 48);
          if ( v22 )
          {
            *v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          Descriptor = InputConfigContextProvider::Create((struct ISystemContextProvider **)this + 48);
          v5 = Descriptor;
          if ( Descriptor >= 0 )
          {
            Descriptor = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v21 + 24LL))(*v21, (char *)this + 16);
            v5 = Descriptor;
            if ( Descriptor >= 0 )
            {
              *((_DWORD *)this + 94) = 3;
              v5 = 0;
              goto LABEL_33;
            }
            v7 = 100LL;
          }
          else
          {
            v7 = 98LL;
          }
        }
        else
        {
          v7 = 83LL;
        }
      }
      else
      {
        v7 = 76LL;
      }
    }
    else
    {
      v7 = 73LL;
    }
    v6 = retaddr;
  }
  else
  {
    v7 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    v6,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)Descriptor);
LABEL_33:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v24);
  return v5;
}
