/*
 * XREFs of ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x18006A9A0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x18006A9DC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesLogical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  __int128 v4; // [rsp+20h] [rbp-48h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  struct tagSIZE v6; // [rsp+50h] [rbp-18h]

  *((struct tagSIZE *)&v4 + 1) = a2;
  *(_QWORD *)&v4 = this;
  v5 = v4;
  v6 = a3;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___(this, &v5);
}
