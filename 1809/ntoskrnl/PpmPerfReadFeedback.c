/*
 * XREFs of PpmPerfReadFeedback @ 0x14011EDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

bool PpmPerfReadFeedback()
{
  __int64 v0; // rbx
  bool v1; // zf

  v0 = PpmPerfControlReadFeedback;
  v1 = PpmPerfControlReadFeedback == 0;
  if ( PpmPerfControlReadFeedback )
  {
    ((void (__fastcall *)(__int64 (__fastcall *)()))PpmPerfControlReadFeedback)(PpmPerfControlActionCallback);
    return v0 == 0;
  }
  return v1;
}
