/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00F8060
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C008E69C (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  HSURF v4; // rax
  __int64 (__fastcall *v7)(_QWORD); // rax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  struct _BASEOBJECT *v11; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2552LL) )
    return 1LL;
  if ( a2
    || (v7 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2712)) != 0LL && (v4 = (HSURF)v7(*(_QWORD *)(v2 + 1800))) != 0LL )
  {
    SURFREF::SURFREF((SURFREF *)v10, v4);
    if ( v11 )
    {
      *((_DWORD *)v11 + 28) |= 0x80000000;
      if ( (*(_DWORD *)(v2 + 40) & 0x8000) == 0 )
        INC_SHARE_REF_CNT(v11);
      *(_QWORD *)(*(_QWORD *)this + 2552LL) = v11;
      if ( !*((_DWORD *)v11 + 24) )
        *((_DWORD *)v11 + 24) = *(_DWORD *)(*(_QWORD *)this + 2108LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2552LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1808LL);
      v8 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 1824LL) & 0x8000000) != 0 )
      {
        *((_DWORD *)v11 + 28) |= 0x80000u;
        v8 = *(_QWORD *)this;
      }
      HmgShareLock(**(_QWORD **)(v8 + 1808), 8);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 && (int)IsGreMovePointerSupported() >= 0 )
        GreMovePointer(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      PDEVOBJ::vFilterDriverHooks(this);
      v9 = bSpEnableSprites(v2);
      vEnableSynchronize(v2);
      if ( *(_QWORD *)(*(_QWORD *)this + 1776LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1776LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2552LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2552LL) != 0LL),
          4LL);
      v3 = v9;
    }
    SURFREF::~SURFREF((SURFREF *)v10);
  }
  return v3;
}
