/*
 * XREFs of xxxDoSysExpunge @ 0x1C01022DC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0053B34 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     ClientFreeLibrary @ 0x1C0102438 (ClientFreeLibrary.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0102514 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     __report_rangecheckfailure @ 0x1C0163AC0 (__report_rangecheckfailure.c)
 */

void __fastcall xxxDoSysExpunge(__int64 a1)
{
  int v2; // ebp
  int v3; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r12
  int v10; // edi
  tagDomLock *v12; // [rsp+60h] [rbp+8h] BYREF
  tagDomLock *v13; // [rsp+68h] [rbp+10h] BYREF

  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v13);
  v2 = 0;
  v3 = catomSysTableEntries;
  *(_DWORD *)(*(_QWORD *)(a1 + 416) + 400LL) = gcSysExpunge;
  if ( v3 > 0 )
  {
    v4 = 0LL;
    v5 = 408LL;
    v6 = 0LL;
    do
    {
      if ( !*(_DWORD *)((char *)&acatomSysDepends + v6) )
      {
        v7 = *(unsigned __int16 *)((char *)&aatomSysLoaded + v4);
        if ( (_WORD)v7 )
        {
          v8 = *(_QWORD *)(a1 + 416);
          if ( ((1 << v2) & *(_DWORD *)(v8 + 404)) != 0 )
          {
            v9 = *(_QWORD *)(v5 + v8);
            v10 = ~(1 << v2);
            *(_QWORD *)(v5 + v8) = 0LL;
            *(_DWORD *)(*(_QWORD *)(a1 + 416) + 404LL) &= v10;
            if ( (*(_DWORD *)((char *)&acatomSysUse + v6))-- == 1 )
            {
              UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v7, v8);
              if ( v4 >= 0x40 )
                _report_rangecheckfailure();
              WPP_MAIN_CB.Dpc.TargetInfoAsUlong &= v10;
              *(_WORD *)((char *)&aatomSysLoaded + v4) = 0;
            }
            CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v12);
            ClientFreeLibrary(v9);
            tagDomLock::LockExclusive(v12);
          }
        }
      }
      ++v2;
      v5 += 8LL;
      v6 += 4LL;
      v4 += 2LL;
    }
    while ( v2 < catomSysTableEntries );
  }
  tagDomLock::UnLockExclusive(v13);
}
