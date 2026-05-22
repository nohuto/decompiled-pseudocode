/*
 * XREFs of ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x180026370
 * Callers:
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x180024AD0 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180025668 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rsi
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 392);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 400);
  v8 = 0LL;
  if ( v2 != v4 )
  {
    while ( 1 )
    {
      if ( v3 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
      if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 8))(
             *(_QWORD *)(v2 + 8),
             &GUID_66875bc6_4ddf_2885_daf4_a4f8f4476e3d,
             &v8) >= 0 )
        break;
      v2 += 16LL;
      if ( v2 == v4 )
        break;
      v3 = v8;
    }
    v3 = v8;
  }
  v6 = (void (__fastcall ***)(_QWORD))((v3 - 8) & -(__int64)(v3 != 0));
  *a2 = v6;
  if ( v6 )
  {
    (**v6)(v6);
    v3 = v8;
  }
  if ( v3 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return a2;
}
