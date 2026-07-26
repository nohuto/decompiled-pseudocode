/*
 * XREFs of ?NetPacketStateUpdate@@YAXXZ @ 0x1C01081EC
 * Callers:
 *     ?NetPacketStateUpdateWorker@@YAXPEAX@Z @ 0x1C01082E0 (-NetPacketStateUpdateWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?IsRebalanceNeeded@@YA_NXZ @ 0x1C0107F90 (-IsRebalanceNeeded@@YA_NXZ.c)
 *     ?Iterate@@YA_NXZ @ 0x1C0107FF0 (-Iterate@@YA_NXZ.c)
 */

void NetPacketStateUpdate(void)
{
  char v0; // bl
  struct NET_PACKET_CLIENT *i; // rax
  KLockHolder v2; // [rsp+20h] [rbp-30h] BYREF
  KLockHolder v3; // [rsp+38h] [rbp-18h] BYREF

  while ( 1 )
  {
    if ( !IsRebalanceNeeded() )
    {
      v2.m_State = Unlocked;
      v2.m_Lock = (KPushLockBase *)&unk_1C00A1EC0;
      v2.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v2);
      for ( i = qword_1C00A2210; ; i = (struct NET_PACKET_CLIENT *)*((_QWORD *)i + 1) )
      {
        if ( !i )
        {
          KLockHolder::~KLockHolder(&v2);
          v0 = 1;
          goto LABEL_9;
        }
        if ( *((_BYTE *)i + 5) || *(_DWORD *)i != 6 )
          break;
      }
      KLockHolder::~KLockHolder(&v2);
    }
    v0 = 0;
LABEL_9:
    v3.m_State = Unlocked;
    v3.m_Lock = (KPushLockBase *)&unk_1C00A2190;
    v3.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v3);
    if ( !byte_1C00A2209 )
      break;
    byte_1C00A2209 = 0;
    KLockHolder::ReleaseExclusive(&v3);
    while ( Iterate() )
      ;
    KLockHolder::~KLockHolder(&v3);
  }
  if ( v0 )
    KeSetEvent(&Event, 0, 0);
  KLockHolder::~KLockHolder(&v3);
}
