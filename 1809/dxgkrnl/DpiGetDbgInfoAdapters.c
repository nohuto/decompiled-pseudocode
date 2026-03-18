/*
 * XREFs of DpiGetDbgInfoAdapters @ 0x1C00432A0
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C003A628 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C020A1C0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall DpiGetDbgInfoAdapters(__int64 a1)
{
  unsigned int v1; // r11d
  _QWORD *v3; // r10
  __int64 *v4; // r9
  int DriverVersion; // eax
  __int64 v6; // r8
  unsigned int v7; // ecx
  int v8; // r11d

  v1 = 0;
  v3 = (_QWORD *)qword_1C008E778;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      if ( v1 >= 7 )
        break;
      v4 = (__int64 *)v3[7];
      if ( (__int64 *)*v4 != v4 )
      {
        do
        {
          if ( *((_DWORD *)v4 + 4) == 1953656900 && *((_DWORD *)v4 + 5) == 2 && *((_DWORD *)v4 + 59) == 2 )
          {
            if ( v1 >= 7 )
              break;
            DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v4[474]);
            *(_DWORD *)(a1 + 8 * v6) = DriverVersion;
            *(_DWORD *)(a1 + 8 * v6 + 4) = *((_DWORD *)v4 + 279);
            *(_DWORD *)(a1 + 8 * v6 + 8) = *((_DWORD *)v4 + 280);
            v7 = (*(_DWORD *)(v4[474] + 176) == 1) | *(_DWORD *)(a1 + 8 * v6 + 12) & 0xFFFFFFFE;
            *(_DWORD *)(a1 + 8 * v6 + 12) = v7;
            *(_DWORD *)(a1 + 8 * v6 + 12) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2 * *((_BYTE *)v4 + 1144))) & 2;
            v1 = v8 + 1;
          }
          v4 = (__int64 *)*v4;
        }
        while ( *v4 != v3[7] );
      }
      v3 = (_QWORD *)*v3;
    }
    while ( *v3 != qword_1C008E778 );
  }
  return 0LL;
}
