/*
 * XREFs of ??9?$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z @ 0x1C00959C8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(__int64 a1, _WORD *a2)
{
  return **(_WORD **)(a1 - 16) != *a2;
}
