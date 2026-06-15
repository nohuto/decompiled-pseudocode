/*
 * XREFs of PbmLaunchBackgroundTask @ 0x1800242E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_180029174 @ 0x180029174 (sub_180029174.c)
 */

__int64 __fastcall PbmLaunchBackgroundTask(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = 0;
  if ( qword_18004FE78 )
  {
    v8 = sub_18002633C(a1);
    if ( v8 )
    {
      v4 = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        return (unsigned int)v8;
    }
    else
    {
      return (unsigned int)sub_180029174(0LL, a2, a3, a4);
    }
  }
  return v4;
}
