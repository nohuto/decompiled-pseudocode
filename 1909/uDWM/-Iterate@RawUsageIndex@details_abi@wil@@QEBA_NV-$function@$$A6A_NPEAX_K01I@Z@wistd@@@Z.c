/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800347B0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180033DA8 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180034E2C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x180035214 (--1-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+48h] [rbp-21h] BYREF
  __int64 v9; // [rsp+50h] [rbp-19h] BYREF
  __int16 v10; // [rsp+58h] [rbp-11h] BYREF
  char v11; // [rsp+5Ah] [rbp-Fh]
  unsigned int v12; // [rsp+5Ch] [rbp-Dh]
  unsigned __int16 v13; // [rsp+60h] [rbp-9h]
  __int128 v14; // [rsp+68h] [rbp-1h]
  __int16 v15; // [rsp+78h] [rbp+Fh] BYREF
  char v16; // [rsp+7Ah] [rbp+11h]
  int v17; // [rsp+7Ch] [rbp+13h]
  unsigned __int16 v18; // [rsp+80h] [rbp+17h]
  __int128 v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 *v21; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  v21 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v10 = *(_WORD *)(a1 + 2);
  v11 = *(_BYTE *)(a1 + 4);
  v15 = *(_WORD *)(a1 + 6);
  v16 = *(_BYTE *)(a1 + 8);
  v12 = 0;
  v13 = 0;
  v14 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
LABEL_2:
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v10,
            &v21,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    v4 = 0;
    if ( v12 )
    {
      while ( wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v15,
                &v21,
                *(unsigned __int8 **)(a1 + 32)) )
      {
        v5 = *(_QWORD *)(a2 + 112);
        v20 = v17;
        v22 = v18;
        v7 = *((_QWORD *)&v19 + 1);
        v8 = v13;
        v9 = *((_QWORD *)&v14 + 1);
        if ( !v5 )
          __fastfail(7u);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, int *))(*(_QWORD *)v5 + 32LL))(
                v5,
                &v9,
                &v8,
                &v7,
                &v22,
                &v20) )
        {
          wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(a2);
          return 0;
        }
        if ( ++v4 >= v12 )
          goto LABEL_2;
      }
    }
  }
  wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(a2);
  return 1;
}
