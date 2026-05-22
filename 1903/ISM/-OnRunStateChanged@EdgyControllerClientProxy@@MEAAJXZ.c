/*
 * XREFs of ?OnRunStateChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x18006EF20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x18006ED30 (-GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnRunStateChanged(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  unsigned int RunState; // eax

  v1 = *((_QWORD *)this + 15);
  RunState = BamoEdgyControllerClientProxy::GetRunState((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerRunStateChanged(v1 + 72, this, RunState);
}
