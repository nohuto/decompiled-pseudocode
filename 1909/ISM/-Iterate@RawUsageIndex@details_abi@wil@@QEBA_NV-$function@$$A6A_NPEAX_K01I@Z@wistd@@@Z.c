/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18004FAC4
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180050CF4 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18004E5D8 (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800504E4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // cl
  int v6; // edi
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp-39h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-29h] BYREF
  __int16 v13; // [rsp+60h] [rbp-19h] BYREF
  char v14; // [rsp+62h] [rbp-17h]
  unsigned int v15; // [rsp+64h] [rbp-15h]
  unsigned __int16 v16; // [rsp+68h] [rbp-11h]
  __int128 v17; // [rsp+70h] [rbp-9h]
  __int16 v18; // [rsp+80h] [rbp+7h] BYREF
  char v19; // [rsp+82h] [rbp+9h]
  int v20; // [rsp+84h] [rbp+Bh]
  unsigned __int16 v21; // [rsp+88h] [rbp+Fh]
  __int128 v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+6Fh]
  unsigned __int8 *v25; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+F8h] [rbp+7Fh] BYREF

  v24 = a2;
  v12[1] = -2LL;
  v25 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v4 = *(_BYTE *)(a1 + 4);
  v13 = *(_WORD *)(a1 + 2);
  v14 = v4;
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  v5 = *(_BYTE *)(a1 + 8);
  v18 = *(_WORD *)(a1 + 6);
  v19 = v5;
  v20 = 0;
  v21 = 0;
  v22 = 0LL;
LABEL_2:
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v13,
            &v25,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    v6 = 0;
    if ( v15 )
    {
      v7 = *((_QWORD *)&v17 + 1);
      while ( wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v18,
                &v25,
                *(unsigned __int8 **)(a1 + 32)) )
      {
        v23 = v20;
        v26 = v21;
        v10 = *((_QWORD *)&v22 + 1);
        v11 = v16;
        v12[0] = v7;
        v8 = *(_QWORD *)(a2 + 112);
        if ( !v8 )
          __fastfail(7u);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64 *, __int64 *, __int64 *, int *))(*(_QWORD *)v8 + 32LL))(
                v8,
                v12,
                &v11,
                &v10,
                &v26,
                &v23) )
        {
          wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>(a2);
          return 0;
        }
        if ( ++v6 >= v15 )
          goto LABEL_2;
      }
    }
  }
  wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>(a2);
  return 1;
}
