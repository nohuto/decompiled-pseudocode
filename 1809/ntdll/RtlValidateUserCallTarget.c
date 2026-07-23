/*
 * XREFs of RtlValidateUserCallTarget @ 0x180035F48
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180035D94 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F9934 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     CfgAddressToBitState @ 0x180035FCC (CfgAddressToBitState.c)
 */

__int64 __fastcall RtlValidateUserCallTarget(__int64 a1, _DWORD *a2)
{
  char v3; // di
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // edi
  int v9; // eax

  v3 = a1;
  v4 = CfgAddressToBitState(a1, LdrSystemDllInitBlock.CfgBitMap);
  v5 = 0;
  if ( !v4 )
    goto LABEL_8;
  v6 = v4 - 1;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *a2 = 8;
        return 1;
      }
    }
    else
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
      {
        *a2 = 16;
        return v5;
      }
      if ( (v3 & 0xF) == 0 )
      {
        *a2 = 4;
        return 1;
      }
    }
LABEL_8:
    *a2 = 2;
    return v5;
  }
  v7 = v3 & 0xF;
  LOBYTE(v5) = v7 == 0;
  *a2 = (v7 != 0LL) + 1;
  return v5;
}
