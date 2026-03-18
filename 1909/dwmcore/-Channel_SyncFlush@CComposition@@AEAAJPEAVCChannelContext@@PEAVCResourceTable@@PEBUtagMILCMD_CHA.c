/*
 * XREFs of ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x1800D7FB8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800AAD90 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SYNCFLUSH *a4)
{
  _QWORD *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  struct CChannelContext *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = (_QWORD *)((char *)this + 400);
  v5 = *((_DWORD *)this + 106);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    v7 = 0;
    if ( v6 <= *((_DWORD *)this + 105) )
    {
      *(_QWORD *)(*v4 + 8LL * *((unsigned int *)this + 106)) = v11;
      *((_DWORD *)this + 106) = v6;
      goto LABEL_5;
    }
    v8 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 400, 8u, (__int64)v4, &v11);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC3u, 0LL);
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x6EDu, 0LL);
    return v7;
  }
LABEL_5:
  _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  return v7;
}
