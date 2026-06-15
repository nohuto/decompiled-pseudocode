/*
 * XREFs of ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180014860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetStreamGroup(CAudioStream *this, struct IStreamGroupProxy **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IStreamGroupProxy **))(**((_QWORD **)this + 6) + 80LL))(
           *((_QWORD *)this + 6),
           a2);
}
