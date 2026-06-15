/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000A9E8
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000A95C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18000B7AC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18000B7D8 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?ReadWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@PEAE_KAEAVRawUsageIndex@12@PEAK@Z @ 0x18000BA1C (-ReadWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@PEAE_KAEAVRawUsageIndex@12@P.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800B3830 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rbx
  wil::details_abi *v6; // r15
  unsigned __int64 v7; // rsi
  char v8; // r9
  unsigned __int8 *v9; // r8
  char v10; // dl
  __int16 v11; // cx
  const struct __WIL__WNF_TYPE_ID *v12; // r9
  char v13; // r14
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v15; // r9
  struct wil::details_abi::RawUsageIndex *v16; // [rsp+20h] [rbp-E0h]
  struct wil::details_abi::RawUsageIndex *v17; // [rsp+20h] [rbp-E0h]
  unsigned int *v18; // [rsp+28h] [rbp-D8h]
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v23; // [rsp+64h] [rbp-9Ch]
  __int16 v24; // [rsp+66h] [rbp-9Ah]
  char v25; // [rsp+68h] [rbp-98h]
  unsigned __int64 Size; // [rsp+70h] [rbp-90h]
  void *v27; // [rsp+78h] [rbp-88h]
  __int128 v28; // [rsp+80h] [rbp-80h]
  void *v29; // [rsp+90h] [rbp-70h]
  __int16 v30; // [rsp+98h] [rbp-68h]
  char v31; // [rsp+9Ah] [rbp-66h]
  __int128 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall **v35)(); // [rsp+D0h] [rbp-30h] BYREF
  __int128 v36; // [rsp+D8h] [rbp-28h]
  _WORD *v37; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall ***v38)(); // [rsp+138h] [rbp+38h]
  _BYTE v39[4096]; // [rsp+140h] [rbp+40h] BYREF

  v34 = -2LL;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v21 = 0LL;
  while ( 1 )
  {
    v8 = *(_BYTE *)(a3 + 8);
    v9 = (unsigned __int8 *)*(unsigned __int16 *)(a3 + 6);
    v10 = *(_BYTE *)(a3 + 4);
    v11 = *(_WORD *)(a3 + 2);
    v22[0] = *(_WORD *)a3;
    v22[1] = v11;
    v23 = v10;
    v24 = (__int16)v9;
    v25 = v8;
    if ( (_WORD)v9 )
    {
      LOWORD(v32) = (_WORD)v9;
      BYTE2(v32) = v8;
      DWORD1(v32) = 0;
      WORD4(v32) = 0;
      v33 = 0LL;
      Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v32);
    }
    else
    {
      Size = 0LL;
    }
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0;
    v31 = 0;
    if ( !wil::details_abi::ReadWnfUsageBuffer(
            v5,
            (const struct __WIL__WNF_STATE_NAME *)v39,
            v9,
            (unsigned __int64)v22,
            (struct wil::details_abi::RawUsageIndex *)&v19,
            v18) )
      break;
    v20 = 0LL;
    *(_QWORD *)&v32 = &v20;
    *((_QWORD *)&v32 + 1) = &v21;
    *(_QWORD *)&v33 = v22;
    v35 = off_18014A310;
    v36 = v32;
    v37 = v22;
    v38 = &v35;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, &v35);
    if ( (_BYTE)v30 )
    {
      updated = wil_details_NtUpdateWnfStateData(v5, v27, (int)v28 - (int)v27, v12, v16, v19, 1u);
      if ( updated == -1073741823 )
      {
        ++v7;
        v13 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v27, v28 - (_DWORD)v27, v15, v17, 0, 0);
    }
    v5 = (wil::details_abi *)((char *)v5 + 8);
    v21 = v20;
LABEL_7:
    if ( v29 )
      operator delete(v29);
    if ( v13 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  if ( v29 )
    operator delete(v29);
}
