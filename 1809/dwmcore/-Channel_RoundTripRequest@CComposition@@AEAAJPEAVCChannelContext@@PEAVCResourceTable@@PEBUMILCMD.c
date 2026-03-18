/*
 * XREFs of ?Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x180077D54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     McTemplateU0qqx @ 0x18014C110 (McTemplateU0qqx.c)
 */

__int64 __fastcall CComposition::Channel_RoundTripRequest(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_ROUNDTRIPREQUEST *a4)
{
  char *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // ebx
  int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v4 = (char *)this + 448;
  v10 = *((unsigned int *)a4 + 1) | 0x100000000uLL;
  v5 = *((unsigned int *)v4 + 6);
  v6 = v5 + 1;
  v7 = (int)v5 + 1 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > *((_DWORD *)v4 + 5) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 16, 1, &v10);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v10;
    *((_DWORD *)v4 + 6) = v6;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, 0LL, 0, v7, 0x770u);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqx((_DWORD)v4, v6, DWORD1(v10), v10, SBYTE8(v10));
  }
  return (unsigned int)v7;
}
