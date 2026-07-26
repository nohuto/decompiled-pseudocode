/*
 * XREFs of ?Iterate@@YA_NXZ @ 0x1C0107FF0
 * Callers:
 *     ?NetPacketStateUpdate@@YAXXZ @ 0x1C01081EC (-NetPacketStateUpdate@@YAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00D1A74 (-RebalanceExtensions@@YAXXZ.c)
 *     ?IsRebalanceNeeded@@YA_NXZ @ 0x1C0107F90 (-IsRebalanceNeeded@@YA_NXZ.c)
 *     ?MoveClientToNextState@@YAXPEAUNET_PACKET_CLIENT@@@Z @ 0x1C0108130 (-MoveClientToNextState@@YAXPEAUNET_PACKET_CLIENT@@@Z.c)
 */

char Iterate(void)
{
  char v0; // bp
  _DWORD *v1; // rsi
  struct NET_PACKET_CLIENT *v2; // rcx
  char v3; // di
  unsigned int i; // eax
  struct NET_PACKET_CLIENT *v5; // rbx
  struct NET_PACKET_CLIENT *v6; // rax
  struct NET_PACKET_CLIENT **v7; // rdx
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v0 = IsRebalanceNeeded();
  v9.m_Region.m_Entered = 0;
  v1 = &unk_1C00918F0;
  if ( !v0 )
    v1 = &unk_1C00918D8;
  v9.m_State = Unlocked;
  v9.m_Lock = (KPushLockBase *)&unk_1C00A1EC0;
  KLockHolder::AcquireExclusive(&v9);
  v2 = qword_1C00A2210;
  v3 = 1;
  if ( !qword_1C00A2210 )
  {
LABEL_9:
    for ( i = 0; i < 5; ++i )
    {
      v5 = v2;
      if ( v2 )
      {
        while ( *(_DWORD *)v5 != *v1 )
        {
          v5 = (struct NET_PACKET_CLIENT *)*((_QWORD *)v5 + 1);
          if ( !v5 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v5 = 0LL;
      }
      if ( v5 )
        break;
      ++v1;
    }
    KLockHolder::ReleaseExclusive(&v9);
    if ( v5 )
    {
      if ( *(_DWORD *)v5 != 7 )
      {
        MoveClientToNextState(v5);
        goto LABEL_26;
      }
    }
    else if ( v0 )
    {
      RebalanceExtensions();
      goto LABEL_26;
    }
    v3 = 0;
    goto LABEL_26;
  }
  while ( !*((_BYTE *)v2 + 5) )
  {
    if ( *((_BYTE *)v2 + 4) )
    {
      *((_BYTE *)v2 + 4) = 0;
      *(_DWORD *)v2 = 8;
    }
    v2 = (struct NET_PACKET_CLIENT *)*((_QWORD *)v2 + 1);
    if ( !v2 )
    {
      v2 = qword_1C00A2210;
      goto LABEL_9;
    }
  }
  v6 = qword_1C00A2210;
  v7 = &qword_1C00A2210;
  while ( v6 != v2 )
  {
    v7 = (struct NET_PACKET_CLIENT **)((char *)v6 + 8);
    v6 = (struct NET_PACKET_CLIENT *)*((_QWORD *)v6 + 1);
  }
  *v7 = (struct NET_PACKET_CLIENT *)*((_QWORD *)v2 + 1);
  ExFreePoolWithTag(v2, 0x6C43784Eu);
LABEL_26:
  KLockHolder::~KLockHolder(&v9);
  return v3;
}
