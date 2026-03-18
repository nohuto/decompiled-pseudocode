/*
 * XREFs of ?PresentDisplayOnlySetProgress@BLTQUEUE@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C00470D4
 * Callers:
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C004713C (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::PresentDisplayOnlySetProgress(
        BLTQUEUE *this,
        const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  if ( *((_DWORD *)this + 156) )
  {
    if ( a2->ProgressId == DXGK_PRESENT_DISPLAYONLY_PROGRESS_ID_FAILED )
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)this + 132LL), 0x40000000u);
    if ( KeGetCurrentIrql() > 2u )
      KeInsertQueueDpc((PRKDPC)((char *)this + 560), 0LL, 0LL);
    else
      KeSetEvent((PRKEVENT)((char *)this + 536), 0, 0);
  }
}
