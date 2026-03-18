/*
 * XREFs of ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0127EBC
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029094 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C013E734 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     hsurfCreateCompatibleSurface @ 0x1C0034F34 (hsurfCreateCompatibleSurface.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003EF2C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0127FEC (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall hsurfSpCreateSurface(_QWORD *a1, struct tagSIZE *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  LONG cy; // eax
  __int64 CompatibleSurface; // rax
  __int64 v9; // [rsp+80h] [rbp-49h] BYREF
  char v10; // [rsp+88h] [rbp-41h]
  int v11; // [rsp+8Ch] [rbp-3Dh]
  _DWORD v12[4]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-29h]
  __int64 v14; // [rsp+A8h] [rbp-21h]
  __int128 v15; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD *v16; // [rsp+C0h] [rbp-9h]
  int v17; // [rsp+C8h] [rbp-1h]
  __int64 v18; // [rsp+D0h] [rbp+7h]
  __int64 v19; // [rsp+D8h] [rbp+Fh]
  __int16 v20; // [rsp+E0h] [rbp+17h]
  __int64 v21; // [rsp+E8h] [rbp+1Fh]
  __int64 v22; // [rsp+F0h] [rbp+27h]
  _QWORD *v23; // [rsp+130h] [rbp+67h] BYREF

  v2 = 0LL;
  v23 = a1;
  v5 = 0LL;
  if ( (!gfEnableDeviceBitmapsForNonHintedShapes || !g_pDwmState || !gfDwmDeviceBitmapsEnabled)
    && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v23) )
  {
    goto LABEL_3;
  }
  v19 = 0LL;
  v15 = 0LL;
  v20 = 256;
  v22 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v17 = 1;
  if ( (a1[5] & 1) != 0 )
  {
    *(_QWORD *)&v15 = a1[6];
    v16 = a1;
    GreAcquireSemaphore(v15);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v15, 11LL);
  }
  CompatibleSurface = hsurfCreateCompatibleSurface((__int64)a1, 6u, 0LL, a2->cx, a2->cy, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
  v5 = CompatibleSurface;
  if ( CompatibleSurface
    && (!(unsigned int)GreSetBitmapOwner(CompatibleSurface, 0LL) || !(unsigned int)GreMarkUndeletableBitmap(v5)) )
  {
    GreMarkDeletableBitmap(v5);
    GreDeleteObject(v5);
    v5 = 0LL;
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v15);
  if ( !v5 )
  {
LABEL_3:
    v12[1] = a2->cx;
    cy = a2->cy;
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    v12[3] = 0;
    v14 = 2049LL;
    v12[0] = 6;
    v12[2] = cy;
    v13 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v9, (struct _DEVBITMAPINFO *)v12, 0LL, 0LL, 0, 0LL, 0LL, 1, 1, 0, 0) )
    {
      *(_QWORD *)(v9 + 48) = a1;
      v10 |= 1u;
      *(_DWORD *)(v9 + 112) |= 0x800u;
      if ( v9 )
        v2 = v9 + 24;
      v5 = *(_QWORD *)(v2 + 8);
      EtwPhysicalSurfCreateEvent(v5, 0LL, 0LL);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v9);
  }
  return v5;
}
