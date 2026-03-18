/*
 * XREFs of UsbhInsertPdoWakeIrp @ 0x1C000D160
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 */

void __fastcall UsbhInsertPdoWakeIrp(struct _IO_CSQ *Csq, __int64 Irp)
{
  __int64 v2; // r11
  _QWORD *v3; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  _QWORD *v6; // r10

  Log(Csq[-18].ReservePointer, 16, 2004308267, 0, Irp);
  v3 = *(_QWORD **)(v2 - 8);
  v4 = v2 - 16;
  v6 = (_QWORD *)(v5 + 168);
  if ( *v3 != v4 )
    __fastfail(3u);
  *v6 = v4;
  v6[1] = v3;
  *v3 = v6;
  *(_QWORD *)(v4 + 8) = v6;
}
