/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0240968
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0240A7C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C0240D44 (-CommitSlot@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG ClearBits; // eax
  __int64 v4; // rsi
  ULONG v5; // ebp

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[2] ^ a1[3]), 1u, *((_DWORD *)a1 + 8) < 0xFCu ? *((_DWORD *)a1 + 8) : 0);
  v4 = 0LL;
  v5 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<28672,112>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    RtlSetBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    if ( ++*((_DWORD *)a1 + 8) >= 0xFCu )
      *((_DWORD *)a1 + 8) = 0;
    v4 = ((v5 / 0x24) << 12) + (a1[2] ^ a1[1]) + 112 * (v5 % 0x24);
  }
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
