/*
 * XREFs of xxxDoSysExpunge @ 0x1C00D7298
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00D88F8 (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientFreeLibrary @ 0x1C00D8C60 (ClientFreeLibrary.c)
 *     ??0?$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00D8D28 (--0-$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     __report_rangecheckfailure @ 0x1C01396A0 (__report_rangecheckfailure.c)
 */

void __fastcall xxxDoSysExpunge(__int64 a1)
{
  int v2; // ebp
  int v3; // eax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r12
  int v11; // edi
  tagObjLock *v13; // [rsp+60h] [rbp+8h] BYREF
  tagObjLock *v14; // [rsp+68h] [rbp+10h] BYREF

  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v14);
  v2 = 0;
  v3 = catomSysTableEntries;
  *(_DWORD *)(*(_QWORD *)(a1 + 416) + 400LL) = gcSysExpunge;
  if ( v3 > 0 )
  {
    v4 = 0LL;
    v5 = 0x1C0000000uLL;
    v6 = 408LL;
    v7 = 0LL;
    do
    {
      if ( !*(_DWORD *)((char *)&acatomSysDepends + v7) )
      {
        v8 = *(unsigned __int16 *)((char *)&aatomSysLoaded + v4);
        if ( (_WORD)v8 )
        {
          v9 = *(_QWORD *)(a1 + 416);
          if ( ((1 << v2) & *(_DWORD *)(v9 + 404)) != 0 )
          {
            v10 = *(_QWORD *)(v6 + v9);
            v11 = ~(1 << v2);
            *(_QWORD *)(v6 + v9) = 0LL;
            *(_DWORD *)(*(_QWORD *)(a1 + 416) + 404LL) &= v11;
            if ( (*(_DWORD *)((char *)&acatomSysUse + v7))-- == 1 )
            {
              UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v8, v9, 0x1C0000000uLL);
              if ( v4 >= 0x40 )
                _report_rangecheckfailure();
              gdwSysExpungeMask &= v11;
              *(_WORD *)((char *)&aatomSysLoaded + v4) = 0;
            }
            CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(&v13, v8, v9, v5);
            ClientFreeLibrary(v10);
            tagObjLock::LockExclusive(v13);
            v5 = 0x1C0000000uLL;
          }
        }
      }
      ++v2;
      v6 += 8LL;
      v7 += 4LL;
      v4 += 2LL;
    }
    while ( v2 < catomSysTableEntries );
  }
  tagObjLock::UnLock(v14);
}
