/*
 * XREFs of Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C00658D0
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C00667BC (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Interrupter_CmResList_GetInterrupterCountAndType(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  int v5; // ebx
  int *v6; // r14
  _DWORD *v7; // r15
  int v9; // edi
  unsigned int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]

  v5 = 0;
  v6 = a4;
  v7 = a3;
  v9 = 0;
  v10 = 0;
  result = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 2432))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( (_DWORD)result )
  {
    do
    {
      v12 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              a2,
              v10);
      v13 = v12;
      if ( *(_BYTE *)v12 == 2 )
      {
        if ( (WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
           || (LODWORD(v15) = *(unsigned __int16 *)(v12 + 2),
               LODWORD(v14) = v10,
               WPP_RECORDER_SF_dd(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                 4u,
                 9u,
                 0x3Eu,
                 (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
                 v14,
                 v15),
               *(_BYTE *)v13 == 2))
          && (*(_BYTE *)(v13 + 2) & 3) == 3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v15) = *(_DWORD *)(v13 + 8);
            LODWORD(v14) = *(unsigned __int16 *)(v13 + 6);
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              4u,
              9u,
              0x3Fu,
              (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
              v14,
              v15);
          }
          v9 = (v5 != 0) + 1;
          v5 += *(unsigned __int16 *)(v13 + 6);
        }
        else
        {
          ++v5;
        }
      }
      ++v10;
      result = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2432))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 a2);
    }
    while ( v10 < (unsigned int)result );
    v6 = a4;
    v7 = a3;
  }
  *v7 = v5;
  *v6 = v9;
  return result;
}
