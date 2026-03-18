/*
 * XREFs of ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C0257910
 * Callers:
 *     ??_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z @ 0x1C0257B30 (--_EDXGCHANNELENDPOINTPROXY@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00103D4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C00426C0 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012BD74 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C013191C (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::~DXGCHANNELENDPOINTPROXY(DXGCHANNELENDPOINTPROXY *this)
{
  HMGRTABLE *v2; // rdi
  unsigned int v3; // r15d
  unsigned int v4; // esi
  unsigned int UsedEntryCount; // r14d
  __int64 v6; // rax
  unsigned int EntryType; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax

  *(_QWORD *)this = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGCHANNEL'};
  v2 = (DXGCHANNELENDPOINTPROXY *)((char *)this + 40);
  *((_QWORD *)this + 1) = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGEXPANDHANDLETABLECALLBACK'};
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v3 = 0;
    v4 = 0;
    UsedEntryCount = HMGRTABLE::GetUsedEntryCount((DXGCHANNELENDPOINTPROXY *)((char *)this + 40));
    if ( UsedEntryCount )
    {
      do
      {
        if ( v4 >= *((_DWORD *)this + 14) )
        {
          v6 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v6 + 24) = 847LL;
          WdLogEvent5_WdAssertion(v6);
        }
        EntryType = HMGRTABLE::GetEntryType((__int64)v2, v4);
        if ( !EntryType )
          goto LABEL_14;
        v8 = HMGRTABLE::BuildEntryHandle(v2, v4);
        v9 = v8;
        v10 = (v8 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v10 < *((_DWORD *)v2 + 4) )
        {
          v11 = *(_DWORD *)(*(_QWORD *)v2 + 16 * v10 + 8);
          if ( ((v8 >> 25) & 0x60) == (v11 & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
          {
            if ( EntryType == (*(_DWORD *)(*(_QWORD *)v2 + 16 * v10 + 8) & 0x1F) )
            {
              v13 = *(_QWORD *)(*(_QWORD *)v2 + 16LL * (unsigned int)v10);
              goto LABEL_13;
            }
            v12 = WdLogNewEntry5_WdError((v8 >> 25) & 0x60);
            *(_QWORD *)(v12 + 24) = 316LL;
            WdLogEvent5_WdError(v12);
          }
        }
        v13 = 0LL;
LABEL_13:
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 8LL))(
          *((_QWORD *)this + 16),
          EntryType,
          v13);
        HMGRTABLE::FreeHandle(v2, v9);
        ++v3;
LABEL_14:
        ++v4;
      }
      while ( v3 < UsedEntryCount );
    }
  }
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 861LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGCHANNELENDPOINTPROXY *)((char *)this + 72));
  operator delete[](*(void **)v2);
}
