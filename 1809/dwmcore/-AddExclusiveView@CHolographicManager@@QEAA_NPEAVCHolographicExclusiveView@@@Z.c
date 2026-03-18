/*
 * XREFs of ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x18020A438
 * Callers:
 *     ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x18020CB28 (-ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddExclusiveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  bool v4; // di
  unsigned int Ptr; // eax
  unsigned int v6; // edx
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  CHolographicInteropTaskQueue *v10; // rcx
  struct IUnknown *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  AcquireSRWLockExclusive(this + 10);
  v4 = 0;
  Ptr = (unsigned int)this[21].Ptr;
  v6 = Ptr + 1;
  v7 = Ptr + 1 < Ptr ? 0x80070216 : 0;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > HIDWORD(this[20].Ptr) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[18], 8, 1, &v12);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *((_QWORD *)this[18].Ptr + Ptr) = v12;
    LODWORD(this[21].Ptr) = v6;
  }
  if ( v7 >= 0 )
  {
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->AddRef)(v12);
    v10 = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( v10 )
    {
      if ( LOBYTE(this[27].Ptr) )
        v4 = CHolographicInteropTaskQueue::PostMessageW(v10, 0xCu, v12, 0LL, 0LL, 0LL, 0LL);
    }
  }
  ReleaseSRWLockExclusive(this + 10);
  return v4;
}
