/*
 * XREFs of DxgkPrepareCcdDatabaseForAccess @ 0x1C02C63CC
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     AdjustCcdDatabasePermissions @ 0x1C02C59A8 (AdjustCcdDatabasePermissions.c)
 *     CheckCallerMatchesSid @ 0x1C02C6078 (CheckCallerMatchesSid.c)
 *     CreateServiceSid @ 0x1C02C62D8 (CreateServiceSid.c)
 */

__int64 DxgkPrepareCcdDatabaseForAccess()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  PVOID v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  ULONG v14[6]; // [rsp+28h] [rbp-30h] BYREF

  v14[0] = 80;
  v14[1] = -123880637;
  v14[2] = 1617898341;
  v14[3] = -1424805804;
  v14[4] = 1466607281;
  v14[5] = 2109097600;
  CreateServiceSid(&P, v14);
  v3 = P;
  if ( !P )
  {
    v4 = WdLogNewEntry5_WdError(v1, v0, v2);
    v5 = -1073741670LL;
LABEL_7:
    *(_QWORD *)(v4 + 24) = v5;
    WdLogEvent5_WdError(v4);
    goto LABEL_9;
  }
  v6 = CheckCallerMatchesSid(P);
  v5 = v6;
  if ( v6 < 0
    || (v10 = AdjustCcdDatabasePermissions(
                0LL,
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
                0,
                v3),
        v5 = v10,
        v10 < 0)
    || (v11 = AdjustCcdDatabasePermissions(
                0LL,
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
                0,
                v3),
        v5 = v11,
        v11 < 0) )
  {
    v4 = WdLogNewEntry5_WdError(v8, v7, v9);
    goto LABEL_7;
  }
  LODWORD(v5) = 0;
LABEL_9:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B677844u);
  return (unsigned int)v5;
}
