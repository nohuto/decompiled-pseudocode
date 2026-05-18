/*
 * XREFs of sub_180118A68 @ 0x180118A68
 * Callers:
 *     sub_180118BD0 @ 0x180118BD0 (sub_180118BD0.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180118A68(_QWORD *a1)
{
  signed __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx

  *a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  v2 = _InterlockedExchangeAdd64(&qword_18026C260, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 == 1 )
  {
    LODWORD(v2) = EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_18025EE60 = 0;
  }
  v3 = a1[14];
  if ( v3 )
    LODWORD(v2) = o__aligned_free(v3);
  v4 = a1[13];
  if ( v4 >= 0x10 )
  {
    v5 = a1[10];
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
        goto LABEL_26;
      v5 = v7;
    }
    LODWORD(v2) = j_j__o_free(v5);
  }
  a1[12] = 0LL;
  a1[13] = 15LL;
  *((_BYTE *)a1 + 80) = 0;
  v10 = a1[9];
  if ( v10 >= 0x10 )
  {
    v11 = a1[6];
    v12 = v10 + 1;
    if ( v12 < 0x1000 )
    {
LABEL_14:
      LODWORD(v2) = j_j__o_free(v11);
      goto LABEL_15;
    }
    v13 = *(_QWORD *)(v11 - 8);
    v8 = v12 + 39;
    v9 = v11 - v13;
    if ( (unsigned __int64)(v9 - 8) <= 0x1F )
    {
      v11 = v13;
      goto LABEL_14;
    }
LABEL_26:
    o__invalid_parameter_noinfo_noreturn(v9, v8);
    JUMPOUT(0x180118BCFLL);
  }
LABEL_15:
  a1[8] = 0LL;
  a1[9] = 15LL;
  *((_BYTE *)a1 + 48) = 0;
  v14 = (volatile signed __int32 *)a1[5];
  if ( v14 )
  {
    LODWORD(v2) = _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF);
    if ( (_DWORD)v2 == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      LODWORD(v2) = _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF);
      if ( (_DWORD)v2 == 1 )
        LODWORD(v2) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v15 = a1[3];
  if ( v15 )
    LODWORD(v2) = j__o_free(v15);
  v16 = a1[2];
  if ( v16 )
    LODWORD(v2) = j__o_free(v16);
  v17 = a1[1];
  if ( v17 )
    LODWORD(v2) = j__o_free(v17);
  return v2;
}
