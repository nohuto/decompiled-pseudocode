/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C0160DC0
 * Callers:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0101C00 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

char *__fastcall UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(
        char *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    (unsigned __int64)(a1 - 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    EPALOBJ::~EPALOBJ);
  return a1;
}
