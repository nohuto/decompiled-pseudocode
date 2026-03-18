/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C011B14C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRef<tagMENU>::operator unsigned __int64(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[2];
  if ( !result )
    return *(_QWORD *)*a1;
  return result;
}
