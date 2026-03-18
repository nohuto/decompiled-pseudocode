/*
 * XREFs of ?Initialize@CGlobalInputManager@@IEAAJXZ @ 0x1800DFF78
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E08E0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CMit@@QEAAJXZ @ 0x1800E0050 (-Reset@CMit@@QEAAJXZ.c)
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E0410 (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CGlobalInputManager@@AEAAJXZ @ 0x1800E05F4 (-EnsureRenderThreadCanReceiveInputThreadMessages@CGlobalInputManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalInputManager::Initialize(CGlobalInputManager *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, char *); // rbp
  signed int v10; // eax
  __int64 v11; // rcx
  signed int CanReceiveInputThreadMessages; // eax
  __int64 v13; // rcx
  CMit **v14; // rsi
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx

  v1 = (__int64 *)((char *)this + 264);
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v1);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x122u, 0LL);
  }
  else
  {
    v7 = *v1;
    v8 = *((_QWORD *)this + 34);
    v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL);
    if ( v8 )
    {
      *((_QWORD *)this + 34) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v10 = v9(v7, (char *)this + 272);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x123u, 0LL);
    }
    else
    {
      CanReceiveInputThreadMessages = CGlobalInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(this);
      v6 = CanReceiveInputThreadMessages;
      if ( CanReceiveInputThreadMessages < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CanReceiveInputThreadMessages, 0x125u, 0LL);
      }
      else
      {
        v14 = (CMit **)((char *)this + 256);
        v15 = CMit::Create(*((struct CComposition **)this + 2), (struct CMit **)this + 32);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x12Bu, 0LL);
        }
        else if ( *v14 )
        {
          v17 = CMit::Reset(*v14);
          v6 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x12Fu, 0LL);
        }
      }
    }
  }
  return v6;
}
