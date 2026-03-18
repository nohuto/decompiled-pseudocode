/*
 * XREFs of VidSchSetPriorityClassProcessX @ 0x1C012FF50
 * Callers:
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C012FE30 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchSetPriorityClassProcessX(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v7; // ebx
  __int64 i; // rsi
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rax

  v3 = 0;
  v7 = 0;
  for ( i = 120LL; ; i += 8LL )
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1) + i) )
    {
      v10 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1) + i);
      v11 = *(_QWORD *)(a1 + 72);
      if ( v11 )
        v11 = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1) + 16);
      if ( !v11 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v13 + 24) = 286LL;
        WdLogEvent5_WdAssertion(v13);
      }
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v10 + 8) + 96LL))(v11, a2, a3);
      v3 = result;
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v7 >= 2 )
      return v3;
  }
  return result;
}
