/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C0096AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C0096A28 (-bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memcmp @ 0x1C01396C0 (memcmp.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C028710C (-bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v5; // r14
  DC *v6; // rax
  __int64 v7; // rcx
  DC *v8; // rcx
  __int64 v9; // rbx
  DC *v11; // rdx
  __int64 v12; // rcx
  DC *v13; // rax
  __int64 v14; // rcx
  DC *v15; // [rsp+20h] [rbp-29h] BYREF
  int v16; // [rsp+28h] [rbp-21h]
  unsigned int v17; // [rsp+2Ch] [rbp-1Dh]
  int v18; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-11h] BYREF
  __int128 Buf1; // [rsp+48h] [rbp-1h] BYREF
  __int128 v21; // [rsp+58h] [rbp+Fh]
  float v22[6]; // [rsp+70h] [rbp+27h] BYREF

  v3 = 0;
  v5 = a2;
  v16 = 0;
  v17 = 0;
  LOBYTE(a2) = 1;
  v15 = (DC *)HmgLockEx(a1, a2);
  if ( v15 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v15) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
      v15 = 0LL;
      goto LABEL_22;
    }
    if ( (*((_DWORD *)v15 + 132) & 4) != 0 )
      DC::vMarkTransformDirty(v15);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v15 )
    goto LABEL_22;
  if ( v5 )
    v3 = ProbeAndConvertXFORM(v5, v22);
  else
    LOBYTE(v3) = a3 == 1;
  if ( !v3 )
    goto LABEL_22;
  v3 = 0;
  if ( a3 == 1 )
  {
LABEL_27:
    v11 = v15;
    if ( (*(_DWORD *)(*((_QWORD *)v15 + 10) + 352LL) & 2) == 0 )
    {
      *((_OWORD *)v15 + 25) = *(_OWORD *)&gmxIdentity_LToL;
      *((_OWORD *)v11 + 26) = *((_OWORD *)&gmxIdentity_LToL + 1);
      v12 = *((_QWORD *)v15 + 10);
      *(_OWORD *)(v12 + 256) = *(_OWORD *)&gmxIdentity_LToL;
      *(_OWORD *)(v12 + 272) = *((_OWORD *)&gmxIdentity_LToL + 1);
LABEL_29:
      *(_DWORD *)(*((_QWORD *)v15 + 10) + 352LL) |= 0x80B2u;
    }
LABEL_21:
    v3 = 1;
    goto LABEL_22;
  }
  if ( a3 > 1 )
  {
    if ( a3 <= 3 )
    {
      vConvertXformToMatrix(v22, &Buf1);
      if ( (*(_DWORD *)(*((_QWORD *)v15 + 10) + 352LL) & 2) == 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)&v15, 0x203u);
        if ( !v19[0] || !(unsigned int)EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v19, (struct MATRIX *)&Buf1, a3) )
          goto LABEL_22;
      }
      if ( !(unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
        goto LABEL_22;
      v13 = v15;
      *((_OWORD *)v15 + 25) = Buf1;
      *((_OWORD *)v13 + 26) = v21;
      v14 = *((_QWORD *)v15 + 10);
      *(_OWORD *)(v14 + 256) = Buf1;
      *(_OWORD *)(v14 + 272) = v21;
      if ( !memcmp(&Buf1, gmxIdentity_LToL, 0x20uLL) )
        goto LABEL_29;
      goto LABEL_20;
    }
    if ( a3 == 4 )
    {
      if ( v22[0] == 1.0 && v22[1] == 0.0 && v22[2] == 0.0 && v22[3] == 1.0 && v22[4] == 0.0 && v22[5] == 0.0 )
        goto LABEL_27;
      vConvertXformToMatrix(v22, &Buf1);
      if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
      {
        v6 = v15;
        *((_OWORD *)v15 + 25) = Buf1;
        *((_OWORD *)v6 + 26) = v21;
        v7 = *((_QWORD *)v15 + 10);
        *(_OWORD *)(v7 + 256) = Buf1;
        *(_OWORD *)(v7 + 272) = v21;
LABEL_20:
        v8 = v15;
        *(_DWORD *)(*((_QWORD *)v15 + 10) + 352LL) |= 0x80B0u;
        *(_DWORD *)(*((_QWORD *)v8 + 10) + 352LL) &= ~2u;
        goto LABEL_21;
      }
    }
  }
LABEL_22:
  if ( v15 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v15);
    v18 = 0;
    v9 = *(_QWORD *)v15;
    HmgDecrementExclusiveReferenceCountEx(v15, v17, &v18);
    if ( v18 )
      bDeleteDCInternalEx(v9, 0LL);
  }
  return v3;
}
