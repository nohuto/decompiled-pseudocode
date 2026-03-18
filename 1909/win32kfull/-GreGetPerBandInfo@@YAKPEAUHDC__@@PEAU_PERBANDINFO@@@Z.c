/*
 * XREFs of ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C00FC268
 * Callers:
 *     NtGdiGetPerBandInfo @ 0x1C00FC1C0 (NtGdiGetPerBandInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00BC8F0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetPerBandInfo(HDC a1, struct _PERBANDINFO *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, struct _PERBANDINFO *, __int64); // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  a2->bRepeatThisBand = 0;
  v3 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v9) )
  {
LABEL_8:
    v4 = v9[0];
    goto LABEL_9;
  }
  v4 = v9[0];
  v5 = *(_QWORD *)(v9[0] + 496LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v9[0] + 48LL);
    if ( *(_QWORD *)(v6 + 2560) )
    {
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v7 = *(__int64 (__fastcall **)(__int64, struct _PERBANDINFO *, __int64))(v6 + 3288);
        if ( v7 )
        {
          v3 = v7((v5 + 24) & -(__int64)(v5 != 0), a2, -v5);
          if ( v3 == -1 )
            v3 = -1;
          goto LABEL_8;
        }
        v3 = 0;
      }
    }
  }
LABEL_9:
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v3;
}
