/*
 * XREFs of ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18005E478
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18005E1E0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18005DD2C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18005DF8C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18005E3F8 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?FindDeviceHandle@RIMDeviceCollection@@IEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E9CC (-FindDeviceHandle@RIMDeviceCollection@@IEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::OnReadEvent(HANDLE *this)
{
  char v2; // si
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int *v5; // rcx
  unsigned int v6; // edi
  int Buffer; // eax
  unsigned int v8; // edi
  int InputReportFromRIM; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v12; // [rsp+70h] [rbp+20h]
  struct RIMDevice *v13; // [rsp+78h] [rbp+28h] BYREF

  v13 = 0LL;
  v12 = 0;
  v2 = 1;
  v3 = *((unsigned int *)this + 680);
  if ( (_DWORD)v3 == -1073741528 )
  {
    RIMDeviceCollection::Close(this);
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  if ( (v3 & 0x80000000) != 0LL )
  {
    v4 = 632LL;
LABEL_22:
    v8 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)v4,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
           (const char *)v3);
    goto LABEL_15;
  }
  if ( (int)RIMDeviceCollection::FindDeviceHandle((RIMDeviceCollection *)this, this[338], &v13, 0LL) < 0 )
    goto LABEL_25;
  v5 = (unsigned int *)*((_QWORD *)v13 + 4);
  v6 = *((unsigned __int16 *)this + 1364);
  if ( (v5[1] & 0xFFFFFEFF) != 0 )
    (*((void (__fastcall **)(HANDLE *, _QWORD, HANDLE, _QWORD))*this + 10))(
      this,
      *v5,
      this[337],
      *((unsigned __int16 *)this + 1364));
  if ( this[337] == this[335]
    || (v12 = 1,
        RIMFreeInputBuffer(this[10]),
        this[337] = 0LL,
        Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, (const struct std::nothrow_t *)v6),
        v8 = Buffer,
        Buffer >= 0) )
  {
LABEL_25:
    if ( *((_BYTE *)this + 2736) )
    {
      SetEvent(this[7]);
    }
    else
    {
      InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
      if ( InputReportFromRIM < 0 )
      {
        v3 = (unsigned int)InputReportFromRIM;
        v4 = 702LL;
        goto LABEL_22;
      }
    }
    v2 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AA,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)Buffer);
LABEL_15:
  if ( v2 && v12 && this[337] )
  {
    RIMFreeInputBuffer(this[10]);
    this[337] = 0LL;
  }
  return v8;
}
