/*
 * XREFs of ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D3064
 * Callers:
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C023DB60 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     GetMonitorMaxArea @ 0x1C00FC5DC (GetMonitorMaxArea.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E6FE0 (LogicalToPhysicalInPlaceRect.c)
 *     LogicalToPhysicalPointForWindow @ 0x1C01E70E8 (LogicalToPhysicalPointForWindow.c)
 *     ?GetWindowFrameBounds@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C023C3E4 (-GetWindowFrameBounds@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C488 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CloneWindowPosAndArrangementAsync(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rcx
  char v12; // dl
  char v13; // r8
  __int64 Prop; // rax
  __int64 v15; // rsi
  int v16; // eax
  __int128 v17; // xmm0
  int v18; // eax
  __int64 v19; // rax
  struct tagRECT v21; // [rsp+40h] [rbp-48h] BYREF

  v8 = Win32AllocPoolZInit(104LL, 1886872405LL);
  v9 = v8;
  if ( v8 )
  {
    v10 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 256LL));
    *(_QWORD *)v9 = *(_QWORD *)a1;
    if ( a3 )
      v11 = *a3;
    else
      v11 = 0LL;
    *(_QWORD *)(v9 + 8) = v11;
    v12 = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0x20;
    *(_BYTE *)(v9 + 93) = v12 != 0;
    v13 = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 1;
    *(_BYTE *)(v9 + 94) = v13;
    *(_BYTE *)(v9 + 95) = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 233LL) & 1;
    *(_BYTE *)(v9 + 96) = (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 233LL) & 2) != 0;
    *(_BYTE *)(v9 + 97) = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 234LL) >> 7;
    *(_QWORD *)(v9 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 256LL);
    if ( !v12 && !v13 )
    {
      *(struct tagRECT *)(v9 + 24) = *GetWindowFrameBounds(&v21, (const struct tagWND *)a2);
      LogicalToPhysicalInPlaceRect(a2, v9 + 24);
    }
    Prop = GetProp(a2, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    v15 = Prop;
    if ( Prop )
    {
      *(_OWORD *)(v9 + 40) = *(_OWORD *)Prop;
      *(_OWORD *)(v9 + 56) = *(_OWORD *)(Prop + 16);
      *(_OWORD *)(v9 + 72) = *(_OWORD *)(Prop + 32);
      *(_DWORD *)(v9 + 88) = *(_DWORD *)(Prop + 48);
      *(_BYTE *)(v9 + 92) = 1;
      ReduceRectByWindowMargin(
        (const struct tagWND *)a2,
        (const struct tagRECT *)(v9 + 40),
        (struct tagRECT *)(v9 + 40));
      ReduceRectByWindowMargin(
        (const struct tagWND *)a2,
        (const struct tagRECT *)(v9 + 56),
        (struct tagRECT *)(v9 + 56));
      LogicalToPhysicalInPlaceRect(a2, v9 + 40);
      LogicalToPhysicalInPlaceRect(a2, v9 + 56);
      if ( *(_BYTE *)(v9 + 93) && (a4 & 1) == 0 )
      {
        *(_BYTE *)(v9 + 93) = 0;
        v16 = *(_DWORD *)(v15 + 48);
        if ( (v16 & 2) != 0 )
        {
          *(_BYTE *)(v9 + 94) = 1;
        }
        else
        {
          if ( (v16 & 0x18) != 0 )
            v17 = *(_OWORD *)(v9 + 56);
          else
            v17 = *(_OWORD *)(v9 + 40);
          *(_OWORD *)(v9 + 24) = v17;
        }
      }
      v18 = *(_DWORD *)(v9 + 88);
      if ( (v18 & 0x20) != 0 )
      {
        LogicalToPhysicalPointForWindow(*(_QWORD *)(v9 + 72), a2, v9 + 72);
        v18 = *(_DWORD *)(v9 + 88);
      }
      if ( (v18 & 0x40) != 0 )
      {
        v19 = *(_QWORD *)GetMonitorMaxArea(&v21, (const struct tagWND *)a2, v10);
        *(_DWORD *)(v9 + 80) += v19;
        *(_DWORD *)(v9 + 84) += HIDWORD(v19);
        LogicalToPhysicalPointForWindow(*(_QWORD *)(v9 + 80), a2, v9 + 80);
      }
    }
    LOBYTE(v8) = (unsigned int)PostEventMessageEx(
                                 *(struct tagTHREADINFO **)(a1 + 16),
                                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL),
                                 0x1Bu,
                                 a1,
                                 0,
                                 0LL,
                                 v9,
                                 0LL) != 0;
  }
  return v8;
}
