/*
 * XREFs of ?OnThreadTermination@CActivationObject@@SAXXZ @ 0x1C003551C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 */

void CActivationObject::OnThreadTermination(void)
{
  __int64 v0; // rdi
  _QWORD *v1; // rbx
  _QWORD *i; // rdx
  _QWORD *v3; // rcx
  _BYTE *v4; // rdx
  _QWORD *j; // rcx

  RIMLockExclusive((__int64)&CActivationObject::_sLock);
  v0 = qword_1C0217970;
  v1 = (_QWORD *)qword_1C0217970;
  while ( 1 )
  {
    if ( !v1 )
      goto LABEL_3;
    v3 = (_QWORD *)*v1;
    if ( (*v1 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = (_QWORD *)*v1;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
LABEL_3:
      for ( i = (_QWORD *)(v0 + 8); ; ++i )
      {
        if ( (unsigned __int64)i >= qword_1C0217970
                                  + 8 * ((unsigned __int64)*(&CActivationObject::_sHashTable + 1) >> 5) )
        {
          v3 = 0LL;
          goto LABEL_6;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v1 = (_QWORD *)*i;
      v0 = (__int64)i;
      v3 = (_QWORD *)*i;
    }
    else
    {
      v1 = v3;
    }
LABEL_6:
    if ( !v3 )
      break;
    v4 = v3 - 1;
    if ( (struct _KTHREAD *)v3[3] == KeGetCurrentThread() )
    {
      v4[5] = 1;
      for ( j = (_QWORD *)v0; (*j & 1) == 0; j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == v1 )
        {
          *j = *v1;
          --CActivationObject::_sHashTable;
          *v1 |= 0x8000000000000002uLL;
          v1 = j;
          break;
        }
      }
      ObfDereferenceObject(v4);
    }
  }
  qword_1C0217960 = 0LL;
  ExReleasePushLockExclusiveEx(&CActivationObject::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
