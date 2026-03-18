/*
 * XREFs of ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x180071A98
 * Callers:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180071A4C (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::QueuePostPresentResponse(
        CLegacySurfaceManager *this,
        struct CResponseItem *a2)
{
  char *v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // ebx
  unsigned int v6; // ecx
  int v8; // eax
  struct CResponseItem *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (char *)this + 144;
  v3 = *((_DWORD *)this + 42);
  v4 = v3 + 1;
  v5 = v3 + 1 < v3 ? 0x80070216 : 0;
  if ( v3 + 1 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *((_DWORD *)this + 41) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 144, 8, 1, &v9);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    v6 = *((_DWORD *)this + 42);
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * v3) = v9;
    *((_DWORD *)v2 + 6) = v4;
  }
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x191u);
  else
    (**(void (__fastcall ***)(struct CResponseItem *))v9)(v9);
  return (unsigned int)v5;
}
