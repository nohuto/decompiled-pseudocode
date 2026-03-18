/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032E80
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     HmgShareLockEx @ 0x1C002CF00 (HmgShareLockEx.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C003215C (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // ebp

  v2 = *(_QWORD *)this;
  v3 = 0;
  LODWORD(v4) = (_DWORD)a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2544LL) )
    return 1LL;
  if ( a2 || (v6 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2704)) != 0LL && (v4 = v6(*(_QWORD *)(v2 + 1792))) != 0 )
  {
    v7 = HmgShareLockCheck(v4, 5);
    v8 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 112) |= 0x80000000;
      HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v7);
      *(_QWORD *)(*(_QWORD *)this + 2544LL) = v8;
      if ( !*(_DWORD *)(v8 + 96) )
        *(_DWORD *)(v8 + 96) = *(_DWORD *)(*(_QWORD *)this + 2100LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2544LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1800LL);
      v9 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 1816LL) & 0x8000000) != 0 )
      {
        *(_DWORD *)(v8 + 112) |= 0x80000u;
        v9 = *(_QWORD *)this;
      }
      HmgShareLockEx(**(_QWORD **)(v9 + 1800), 8, 0);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 && (int)IsGreMovePointerSupported() >= 0 )
        GreMovePointer(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      PDEVOBJ::vFilterDriverHooks(this);
      v10 = bSpEnableSprites(v2);
      vEnableSynchronize(v2);
      if ( *(_QWORD *)(*(_QWORD *)this + 1768LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1768LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2544LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2544LL) != 0LL),
          4LL);
      v3 = v10;
      HmgDecrementShareReferenceCountEx((struct OBJECT *)v8, 0LL);
    }
  }
  return v3;
}
