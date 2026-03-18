/*
 * XREFs of ?SendRemotingMetaData@CDisplay@@QEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801E3BA8
 * Callers:
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801E0FA4 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::SendRemotingMetaData(CDisplay *this, const struct _DWMIndirectMetaData *a2)
{
  __int64 *v2; // rcx
  unsigned int v3; // ebx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, _OWORD *); // rax
  int v9; // eax
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+A0h] [rbp-18h]

  v2 = (__int64 *)*((_QWORD *)this + 9);
  v3 = -2003304307;
  if ( v2 )
  {
    v4 = *(_OWORD *)a2;
    v5 = *((_OWORD *)a2 + 1);
    v14 = 0LL;
    v6 = *((_OWORD *)a2 + 2);
    v7 = *v2;
    v12[0] = v4;
    v12[1] = v5;
    v8 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v7 + 272);
    v12[2] = v6;
    v13 = 0LL;
    v9 = v8(v2, v12);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BC238, 1u, v9, 0x375u);
  }
  return v3;
}
