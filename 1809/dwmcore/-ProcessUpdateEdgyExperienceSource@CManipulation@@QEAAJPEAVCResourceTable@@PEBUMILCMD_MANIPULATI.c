/*
 * XREFs of ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x1801A5E44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801A74C0 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateEdgyExperienceSource(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE *a3)
{
  unsigned int v4; // edx
  unsigned int v7; // edi
  __int64 Resource; // rax
  __int64 v9; // rdx
  int updated; // eax
  __int64 v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_DWORD *)a3 + 2);
  v7 = 0;
  if ( v4 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v4, 0x53u);
    v9 = Resource - 8;
    if ( !Resource )
      v9 = 0LL;
    if ( !v9 )
      ModuleFailFastForHRESULT(2147500036LL, retaddr);
    if ( !*((_DWORD *)a3 + 3) || !*((_WORD *)a3 + 8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_OWORD *)((char *)this + 572) = *(_OWORD *)((char *)a3 + 8);
    *(_OWORD *)((char *)this + 588) = *(_OWORD *)((char *)a3 + 24);
    *(_OWORD *)((char *)this + 604) = *(_OWORD *)((char *)a3 + 40);
    *(_OWORD *)((char *)this + 620) = *(_OWORD *)((char *)a3 + 56);
    *(_OWORD *)((char *)this + 636) = *(_OWORD *)((char *)a3 + 72);
    *(_OWORD *)((char *)this + 652) = *(_OWORD *)((char *)a3 + 88);
    *(_OWORD *)((char *)this + 668) = *(_OWORD *)((char *)a3 + 104);
    *(_OWORD *)((char *)this + 684) = *(_OWORD *)((char *)a3 + 120);
    *(_QWORD *)((char *)this + 700) = *((_QWORD *)a3 + 17);
    *((_DWORD *)this + 177) = *(_DWORD *)(v9 + 1696);
    *((_BYTE *)this + 568) = 1;
    updated = CManipulation::_UpdateEdgyExperienceInput(this, 2LL);
    v7 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x35Eu);
  }
  return v7;
}
