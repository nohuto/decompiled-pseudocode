/*
 * XREFs of ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140003EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x140003F7C (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140037E7C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToMixSplitConnection(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned int v9; // edi
  CConnectionInstance *v11; // rcx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = *(_QWORD *)(*((_QWORD *)this + 18) + 64LL);
  if ( !v5 || (v6 = **(_QWORD **)(v5 + 16)) == 0 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = *((_QWORD *)a2 + 31);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8LL);
  while ( v7 )
  {
    v11 = *(CConnectionInstance **)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    if ( *((_QWORD *)v11 + 1) == -1LL )
    {
      v12 = CConnectionInstance::SetHandle(v11, v8);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11C4,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v12,
          v13);
    }
  }
  v9 = (*(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v9;
}
