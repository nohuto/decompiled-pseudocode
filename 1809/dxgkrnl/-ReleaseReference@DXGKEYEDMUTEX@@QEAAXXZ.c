/*
 * XREFs of ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC
 * Callers:
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C00AD3A0 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00F6B20 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C012B970 (DxgkShareObjectsInternal.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C021C2EC (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?DxgkSharedKeyedMutexObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C021C890 (-DxgkSharedKeyedMutexObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C0233E80 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0234368 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C02347A4 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C02350DC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C023525C (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0235D28 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C02369B0 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C0236CF0 (DxgkCreateKeyedMutex2.c)
 *     DxgkReleaseKeyedMutex @ 0x1C02377D0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C0237A10 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0234878 (-DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::ReleaseReference(DXGKEYEDMUTEX *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = _InterlockedDecrement64((volatile signed __int64 *)this + 3);
  if ( !v1 )
    DXGGLOBAL::DestroyKeyedMutex(*((DXGGLOBAL **)this + 2), this);
  if ( v1 < 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 704LL;
    WdLogEvent5_WdAssertion(v2);
  }
}
