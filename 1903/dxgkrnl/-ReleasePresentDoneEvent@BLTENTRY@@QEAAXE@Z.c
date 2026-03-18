/*
 * XREFs of ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C027D410
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01421C4 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C027B980 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTENTRY::ReleasePresentDoneEvent(BLTENTRY *this, char a2)
{
  struct _KEVENT *v3; // rcx

  v3 = (struct _KEVENT *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    if ( a2 )
    {
      KeSetEvent(v3, 0, 0);
      v3 = (struct _KEVENT *)*((_QWORD *)this + 6);
    }
    ObfDereferenceObject(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
}
