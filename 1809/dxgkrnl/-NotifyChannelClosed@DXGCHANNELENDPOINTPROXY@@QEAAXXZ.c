/*
 * XREFs of ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C02586EC
 * Callers:
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C025888C (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C00426C0 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012BD74 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C013191C (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::NotifyChannelClosed(DXGCHANNELENDPOINTPROXY *this)
{
  _QWORD *v2; // rsi
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int UsedEntryCount; // r15d
  __int64 v7; // rax
  unsigned int EntryType; // r14d
  unsigned int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r8
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGCHANNELENDPOINTPROXY *)((char *)this + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v2 = (_QWORD *)((char *)this + 40);
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
          v7 = WdLogNewEntry5_WdAssertion(v5);
          *(_QWORD *)(v7 + 24) = 878LL;
          WdLogEvent5_WdAssertion(v7);
        }
        EntryType = HMGRTABLE::GetEntryType((__int64)this + 40, v4);
        if ( !EntryType )
          goto LABEL_16;
        v9 = HMGRTABLE::BuildEntryHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v4);
        v10 = v9;
        v11 = (v9 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v11 < *((_DWORD *)this + 14) )
        {
          v12 = *(_DWORD *)(*v2 + 16 * v11 + 8);
          if ( ((v9 >> 25) & 0x60) == (v12 & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
          {
            if ( EntryType == (*(_DWORD *)(*v2 + 16 * v11 + 8) & 0x1F) )
            {
              v14 = *(_QWORD *)(*v2 + 16LL * (unsigned int)v11);
              goto LABEL_13;
            }
            v13 = WdLogNewEntry5_WdError((v9 >> 25) & 0x60);
            *(_QWORD *)(v13 + 24) = 316LL;
            WdLogEvent5_WdError(v13);
          }
        }
        v14 = 0LL;
LABEL_13:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 16LL))(
               *((_QWORD *)this + 16),
               EntryType,
               v14) )
        {
          HMGRTABLE::FreeHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v10);
        }
        ++v3;
LABEL_16:
        ++v4;
      }
      while ( v3 < UsedEntryCount );
    }
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
}
