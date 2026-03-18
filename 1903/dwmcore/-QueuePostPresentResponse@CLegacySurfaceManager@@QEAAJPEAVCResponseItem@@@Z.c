/*
 * XREFs of ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x1800CD6C4
 * Callers:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800CD678 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::QueuePostPresentResponse(
        CLegacySurfaceManager *this,
        struct CResponseItem *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  signed int v6; // eax
  __int64 v7; // rcx
  struct CResponseItem *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 42);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 41) )
    {
      *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v2) = v8;
      *((_DWORD *)this + 42) = v3;
      goto LABEL_4;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 144, 8, 1, &v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC3u, 0LL);
  }
  if ( (v4 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v4, 0x197u, 0LL);
    return v4;
  }
LABEL_4:
  (**(void (__fastcall ***)(struct CResponseItem *))v8)(v8);
  return v4;
}
