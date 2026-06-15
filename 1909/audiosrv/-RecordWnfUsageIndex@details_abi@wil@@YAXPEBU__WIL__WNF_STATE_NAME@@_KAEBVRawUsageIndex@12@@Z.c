/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180038440
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800383B4 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800385D0 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?ReadWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@PEAE_KAEAVRawUsageIndex@12@PEAK@Z @ 0x180038AC0 (-ReadWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@PEAE_KAEAVRawUsageIndex@12@P.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18003924C (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18004EBC4 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rbx
  wil::details_abi *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int8 *v8; // r8
  char v9; // si
  void *v10; // rcx
  int updated; // eax
  void *v12; // rcx
  struct wil::details_abi::RawUsageIndex *v13; // [rsp+20h] [rbp-E0h]
  unsigned int *v14; // [rsp+28h] [rbp-D8h]
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v19; // [rsp+68h] [rbp-98h]
  unsigned __int64 v20[3]; // [rsp+70h] [rbp-90h] BYREF
  void *v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  void *v23; // [rsp+A0h] [rbp-60h]
  char v24; // [rsp+A8h] [rbp-58h]
  __int64 v25; // [rsp+B0h] [rbp-50h]
  _BYTE v26[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+C8h] [rbp-38h] BYREF
  __int128 v28; // [rsp+D0h] [rbp-30h]
  unsigned __int64 *v29; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall ***v30)(); // [rsp+130h] [rbp+30h]
  _BYTE v31[4096]; // [rsp+140h] [rbp+40h] BYREF

  v25 = -2LL;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    LOBYTE(v14) = *((_BYTE *)a3 + 8);
    LOWORD(v13) = a3[3];
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    wil::details_abi::RawUsageIndex::RawUsageIndex(v20, *a3, a3[1], a4, (_DWORD)v13);
    if ( !wil::details_abi::ReadWnfUsageBuffer(
            v5,
            (const struct __WIL__WNF_STATE_NAME *)v31,
            v8,
            (unsigned __int64)v20,
            (struct wil::details_abi::RawUsageIndex *)&v15,
            v14) )
      break;
    v16 = 0LL;
    *(_QWORD *)&v18 = &v16;
    *((_QWORD *)&v18 + 1) = &v17;
    v19 = v20;
    v27 = off_180150330;
    v28 = v18;
    v29 = v20;
    v30 = &v27;
    v9 = wil::details_abi::RawUsageIndex::Iterate(a3, v26);
    if ( v24 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v21, (int)v22 - (int)v21, a4, v13, v15, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v9 = 0;
        goto LABEL_5;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v21, v22 - (_DWORD)v21, a4, v13, 0, 0);
    }
    v5 = (wil::details_abi *)((char *)v5 + 8);
    v17 = v16;
LABEL_5:
    v10 = v23;
    v23 = 0LL;
    if ( v10 )
      operator delete(v10);
    if ( v9 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v12 = v23;
  v23 = 0LL;
  if ( v12 )
    operator delete(v12);
}
