/*
 * XREFs of ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14000D960 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9E4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14000DAB0 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140034A34 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CSubmixImpl::AddPipeToMixSplitConnection(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rcx
  _QWORD *Head; // rax
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  const struct CConnectionInstance *SecondaryLoopbackConnection; // rax
  __int64 v12; // rdx
  const struct CPipeInstance *v13; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    Head = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v5 + 64);
    v7 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*Head);
    v8 = CPipeInstance::ResolvePendingConnections(a2, -1LL, *(_QWORD *)(*(_QWORD *)v7 + 8LL), 1LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v12 = 1220LL;
      goto LABEL_16;
    }
    SecondaryLoopbackConnection = CPipeInstance::GetSecondaryLoopbackConnection(*((CPipeInstance **)this + 3));
    if ( SecondaryLoopbackConnection )
    {
      v8 = CPipeInstance::ResolvePendingConnections(a2, -2LL, *((_QWORD *)SecondaryLoopbackConnection + 1), 1LL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v12 = 1226LL;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v13 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
    if ( v13 )
    {
      v8 = CPipeInstance::ConnectToRightPipe(a2, v13);
      v9 = v8;
      if ( v8 < 0 )
      {
        v12 = 1231LL;
        goto LABEL_16;
      }
    }
  }
  v8 = (*(__int64 (__fastcall **)(CSubmixImpl *, struct CPipeInstance *))(*(_QWORD *)this + 40LL))(this, a2);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = 0;
    goto LABEL_6;
  }
  v12 = 1234LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v8,
    v14);
LABEL_6:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v9;
}
