/*
 * XREFs of DwmAsyncProcessSurfaceComplete @ 0x1C02726F8
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B2A8 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DwmAsyncProcessSurfaceComplete(PVOID Object, __int64 a2)
{
  unsigned int i; // esi
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  __int64 v7; // r14
  char *v8; // r14
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // r9d
  char *v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  _QWORD v36[30]; // [rsp+20h] [rbp-128h] BYREF

  i = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  v5 = 0;
  if ( Object )
  {
    v6 = g_cDelayedUpdateSpriteNotifications;
    if ( g_cDelayedUpdateSpriteNotifications )
    {
      do
      {
        v7 = 196LL * v5;
        if ( a2 == *(_QWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + v7 + 168) )
        {
          memset(v36, 0, 0xECuLL);
          LODWORD(v36[0]) = 15466692;
          v8 = (char *)&g_rgDelayedUpdateSpriteNotifications + v7;
          WORD2(v36[0]) = 0x8000;
          v9 = *((_OWORD *)v8 + 1);
          *(_OWORD *)&v36[5] = *(_OWORD *)v8;
          v10 = *((_OWORD *)v8 + 2);
          *(_OWORD *)&v36[7] = v9;
          v11 = *((_OWORD *)v8 + 3);
          *(_OWORD *)&v36[9] = v10;
          v12 = *((_OWORD *)v8 + 4);
          *(_OWORD *)&v36[11] = v11;
          v13 = *((_OWORD *)v8 + 5);
          *(_OWORD *)&v36[13] = v12;
          v14 = *((_OWORD *)v8 + 6);
          *(_OWORD *)&v36[15] = v13;
          v15 = *((_OWORD *)v8 + 7);
          *(_OWORD *)&v36[17] = v14;
          v16 = *((_OWORD *)v8 + 8);
          *(_OWORD *)&v36[19] = v15;
          v17 = *((_OWORD *)v8 + 9);
          *(_OWORD *)&v36[21] = v16;
          v18 = *((_OWORD *)v8 + 10);
          *(_OWORD *)&v36[23] = v17;
          v19 = *((_OWORD *)v8 + 11);
          v20 = *((_DWORD *)v8 + 48);
          *(_OWORD *)&v36[25] = v18;
          *(_OWORD *)&v36[27] = v19;
          LODWORD(v36[29]) = v20;
          HIDWORD(v36[6]) |= 0x80u;
          EtwUpdateEvent(*(_QWORD *)((char *)&v36[5] + 4));
          v21 = LpcRequestPort(Object, v36);
          v22 = v5;
          v6 = g_cDelayedUpdateSpriteNotifications - 1;
          for ( i = v21; v22 < v6; *((_DWORD *)v23 + 16) = (_DWORD)v24 )
          {
            ++v22;
            v23 = v8 + 128;
            v24 = (_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + 196 * v22);
            v25 = v24[1];
            *(_OWORD *)v8 = *v24;
            v26 = v24[2];
            *((_OWORD *)v8 + 1) = v25;
            v27 = v24[3];
            *((_OWORD *)v8 + 2) = v26;
            v28 = v24[4];
            *((_OWORD *)v8 + 3) = v27;
            v29 = v24[5];
            *((_OWORD *)v8 + 4) = v28;
            v30 = v24[6];
            *((_OWORD *)v8 + 5) = v29;
            v31 = v24[7];
            v24 += 8;
            *((_OWORD *)v8 + 6) = v30;
            v8 += 196;
            *((_OWORD *)v23 - 1) = v31;
            v32 = v24[1];
            *(_OWORD *)v23 = *v24;
            v33 = v24[2];
            *((_OWORD *)v23 + 1) = v32;
            v34 = v24[3];
            LODWORD(v24) = *((_DWORD *)v24 + 16);
            *((_OWORD *)v23 + 2) = v33;
            *((_OWORD *)v23 + 3) = v34;
          }
          g_cDelayedUpdateSpriteNotifications = v6;
        }
        else
        {
          ++v5;
        }
      }
      while ( v5 < v6 );
    }
    ObfDereferenceObject(Object);
  }
  return i;
}
