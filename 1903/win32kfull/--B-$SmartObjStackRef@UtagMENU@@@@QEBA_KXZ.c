/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C0140A70
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
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
