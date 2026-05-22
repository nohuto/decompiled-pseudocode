/*
 * XREFs of ?SuppressInputOfType@CInputObserverManager@@UEAAJPEAVBamoInputObserverManagerStub@@W4InputObserverType@InputObservation@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180067990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputObserverManager::SuppressInputOfType(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = (__int64)*(&`anonymous namespace'::s_observerMap + a3);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2, a4);
  else
    return 2147942487LL;
}
