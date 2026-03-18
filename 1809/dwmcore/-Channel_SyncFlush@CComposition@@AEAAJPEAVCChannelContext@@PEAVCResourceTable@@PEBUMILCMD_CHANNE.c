/*
 * XREFs of ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x180079E40
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::Channel_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_SYNCFLUSH *a4)
{
  char *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct CChannelContext *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = (char *)this + 384;
  v5 = *((_DWORD *)this + 102);
  v6 = v5 + 1;
  v7 = v5 + 1 < v5 ? 0x80070216 : 0;
  if ( v5 + 1 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 <= *((_DWORD *)this + 101) )
  {
    v9 = *((unsigned int *)this + 102);
    *(_QWORD *)(*(_QWORD *)v4 + 8 * v9) = v11;
    *((_DWORD *)v4 + 6) = v6;
  }
  else
  {
    v8 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 384, 8LL, v4, &v11);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u);
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x744u);
  else
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  return (unsigned int)v7;
}
