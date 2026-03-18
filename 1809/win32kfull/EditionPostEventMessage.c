/*
 * XREFs of EditionPostEventMessage @ 0x1C012B230
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

__int64 __fastcall EditionPostEventMessage(__int64 a1, DWORD a2, DWORD a3, __int64 a4, __int64 a5)
{
  return PostEventMessageEx(
           *(struct tagTHREADINFO **)(*(_QWORD *)(a1 + 72) + 16LL),
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 16LL) + 432LL),
           a2,
           *(InputTransform **)(a1 + 72),
           a3,
           a4,
           (LARGE_INTEGER)a5,
           0LL);
}
