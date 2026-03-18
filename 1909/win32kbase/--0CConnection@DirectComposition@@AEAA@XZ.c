/*
 * XREFs of ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C006FE30
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C006CF40 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::CConnection(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *result; // rax

  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 7) = 8LL;
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  *(_DWORD *)this = 1;
  InitializeSListHead((PSLIST_HEADER)this + 6);
  result = this;
  *((_DWORD *)this + 44) = 60;
  *((_DWORD *)this + 45) = 1;
  return result;
}
