/*
 * XREFs of ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C02580A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::FreeHandle(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(a1 + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, a3);
  LOBYTE(v7) = EvaluateCurrentState((int **)&g_Feature_1460972858_58170315_FeatureDescriptorDetails);
  if ( v7 )
  {
    if ( v6 )
      HMGRTABLE::FreeHandle((HMGRTABLE *)(a1 + 40), a2);
  }
  else
  {
    HMGRTABLE::FreeHandle((HMGRTABLE *)(a1 + 40), a2);
    if ( !v6 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 520LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v6;
}
