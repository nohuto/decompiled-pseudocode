/*
 * XREFs of ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0019DB0
 * Callers:
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0019B4C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0020A10 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0021720 (bDeleteDCInternalEx.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C00BDAB4 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::SaveAttributes(DC *this, struct _DC_ATTR *a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rax

  v2 = (_OWORD *)((char *)this + 544);
  if ( this != (DC *)-544LL )
    v2 = (_OWORD *)((char *)this + 688);
  *v2 = *((_OWORD *)a2 + 9);
  v2[1] = *((_OWORD *)a2 + 10);
  v2[2] = *((_OWORD *)a2 + 11);
  v2[3] = *((_OWORD *)a2 + 12);
  v2[4] = *((_OWORD *)a2 + 13);
  v2[5] = *((_OWORD *)a2 + 14);
  v2[6] = *((_OWORD *)a2 + 15);
  v3 = v2 + 8;
  *(v3 - 1) = *((_OWORD *)a2 + 16);
  *v3 = *((_OWORD *)a2 + 17);
  v3[1] = *((_OWORD *)a2 + 18);
  v3[2] = *((_OWORD *)a2 + 19);
  v3[3] = *((_OWORD *)a2 + 20);
  v3[4] = *((_OWORD *)a2 + 21);
  return 1LL;
}
