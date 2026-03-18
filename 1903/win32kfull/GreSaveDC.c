/*
 * XREFs of GreSaveDC @ 0x1C008DF10
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C008D1A0 (-UT_InvertCaret@@YAXXZ.c)
 *     NtGdiSaveDC @ 0x1C008DEF0 (NtGdiSaveDC.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F8A94 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientExtTextOutW @ 0x1C0157790 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021F3C4 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F828 (xxxClientPSMTextOut.c)
 * Callees:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00FE068 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C010FDBC (-bSavePath@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1C028377C (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 */

__int64 __fastcall GreSaveDC(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  DC *v3; // r8
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r12
  int v11; // r15d
  unsigned int v12; // r14d
  __int64 v13; // rdi
  int v14; // eax
  DC *v15; // rcx
  __int64 v16; // rdx
  DC *v17; // rcx
  struct _DC_ATTR *v18; // rax
  __int64 v19; // rbx
  DC *v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  _QWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+40h] [rbp-28h]
  int v25; // [rsp+98h] [rbp+30h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+38h] BYREF

  LOBYTE(a2) = 1;
  v22 = 0LL;
  v21 = (DC *)HmgLockEx(a1, a2, 0LL);
  v3 = v21;
  if ( !v21 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_52;
  }
  if ( (*((_DWORD *)v21 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v21);
    if ( UserAttr && !DC::SaveAttributes(v21, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
      v21 = 0LL;
      goto LABEL_46;
    }
    *((_DWORD *)v21 + 11) |= 2u;
    v3 = v21;
    LODWORD(v22) = 1;
  }
  if ( (*((_DWORD *)v3 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v3);
LABEL_52:
    v3 = v21;
  }
  v5 = 0;
  if ( !v3 )
  {
LABEL_46:
    EngSetLastError(6u);
    v5 = 0;
    goto LABEL_35;
  }
  v6 = *((_QWORD *)v3 + 122);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_QWORD *)(v6 + 160));
    v3 = v21;
  }
  if ( (v7 & 0x2000) != 0 )
  {
    GreDCSelectPen(v3, *(_QWORD *)(*((_QWORD *)v3 + 122) + 168LL));
    v3 = v21;
  }
  v8 = *((_QWORD *)v3 + 6);
  v26 = v8;
  if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
    GreLockVisRgn(v8, v6, v3, v2);
  GreAcquireSemaphore(ghsemPalette);
  v9 = *((_DWORD *)v21 + 9) & 0x800;
  if ( v9 )
    DC::bMakeInfoDC(v21, 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v23, (struct DCOBJ *)&v21);
  if ( v23[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v26);
    v10 = *((_QWORD *)v21 + 14);
    *((_QWORD *)v21 + 14) = *(_QWORD *)v23[0];
    v11 = *(_DWORD *)(v23[0] + 104LL);
    if ( (unsigned int)bSavePath((struct XDCOBJ *)&v21, v11 + 1) )
    {
      v12 = *(_DWORD *)(v23[0] + 104LL);
      if ( (unsigned int)bSaveRegion((struct DCOBJ *)&v21, v12 + 1) )
      {
        if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)v23[0], 2147483666LL, 0LL, 0LL) )
        {
          v24 = 1;
          PDEVOBJ::vUnreferencePdev(&v26, 0LL);
          if ( (*((_DWORD *)v21 + 9) & 0x4000) != 0 )
            *(_DWORD *)(v23[0] + 36LL) |= 0x4000u;
          v13 = *(_QWORD *)(v23[0] + 496LL);
          if ( v13 )
          {
            v14 = *(_DWORD *)(v13 + 112);
            if ( (v14 & 0x800) != 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v23[0] + 496LL));
            }
            else if ( v14 >= 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v23[0] + 496LL));
              ++*(_DWORD *)(v13 + 168);
            }
          }
          INC_SHARE_REF_CNT(*((_QWORD *)v21 + 17));
          INC_SHARE_REF_CNT(*((_QWORD *)v21 + 18));
          INC_SHARE_REF_CNT(*((_QWORD *)v21 + 19));
          INC_SHARE_REF_CNT(*((_QWORD *)v21 + 12));
          v15 = v21;
          v16 = *((_QWORD *)v21 + 11);
          if ( (struct PALETTE *)v16 != ppalDefault )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 56));
            v15 = v21;
          }
          v5 = *((_DWORD *)v15 + 26);
          *((_DWORD *)v15 + 26) = v5 + 1;
          goto LABEL_29;
        }
        vRestoreRegion(&v21, v12);
      }
      vRestorePath((struct XDCOBJ *)&v21, v11);
    }
    *((_QWORD *)v21 + 14) = v10;
  }
  else
  {
    EngSetLastError(8u);
  }
LABEL_29:
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v23);
  if ( v9 )
    DC::bMakeInfoDC(v21, 1);
  if ( (*(_DWORD *)(v26 + 40) & 1) != 0 )
    GreUnlockVisRgn(v26);
  if ( ghsemPalette )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
    GreReleaseSemaphoreInternal(ghsemPalette);
  }
LABEL_35:
  v17 = v21;
  if ( v21 )
  {
    if ( (_DWORD)v22 && (*((_DWORD *)v21 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v22) )
      {
        v18 = XDCOBJ::GetUserAttr((XDCOBJ *)&v21);
        v17 = v21;
        if ( v18 )
        {
          DC::RestoreAttributes(v21, v18);
          v17 = v21;
        }
      }
      *((_DWORD *)v17 + 11) &= ~2u;
      v17 = v21;
      LODWORD(v22) = 0;
    }
    v25 = 0;
    v19 = *(_QWORD *)v17;
    HmgDecrementExclusiveReferenceCountEx(v17, HIDWORD(v22), &v25);
    if ( v25 )
      bDeleteDCInternalEx(v19, 0LL);
  }
  return v5;
}
