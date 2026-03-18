/*
 * XREFs of ?DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z @ 0x1C025D918
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00FB240 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DxgkIsExpandedResourceApplication(PEPROCESS Process)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // si
  __int64 v5; // rax
  PACCESS_TOKEN v6; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+58h] [rbp+10h] BYREF
  PVOID TokenInformation; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  if ( ExGetPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 1200LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v13[0] = 2359330LL;
  v13[1] = L"expandedResources";
  v14 = 0;
  v6 = PsReferencePrimaryToken(Process);
  v7 = SeQueryInformationToken(v6, TokenIsAppContainer, &TokenInformation);
  PsDereferencePrimaryToken(v6);
  if ( v7 < 0 )
    goto LABEL_4;
  if ( !TokenInformation )
    return 0;
  if ( (int)RtlCapabilityCheck(0LL, v13, &v14) < 0 )
  {
LABEL_4:
    v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = Process;
    WdLogEvent5_WdWarning(v11);
    return 0;
  }
  if ( !TokenInformation || !v14 )
    return 0;
  return v4;
}
