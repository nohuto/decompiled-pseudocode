/*
 * XREFs of ?Process2DInput@MPCMouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800FBFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::Process2DInput(MPCMouseProcessor *this, struct InputInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 469) + 48LL))(
           *((_QWORD *)this + 469),
           a2);
}
