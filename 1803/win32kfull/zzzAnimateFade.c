/*
 * XREFs of zzzAnimateFade @ 0x1C01B1F5C
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0062FE0 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x1C01B21B8 (zzzStartSonar.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01B1070 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01B13E4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     StopFade @ 0x1C01B18B0 (StopFade.c)
 */

__int64 zzzAnimateFade()
{
  unsigned int v0; // r9d
  unsigned int v1; // ecx
  int v2; // edi
  unsigned int v3; // eax
  int v4; // ebx
  bool v5; // zf
  __int64 result; // rax
  struct _BLENDFUNCTION v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v0 = gfade[5];
  v1 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - HIDWORD(gfade[5]);
  if ( v1 > v0 )
    return StopFade();
  v2 = gfade[6] & 1;
  if ( v2 )
    v3 = 255 * v1;
  else
    v3 = 255 * (v0 - v1);
  *(_WORD *)&v7.BlendOp = 0;
  v7.AlphaFormat = 0;
  v4 = v3 / v0;
  v7.SourceConstantAlpha = v3 / v0;
  if ( (LODWORD(gfade[6]) & 0x80u) == 0 )
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v7);
  }
  else
  {
    DrawSonar((HDC)gfade[1]);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
    zzzUpdateFade((struct tagPOINT *)&gfade[3], (struct tagSIZE *)&gfade[4], (HDC)gfade[1], gZero, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
    giSonarRadius -= 20;
  }
  if ( v2 )
    v5 = (_BYTE)v4 == 0xFF;
  else
    v5 = (_BYTE)v4 == 0;
  if ( v5 || (result = gfade[0], (LODWORD(gfade[6]) & 0x80u) != 0) && giSonarRadius < 0 )
  {
    LODWORD(gfade[6]) |= 2u;
    return StopFade();
  }
  return result;
}
