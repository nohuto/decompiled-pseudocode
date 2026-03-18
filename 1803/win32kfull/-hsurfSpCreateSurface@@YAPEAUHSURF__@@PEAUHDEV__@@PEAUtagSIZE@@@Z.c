/*
 * XREFs of ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0009360
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C007C97C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     hsurfCreateCompatibleSurface @ 0x1C0008EB4 (hsurfCreateCompatibleSurface.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C000949C (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008F364 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall hsurfSpCreateSurface(__int64 a1, struct tagSIZE *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  unsigned __int8 v6; // r14
  LONG cy; // eax
  __int64 v8; // r8
  __int64 CompatibleSurface; // rax
  __int64 v11; // [rsp+88h] [rbp-39h] BYREF
  char v12; // [rsp+90h] [rbp-31h]
  int v13; // [rsp+94h] [rbp-2Dh]
  _QWORD v14[4]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v15[80]; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v16; // [rsp+128h] [rbp+67h] BYREF

  v2 = 0LL;
  v16 = a1;
  v5 = 0LL;
  if ( (!gfEnableDeviceBitmapsForNonHintedShapes || !g_pDwmState || !gfDwmDeviceBitmapsEnabled)
    && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v16) )
  {
    v6 = 0;
LABEL_4:
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    memset(v14, 0, sizeof(v14));
    HIDWORD(v14[0]) = a2->cx;
    cy = a2->cy;
    LODWORD(v14[0]) = 6;
    LODWORD(v14[1]) = cy;
    LODWORD(v14[3]) = 2049;
    v14[2] = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v14, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      LOBYTE(v8) = 5;
      *(_QWORD *)(v11 + 48) = a1;
      v12 |= 1u;
      HmgSetOwner(*(_QWORD *)(v11 + 32), 0LL, v8);
      *(_DWORD *)(v11 + 112) |= 0x800u;
      if ( v11 )
        v2 = v11 + 24;
      v5 = *(_QWORD *)(v2 + 8);
      EtwPhysicalSurfCreateEvent(v5, 0LL, 0LL, v6);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
    return v5;
  }
  v6 = 1;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15, (struct PDEVOBJ *)&v16);
  CompatibleSurface = hsurfCreateCompatibleSurface(a1, 6u, 0LL, a2->cx, a2->cy, 1u, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
  v5 = CompatibleSurface;
  if ( CompatibleSurface
    && (!(unsigned int)GreSetBitmapOwner(CompatibleSurface, 0LL) || !(unsigned int)GreMarkUndeletableBitmap(v5)) )
  {
    GreMarkDeletableBitmap(v5);
    GreDeleteObject(v5);
    v5 = 0LL;
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  if ( !v5 )
    goto LABEL_4;
  return v5;
}
