/*
 * XREFs of ?OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180023520
 * Callers:
 *     <none>
 * Callees:
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800235F4 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x1800239D0 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessor::OnHitTest(
        DragNDropProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  unsigned int i; // edi
  __int64 v8; // rcx
  unsigned int v9; // esi
  LONG v10; // eax
  __int64 v11; // rcx
  struct tagPOINT v13; // [rsp+48h] [rbp+10h]
  HMONITOR v14; // [rsp+58h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 3;
  if ( (*(_BYTE *)a2 & 0x1A) == 0 || (*(_DWORD *)a2 & 0x4000) != 0 )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
    {
      v8 = 32LL * i;
      if ( (*((_BYTE *)a2 + v8 + 60) & 2) != 0 )
      {
        v9 = *(_DWORD *)((char *)a2 + v8 + 56);
        v14 = 0LL;
        v13.x = *((_DWORD *)a2 + 8 * i + 16);
        v10 = *(_DWORD *)((char *)a2 + v8 + 68);
        v11 = *((_QWORD *)a3 + 1);
        v13.y = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v11 + 24LL))(v11, &v14);
        DragNDropProcessor::UpdateVelocityForPointerId(this, v9, v13);
        DragNDropProcessor::StartGestureRecognition(this, v13, v14, v9);
      }
    }
  }
  return 0LL;
}
