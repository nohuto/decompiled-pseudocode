/*
 * XREFs of ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C028DBD4
 * Callers:
 *     ??_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z @ 0x1C028DDF0 (--_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007534 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C00496B0 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0115DE0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0139CE4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C0147ED8 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::~DXGCHANNELENDPOINTPROXY(DXGCHANNELENDPOINTPROXY *this, __int64 a2)
{
  HMGRTABLE *v3; // rdi
  unsigned int v4; // r15d
  unsigned int v5; // esi
  unsigned int UsedEntryCount; // r14d
  __int64 v7; // rax
  unsigned int EntryType; // ebp
  unsigned int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax

  *(_QWORD *)this = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGCHANNEL'};
  v3 = (DXGCHANNELENDPOINTPROXY *)((char *)this + 40);
  *((_QWORD *)this + 1) = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGEXPANDHANDLETABLECALLBACK'};
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v4 = 0;
    v5 = 0;
    UsedEntryCount = HMGRTABLE::GetUsedEntryCount((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), a2);
    if ( UsedEntryCount )
    {
      do
      {
        if ( v5 >= *((_DWORD *)this + 14) )
        {
          v7 = WdLogNewEntry5_WdAssertion(this, a2);
          *(_QWORD *)(v7 + 24) = 847LL;
          WdLogEvent5_WdAssertion(v7);
        }
        EntryType = HMGRTABLE::GetEntryType((__int64)v3, v5);
        if ( !EntryType )
          goto LABEL_14;
        v9 = HMGRTABLE::BuildEntryHandle(v3, v5);
        v10 = v9;
        v11 = (v9 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v11 < *((_DWORD *)v3 + 4) )
        {
          v12 = *(_DWORD *)(*(_QWORD *)v3 + 16 * v11 + 8);
          if ( ((v9 >> 25) & 0x60) == (v12 & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
          {
            v13 = v12 & 0x1F;
            if ( EntryType == (_DWORD)v13 )
            {
              v15 = *(_QWORD *)(*(_QWORD *)v3 + 16LL * (unsigned int)v11);
              goto LABEL_13;
            }
            v14 = WdLogNewEntry5_WdError((v9 >> 25) & 0x60, v13, 2LL * (unsigned int)v11);
            *(_QWORD *)(v14 + 24) = 267LL;
            WdLogEvent5_WdError(v14);
          }
        }
        v15 = 0LL;
LABEL_13:
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 8LL))(
          *((_QWORD *)this + 16),
          EntryType,
          v15);
        HMGRTABLE::FreeHandle(v3, v10);
        ++v4;
LABEL_14:
        ++v5;
      }
      while ( v4 < UsedEntryCount );
    }
  }
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v16 + 24) = 861LL;
    WdLogEvent5_WdAssertion(v16);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGCHANNELENDPOINTPROXY *)((char *)this + 72));
  operator delete[](*(void **)v3);
}
