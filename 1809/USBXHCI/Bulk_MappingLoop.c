/*
 * XREFs of Bulk_MappingLoop @ 0x1C0030010
 * Callers:
 *     Bulk_MapTransfers @ 0x1C002FF50 (Bulk_MapTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     TR_AttemptStateChange @ 0x1C0023E60 (TR_AttemptStateChange.c)
 *     Bulk_MapStage @ 0x1C002FC50 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C0030114 (Bulk_PrepareStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C003122C (Bulk_RetrieveNextStage.c)
 */

__int64 __fastcall Bulk_MappingLoop(__int64 a1, char a2)
{
  int i; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = *(_QWORD *)(a1 + 56);
      LODWORD(v12) = i;
      LODWORD(v11) = *(_DWORD *)(v5 + 144);
      LODWORD(v10) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v5 + 80),
        5u,
        0xEu,
        0x23u,
        (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids,
        v10,
        v11,
        v12);
    }
    *(_DWORD *)(a1 + 340) = 0;
    if ( !(unsigned __int8)Bulk_RetrieveNextStage(a1) )
      break;
    LOBYTE(v6) = a2;
    result = Bulk_PrepareStage(a1, v6);
    if ( (_DWORD)result != 1 )
    {
      if ( (_DWORD)result == 3 )
        return result;
      if ( (_DWORD)result == 4 )
        return TR_AttemptStateChange(a1, 3, 2);
      LOBYTE(v8) = a2;
      result = Bulk_MapStage(a1, v8, v9);
      if ( (_DWORD)result != 3 )
      {
        if ( (_DWORD)result == 2 )
          return result;
        if ( (_DWORD)result == 1 )
          return TR_AttemptStateChange(a1, 3, 2);
        result = TR_AttemptStateChange(a1, 3, 3);
        if ( (_DWORD)result != 3 )
          return result;
      }
    }
  }
  return TR_AttemptStateChange(a1, 3, 2);
}
