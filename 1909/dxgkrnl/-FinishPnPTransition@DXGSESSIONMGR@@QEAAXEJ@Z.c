/*
 * XREFs of ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXEJ@Z @ 0x1C01822EC
 * Callers:
 *     DxgkFinishPnPTransition @ 0x1C0182290 (DxgkFinishPnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransition(DXGSESSIONMGR *this, char a2)
{
  struct _KEVENT *v5; // rcx
  __int64 i; // rbx
  __int64 v7; // rsi
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( a2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
      if ( v7 && *(_QWORD *)(v7 + 18512) )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*(PRKPROCESS *)(v7 + 18624), &ApcState);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) + 18512LL));
        KeUnstackDetachProcess(&ApcState);
      }
    }
  }
  if ( (*((_DWORD *)this + 36))-- == 1 )
  {
    v5 = (struct _KEVENT *)*((_QWORD *)this + 17);
    if ( v5 )
      KeSetEvent(v5, 0, 0);
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
