/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C008ED60 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C01475B0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0147840 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C0296030 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02962B0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1C02966A0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C0296830 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C0296A50 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C0296EB0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C0297120 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02972D0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02976F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0297A80 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C0297DC0 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C0298E20 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C015FE30 (-GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     ?ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C016205C (-ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C0257550 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct _SURFOBJ **a3)
{
  struct _SURFOBJ *LockableSURFOBJ; // rax
  int v5; // ecx
  HDEV hdev; // rdi
  bool v7; // al
  HDEV v8; // rax
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  int *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  int *v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]

  *((_QWORD *)this + 2) = 0LL;
  LockableSURFOBJ = a2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = a2;
  if ( !a2
    || (a2 != a3[9]
      ? (a2 != a3[11]
       ? (a2 != a3[13]
        ? (LockableSURFOBJ = 0LL)
        : (LockableSURFOBJ = a3[12]))
       : (LockableSURFOBJ = a3[10]))
      : (LockableSURFOBJ = a3[8]),
        (*(_QWORD *)this = LockableSURFOBJ) != 0LL
     || (LockableSURFOBJ = UMPDSURFOBJ::GetLockableSURFOBJ(this, a2),
         *(_QWORD *)this = LockableSURFOBJ,
         v5 = 1,
         !LockableSURFOBJ)) )
  {
    v5 = 0;
  }
  *((_DWORD *)this + 2) = v5;
  if ( LockableSURFOBJ )
  {
    hdev = LockableSURFOBJ->hdev;
    if ( hdev )
    {
      v8 = ValidateAndReferencePDEV(LockableSURFOBJ->hdev);
      *((_QWORD *)this + 2) = v8;
      if ( v8 )
        goto LABEL_23;
      v7 = 0;
    }
    else
    {
      v7 = LockableSURFOBJ->iType == 0;
    }
    if ( !v7 )
    {
      if ( *((_DWORD *)this + 2) )
      {
        EngUnlockSurface(*(SURFOBJ **)this);
        *((_DWORD *)this + 2) = 0;
      }
      *(_QWORD *)this = 0LL;
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v10 = 80611;
        v15 = &v10;
        v16 = 4LL;
        v17 = &v13;
        v13 = 0x1000000LL;
        v18 = 8LL;
        v11 = (hdev != 0LL) + 1;
        v19 = &v11;
        v21 = &v12;
        v20 = 4LL;
        v12 = 0;
        v22 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
      }
      return this;
    }
LABEL_23:
    CAutoTGO::vGuard((UMPDSURFOBJ *)((char *)this + 24), this, (void (*)(void *))UMPDSURFOBJ::Cleanup);
  }
  return this;
}
