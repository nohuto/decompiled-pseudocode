/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01CA4A4
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01CA07C (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01CB1F0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     DwmSyncHitTestQuery @ 0x1C0056D80 (DwmSyncHitTestQuery.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 */

void __fastcall xxxSendNCHitTest(
        __int64 *BugCheckParameter2,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // r15d
  __int64 v7; // rbx
  unsigned __int64 v9; // r14
  int v10; // edi
  unsigned __int64 v11; // rbx
  float *v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  BOOL v15; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v16; // r14
  int *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  struct tagPOINT v26; // [rsp+98h] [rbp+48h]
  struct tagPOINT v27; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v28; // [rsp+A8h] [rbp+58h]

  v27 = a3;
  v26 = a2;
  v6 = 0;
  v7 = (__int64)a2;
  LODWORD(v25) = 0;
  if ( a4 )
  {
    v9 = (unsigned __int64)*a4;
    v27.x += a4->x;
    v10 = v9;
    v27.y += a4->y;
    v11 = HIDWORD(v9);
    v28 = v9;
    if ( (unsigned int)IsWindowDesktopComposed(BugCheckParameter2) )
    {
      v12 = (float *)BugCheckParameter2[25];
      if ( v12 )
      {
        LODWORD(v11) = (int)(float)((float)SHIDWORD(v28) * v12[5]);
        v10 = (int)(float)((float)(int)v9 * *v12);
      }
    }
    v26.x += v10;
    v26.y += v11;
    v7 = (__int64)v26;
    a3 = v27;
  }
  if ( PtInRect((_DWORD *)(BugCheckParameter2[5] + 88), *(_QWORD *)&a3) )
  {
    v15 = (*(_BYTE *)(v14 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v14 + 104), v13);
    if ( BugCheckParameter2[2] == gptiCurrent )
    {
      v16 = a6;
      v17 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2)
        && (*(_BYTE *)(BugCheckParameter2[5] + 26) & 8) != 0
        && v15 )
      {
        if ( gdwInAtomicOperation )
        {
          v18 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v20 = (void *)ReferenceDwmApiPort(v18, gdwInAtomicOperation, v19);
        LODWORD(v25) = 1;
        UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
        DwmSyncHitTestQuery(
          v20,
          *BugCheckParameter2,
          *(_DWORD *)v16,
          v7,
          *((_QWORD *)v16 + 1),
          *((_QWORD *)v16 + 2),
          -2,
          v17,
          &v25);
        EnterCrit(0LL, 1LL);
        v6 = v25;
      }
      if ( !*((_DWORD *)v16 + 21) || !v6 )
      {
        _InterlockedIncrement(&glSendMessage);
        *v17 = xxxSendTransformableMessageTimeout(
                 BugCheckParameter2,
                 0x84u,
                 0LL,
                 LOWORD(v27.x) | (LOWORD(v27.y) << 16),
                 0,
                 0,
                 0LL,
                 1,
                 0);
      }
    }
    else
    {
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
}
