/*
 * XREFs of ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180013E90
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180026178 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

bool __fastcall CProcess::IsScreenReaderProcess(CProcess *this)
{
  return (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 45), *((_DWORD *)this + 44), 0LL) != 0;
}
