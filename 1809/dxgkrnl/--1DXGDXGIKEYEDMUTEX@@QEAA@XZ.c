/*
 * XREFs of ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C023BCE4
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0242D8C (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C023BE10 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C023C2E4 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C023C39C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(DXGDXGIKEYEDMUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  DXGDXGIKEYEDMUTEX::Abandon(this);
  DXGDXGIKEYEDMUTEX::CloseFromDevice(this);
  DXGDXGIKEYEDMUTEX::CloseConsumerResources(this);
  if ( *((_DWORD *)this + 16) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 197LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 4) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 198LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 10) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 199LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
