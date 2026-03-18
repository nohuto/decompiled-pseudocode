/*
 * XREFs of OffsetChildren @ 0x1C0073D44
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     DwmChildRectChange @ 0x1C0072D4C (DwmChildRectChange.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C0074AA0 (IsDpiBoundaryBetweenWindows.c)
 *     UpdateSprite @ 0x1C007B160 (UpdateSprite.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C00C4D8C (DwmAsyncChildClipRgnChange.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01AFC2C (ScaleDpiOffsetWithSubpixel.c)
 *     FindSpb @ 0x1C01CE610 (FindSpb.c)
 */

void __fastcall OffsetChildren(struct tagWND *a1, unsigned int a2, unsigned int a3, int *a4, int a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v7; // edi
  unsigned int v8; // esi
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // zf
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  _DWORD *Spb; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rax
  int v28; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+64h] [rbp-44h]
  _DWORD v30[2]; // [rsp+68h] [rbp-40h] BYREF
  _DWORD v31[4]; // [rsp+70h] [rbp-38h] BYREF

  v5 = *((_QWORD *)a1 + 11);
  v7 = a3;
  v8 = a2;
  if ( v5 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(v31, a4, (int *)(*(_QWORD *)(v5 + 40) + 88LL)) )
        goto LABEL_33;
      if ( (unsigned int)IsDpiBoundaryBetweenWindows(v5, a1) )
      {
        v28 = v8;
        v29 = v7;
        ScaleDpiOffsetWithSubpixel(&v28, (float *)(v5 + 208), (struct tagWND *)v5, a1);
        v8 = v28;
        v11 = 1;
        v7 = v29;
      }
      else
      {
        *(_DWORD *)(v5 + 208) = *((_DWORD *)a1 + 52);
        *(_DWORD *)(v5 + 212) = *((_DWORD *)a1 + 53);
      }
      *(_DWORD *)(*(_QWORD *)(v5 + 40) + 88LL) += v8;
      *(_DWORD *)(*(_QWORD *)(v5 + 40) + 96LL) += v8;
      *(_DWORD *)(*(_QWORD *)(v5 + 40) + 92LL) += v7;
      *(_DWORD *)(*(_QWORD *)(v5 + 40) + 100LL) += v7;
      *(_DWORD *)(*(_QWORD *)(v5 + 40) + 104LL) += v8;
      *(_DWORD *)(*(_QWORD *)(v5 + 40) + 112LL) += v8;
      *(_DWORD *)(*(_QWORD *)(v5 + 40) + 108LL) += v7;
      *(_DWORD *)(*(_QWORD *)(v5 + 40) + 116LL) += v7;
      v13 = *(_QWORD *)(v5 + 40);
      v14 = v13;
      v15 = *(_QWORD *)(v13 + 136);
      if ( v15 > 1 && (*(_BYTE *)(v13 + 21) & 8) == 0 )
      {
        GreOffsetRgn(v15, v8, v7);
        v14 = *(_QWORD *)(v5 + 40);
      }
      v16 = *(_QWORD *)(v14 + 168);
      if ( v16 )
      {
        GreOffsetRgn(v16, v8, v7);
        v14 = *(_QWORD *)(v5 + 40);
      }
      if ( *(char *)(v14 + 16) < 0 )
      {
        Spb = (_DWORD *)FindSpb(v5);
        Spb[6] += v8;
        Spb[8] += v8;
        Spb[9] += v7;
        Spb[7] += v7;
      }
      if ( a5 && (unsigned int)IsWindowDesktopComposed(v5) )
      {
        DwmChildRectChange(v5, v23, v12);
        v27 = (void *)ReferenceDwmApiPort(v25, v24, v26);
        DwmAsyncChildClipRgnChange(v27);
      }
      v17 = *(_QWORD *)(v5 + 40);
      if ( (*(_BYTE *)(v17 + 26) & 8) != 0 )
      {
        v30[0] = *(_DWORD *)(v17 + 88);
        v30[1] = *(_DWORD *)(v17 + 92);
        UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), v5, v12, 0LL, v30, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
      }
      v18 = v11 == 0;
      v19 = a2;
      v11 = 0;
      if ( v18 )
        v19 = v8;
      v8 = v19;
      v20 = a3;
      if ( v18 )
        v20 = v7;
      v7 = v20;
      v21 = *(_QWORD *)(v5 + 88);
      if ( !v21 )
      {
LABEL_33:
        while ( 1 )
        {
          v21 = *(_QWORD *)(v5 + 64);
          if ( v21 )
            break;
          v5 = *(_QWORD *)(v5 + 80);
          if ( (struct tagWND *)v5 == a1 )
            return;
        }
      }
      v5 = v21;
    }
  }
}
