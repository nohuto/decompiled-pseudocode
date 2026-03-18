/*
 * XREFs of GetBoundMonitorForType @ 0x1C012E2C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C005C4B4 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetBoundMonitorForType(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  if ( a1 == 4 )
  {
    v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 32) )
        return HMValidateSharedHandleNoRip(**(_QWORD **)(v2 + 24));
    }
  }
  return v1;
}
