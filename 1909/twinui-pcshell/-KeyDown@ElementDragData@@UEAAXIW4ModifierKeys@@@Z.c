/*
 * XREFs of ?KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z @ 0x18039F270
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18016F6B0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18039EB20 (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18039EB70 (-ContinueOnCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_Tlg.c)
 */

void __fastcall ElementDragData::KeyDown(_DWORD *a1, int a2)
{
  LPVOID v4[11]; // [rsp+20h] [rbp-58h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 46),
    (wil::ActivityThreadWatcher *)v4);
  if ( (unsigned int)(a1[124] - 2) > 1 && a2 == 27 )
    ElementDragData::CancelDrag((ElementDragData *)a1);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(v4);
}
