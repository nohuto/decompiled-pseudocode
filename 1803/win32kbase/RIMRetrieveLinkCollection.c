/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C00EDB24
 * Callers:
 *     RIMAssignTouchType @ 0x1C00EA3D4 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMCacheAxisChildIndex @ 0x1C00EA568 (RIMCacheAxisChildIndex.c)
 *     RIMGetPropertyCount @ 0x1C00ECC88 (RIMGetPropertyCount.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C00F0D7C (rimHidP_GetLinkCollectionNodes.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int16 v10; // r14
  int v12; // r9d
  unsigned __int16 v13[2]; // [rsp+40h] [rbp-59h] BYREF
  USHORT ReportCount; // [rsp+44h] [rbp-55h]
  unsigned int v15; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v16[8]; // [rsp+50h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v17; // [rsp+60h] [rbp-39h] BYREF

  v3 = *(_QWORD *)(a1 + 672);
  v15 = a3;
  v16[0] = 0;
  v6 = 0;
  v7 = 1;
  *(_WORD *)(v3 + 8) = 0;
  if ( v15 <= 1 )
    return v6;
  v8 = Win32AllocPool(24LL * v15, 0x65637352u);
  v9 = v8;
  if ( !v8 )
    return v6;
  *(_QWORD *)(v3 + 16) = v8;
  if ( (unsigned int)rimHidP_GetLinkCollectionNodes(v8, &v15, a2) != 1114112 )
    return v6;
  ReportCount = 0;
  v13[0] = 0;
  v10 = *(_WORD *)(v9 + 10);
  if ( v15 )
  {
    while ( 1 )
    {
      v13[0] = 1;
      if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, v10, 0x51u, &v17, v13, a2) == 1114112 )
        break;
      v10 = *(_WORD *)(v9 + 24LL * v10 + 8);
      if ( ++ReportCount >= v15 )
        goto LABEL_7;
    }
    v13[0] = 1;
    *(_WORD *)(v3 + 4) = v10;
    *(_WORD *)(a1 + 688) = v10;
    if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v10, 0x30u, &v17, v13, a2) == 1114112 )
    {
      ReportCount = v17.ReportCount;
      v13[0] = 1;
      if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v10, 0x31u, &v17, v13, a2) == 1114112 )
      {
        v7 = 0;
        if ( ReportCount == v17.ReportCount && ReportCount == 2 )
          *(_DWORD *)(a1 + 276) |= 0x800u;
      }
    }
    if ( *(_WORD *)(v9 + 24LL * v10 + 10) )
    {
      if ( v7 )
      {
        v12 = 1;
LABEL_22:
        v6 = RIMCacheAxisChildIndex(a1, a2, v15, v12);
        goto LABEL_8;
      }
LABEL_21:
      v12 = 0;
      goto LABEL_22;
    }
    if ( !v7 )
      goto LABEL_21;
  }
LABEL_7:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Eu,
    (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
LABEL_8:
  if ( v6 && rimHidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v3 + 4), 0, 0LL, v16, a2) == -1072627705 )
    RIMGetPropertyCount(a1, *(unsigned __int16 *)(v3 + 4), v16[0], a2);
  return v6;
}
