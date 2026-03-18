/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x1800CE984
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x180075FDC (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNotificationResource::ProcessSetCallbackId(
        CNotificationResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *a3)
{
  unsigned int v3; // eax
  volatile signed __int32 *v4; // rbx
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0LL;
  v6 = *((_QWORD *)this + 2);
  if ( v3 < 0x10000 && v3 < *(_DWORD *)(v6 + 336) && (v8 = v3, v9 = *(_QWORD *)(v6 + 312), *(_QWORD *)(v9 + 8 * v8)) )
  {
    v4 = *(volatile signed __int32 **)(v9 + 8 * v8);
    _InterlockedIncrement(v4 + 2);
    v10 = *((_QWORD *)this + 6);
    v11 = 0;
    if ( v10 )
      v12 = *(unsigned int *)(v10 + 68);
    else
      v12 = 0LL;
    if ( (_DWORD)v12 && v4 != (volatile signed __int32 *)v10 )
    {
      v11 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024891, 0x5Du);
    }
    else
    {
      if ( v10 )
        v13 = *(_DWORD *)(v10 + 68);
      else
        v13 = 0;
      if ( v13 )
      {
        v14 = *((unsigned int *)this + 14);
        if ( (_DWORD)v14 )
        {
          if ( v10 )
            v17 = *(unsigned int *)(v10 + 68);
          else
            v17 = 0LL;
          CMessageConversationHost::FlushCallbackId(
            *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1208LL),
            v17,
            v14);
        }
      }
      *((_DWORD *)this + 14) = *((_DWORD *)a3 + 2);
      v15 = *(_QWORD *)this;
      *((_QWORD *)this + 6) = v4;
      (*(void (__fastcall **)(CNotificationResource *))(v15 + 152))(this);
    }
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x96Au);
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0x55u);
  }
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
  return v11;
}
