/*
 * XREFs of _lambda_1dc6d0ada7bcfb8231392ed4059b0fbe_::operator()_InputSite___ @ 0x18002F024
 * Callers:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F390 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 * Callees:
 *     ?GetProcessId@InputSite@@QEBAKXZ @ 0x18002FAC8 (-GetProcessId@InputSite@@QEBAKXZ.c)
 */

char __fastcall lambda_1dc6d0ada7bcfb8231392ed4059b0fbe_::operator()_InputSite___(__int64 a1, InputSite **a2)
{
  char v2; // bl
  __int64 v4; // rbp
  __int64 v5; // r15
  int v6; // r14d
  int v7; // r12d
  bool v8; // al
  InputSite *v9; // rdx

  v2 = 1;
  if ( *(_DWORD *)a1 == 1 && (v4 = *((_QWORD *)*a2 + 3)) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 16);
    v7 = *((_DWORD *)*a2 + 4);
    v8 = InputSite::GetProcessId(*a2) == v6 || !v6 || !InputSite::GetProcessId(*a2);
    if ( v7 != 1 || v4 != v5 || !v8 )
      return 0;
  }
  else
  {
    v9 = *a2;
    if ( *((_DWORD *)v9 + 4) != *(_DWORD *)a1 || *((_QWORD *)v9 + 3) != *(_QWORD *)(a1 + 8) )
      return 0;
  }
  return v2;
}
