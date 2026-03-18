/*
 * XREFs of ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180203960
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyMetaData(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 *v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 (__fastcall *v9)(__int64 *, _OWORD *); // rax
  int v10; // eax
  __int64 v11; // rcx
  _OWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 208) + 32LL))(a1 - 208)
    && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 320LL)
     || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 80LL))(*(_QWORD *)(a1 + 32))) )
  {
    v5 = *(__int64 **)(a1 + 32);
    v6 = *(_OWORD *)(a2 + 16);
    v13[0] = *(_OWORD *)a2;
    v7 = *v5;
    v8 = *(_OWORD *)(a2 + 32);
    v13[1] = v6;
    *(_QWORD *)&v6 = *(_QWORD *)(a2 + 48);
    v9 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v7 + 88);
    v13[2] = v8;
    v14 = v6;
    v10 = v9(v5, v13);
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1EEu);
  }
  return v4;
}
