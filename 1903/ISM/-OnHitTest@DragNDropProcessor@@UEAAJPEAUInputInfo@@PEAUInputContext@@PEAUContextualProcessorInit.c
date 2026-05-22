/*
 * XREFs of ?OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18006C240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006D268 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x18006D4F8 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 */

__int64 __fastcall DragNDropProcessor::OnHitTest(
        DragNDropProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 i; // rsi
  __int64 v8; // rcx
  unsigned int v9; // ebp
  struct tagPOINT v10; // rbx
  HMONITOR v12; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a4 = 3;
  if ( (*(_DWORD *)a2 & 0x1A) != 0 && (*(_DWORD *)a2 & 0x4000) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 53); i = (unsigned int)(i + 1) )
    {
      if ( (*((_BYTE *)a2 + 144 * i + 228) & 4) != 0 )
      {
        v12 = 0LL;
        v8 = *((_QWORD *)a3 + 9);
        v9 = *((_DWORD *)a2 + 36 * i + 55);
        v10 = (struct tagPOINT)*((_QWORD *)a2 + 18 * i + 33);
        if ( v8 )
          (*(void (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v8 + 24LL))(v8, &v12);
        DragNDropProcessor::UpdateVelocityForPointerId(this, v9, v10);
        DragNDropProcessor::StartGestureRecognition(this, v10, v12, v9);
      }
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
