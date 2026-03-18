/*
 * XREFs of RIMDiscoverCustomPTPSettings @ 0x1C013022C
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C011728C (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMDiscoverCustomPTPSettings(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        UCHAR *a3,
        USAGE *a4,
        USHORT *a5)
{
  int (*v6)(struct _HIDP_LINK_COLLECTION_NODE *, unsigned int *, struct _HIDP_PREPARSED_DATA *); // rax
  struct _HIDP_LINK_COLLECTION_NODE *v10; // rsi
  int LinkCollectionNodes; // ebx
  int v12; // ecx
  __int64 v13; // rax
  unsigned __int16 v14; // di
  unsigned __int16 LinkUsagePage; // dx
  unsigned int v17; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int16 v18[6]; // [rsp+44h] [rbp-5Dh] BYREF
  struct _HIDP_VALUE_CAPS v19; // [rsp+50h] [rbp-51h] BYREF

  v6 = gpfnHidP_GetLinkCollectionNodes;
  v17 = 0;
  v10 = *(struct _HIDP_LINK_COLLECTION_NODE **)(a1 + 16);
  LinkCollectionNodes = -1073741637;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( v6 )
    v12 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, struct _HIDP_PREPARSED_DATA *))v6)(0LL, &v17, a2);
  else
    v12 = -1073741637;
  if ( ((int)(v12 + 0x80000000) < 0 || v12 == -1072627705) && v17 > 1 )
  {
    if ( v10
      || (v13 = Win32AllocPool(24LL * v17, 0x65637352u),
          *(_QWORD *)(a1 + 16) = v13,
          (v10 = (struct _HIDP_LINK_COLLECTION_NODE *)v13) != 0LL) )
    {
      if ( gpfnHidP_GetLinkCollectionNodes )
        LinkCollectionNodes = gpfnHidP_GetLinkCollectionNodes(v10, &v17, a2);
    }
    else
    {
      LinkCollectionNodes = -1073741801;
    }
    if ( LinkCollectionNodes >= 0 )
    {
      LinkCollectionNodes = -1073741823;
      v14 = 1;
      if ( v17 > 1 )
      {
        while ( 1 )
        {
          LinkUsagePage = v10[v14].LinkUsagePage;
          if ( LinkUsagePage >= 0xFF00u && v10[v14].LinkUsage == 224 )
          {
            v18[0] = 1;
            LinkCollectionNodes = rimHidP_GetSpecificValueCaps(HidP_Feature, LinkUsagePage, v14, 0, &v19, v18, a2);
            if ( (int)(LinkCollectionNodes + 0x80000000) < 0 || LinkCollectionNodes == -1072627705 )
              break;
          }
          if ( ++v14 >= v17 )
            return (unsigned int)LinkCollectionNodes;
        }
        LinkCollectionNodes = 0;
        *a3 = v19.ReportID;
        *a4 = v19.LinkUsagePage;
        *a5 = v19.LinkCollection;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)LinkCollectionNodes;
}
