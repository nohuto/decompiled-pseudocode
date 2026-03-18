/*
 * XREFs of GreTransformPoints @ 0x1C00FD8FC
 * Callers:
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     zzzSetCaretPos @ 0x1C00889E0 (zzzSetCaretPos.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C65E0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     NtGdiTransformPoints @ 0x1C00FD7B0 (NtGdiTransformPoints.c)
 *     xxxGetUpdateRect @ 0x1C01202E0 (xxxGetUpdateRect.c)
 *     xxxSoundSentry @ 0x1C015AB30 (xxxSoundSentry.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreTransformPoints(__int64 a1, struct _POINTL *a2, struct _POINTL *a3, int a4, int a5)
{
  unsigned int v5; // edi
  struct _POINTL *v7; // r12
  unsigned __int64 v8; // r14
  DC *v9; // r9
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v11; // ebx
  int v12; // r8d
  unsigned int v13; // r9d
  char *v14; // rax
  unsigned int v15; // eax
  struct _DC_ATTR *v16; // rax
  __int64 v17; // rbx
  int v19; // [rsp+20h] [rbp-30h] BYREF
  DC *v20; // [rsp+28h] [rbp-28h] BYREF
  int v21; // [rsp+30h] [rbp-20h]
  unsigned int v22; // [rsp+34h] [rbp-1Ch]
  char *v23; // [rsp+38h] [rbp-18h] BYREF
  int v24; // [rsp+40h] [rbp-10h]
  int v25; // [rsp+44h] [rbp-Ch]

  v5 = 0;
  v21 = 0;
  v7 = a2;
  v22 = 0;
  LOBYTE(a2) = 1;
  v8 = a4;
  v20 = (DC *)HmgLockEx(a1, a2, 0LL);
  v9 = v20;
  if ( !v20 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_36;
  }
  if ( (*((_DWORD *)v20 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
    if ( UserAttr && !DC::SaveAttributes(v20, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
      v9 = 0LL;
      v20 = 0LL;
      goto LABEL_20;
    }
    *((_DWORD *)v20 + 11) |= 2u;
    v9 = v20;
    v21 = 1;
  }
  if ( (*((_DWORD *)v9 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v9);
LABEL_36:
    v9 = v20;
  }
  if ( !v9 )
    return v5;
  if ( (int)v8 <= 0 )
  {
    v5 = 1;
  }
  else
  {
    v11 = a5 & 0x7FFFFFFF;
    v24 = *(_DWORD *)(*((_QWORD *)v9 + 122) + 208LL);
    v12 = ((a5 & 0x7FFFFFFF) != 0 ? 516 : 1026) | 0x80000000;
    if ( a5 < 0 )
      v12 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
    v25 = *(_DWORD *)(*((_QWORD *)v9 + 122) + 108LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 122) + 340LL) & 0x1E000) == 0 && v12 == 516 )
    {
      v14 = (char *)v9 + 320;
      v23 = (char *)v9 + 320;
    }
    else
    {
      v13 = ((a5 >> 31) & 0x80000000) + 0x80000000;
      if ( v13 )
        v12 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
      EXFORMOBJ::vInit((EXFORMOBJ *)&v23, (struct XDCOBJ *)&v20, v12, v13);
      v9 = v20;
      v14 = v23;
    }
    if ( !v14 )
      goto LABEL_20;
    if ( v11 <= 1 )
    {
      v15 = EXFORMOBJ::bXform((EXFORMOBJ *)&v23, v7, a3, v8);
LABEL_19:
      v9 = v20;
      v5 = v15;
      goto LABEL_20;
    }
    if ( v11 == 2 )
    {
      v15 = EXFORMOBJ::bXform((EXFORMOBJ *)&v23, v7, (struct _POINTFIX *)a3, v8);
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( v9 )
  {
    if ( v21 && (*((_DWORD *)v9 + 11) & 2) != 0 )
    {
      if ( !v22 )
      {
        v16 = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
        if ( v16 )
          DC::RestoreAttributes(v20, v16);
        v9 = v20;
      }
      *((_DWORD *)v9 + 11) &= ~2u;
      v21 = 0;
      v9 = v20;
    }
    v19 = 0;
    v17 = *(_QWORD *)v9;
    HmgDecrementExclusiveReferenceCountEx(v9, v22, &v19);
    if ( v19 )
      bDeleteDCInternalEx(v17, 0LL);
  }
  return v5;
}
