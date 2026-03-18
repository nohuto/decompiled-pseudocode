/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C008F948
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C003D7B4 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     ?RegionIterator@CInputSpace@@QEBA?AVIter@1@XZ @ 0x1C00AD880 (-RegionIterator@CInputSpace@@QEBA-AVIter@1@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputConfig::_FindRegionForDisplay(
        CInputConfig *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        const struct CInputSpace *a3,
        const struct tagQDC_DATA *a4,
        struct CInputSpaceRegion **a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct CInputSpaceRegion *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // r10
  _QWORD *i; // rdi
  struct CInputSpaceRegion *v19; // rax
  int v20; // edx
  PERESOURCE *v21; // rcx
  _QWORD v23[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v24; // [rsp+30h] [rbp-38h]
  unsigned int v25; // [rsp+74h] [rbp+Ch]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = 0LL;
  v12 = *((_QWORD *)a2 + 2);
  v13 = 0;
  v14 = *(_DWORD *)a4;
  v15 = *((_DWORD *)a2 + 6);
  *a5 = 0LL;
  v25 = HIDWORD(v12);
  if ( v14 )
  {
    v16 = *((_QWORD *)a4 + 1);
    while ( 1 )
    {
      v17 = 200LL * v13;
      if ( *(_DWORD *)(v17 + v16 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v17 + v16 + 120) == *((_DWORD *)a2 + 30) )
        break;
      if ( ++v13 >= v14 )
        goto LABEL_10;
    }
    v12 = *(_QWORD *)(200LL * v13 + v16 + 16);
    v15 = *(_DWORD *)(200LL * v13 + v16 + 24);
    v25 = HIDWORD(v12);
  }
LABEL_10:
  CInputSpace::RegionIterator(a3, v23);
  for ( i = v24; i != (_QWORD *)v23[1] && i != (_QWORD *)-16LL; v24 = i )
  {
    v19 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v23);
    v20 = *((_DWORD *)v19 + 6);
    if ( *((_DWORD *)a2 + 4) == v20
      && *((_DWORD *)a2 + 5) == *((_DWORD *)v19 + 7)
      && *((_DWORD *)a2 + 6) == *((_DWORD *)v19 + 8) )
    {
      v21 = (PERESOURCE *)v23[0];
      *a5 = v19;
      ExReleaseResourceLite(*v21);
      KeLeaveCriticalRegion();
      return 1;
    }
    if ( (_DWORD)v12 == v20 && __PAIR64__(v15, v25) == *(_QWORD *)((char *)v19 + 28) )
      v11 = v19;
    i = (_QWORD *)*i;
  }
  ExReleaseResourceLite(*(PERESOURCE *)v23[0]);
  KeLeaveCriticalRegion();
  if ( v11 )
  {
    *a5 = v11;
    return 1;
  }
  return 0;
}
