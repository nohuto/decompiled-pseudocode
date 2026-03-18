/*
 * XREFs of ?internalDestroy@CActivationObject@@AEAAXXZ @ 0x1C011EB28
 * Callers:
 *     ActivationObjectCallout @ 0x1C011ECC0 (ActivationObjectCallout.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall CActivationObject::internalDestroy(CActivationObject *this)
{
  CActivationObject *v1; // rbx
  char v2; // di
  _QWORD *v3; // r10
  _QWORD *v4; // rdx
  __int64 v5; // [rsp+50h] [rbp+8h]

  v1 = this;
  if ( (struct _KTHREAD *)qword_1C0214960 == KeGetCurrentThread() )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    RIMLockExclusive((__int64)&CActivationObject::_sLock);
  }
  if ( *((_BYTE *)v1 + 4) )
  {
    if ( !*((_BYTE *)v1 + 5) )
    {
      v3 = (_QWORD *)((char *)v1 + 8);
      v5 = *((_QWORD *)v1 + 2) & (-1LL << (*(&CActivationObject::_sHashTable + 4) & 0x1F));
      v4 = (_QWORD *)(qword_1C0214970
                    + 8LL
                    * ((37
                      * (BYTE6(v5)
                       + 37
                       * (BYTE5(v5)
                        + 37
                        * (BYTE4(v5)
                         + 37
                         * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
                      + HIBYTE(v5)) & (unsigned int)((*(&CActivationObject::_sHashTable + 1) >> 5) - 1)));
      this = (CActivationObject *)0x8000000000000002LL;
      while ( (*v4 & 1) == 0 )
      {
        if ( (_QWORD *)*v4 == v3 )
        {
          *v4 = *v3;
          --CActivationObject::_sHashTable;
          *v3 |= 0x8000000000000002uLL;
          break;
        }
        v4 = (_QWORD *)*v4;
      }
    }
    InputExtensibilityCallout::CoreMsgSendMessage((__int64)this, 11);
  }
  if ( !v2 )
  {
    qword_1C0214960 = 0LL;
    ExReleasePushLockExclusiveEx(&CActivationObject::_sLock, 0LL);
    KeLeaveCriticalRegion();
  }
}
