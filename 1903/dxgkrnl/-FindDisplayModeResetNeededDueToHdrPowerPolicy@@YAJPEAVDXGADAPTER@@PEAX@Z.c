/*
 * XREFs of ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0243730
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000BF84 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C02B48D8 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z.c)
 */

__int64 __fastcall FindDisplayModeResetNeededDueToHdrPowerPolicy(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v5 + 24) = 7669LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v11 = a1;
  v12 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    Global = DXGGLOBAL::GetGlobal(v7, v6);
    if ( DmmNeedDisplayModeResetDueToHdrPowerPolicy(a1, *((_BYTE *)Global + 304116)) )
    {
      *a2 = 1;
      v2 = -2147483622;
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  return v2;
}
