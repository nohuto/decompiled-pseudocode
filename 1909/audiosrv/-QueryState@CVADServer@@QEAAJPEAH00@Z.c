/*
 * XREFs of ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x1800E5DA8
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x1800FA6BC (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVADServer::QueryState(CVADServer *this, int *a2, int *a3, int *a4)
{
  int v4; // eax

  if ( a2 )
    *a2 = *((unsigned __int8 *)this + 188);
  if ( a3 )
  {
    if ( *((_DWORD *)this + 66) || (v4 = 1, (*((_BYTE *)this + 268) & 1) == 0) )
      v4 = 0;
    *a3 = v4;
  }
  if ( a4 )
    *a4 = *((_DWORD *)this + 68);
  return 0LL;
}
