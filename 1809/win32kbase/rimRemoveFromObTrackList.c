/*
 * XREFs of rimRemoveFromObTrackList @ 0x1C010BC18
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00866A4 (RawInputManagerObjectDelete.c)
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 */

void __fastcall rimRemoveFromObTrackList(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (_QWORD *)(a1 + 16);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v2[1] = v2;
  *v2 = v2;
  CInpPushLock::UnLockExclusive((CInpPushLock *)&gObListLock);
}
