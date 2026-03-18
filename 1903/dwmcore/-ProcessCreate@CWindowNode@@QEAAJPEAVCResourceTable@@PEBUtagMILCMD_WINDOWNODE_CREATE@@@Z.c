/*
 * XREFs of ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180045C9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180045D60 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180045DAC (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::ProcessCreate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_CREATE *a3)
{
  struct CProcessAttribution **v3; // rsi
  bool v4; // zf
  int ProcessAttribution; // eax
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct CProcessAttribution **)((char *)this + 656);
  v4 = *((_QWORD *)this + 82) == 0LL;
  *((_QWORD *)this + 80) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 81) = *((_QWORD *)a3 + 1);
  if ( !v4 )
    RaiseFailFastException(0LL, 0LL, 0);
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(
                         qword_18033CC50,
                         *((_DWORD *)a3 + 8),
                         *((_QWORD *)a3 + 3),
                         v3);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr, v8);
  v9 = CWindowNode::WindowManagerAddRemove(this, 1);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x8Fu, 0LL);
  return v11;
}
