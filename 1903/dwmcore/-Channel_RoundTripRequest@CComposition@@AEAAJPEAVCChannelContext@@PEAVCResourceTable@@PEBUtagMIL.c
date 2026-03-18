/*
 * XREFs of ?Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x1800D6A38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     McTemplateU0qqx @ 0x180177EA8 (McTemplateU0qqx.c)
 */

__int64 __fastcall CComposition::Channel_RoundTripRequest(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ROUNDTRIPREQUEST *a4)
{
  char *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  signed int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v4 = (char *)this + 464;
  v10 = *((unsigned int *)a4 + 1) | 0x100000000uLL;
  v5 = *((unsigned int *)v4 + 6);
  v6 = v5 + 1;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    v7 = 0;
    if ( v6 <= *((_DWORD *)v4 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v10;
      *((_DWORD *)v4 + 6) = v6;
      goto LABEL_4;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 16, 1, &v10);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v9, 0xC3u, 0LL);
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v7, 0x719u, 0LL);
    return v7;
  }
LABEL_4:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqx((_DWORD)v4, v6, DWORD1(v10), v10, SBYTE8(v10));
  return v7;
}
