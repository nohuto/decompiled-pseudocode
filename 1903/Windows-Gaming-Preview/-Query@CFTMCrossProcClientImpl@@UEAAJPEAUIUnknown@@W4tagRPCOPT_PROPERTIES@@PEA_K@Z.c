/*
 * XREFs of ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x180041F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::Query(
        CFTMCrossProcClientImpl *this,
        struct IUnknown *a2,
        enum tagRPCOPT_PROPERTIES a3,
        unsigned __int64 *a4)
{
  signed int v5; // ebx
  __int64 v6; // rcx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v5 = a3 != COMBND_SERVER_LOCALITY ? 0x80070057 : 0;
  if ( a3 == COMBND_SERVER_LOCALITY )
  {
    v6 = *((_QWORD *)this + 2);
    v7 = -2147467262;
    if ( v6 )
    {
      v13 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v6 + 24LL))(
             v6,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v13);
      if ( v5 >= 0 )
      {
        v12[0] = 0LL;
        v8 = (**v13)(v13, &GUID_00000144_0000_0000_c000_000000000046, v12);
        v7 = v8;
        if ( v8 < 0 )
        {
          if ( v8 != -2147467262 )
            v5 = v8;
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, unsigned __int64 *))(*(_QWORD *)v12[0] + 32LL))(
                 v12[0],
                 v13,
                 2LL,
                 a4);
        }
        v9 = v12[0];
        if ( v12[0] )
        {
          v12[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v10)[2])(v10);
      }
    }
    if ( v5 >= 0 && v7 == -2147467262 )
    {
      *a4 = 0LL;
      return 0;
    }
  }
  return (unsigned int)v5;
}
