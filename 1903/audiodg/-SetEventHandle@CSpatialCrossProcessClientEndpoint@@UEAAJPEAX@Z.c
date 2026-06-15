/*
 * XREFs of ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005DE50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140015704 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x140041B50 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x140041BF0 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x140041D48 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140051FC0 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     WPP_SF_SD @ 0x1400538E4 (WPP_SF_SD.c)
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058E74 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AD28 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?EraseHandleServerPortName@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14005BD74 (-EraseHandleServerPortName@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x14005DB30 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::SetEventHandle(
        CSpatialCrossProcessClientEndpoint *this,
        void *a2)
{
  int v4; // ebp
  void **v5; // rdi
  int v6; // ebx
  void **v7; // rax
  unsigned __int16 *Buffer; // rax
  __int64 v9; // rdx
  const wchar_t *v10; // rax

  v4 = 0;
  v5 = 0LL;
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::SetEventHandle", 53);
  if ( (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this) & 0x20) != 0 || *((_BYTE *)this + 976) )
  {
    v6 = -2147418113;
LABEL_26:
    if ( v6 == -2147023537 )
    {
      v6 = -2004287484;
    }
    else if ( v6 >= 0 && v4 < 0 )
    {
      v6 = v4;
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::SetEventHandle", 104, v4);
    }
    goto LABEL_32;
  }
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v6 = -2147024809;
    goto LABEL_34;
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 23) - 16LL) )
  {
    v6 = -2147418113;
    goto LABEL_34;
  }
  v7 = (void **)operator new(0x10uLL);
  v5 = v7;
  if ( v7 )
  {
    v7[1] = 0LL;
    *v7 = &HandleSendReceiveClient::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    Buffer = (unsigned __int16 *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)this + 23);
    v6 = HandleSendReceiveClient::Initialize(v5, Buffer);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v10 = (const wchar_t *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)this + 23);
      WPP_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_ef0ef65259e03aace0b5c123f7ec5f93_Traceguids, v10, v6);
    }
    if ( v6 >= 0 )
    {
      v6 = HandleSendReceiveClient::SendHandle((__int64)v5, v9, a2);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_ef0ef65259e03aace0b5c123f7ec5f93_Traceguids,
          v6);
      }
      if ( v6 == -2147023537 )
        v6 = -2004287484;
      if ( v6 >= 0 )
        *((_BYTE *)this + 976) = 1;
      v4 = HandleSendReceiveClient::CloseConnection((HandleSendReceiveClient *)v5);
    }
    goto LABEL_26;
  }
  v6 = -2147024882;
LABEL_32:
  if ( v5 )
    HandleSendReceiveClient::`vector deleting destructor'((HandleSendReceiveClient *)v5, 1);
LABEL_34:
  CSpatialCrossProcessBaseEndpoint::EraseHandleServerPortName(this);
  return (unsigned int)v6;
}
