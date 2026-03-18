/*
 * XREFs of ?OnProcessTermination@CActivationObject@@SAXXZ @ 0x1C0037350
 * Callers:
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 */

void CActivationObject::OnProcessTermination(void)
{
  _QWORD *i; // rdx
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rdi

  RIMLockExclusive((__int64)&CActivationObject::_sLock);
  v1 = qword_1C0214970;
  v2 = (_QWORD *)qword_1C0214970;
  while ( 1 )
  {
    if ( !v2 )
      goto LABEL_3;
    v3 = (_QWORD *)*v2;
    if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = (_QWORD *)*v2;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
LABEL_3:
      for ( i = (_QWORD *)(v1 + 8); ; ++i )
      {
        if ( (unsigned __int64)i >= qword_1C0214970
                                  + 8 * ((unsigned __int64)*(&CActivationObject::_sHashTable + 1) >> 5) )
        {
          v3 = 0LL;
          goto LABEL_6;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v2 = (_QWORD *)*i;
      v1 = (__int64)i;
      v3 = (_QWORD *)*i;
    }
    else
    {
      v2 = v3;
    }
LABEL_6:
    if ( !v3 )
      break;
    v4 = (ULONG_PTR)(v3 - 1);
    if ( v3[2] == PsGetCurrentProcess(v3, i) )
      KeBugCheckEx(0x164u, 0x333uLL, v4, 0LL, 0LL);
  }
  qword_1C0214960 = 0LL;
  ExReleasePushLockExclusiveEx(&CActivationObject::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
