/*
 * XREFs of ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x1801E2F94
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801E46AC (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateEdgyExperienceSource(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE *a3)
{
  unsigned int v4; // edx
  unsigned int v7; // edi
  __int64 Resource; // rax
  __int64 v9; // rdx
  signed int updated; // eax
  __int64 v11; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_DWORD *)a3 + 2);
  v7 = 0;
  if ( v4 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v4, 0x57u);
    v9 = Resource - 8;
    if ( !Resource )
      v9 = 0LL;
    if ( !v9 )
      ModuleFailFastForHRESULT(-2147467260, retaddr);
    if ( !*((_DWORD *)a3 + 3) || !*((_WORD *)a3 + 8) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
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
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x362u, 0LL);
  }
  return v7;
}
