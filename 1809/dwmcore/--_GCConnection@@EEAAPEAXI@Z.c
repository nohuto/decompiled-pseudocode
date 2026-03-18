/*
 * XREFs of ??_GCConnection@@EEAAPEAXI@Z @ 0x1801454A0
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x18007A330 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180145698 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x1801457C0 (--1CChannelTable@@UEAA@XZ.c)
 */

CConnection *__fastcall CConnection::`scalar deleting destructor'(CConnection *this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CConnection::`vftable';
  CConnection::Disconnect(this);
  v4 = (void *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    SetEvent(v4);
    v5 = (void *)*((_QWORD *)this + 19);
    if ( v5 )
    {
      CloseHandle(v5);
      *((_QWORD *)this + 19) = 0LL;
    }
  }
  v6 = (void *)*((_QWORD *)this + 22);
  if ( v6 )
  {
    CloseHandle(v6);
    *((_QWORD *)this + 22) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  CChannelTable::~CChannelTable((CConnection *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
