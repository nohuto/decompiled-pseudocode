/*
 * XREFs of ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x180124940
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x180124D2C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Sarm::CStreamResource::NotifyClientOfGrant(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // r10
  unsigned int v12; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  char *v16; // [rsp+70h] [rbp-19h]
  __int64 v17; // [rsp+78h] [rbp-11h]
  char *v18; // [rsp+80h] [rbp-9h]
  __int64 v19; // [rsp+88h] [rbp-1h]
  int *v20; // [rsp+90h] [rbp+7h]
  __int64 v21; // [rsp+98h] [rbp+Fh]
  __int64 *v22; // [rsp+A0h] [rbp+17h]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]
  int *v24; // [rsp+B0h] [rbp+27h]
  __int64 v25; // [rsp+B8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v12 = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)this + 168LL))(
         *(_QWORD *)this,
         0LL,
         a3,
         a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( (unsigned int)dword_1801B6350 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1801B6350, 0x400000000000uLL) )
      {
        v17 = 8LL;
        v16 = (char *)this + 40;
        v18 = (char *)this + 16;
        v20 = (int *)&v12;
        v22 = &v14;
        v13 = *((_DWORD *)this + 13);
        v24 = &v13;
        v19 = 16LL;
        v21 = v11;
        v14 = a3;
        v23 = 8LL;
        v25 = v11;
        TlgWrite(v8, &unk_18017A9D8, v9, v10, 7u, &pData);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
