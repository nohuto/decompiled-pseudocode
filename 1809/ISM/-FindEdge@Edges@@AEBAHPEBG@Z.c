/*
 * XREFs of ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800276D0 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CB050 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1800CB158 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800CB260 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800CB318 (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x1800CB3E8 (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x1800CB458 (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800CB4C0 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800CB530 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1800CB794 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1800CBB94 (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x1800CBE50 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1800CBEF4 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@.c)
 *     ?GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z @ 0x1800CE42C (-GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edges::FindEdge(Edges *this, const unsigned __int16 *a2)
{
  __int64 v3; // r9
  unsigned int v4; // edi
  __int64 i; // rbp
  _QWORD *v6; // rcx

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)this;
  v4 = 0;
  if ( (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 104LL) <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; ; i += 104LL )
  {
    v6 = (_QWORD *)(v3 + i + 8);
    if ( v6[3] >= 8uLL )
      v6 = (_QWORD *)*v6;
    if ( !(unsigned int)_o__wcsicmp(v6) )
      break;
    v3 = *(_QWORD *)this;
    if ( (int)++v4 >= (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 104LL) )
      return 0xFFFFFFFFLL;
  }
  return v4;
}
