/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C0118EA0
 * Callers:
 *     RIMAssignTouchType @ 0x1C0114FC4 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     RIMCacheAxisChildIndex @ 0x1C0115158 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x1C0118004 (RIMGetPropertyCount.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  struct _HIDP_LINK_COLLECTION_NODE *v8; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v9; // rsi
  int v10; // eax
  USHORT FirstChild; // r14
  int v13; // r9d
  _WORD v14[2]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v15; // [rsp+44h] [rbp-55h]
  unsigned int v16; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v17[8]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v18[20]; // [rsp+60h] [rbp-39h] BYREF
  __int16 v19; // [rsp+74h] [rbp-25h]

  v3 = *(_QWORD *)(a1 + 704);
  v16 = a3;
  v17[0] = 0;
  v6 = 0;
  v7 = 1;
  *(_WORD *)(v3 + 8) = 0;
  if ( v16 > 1 )
  {
    v8 = (struct _HIDP_LINK_COLLECTION_NODE *)Win32AllocPool(24LL * v16, 0x65637352u);
    v9 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v3 + 16) = v8;
      v10 = gpfnHidP_GetLinkCollectionNodes ? gpfnHidP_GetLinkCollectionNodes(v8, &v16, a2) : -1073741637;
      if ( v10 == 1114112 )
      {
        v15 = 0;
        v14[0] = 0;
        FirstChild = v9->FirstChild;
        if ( v16 )
        {
          while ( 1 )
          {
            v14[0] = 1;
            if ( (unsigned int)rimHidP_GetSpecificValueCaps(
                                 0,
                                 13,
                                 FirstChild,
                                 81,
                                 (__int64)v18,
                                 (__int64)v14,
                                 (__int64)a2) == 1114112 )
              break;
            FirstChild = v9[FirstChild].NextSibling;
            if ( (unsigned __int16)++v15 >= v16 )
              goto LABEL_10;
          }
          v14[0] = 1;
          *(_WORD *)(v3 + 4) = FirstChild;
          *(_WORD *)(a1 + 720) = FirstChild;
          if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, FirstChild, 48, (__int64)v18, (__int64)v14, (__int64)a2) == 1114112 )
          {
            v15 = v19;
            v14[0] = 1;
            if ( (unsigned int)rimHidP_GetSpecificValueCaps(
                                 0,
                                 1,
                                 FirstChild,
                                 49,
                                 (__int64)v18,
                                 (__int64)v14,
                                 (__int64)a2) == 1114112 )
            {
              v7 = 0;
              if ( v15 == v19 && v15 == 2 )
                *(_DWORD *)(a1 + 308) |= 0x800u;
            }
          }
          if ( v9[FirstChild].FirstChild )
          {
            if ( v7 )
            {
              v13 = 1;
LABEL_25:
              v6 = RIMCacheAxisChildIndex(a1, (__int64)a2, v16, v13);
              goto LABEL_11;
            }
LABEL_24:
            v13 = 0;
            goto LABEL_25;
          }
          if ( !v7 )
            goto LABEL_24;
        }
LABEL_10:
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x1Eu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
LABEL_11:
        if ( v6
          && (unsigned int)rimHidP_GetSpecificValueCaps(
                             0,
                             0,
                             *(unsigned __int16 *)(v3 + 4),
                             0,
                             0LL,
                             (__int64)v17,
                             (__int64)a2) == -1072627705 )
        {
          RIMGetPropertyCount(a1, *(unsigned __int16 *)(v3 + 4), v17[0], (__int64)a2);
        }
      }
    }
  }
  return v6;
}
