/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C013F010
 * Callers:
 *     RIMAssignTouchType @ 0x1C013B0DC (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     RIMCacheAxisChildIndex @ 0x1C013B290 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x1C013E0D4 (RIMGetPropertyCount.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  struct _HIDP_LINK_COLLECTION_NODE *v8; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v9; // rsi
  int v10; // eax
  int v11; // edx
  USHORT FirstChild; // r14
  int v13; // r9d
  _WORD v15[2]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v16; // [rsp+44h] [rbp-55h]
  unsigned int v17; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v18[8]; // [rsp+50h] [rbp-49h] BYREF
  _WORD v19[40]; // [rsp+60h] [rbp-39h] BYREF

  v3 = *(_QWORD *)(a1 + 712);
  v17 = a3;
  v18[0] = 0;
  v6 = 0;
  v7 = 1;
  *(_WORD *)(v3 + 8) = 0;
  if ( v17 > 1 )
  {
    v8 = (struct _HIDP_LINK_COLLECTION_NODE *)Win32AllocPool(24LL * v17, 0x65637352u);
    v9 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v3 + 16) = v8;
      v10 = gpfnHidP_GetLinkCollectionNodes ? gpfnHidP_GetLinkCollectionNodes(v8, &v17, a2) : -1073741637;
      if ( v10 == 1114112 )
      {
        v16 = 0;
        memset(v19, 0, 0x48uLL);
        v15[0] = 0;
        FirstChild = v9->FirstChild;
        if ( v17 )
        {
          while ( 1 )
          {
            v15[0] = 1;
            if ( (unsigned int)rimHidP_GetSpecificValueCaps(
                                 0,
                                 13,
                                 FirstChild,
                                 81,
                                 (__int64)v19,
                                 (__int64)v15,
                                 (__int64)a2) == 1114112 )
              break;
            FirstChild = v9[FirstChild].NextSibling;
            if ( (unsigned __int16)++v16 >= v17 )
              goto LABEL_22;
          }
          v15[0] = 1;
          *(_WORD *)(v3 + 4) = FirstChild;
          *(_WORD *)(a1 + 728) = FirstChild;
          if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, FirstChild, 48, (__int64)v19, (__int64)v15, (__int64)a2) == 1114112 )
          {
            v16 = v19[10];
            v15[0] = 1;
            if ( (unsigned int)rimHidP_GetSpecificValueCaps(
                                 0,
                                 1,
                                 FirstChild,
                                 49,
                                 (__int64)v19,
                                 (__int64)v15,
                                 (__int64)a2) == 1114112 )
            {
              v7 = 0;
              if ( v16 == v19[10] && v16 == 2 )
                *(_DWORD *)(a1 + 312) |= 0x200u;
            }
          }
          if ( v9[FirstChild].FirstChild )
          {
            if ( v7 )
            {
              v13 = 1;
LABEL_21:
              v6 = RIMCacheAxisChildIndex(a1, (__int64)a2, v17, v13);
LABEL_24:
              if ( v6
                && (unsigned int)rimHidP_GetSpecificValueCaps(
                                   0,
                                   0,
                                   *(unsigned __int16 *)(v3 + 4),
                                   0,
                                   0LL,
                                   (__int64)v18,
                                   (__int64)a2) == -1072627705 )
              {
                RIMGetPropertyCount(a1, *(_WORD *)(v3 + 4), v18[0], (__int64)a2);
              }
              return v6;
            }
LABEL_20:
            v13 = 0;
            goto LABEL_21;
          }
          if ( !v7 )
            goto LABEL_20;
        }
LABEL_22:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v6;
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 30, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
        goto LABEL_24;
      }
    }
  }
  return v6;
}
