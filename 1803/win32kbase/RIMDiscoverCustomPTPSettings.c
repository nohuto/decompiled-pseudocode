/*
 * XREFs of RIMDiscoverCustomPTPSettings @ 0x1C0108B30
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C00EC5C4 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C00F0D7C (rimHidP_GetLinkCollectionNodes.c)
 */

__int64 __fastcall RIMDiscoverCustomPTPSettings(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        UCHAR *a3,
        USAGE *a4,
        USHORT *a5)
{
  struct _HIDP_LINK_COLLECTION_NODE *v5; // rbx
  int LinkCollectionNodes; // ecx
  __int64 v11; // rax
  int SpecificValueCaps; // edx
  unsigned int v13; // r8d
  unsigned __int16 v14; // di
  unsigned __int16 LinkUsagePage; // cx
  unsigned int v17; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int16 v18[6]; // [rsp+44h] [rbp-5Dh] BYREF
  struct _HIDP_VALUE_CAPS v19; // [rsp+50h] [rbp-51h] BYREF

  v5 = *(struct _HIDP_LINK_COLLECTION_NODE **)(a1 + 16);
  *a3 = 0;
  *a4 = 0;
  v17 = 0;
  *a5 = 0;
  LinkCollectionNodes = rimHidP_GetLinkCollectionNodes(0LL, &v17, a2);
  if ( (int)(LinkCollectionNodes + 0x80000000) >= 0 && LinkCollectionNodes != -1072627705 || v17 <= 1 )
    return (unsigned int)-1073741823;
  if ( v5
    || (v11 = Win32AllocPool(24LL * v17, 0x65637352u),
        *(_QWORD *)(a1 + 16) = v11,
        (v5 = (struct _HIDP_LINK_COLLECTION_NODE *)v11) != 0LL) )
  {
    SpecificValueCaps = rimHidP_GetLinkCollectionNodes(v5, &v17, a2);
  }
  else
  {
    SpecificValueCaps = -1073741801;
  }
  if ( SpecificValueCaps >= 0 )
  {
    v13 = v17;
    v14 = 1;
    if ( v17 > 1 )
    {
      do
      {
        LinkUsagePage = v5[v14].LinkUsagePage;
        if ( LinkUsagePage >= 0xFF00u && v5[v14].LinkUsage == 224 )
        {
          v18[0] = 1;
          SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Feature, LinkUsagePage, v14, 0, &v19, v18, a2);
          if ( (int)(SpecificValueCaps + 0x80000000) < 0 || SpecificValueCaps == -1072627705 )
          {
            SpecificValueCaps = 0;
            *a3 = v19.ReportID;
            *a4 = v19.LinkUsagePage;
            *a5 = v19.LinkCollection;
            return (unsigned int)SpecificValueCaps;
          }
          v13 = v17;
        }
        ++v14;
      }
      while ( v14 < v13 );
    }
  }
  return (unsigned int)SpecificValueCaps;
}
