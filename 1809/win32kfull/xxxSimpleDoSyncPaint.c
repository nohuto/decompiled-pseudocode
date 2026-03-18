/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C0030150
 * Callers:
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     xxxGetUpdateRgn @ 0x1C00C6F40 (xxxGetUpdateRgn.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F74AC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRect @ 0x1C0118828 (xxxGetUpdateRect.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     IsHungWindow @ 0x1C0017040 (IsHungWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C001C804 (xxxSendEraseBkgnd.c)
 *     ClearHungFlag @ 0x1C001F610 (ClearHungFlag.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C0072AE4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0073424 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // ebp
  int v5; // esi
  int v6; // r14d
  __int64 v7; // rcx
  _DWORD *v8; // rax
  int v9; // r9d
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rdx
  int v13; // edi
  HRGN NCUpdateRgn; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // ecx
  _BOOL8 v18; // rdx
  int v19; // esi
  void *v20; // rax
  HRGN v21; // rax

  v1 = (__int64 *)a1;
  if ( a1 )
  {
    do
    {
      v2 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v2 + 27) & 2) != 0 )
        break;
      a1 = (struct tagWND *)*((_QWORD *)a1 + 10);
    }
    while ( a1 );
    if ( a1 )
      return v2;
  }
  v3 = v1[5];
  v4 = *(_DWORD *)(v3 + 28);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v3 + 232);
  *(_BYTE *)(v3 + 18) &= ~0x40u;
  if ( (unsigned int)IsWindowDesktopComposed(v1) )
  {
    v8 = (_DWORD *)v1[5];
    v9 = v8[7];
    v10 = v8[6];
    v11 = v8[58];
    if ( v4 != v9 )
      goto LABEL_30;
    if ( v5 == v10 && v6 == v11 )
      goto LABEL_9;
    if ( v4 != v9 )
    {
LABEL_30:
      v18 = ((v4 ^ v9) & 0xB9CF0000) != 0;
      v19 = ((v4 ^ v9) & 0xB9CF0000) != 0 ? 0xFFFFFFF0 : 0;
      v7 = -((v4 ^ v9) & 0xB9CF0000);
      v11 = ((v4 ^ v9) & 0xB9CF0000) != 0 ? v9 : 0;
      goto LABEL_33;
    }
    if ( v5 != v10 )
    {
      v17 = (v5 ^ v10) & 0x4E27A9;
      v18 = v17 != 0;
      v19 = v17 != 0 ? 0xFFFFFFEC : 0;
      v7 = (unsigned int)-v17;
      v11 = (_DWORD)v7 != 0 ? v10 : 0;
      goto LABEL_33;
    }
    if ( ((v6 ^ v11) & 0x2E00300) != 0 )
    {
      v18 = 1LL;
      v19 = -268435456;
LABEL_33:
      if ( v18 )
      {
        v20 = (void *)ReferenceDwmApiPort(v7, v18);
        DwmAsyncChildStyleChange(v20, *v1, v19, v11);
      }
    }
  }
LABEL_9:
  v12 = v1[5];
  v13 = (*(unsigned __int8 *)(v12 + 17) >> 2) & 2 | 1;
  LOBYTE(v2) = *(_BYTE *)(v12 + 17) & 2;
  if ( !(_BYTE)v2 )
    v13 = (*(unsigned __int8 *)(v12 + 17) >> 2) & 2;
  if ( v13 )
  {
    if ( (*(_BYTE *)(v12 + 31) & 0x10) != 0 )
    {
      if ( !*(_QWORD *)(v12 + 136) )
      {
        SetOrClrWF(0, (__int64)v1, 0x102u, 1);
        SetOrClrWF(0, (__int64)v1, 0x104u, 1);
        LOBYTE(v13) = v13 & 0xFE;
      }
      if ( v1[2] == gptiCurrent )
      {
        NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v1, 1);
        v15 = (__int64)NCUpdateRgn;
        if ( (v13 & 2) != 0 && (*(_BYTE *)(v1[5] + 17) & 8) != 0 )
          xxxSendNCPaint((struct tagWND *)v1, NCUpdateRgn);
        if ( (v13 & 1) != 0 )
        {
          v16 = v1[5];
          if ( (*(_BYTE *)(v16 + 17) & 8) != 0 )
          {
            DeleteMaybeSpecialRgn(v15);
            v21 = GetNCUpdateRgn((struct tagWND *)v1, 0);
            v16 = v1[5];
            v15 = (__int64)v21;
          }
          if ( (*(_BYTE *)(v16 + 17) & 2) != 0 )
          {
            SetOrClrWF(0, (__int64)v1, 0x102u, 1);
            SetOrClrWF(0, (__int64)v1, 0x104u, 1);
            xxxSendEraseBkgnd((__int64)v1, 0LL, v15);
          }
          ClearHungFlag((struct tagWND *)v1, 0x308u);
        }
        LOBYTE(v2) = DeleteMaybeSpecialRgn(v15);
      }
      else
      {
        v2 = v1[5];
        if ( (*(_BYTE *)(v2 + 31) & 0xC0) != 0x40 )
        {
          v2 = *(_QWORD *)(grpdeskRitInput + 8LL);
          if ( v1 != *(__int64 **)(v2 + 24) )
          {
            LODWORD(v2) = IsHungWindow((__int64)v1);
            if ( (_DWORD)v2 )
            {
              v2 = v1[5];
              if ( (*(_BYTE *)(v2 + 19) & 8) != 0 )
              {
                ClearHungFlag((struct tagWND *)v1, 0x308u);
                LOBYTE(v2) = xxxRedrawHungWindow((struct tagWND *)v1);
              }
            }
          }
        }
      }
    }
    else
    {
      SetOrClrWF(0, (__int64)v1, 0x108u, 1);
      SetOrClrWF(0, (__int64)v1, 0x102u, 1);
      SetOrClrWF(0, (__int64)v1, 0x680u, 1);
      SetOrClrWF(0, (__int64)v1, 0x104u, 1);
      LOBYTE(v2) = ClearHungFlag((struct tagWND *)v1, 0x308u);
    }
  }
  return v2;
}
