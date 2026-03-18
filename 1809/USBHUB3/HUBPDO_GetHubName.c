/*
 * XREFs of HUBPDO_GetHubName @ 0x1C0012EF0
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00150A0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetHubSymbolicLinkName @ 0x1C0016B60 (HUBPDO_GetHubSymbolicLinkName.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C002CCF8 (HUBMISC_StripSymbolicNamePrefix.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBPDO_GetHubName(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  size_t v6; // rbp
  __int64 v7; // rax
  const void *v8; // rax
  int v9; // r14d
  __int64 v10; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  size_t Size; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a2[3];
  v6 = *(unsigned int *)(a2[23] + 8LL);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    if ( (unsigned int)v6 >= 6 )
    {
      if ( (*(_DWORD *)(v7 + 1632) & 2) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        memset((void *)v3, 0, v6);
        HUBPDO_GetHubSymbolicLinkName(a1, &DestinationString);
        v8 = (const void *)HUBMISC_StripSymbolicNamePrefix(&DestinationString, &Size);
        v9 = Size;
        if ( v8 && (unsigned int)v6 >= (int)Size + 6 )
          memmove((void *)(v3 + 4), v8, Size);
        v10 = (unsigned int)(v9 + 6);
        *(_DWORD *)v3 = v10;
        a2[7] = v10;
      }
      else
      {
        *(_DWORD *)v3 = 6;
        *(_WORD *)(v3 + 4) = 0;
        a2[7] = 6LL;
      }
    }
    else
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 1432LL),
        3u,
        5u,
        0xDu,
        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
        v6,
        6);
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 1432LL),
      3u,
      5u,
      0xCu,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
    return (unsigned int)-1073741811;
  }
  return v2;
}
