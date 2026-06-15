/*
 * XREFs of ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x180042E10
 * Callers:
 *     ?IsCaptureStream@CAudioStream@@W7EAA_NXZ @ 0x18006CC60 (-IsCaptureStream@CAudioStream@@W7EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsCaptureStream(CAudioStream *this)
{
  return (unsigned int)(*((_DWORD *)this + 81) - 1) <= 1;
}
