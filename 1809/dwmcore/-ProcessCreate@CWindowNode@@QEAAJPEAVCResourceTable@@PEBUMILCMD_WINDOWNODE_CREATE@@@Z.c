/*
 * XREFs of ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180095F04
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180095FC8 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18009600C (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::ProcessCreate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_CREATE *a3)
{
  struct CProcessAttribution **v3; // rdi
  bool v4; // zf
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  int ProcessAttribution; // eax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct CProcessAttribution **)((char *)this + 672);
  v4 = *((_QWORD *)this + 84) == 0LL;
  *((_QWORD *)this + 80) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 81) = *((_QWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 166) = v6;
  v7 = *((_QWORD *)a3 + 3);
  *((_QWORD *)this + 82) = v7;
  if ( !v4 )
  {
    RaiseFailFastException(0LL, 0LL, 0);
    v7 = *((_QWORD *)this + 82);
    v6 = *((_DWORD *)this + 166);
  }
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_180307EB0, v6, v7, v3);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  v9 = CWindowNode::WindowManagerAddRemove(this, 1);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x9Bu);
  return v11;
}
