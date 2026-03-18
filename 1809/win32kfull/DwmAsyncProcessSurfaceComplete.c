/*
 * XREFs of DwmAsyncProcessSurfaceComplete @ 0x1C0258D70
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0251A34 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // r9d
  char *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  _QWORD v38[30]; // [rsp+20h] [rbp-128h] BYREF

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
          memset(v38, 0, 0xECuLL);
          LODWORD(v38[0]) = 15466692;
          v8 = (char *)&g_rgDelayedUpdateSpriteNotifications + v7;
          WORD2(v38[0]) = 0x8000;
          v9 = *((_OWORD *)v8 + 1);
          *(_OWORD *)&v38[5] = *(_OWORD *)v8;
          v10 = *((_OWORD *)v8 + 2);
          *(_OWORD *)&v38[7] = v9;
          v11 = *((_OWORD *)v8 + 3);
          *(_OWORD *)&v38[9] = v10;
          v12 = *((_OWORD *)v8 + 4);
          *(_OWORD *)&v38[11] = v11;
          v13 = *((_OWORD *)v8 + 5);
          *(_OWORD *)&v38[13] = v12;
          v14 = *((_OWORD *)v8 + 6);
          *(_OWORD *)&v38[15] = v13;
          v15 = *((_OWORD *)v8 + 7);
          *(_OWORD *)&v38[17] = v14;
          v16 = *((_OWORD *)v8 + 8);
          *(_OWORD *)&v38[19] = v15;
          v17 = *((_OWORD *)v8 + 9);
          *(_OWORD *)&v38[21] = v16;
          v18 = *((_OWORD *)v8 + 10);
          *(_OWORD *)&v38[23] = v17;
          v19 = *((_OWORD *)v8 + 11);
          v20 = *((_DWORD *)v8 + 48);
          *(_OWORD *)&v38[25] = v18;
          *(_OWORD *)&v38[27] = v19;
          LODWORD(v38[29]) = v20;
          HIDWORD(v38[6]) |= 0x80u;
          EtwUpdateEvent(*(_QWORD *)((char *)&v38[5] + 4), 1073741830LL, v21, v22);
          v23 = LpcRequestPort(Object, v38);
          v24 = v5;
          v6 = g_cDelayedUpdateSpriteNotifications - 1;
          for ( i = v23; v24 < v6; *((_DWORD *)v25 + 16) = (_DWORD)v26 )
          {
            ++v24;
            v25 = v8 + 128;
            v26 = (_OWORD *)((char *)&g_rgDelayedUpdateSpriteNotifications + 196 * v24);
            v27 = v26[1];
            *(_OWORD *)v8 = *v26;
            v28 = v26[2];
            *((_OWORD *)v8 + 1) = v27;
            v29 = v26[3];
            *((_OWORD *)v8 + 2) = v28;
            v30 = v26[4];
            *((_OWORD *)v8 + 3) = v29;
            v31 = v26[5];
            *((_OWORD *)v8 + 4) = v30;
            v32 = v26[6];
            *((_OWORD *)v8 + 5) = v31;
            v33 = v26[7];
            v26 += 8;
            *((_OWORD *)v8 + 6) = v32;
            v8 += 196;
            *((_OWORD *)v25 - 1) = v33;
            v34 = v26[1];
            *(_OWORD *)v25 = *v26;
            v35 = v26[2];
            *((_OWORD *)v25 + 1) = v34;
            v36 = v26[3];
            LODWORD(v26) = *((_DWORD *)v26 + 16);
            *((_OWORD *)v25 + 2) = v35;
            *((_OWORD *)v25 + 3) = v36;
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
