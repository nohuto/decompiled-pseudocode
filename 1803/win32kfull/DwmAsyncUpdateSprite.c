/*
 * XREFs of DwmAsyncUpdateSprite @ 0x1C00E68C4
 * Callers:
 *     GreHintSpriteShape @ 0x1C0077BD8 (GreHintSpriteShape.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0089860 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E6714 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C023A9A4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreProtectSpriteContent @ 0x1C023CBA4 (GreProtectSpriteContent.c)
 *     GreWindowResizeStarted @ 0x1C023D234 (GreWindowResizeStarted.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncUpdateSprite(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int128 *a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned int v14; // r15d
  int v15; // eax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  unsigned int v26; // r8d
  _OWORD *v27; // rdx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int v39; // eax
  _QWORD v41[30]; // [rsp+30h] [rbp-D0h] BYREF

  v14 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v41, 0, 0xECuLL);
    LODWORD(v41[0]) = 15466692;
    WORD2(v41[0]) = 0x8000;
    v41[26] = a3;
    LODWORD(v41[5]) = 1073741830;
    *(_QWORD *)((char *)&v41[5] + 4) = a2;
    HIDWORD(v41[6]) = a4 & 0xFFFFFF7F;
    if ( a5 )
    {
      v15 = *(_DWORD *)(a5 + 8);
      *(_QWORD *)((char *)&v41[24] + 4) = *(_QWORD *)a5;
      HIDWORD(v41[25]) = v15;
    }
    if ( a6 )
    {
      v16 = *a6;
      v17 = *((_QWORD *)a6 + 16);
      v18 = a6[1];
      LODWORD(v41[7]) = 1;
      *(_OWORD *)((char *)&v41[7] + 4) = v16;
      v19 = a6[2];
      *(_OWORD *)((char *)&v41[9] + 4) = v18;
      v20 = a6[3];
      *(_OWORD *)((char *)&v41[11] + 4) = v19;
      v21 = a6[4];
      *(_OWORD *)((char *)&v41[13] + 4) = v20;
      v22 = a6[5];
      *(_OWORD *)((char *)&v41[15] + 4) = v21;
      v23 = a6[6];
      *(_OWORD *)((char *)&v41[17] + 4) = v22;
      v24 = a6[7];
      *(_OWORD *)((char *)&v41[19] + 4) = v23;
      *(_OWORD *)((char *)&v41[21] + 4) = v24;
      *(_QWORD *)((char *)&v41[23] + 4) = v17;
    }
    v41[27] = __PAIR64__(a8, a7);
    LODWORD(v41[28]) = a9;
    *(_QWORD *)((char *)&v41[28] + 4) = a11;
    if ( a10 && (v26 = g_cDelayedUpdateSpriteNotifications, g_cDelayedUpdateSpriteNotifications < 0x14) )
    {
      v27 = (_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + 196 * g_cDelayedUpdateSpriteNotifications);
      v28 = *(_OWORD *)&v41[7];
      *v27 = *(_OWORD *)&v41[5];
      v29 = *(_OWORD *)&v41[9];
      v27[1] = v28;
      v30 = *(_OWORD *)&v41[11];
      v27[2] = v29;
      v31 = *(_OWORD *)&v41[13];
      v27[3] = v30;
      v32 = *(_OWORD *)&v41[15];
      v27[4] = v31;
      v33 = *(_OWORD *)&v41[17];
      v27[5] = v32;
      v34 = *(_OWORD *)&v41[19];
      v27[6] = v33;
      v27 += 8;
      v35 = *(_OWORD *)&v41[21];
      g_cDelayedUpdateSpriteNotifications = v26 + 1;
      *(v27 - 1) = v34;
      v36 = *(_OWORD *)&v41[23];
      *v27 = v35;
      v37 = *(_OWORD *)&v41[25];
      v27[1] = v36;
      v38 = *(_OWORD *)&v41[27];
      v39 = v41[29];
      v27[2] = v37;
      v27[3] = v38;
      *((_DWORD *)v27 + 16) = v39;
    }
    else
    {
      EtwUpdateEvent(a2);
      v14 = LpcRequestPort(Object, v41);
    }
    ObfDereferenceObject(Object);
  }
  return v14;
}
