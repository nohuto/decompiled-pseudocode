/*
 * XREFs of ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00B7728
 * Callers:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B7700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0008338 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00956D4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::~CConnection(DirectComposition::CConnection *this)
{
  __int64 v2; // rcx
  DirectComposition::CChannel *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx

  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (DirectComposition::CChannel *)*((_QWORD *)this + 19);
  if ( v3 )
    DirectComposition::CChannel::Release(v3);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool(*((_QWORD *)this + 2));
  }
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    Win32FreePool(*((_QWORD *)this + 1));
  }
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 30);
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    Win32FreePool(*((_QWORD *)this + 30));
  }
  v7 = *((_QWORD *)this + 31);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (void *)*((_QWORD *)this + 26);
  if ( v8 )
    ObfDereferenceObject(v8);
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
    Win32FreePool(v9);
}
