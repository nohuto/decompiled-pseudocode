/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C01C53FC
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C022CF00 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(ADAPTER_DISPLAY *this, char a2)
{
  _DWORD *i; // rax
  DXGPROTECTEDSESSION *j; // rbx

  if ( !a2 )
  {
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners((PERESOURCE **)this, *(PERESOURCE ***)(*((_QWORD *)this + 2) + 2528LL));
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 24));
    for ( i = (_DWORD *)*((_QWORD *)this + 8); i != (_DWORD *)((char *)this + 64) && i; i = *(_DWORD **)i )
      i[14] = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 3);
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 440));
    for ( j = (DXGPROTECTEDSESSION *)*((_QWORD *)this + 60);
          j != (ADAPTER_DISPLAY *)((char *)this + 480) && j;
          j = *(DXGPROTECTEDSESSION **)j )
    {
      DXGPROTECTEDSESSION::Stop(j);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 55);
  }
  KeCancelTimer((PKTIMER)((char *)this + 504));
  KeFlushQueuedDpcs();
}
