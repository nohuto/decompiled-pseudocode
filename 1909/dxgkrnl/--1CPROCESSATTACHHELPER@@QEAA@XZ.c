/*
 * XREFs of ??1CPROCESSATTACHHELPER@@QEAA@XZ @ 0x1C0035DB4
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C00C6EF0 (DxgkDisplayOnOff.c)
 * Callees:
 *     <none>
 */

void __fastcall CPROCESSATTACHHELPER::~CPROCESSATTACHHELPER(struct _KAPC_STATE *this)
{
  if ( LOBYTE(this[1].ApcListHead[0].Flink) )
  {
    KeUnstackDetachProcess(this);
    LOBYTE(this[1].ApcListHead[0].Flink) = 0;
  }
}
