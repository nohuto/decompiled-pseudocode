/*
 * XREFs of NtDCompositionCreateConnection @ 0x1C006CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006CA98 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006D2F0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 */

__int64 __fastcall NtDCompositionCreateConnection(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct HDCOMPOSITIONCONNECTION__ **v2; // rdi
  int v3; // ebx
  struct HDCOMPOSITIONCONNECTION__ *v5; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v5 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (struct HDCOMPOSITIONCONNECTION__ **)MmUserProbeAddress;
    *a2 = *a2;
    v3 = DirectComposition::CConnection::Create(a1, &v5);
    if ( v3 >= 0 )
      *v2 = v5;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
