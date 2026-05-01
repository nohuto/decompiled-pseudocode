/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180121F7C
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18012161C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D3C1C (-MemoryFree@@YAXPEAX@Z.c)
 *     _alloca_probe @ 0x1800D3E70 (_alloca_probe.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18011EDB8 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180120A84 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18012108C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180122B50 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180123FDC (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18012405C (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const struct __WIL__WNF_STATE_NAME *v5; // rdi
  const struct __WIL__WNF_STATE_NAME *v6; // r15
  unsigned __int64 v7; // rsi
  const struct __WIL__WNF_TYPE_ID *v8; // rdx
  const void *v9; // r8
  unsigned int v10; // ebx
  unsigned int v11; // eax
  char v12; // bl
  const struct __WIL__WNF_TYPE_ID *v13; // r9
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v15; // r9
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // [rsp+20h] [rbp-E0h]
  void *v19; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h]
  _BYTE *v25; // [rsp+70h] [rbp-90h]
  _BYTE v26[24]; // [rsp+80h] [rbp-80h] BYREF
  void *v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  void *v29; // [rsp+B0h] [rbp-50h]
  char v30; // [rsp+B8h] [rbp-48h]
  char v31; // [rsp+B9h] [rbp-47h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  _BYTE v33[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+D0h] [rbp-30h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-28h]
  _BYTE *v36; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall ***v37)(); // [rsp+138h] [rbp+38h]
  _BYTE v38[4096]; // [rsp+140h] [rbp+40h] BYREF

  v32 = -2LL;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v23 = 0LL;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v26,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v21 = 4096;
    v10 = wil_details_NtQueryWnfStateData(v5, v8, v9, &v20, v38, &v21);
    wil::details::NtStatusToHr((wil::details *)v10);
    if ( v10 )
    {
      v11 = 0;
      v21 = 0;
      v20 = 0;
    }
    else
    {
      v11 = v21;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v26, v38, v11, 0x1000uLL);
    if ( v31 )
      break;
    v22 = 0LL;
    *(_QWORD *)&v24 = &v22;
    *((_QWORD *)&v24 + 1) = &v23;
    v25 = v26;
    v34 = off_18044B400;
    v35 = v24;
    v36 = v26;
    v37 = &v34;
    v12 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v33);
    if ( v30 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v27, (int)v28 - (int)v27, v13, v18, v20, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v12 = 0;
        goto LABEL_11;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v27, v28 - (_DWORD)v27, v15, v19, 0, 0);
    }
    v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
    v23 = v22;
LABEL_11:
    v16 = v29;
    v29 = 0LL;
    if ( v16 )
      MemoryFree(v16);
    if ( v12 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v17 = v29;
  v29 = 0LL;
  if ( v17 )
    MemoryFree(v17);
}
