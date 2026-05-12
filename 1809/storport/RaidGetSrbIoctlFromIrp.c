/*
 * XREFs of RaidGetSrbIoctlFromIrp @ 0x1C000776C
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0007610 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 * Callees:
 *     EvaluateCurrentState @ 0x1C00260C8 (EvaluateCurrentState.c)
 */

__int64 __fastcall RaidGetSrbIoctlFromIrp(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4, int a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  unsigned int v8; // r11d
  unsigned __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rdx

  v5 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(v5 + 16);
  if ( v8 < 0x1C )
    return 3221225485LL;
  if ( *(_DWORD *)v7 != 28 )
    return 3221225561LL;
  v10 = *(unsigned int *)(v7 + 24) + 28LL;
  if ( v10 > 0xFFFFFFFF )
    return 3221225485LL;
  v11 = *(_DWORD *)(v5 + 8);
  if ( v11 < (unsigned int)v10 && v8 < (unsigned int)v10 )
    return 3221225507LL;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  if ( a5 == 1 )
  {
    v12 = *(_QWORD *)(v7 + 4);
    a3 = *(_DWORD **)"HYBRDISK";
    a4 = *(unsigned int **)"CREATEQU";
    a2 = *(_QWORD **)"QUEUEINF";
    if ( v12 != *(_QWORD *)"HYBRDISK" )
    {
      if ( v12 != *(_QWORD *)"SCSIDISK"
        && v12 != *(_QWORD *)"FIRMWARE"
        && v12 != *(_QWORD *)"QUEUEINF"
        && v12 != *(_QWORD *)"CREATEQU"
        && v12 != *(_QWORD *)"DELETEQU"
        && v12 != *(_QWORD *)"UASPSTOR" )
      {
        return 3221225488LL;
      }
      if ( v12 != *(_QWORD *)"HYBRDISK"
        && v12 != *(_QWORD *)"FIRMWARE"
        && v12 != *(_QWORD *)"QUEUEINF"
        && v12 != *(_QWORD *)"CREATEQU"
        && v12 != *(_QWORD *)"DELETEQU"
        && *(_BYTE *)(a1 + 64) )
      {
        return 3221225506LL;
      }
    }
  }
  v13 = *(_DWORD *)(v7 + 16);
  if ( v13 == 1771008 )
  {
    if ( v8 >= 0x22 )
    {
      if ( *(_WORD *)(v7 + 32) == 224 && *(_BYTE *)(a1 + 64) )
        return 3221225506LL;
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v13 != 1771040 )
    return 0LL;
  v14 = EvaluateCurrentState(&g_Feature_748738874_57308885_FeatureDescriptorDetails, a2, a3, a4);
  v15 = *(unsigned int *)(v5 + 16);
  if ( v14 )
  {
    if ( (unsigned int)v15 < 0x34 )
      return 3221225485LL;
  }
  else if ( (unsigned int)v15 < 0x28 )
  {
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v7 + 36) != 1 && *(_BYTE *)(a1 + 64) )
    return 3221225506LL;
  if ( (unsigned int)v15 < (unsigned int)v10
    || *(unsigned int *)(v7 + 44) + (unsigned __int64)*(unsigned int *)(v7 + 48) > v15 )
  {
    return 3221225485LL;
  }
  return 0LL;
}
