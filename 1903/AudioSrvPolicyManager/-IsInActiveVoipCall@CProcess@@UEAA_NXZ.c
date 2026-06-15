/*
 * XREFs of ?IsInActiveVoipCall@CProcess@@UEAA_NXZ @ 0x180016FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::IsInActiveVoipCall(CProcess *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 24LL))(*((_QWORD *)this + 30));
}
