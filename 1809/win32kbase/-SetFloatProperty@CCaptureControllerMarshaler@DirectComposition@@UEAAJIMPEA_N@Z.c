/*
 * XREFs of ?SetFloatProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C017BE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetFloatProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r10d
  int v5; // r8d
  int v6; // edx
  bool v7; // al

  v4 = 0;
  v5 = 0;
  v6 = a2 - 2;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v7 = *a4;
      v4 = -1073741811;
      goto LABEL_11;
    }
    v5 = 128;
    if ( *((float *)this + 13) != a3 )
    {
      *((float *)this + 13) = a3;
LABEL_9:
      v7 = 1;
      goto LABEL_10;
    }
  }
  else
  {
    v5 = 128;
    if ( *((float *)this + 12) != a3 )
    {
      *((float *)this + 12) = a3;
      goto LABEL_9;
    }
  }
  v7 = 0;
LABEL_10:
  *a4 = v7;
LABEL_11:
  if ( v7 )
    *((_DWORD *)this + 4) |= v5;
  return v4;
}
