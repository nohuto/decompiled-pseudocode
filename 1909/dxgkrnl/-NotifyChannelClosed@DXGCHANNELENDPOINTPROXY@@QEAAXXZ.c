/*
 * XREFs of ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C028ED88
 * Callers:
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028EF28 (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C0049760 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8D70 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C013D5F4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C014BBE8 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::NotifyChannelClosed(DXGCHANNELENDPOINTPROXY *this)
{
  __int64 v2; // rdx
  _QWORD *v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int UsedEntryCount; // r15d
  __int64 v9; // rax
  unsigned int EntryType; // r14d
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGCHANNELENDPOINTPROXY *)((char *)this + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v3 = (_QWORD *)((char *)this + 40);
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v4 = 0;
    v5 = 0;
    UsedEntryCount = HMGRTABLE::GetUsedEntryCount((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v2);
    if ( UsedEntryCount )
    {
      do
      {
        if ( v5 >= *((_DWORD *)this + 14) )
        {
          v9 = WdLogNewEntry5_WdAssertion(v7, v6);
          *(_QWORD *)(v9 + 24) = 878LL;
          WdLogEvent5_WdAssertion(v9);
        }
        EntryType = HMGRTABLE::GetEntryType((__int64)this + 40, v5);
        if ( !EntryType )
          goto LABEL_16;
        v11 = HMGRTABLE::BuildEntryHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v5);
        v12 = v11;
        v13 = (v11 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v13 < *((_DWORD *)this + 14) )
        {
          v14 = *(_DWORD *)(*v3 + 16 * v13 + 8);
          if ( ((v11 >> 25) & 0x60) == (v14 & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
          {
            v15 = v14 & 0x1F;
            if ( EntryType == (_DWORD)v15 )
            {
              v17 = *(_QWORD *)(*v3 + 16LL * (unsigned int)v13);
              goto LABEL_13;
            }
            v16 = WdLogNewEntry5_WdError((v11 >> 25) & 0x60, v15, 2LL * (unsigned int)v13);
            *(_QWORD *)(v16 + 24) = 267LL;
            WdLogEvent5_WdError(v16);
          }
        }
        v17 = 0LL;
LABEL_13:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 16LL))(
               *((_QWORD *)this + 16),
               EntryType,
               v17) )
        {
          HMGRTABLE::FreeHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v12);
        }
        ++v4;
LABEL_16:
        ++v5;
      }
      while ( v4 < UsedEntryCount );
    }
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
}
