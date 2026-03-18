/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x180062944
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800628D0 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Reset@CMit@@QEAAJXZ @ 0x180062A10 (-Reset@CMit@@QEAAJXZ.c)
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ @ 0x180062A9C (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ.c)
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800899DC (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  int CanReceiveInputThreadMessages; // eax
  unsigned int v12; // ecx
  CMit **v13; // rsi
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx

  v1 = (__int64 *)((char *)this + 240);
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v1);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x174u);
  }
  else
  {
    v7 = *v1;
    v8 = *((_QWORD *)this + 31);
    if ( v8 )
    {
      *((_QWORD *)this + 31) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL))(v7, (char *)this + 248);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x175u);
    }
    else
    {
      CanReceiveInputThreadMessages = CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(this);
      v6 = CanReceiveInputThreadMessages;
      if ( CanReceiveInputThreadMessages < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, CanReceiveInputThreadMessages, 0x177u);
      }
      else
      {
        v13 = (CMit **)((char *)this + 232);
        v14 = CMit::Create(*((struct CComposition **)this + 2), (struct CMit **)this + 29);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x17Du);
        }
        else if ( *v13 )
        {
          v16 = CMit::Reset(*v13);
          v6 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x181u);
        }
      }
    }
  }
  return v6;
}
