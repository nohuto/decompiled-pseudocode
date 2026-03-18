/*
 * XREFs of NtGdiPolyPatBlt @ 0x1C005C730
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005C9F0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0073078 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C014790C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C016485C (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(__int64 a1, __int64 a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v7; // r13d
  unsigned int v8; // esi
  int v9; // r12d
  struct _DC_ATTR *UserAttr; // rax
  ULONG64 v11; // rcx
  __int64 v12; // rdx
  struct _DC_ATTR *v13; // rax
  __int64 v14; // rbx
  __int64 i; // r10
  LONG v17; // r8d
  LONG v18; // r9d
  int v19; // ecx
  int v20; // r10d
  __int64 v21; // rax
  DC *v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+58h] [rbp-B0h]
  unsigned int v24; // [rsp+5Ch] [rbp-ACh]
  _DWORD v25[3]; // [rsp+64h] [rbp-A4h] BYREF
  struct _RECTL v26; // [rsp+70h] [rbp-98h] BYREF
  struct _RECTL v27; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v28[24]; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v29; // [rsp+A8h] [rbp-60h]

  v5 = a4;
  v7 = a2;
  v8 = 1;
  v9 = 0;
  if ( !a4 )
    goto LABEL_31;
  if ( !a3 )
  {
    v8 = 0;
    goto LABEL_31;
  }
  v23 = 0;
  v24 = 0;
  LOBYTE(a2) = 1;
  v22 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v22 )
  {
    if ( (*((_DWORD *)v22 + 11) & 2) == 0 )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v22);
      if ( UserAttr && !DC::SaveAttributes(v22, UserAttr) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v22 + 3);
        v22 = 0LL;
        goto LABEL_36;
      }
      *((_DWORD *)v22 + 11) |= 2u;
      v23 = 1;
    }
    if ( (*((_DWORD *)v22 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v22);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v22 )
  {
LABEL_36:
    v8 = 0;
    EngSetLastError(6u);
    goto LABEL_31;
  }
  if ( (unsigned int)v5 > 0xAAAAAAA )
  {
    v8 = 0;
  }
  else if ( 24 * v5 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (ULONG64)a3 + 24 * v5;
    if ( v11 > MmUserProbeAddress || v11 < (unsigned __int64)a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( v8 )
  {
    if ( ((gajRop3[(unsigned __int8)v7] | gajRop3[BYTE1(v7)]) & 0xB2) != 0 )
    {
      DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
        (DWMSCREENREADMODIFYWRITEASSIST *)v28,
        (struct XDCOBJ *)&v22);
      v12 = *v29;
      if ( *v29 )
      {
        if ( *(_DWORD *)(v12 + 492) && (*(_DWORD *)(v12 + 36) & 0x4000) != 0 )
        {
          for ( i = 0LL; ; i = (unsigned int)(v20 + 1) )
          {
            v25[1] = i;
            if ( (unsigned int)i >= (unsigned int)v5 )
              break;
            v17 = *((_DWORD *)a3 + 6 * i + 1);
            v18 = v17 + *((_DWORD *)a3 + 6 * i + 3);
            v19 = *((_DWORD *)a3 + 6 * i + 2);
            v26.left = *((_DWORD *)a3 + 6 * i);
            v26.top = v17;
            v26.right = v26.left + v19;
            v26.bottom = v18;
            ERECTL::vOrder((ERECTL *)&v26);
            if ( v20 )
              ERECTL::operator|=(&v27, &v26);
            else
              v27 = v26;
          }
          if ( !ERECTL::bEmpty((ERECTL *)&v27) )
            v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v28, &v27);
        }
      }
    }
    v8 = GrePolyPatBltInternal(
           (struct XDCOBJ *)&v22,
           v7,
           a3,
           v5,
           a5,
           *(_DWORD *)(*((_QWORD *)v22 + 122) + 184LL),
           *(_DWORD *)(*((_QWORD *)v22 + 122) + 176LL),
           *(_DWORD *)(*((_QWORD *)v22 + 122) + 188LL),
           *(_DWORD *)(*((_QWORD *)v22 + 122) + 180LL));
  }
  if ( v23 && (*((_DWORD *)v22 + 11) & 2) != 0 )
  {
    if ( !v24 )
    {
      v13 = XDCOBJ::GetUserAttr((XDCOBJ *)&v22);
      if ( v13 )
        DC::RestoreAttributes(v22, v13);
    }
    *((_DWORD *)v22 + 11) &= ~2u;
    v23 = 0;
  }
  v25[0] = 0;
  v14 = *(_QWORD *)v22;
  HmgDecrementExclusiveReferenceCountEx(v22, v24, v25);
  if ( v25[0] )
    bDeleteDCInternalEx(v14, 0LL);
LABEL_31:
  if ( v9 )
  {
    v21 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v21);
  }
  return v8;
}
