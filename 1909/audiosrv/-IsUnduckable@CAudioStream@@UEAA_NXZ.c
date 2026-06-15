/*
 * XREFs of ?IsUnduckable@CAudioStream@@UEAA_NXZ @ 0x180049C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsUnduckable(CAudioStream *this)
{
  return *((_BYTE *)this + 30);
}
