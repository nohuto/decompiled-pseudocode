/*
 * XREFs of ?InInteractionMode@MPCProcessor@@UEBA_NXZ @ 0x1800F6E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::InInteractionMode(MPCProcessor *this)
{
  return *((_QWORD *)this + 468) != 0LL;
}
