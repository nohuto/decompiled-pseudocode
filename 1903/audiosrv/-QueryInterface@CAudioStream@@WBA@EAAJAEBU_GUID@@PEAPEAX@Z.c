/*
 * XREFs of ?QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::QueryInterface(__int64 a1, const struct _GUID *a2, CAudioStream **a3)
{
  return CAudioStream::QueryInterface((CAudioStream *)(a1 - 16), a2, a3);
}
