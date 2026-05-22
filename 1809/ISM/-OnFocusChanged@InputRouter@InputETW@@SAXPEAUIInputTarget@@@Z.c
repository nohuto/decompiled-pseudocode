/*
 * XREFs of ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x1800869C0
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18008BBB0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x18002217C (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputETW::InputRouter::OnFocusChanged(struct IInputTarget *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-2Dh] BYREF
  unsigned int v11; // [rsp+48h] [rbp-29h] BYREF
  __int64 v12; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  __int64 *v15; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  __int64 *v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]
  _QWORD *v21; // [rsp+A8h] [rbp+37h]
  int v22; // [rsp+B0h] [rbp+3Fh]
  int v23; // [rsp+B4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v13[1] = -2LL;
  v2 = *((_QWORD *)InputETW::Instance() + 1);
  if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( a1 )
    {
      v8 = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a1)(
             a1,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v8) >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 32LL))(v8, &v9);
        if ( v3 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x92,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\inputetw.tlh",
            (const char *)(unsigned int)v3);
          __debugbreak();
        }
        v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 40LL))(v8, &v10);
        if ( v4 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x93,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\inputetw.tlh",
            (const char *)(unsigned int)v4);
          JUMPOUT(0x180086BB5LL);
        }
        v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 48LL))(v8, &v11);
        if ( v5 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x94,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\inputetw.tlh",
            (const char *)(unsigned int)v5);
          __debugbreak();
        }
      }
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    v7 = *((_QWORD *)InputETW::Instance() + 1);
    if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = v9;
      v15 = &v8;
      v16 = 8;
      v17 = 0;
      v12 = v10;
      v18 = &v12;
      v19 = 8;
      v20 = 0;
      v13[0] = v11;
      v21 = v13;
      v22 = 8;
      v23 = 0;
      TlgWrite((TraceLoggingHProvider)v7, &unk_180168D4E, 0LL, 0LL, 5u, &pData);
    }
  }
}
