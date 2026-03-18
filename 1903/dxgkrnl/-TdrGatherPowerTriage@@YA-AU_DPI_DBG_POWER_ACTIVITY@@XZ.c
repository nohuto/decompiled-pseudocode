/*
 * XREFs of ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1C0040C90
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C00409F8 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall TdrGatherPowerTriage(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  char v3; // cl
  char v4; // dl
  _QWORD *v5; // r10
  _QWORD *v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // rax
  char v9; // al
  char v10; // cl
  char v11; // al
  __int64 v13; // [rsp+30h] [rbp+8h]

  v13 = 0LL;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v3 = 0;
  v4 = 0;
  v5 = (_QWORD *)((char *)Global + 448);
  v6 = (_QWORD *)*((_QWORD *)Global + 56);
  while ( 1 )
  {
    v7 = 0LL;
    if ( v6 != v5 )
      v7 = v6;
    if ( !v7 )
      break;
    v8 = v7[24];
    v6 = (_QWORD *)*v6;
    if ( v8 && *(_DWORD *)(*(_QWORD *)(v8 + 64) + 4296LL) )
    {
      if ( (v3 & 1) != 0 || (v9 = 0, v7[321]) )
        v9 = 1;
      v10 = v9 | v3 & 0xFE;
      if ( (v10 & 2) != 0 || (v11 = 0, *((_DWORD *)v7 + 1062)) )
        v11 = 2;
      v3 = v11 | v10 & 0xFD;
      LOBYTE(v13) = v3;
    }
  }
  if ( (v3 & 1) != 0 || (v3 = v13, g_TdrRecoveryInProgress) )
    v4 = 1;
  LOBYTE(v13) = v4 | v3 & 0xFE;
  return v13;
}
