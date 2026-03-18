/*
 * XREFs of ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C0059DE4
 * Callers:
 *     DestroyThreadHidObjects @ 0x1C00568F0 (DestroyThreadHidObjects.c)
 *     _RegisterRawInputDevices @ 0x1C0059A48 (_RegisterRawInputDevices.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall SearchProcessHidRequest(
        struct tagPROCESSINFO *a1,
        __int16 a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v4; // r10
  struct tagPROCESS_HID_REQUEST *result; // rax

  v4 = *((_QWORD *)a1 + 103);
  if ( !v4 )
    return 0LL;
  for ( result = *(struct tagPROCESS_HID_REQUEST **)(v4 + 16);
        result != (struct tagPROCESS_HID_REQUEST *)(v4 + 16);
        result = *(struct tagPROCESS_HID_REQUEST **)result )
  {
    if ( *((_WORD *)result + 8) == a2 && *((_WORD *)result + 9) == a3 )
      goto LABEL_8;
  }
  result = 0LL;
LABEL_8:
  if ( result )
  {
    *a4 = 1;
  }
  else
  {
    if ( !a3 )
    {
      for ( result = *(struct tagPROCESS_HID_REQUEST **)(v4 + 32);
            result != (struct tagPROCESS_HID_REQUEST *)(v4 + 32);
            result = *(struct tagPROCESS_HID_REQUEST **)result )
      {
        if ( *((_WORD *)result + 8) == a2 )
          goto LABEL_19;
      }
      result = 0LL;
LABEL_19:
      if ( result )
      {
        *a4 = 2;
        return result;
      }
    }
    for ( result = *(struct tagPROCESS_HID_REQUEST **)(v4 + 48);
          result != (struct tagPROCESS_HID_REQUEST *)(v4 + 48);
          result = *(struct tagPROCESS_HID_REQUEST **)result )
    {
      if ( *((_WORD *)result + 8) == a2 && *((_WORD *)result + 9) == a3 )
        goto LABEL_13;
    }
    result = 0LL;
LABEL_13:
    if ( !result )
    {
      *a4 = 0;
      return 0LL;
    }
    *a4 = 3;
  }
  return result;
}
