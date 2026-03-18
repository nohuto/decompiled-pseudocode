/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C009E190
 * Callers:
 *     <none>
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009E3A0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A51B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C011D5F4 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0139648 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(__int64 a1, __int64 a2, struct _POLYPATBLT *a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v7; // r13d
  unsigned int v8; // esi
  int v9; // r12d
  ULONG64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 i; // r10
  LONG v15; // r8d
  LONG v16; // r9d
  int v17; // ecx
  __int64 v18; // r8
  int v19; // r10d
  __int64 v20; // rax
  DC *v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+58h] [rbp-B0h]
  unsigned int v23; // [rsp+5Ch] [rbp-ACh]
  _DWORD v24[3]; // [rsp+64h] [rbp-A4h] BYREF
  struct _RECTL v25; // [rsp+70h] [rbp-98h] BYREF
  struct _RECTL v26; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v27[24]; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v28; // [rsp+A8h] [rbp-60h]

  v5 = (unsigned int)a4;
  v7 = a2;
  v8 = 1;
  v9 = 0;
  if ( !(_DWORD)a4 )
    goto LABEL_22;
  if ( !a3 )
  {
    v8 = 0;
    goto LABEL_22;
  }
  v22 = 0;
  v23 = 0;
  LOBYTE(a2) = 1;
  v21 = (DC *)HmgLockEx(a1, a2);
  if ( v21 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v21) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
      v21 = 0LL;
      goto LABEL_27;
    }
    if ( (*((_DWORD *)v21 + 132) & 4) != 0 )
      DC::vMarkTransformDirty(v21);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v21 )
  {
LABEL_27:
    v8 = 0;
    EngSetLastError(6u);
    goto LABEL_22;
  }
  if ( (unsigned int)v5 > 0xAAAAAAA )
  {
    v8 = 0;
  }
  else if ( 24 * v5 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (ULONG64)a3 + 24 * v5;
    if ( v10 > MmUserProbeAddress || v10 < (unsigned __int64)a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( v8 )
  {
    if ( ((gajRop3[(unsigned __int8)v7] | gajRop3[BYTE1(v7)]) & 0xB2) != 0 )
    {
      DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
        (DWMSCREENREADMODIFYWRITEASSIST *)v27,
        (struct XDCOBJ *)&v21);
      v11 = *v28;
      if ( *v28 )
      {
        if ( *(_DWORD *)(v11 + 500) && (*(_DWORD *)(v11 + 36) & 0x4000) != 0 )
        {
          for ( i = 0LL; ; i = (unsigned int)(v19 + 1) )
          {
            v24[1] = i;
            if ( (unsigned int)i >= (unsigned int)v5 )
              break;
            v15 = *((_DWORD *)a3 + 6 * i + 1);
            v16 = v15 + *((_DWORD *)a3 + 6 * i + 3);
            v17 = *((_DWORD *)a3 + 6 * i + 2);
            v25.left = *((_DWORD *)a3 + 6 * i);
            v25.top = v15;
            v25.right = v25.left + v17;
            v25.bottom = v16;
            ERECTL::vOrder((ERECTL *)&v25);
            if ( v19 )
              ERECTL::operator|=(&v26, &v25, v18);
            else
              v26 = v25;
          }
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v26) )
            v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v27, &v26);
        }
      }
    }
    v8 = GrePolyPatBltInternal(
           (struct XDCOBJ *)&v21,
           v7,
           a3,
           v5,
           a5,
           *(_DWORD *)(*((_QWORD *)v21 + 10) + 40LL),
           *(_DWORD *)(*((_QWORD *)v21 + 10) + 32LL),
           *(_DWORD *)(*((_QWORD *)v21 + 10) + 44LL),
           *(_DWORD *)(*((_QWORD *)v21 + 10) + 36LL));
  }
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v21);
  v24[0] = 0;
  v12 = *(_QWORD *)v21;
  HmgDecrementExclusiveReferenceCountEx(v21, v23, v24);
  if ( v24[0] )
    bDeleteDCInternalEx(v12, 0LL);
LABEL_22:
  if ( v9 )
  {
    v20 = UserReferenceDwmApiPort(a1, a2, a3, a4);
    DwmSyncFlushAndWaitForBatch(v20);
  }
  return v8;
}
