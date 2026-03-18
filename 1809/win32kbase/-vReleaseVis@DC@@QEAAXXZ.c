/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00FAD84
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0108BB8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x1C00229F0 (HmgPentryFromPobj.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0034DF0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  __int64 v2; // rax

  *((_DWORD *)this + 9) |= 0x10u;
  v2 = HmgPentryFromPobj(this);
  *(_BYTE *)(v2 + 15) |= 4u;
  CPushLock::AcquireLockExclusive((DC *)((char *)this + 1112));
  REGION::vDeleteREGION(*((REGION **)this + 143));
  *((_QWORD *)this + 143) = prgnDefault;
  CPushLock::ReleaseLock((DC *)((char *)this + 1112));
}
