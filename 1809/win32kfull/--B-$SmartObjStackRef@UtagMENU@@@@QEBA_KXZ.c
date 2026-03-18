/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C0135D54
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
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
