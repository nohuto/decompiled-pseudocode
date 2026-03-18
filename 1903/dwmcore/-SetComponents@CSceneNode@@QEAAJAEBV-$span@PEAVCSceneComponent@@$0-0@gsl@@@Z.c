/*
 * XREFs of ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1801F9C68
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801A2478 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18020DEB8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 */

__int64 __fastcall CSceneNode::SetComponents(CSceneNode *this, __int64 *a2, CSceneNode *a3)
{
  CSceneComponent **v3; // rbx
  CSceneComponent **v5; // rbp
  struct CSceneNode *i; // rsi
  __int64 v8; // rdx
  CSceneComponent *v9; // r9
  CSceneNode *v10; // rax
  __int64 v11; // rax
  signed int appended; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx

  v3 = (CSceneComponent **)*((_QWORD *)this + 11);
  v5 = (CSceneComponent **)*((_QWORD *)this + 12);
  for ( i = this; v3 != v5; ++v3 )
  {
    v8 = *a2;
    v9 = *v3;
    if ( *a2 < 0 )
    {
      ((void (__fastcall *)(CSceneNode *, __int64, CSceneNode *, CSceneComponent *))`gsl::details::get_terminate_handler'::`2'::handler)(
        this,
        v8,
        a3,
        v9);
      __debugbreak();
    }
    a3 = (CSceneNode *)a2[1];
    v10 = a3;
    this = (CSceneNode *)((char *)a3 + 8 * v8);
    if ( a3 != this )
    {
      do
      {
        if ( *(CSceneComponent **)v10 == v9 )
          break;
        v10 = (CSceneNode *)((char *)v10 + 8);
      }
      while ( v10 != this );
    }
    v11 = (v10 - a3) >> 3;
    if ( v11 == v8 )
      CSceneComponent::DehydrateSpectreResources(v9, i);
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendComponents((char **)i, (__int64)a2, 0);
  v14 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, appended, 0xA3u, 0LL);
  else
    return 0;
  return v14;
}
