/*
 * XREFs of ?SendRemotingMetaData@CDisplay@@QEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x18015B010
 * Callers:
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x18015A698 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::SendRemotingMetaData(CDisplay *this, const struct _DWMIndirectMetaData *a2)
{
  __int64 *v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 (__fastcall *v7)(__int64 *, _OWORD *); // rax
  signed int v8; // eax
  __int64 v9; // rcx
  _OWORD v11[3]; // [rsp+30h] [rbp-38h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 9);
  v3 = -2003304307;
  if ( v2 )
  {
    v4 = *v2;
    v5 = *((_OWORD *)a2 + 1);
    v11[0] = *(_OWORD *)a2;
    v6 = *((_OWORD *)a2 + 2);
    v7 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v4 + 272);
    v11[1] = v5;
    v11[2] = v6;
    v8 = v7(v2, v11);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802E3D40, 1u, v8, 0x381u, 0LL);
  }
  return v3;
}
