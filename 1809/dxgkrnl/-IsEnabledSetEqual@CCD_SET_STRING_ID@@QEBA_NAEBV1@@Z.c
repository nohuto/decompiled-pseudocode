/*
 * XREFs of ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00C8D6C
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C75B0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00CBB40 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C00CC204 (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsEnabledSetEqual(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int16 v2; // ax
  unsigned int v5; // edi
  struct _STRING v7; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v8; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_WORD *)this + 16);
  if ( v2 == *((_WORD *)a2 + 16) )
  {
    v5 = 0;
    if ( !v2 )
      return 1;
    while ( 1 )
    {
      *(_QWORD *)&v8.Length = 0LL;
      v8.Buffer = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(this, *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v5 + 6), &v8);
      *(_QWORD *)&v7.Length = 0LL;
      v7.Buffer = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(a2, *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v5 + 6), &v7);
      if ( (unsigned int)CCD_SET_STRING_ID::_StringCompare(&v8, &v7) )
        break;
      if ( ++v5 >= *((unsigned __int16 *)this + 16) )
        return 1;
    }
  }
  return 0;
}
