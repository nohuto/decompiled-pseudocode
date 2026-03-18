/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C020489C
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0204490 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204AE0 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02056B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     DwmSyncHitTestQuery @ 0x1C000E2A0 (DwmSyncHitTestQuery.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
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
  float *v9; // rax
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v15; // r14
  int *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r8
  void *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF
  struct tagPOINT v22; // [rsp+98h] [rbp+48h]
  struct tagPOINT v23; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v24; // [rsp+A8h] [rbp+58h]

  v23 = a3;
  v22 = a2;
  v6 = 0;
  v7 = (__int64)a2;
  LODWORD(v21) = 0;
  if ( a4 )
  {
    v23.x += a4->x;
    v23.y += a4->y;
    v24 = (unsigned __int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(BugCheckParameter2) && (v9 = (float *)BugCheckParameter2[27]) != 0LL )
    {
      v10 = (int)(float)((float)(int)v24 * *v9);
      v11 = (int)(float)((float)SHIDWORD(v24) * v9[5]);
      v24 = __PAIR64__(v11, v10);
    }
    else
    {
      v11 = HIDWORD(v24);
      v10 = v24;
    }
    v22.x += v10;
    v22.y += v11;
    v7 = (__int64)v22;
    a3 = v23;
  }
  if ( PtInRect((_DWORD *)(BugCheckParameter2[5] + 88), *(_QWORD *)&a3) )
  {
    v14 = (*(_BYTE *)(v13 + 31) & 0x20) != 0 || !PtInRect((_DWORD *)(v13 + 104), v12);
    if ( BugCheckParameter2[2] == gptiCurrent )
    {
      v15 = a6;
      v16 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2)
        && (*(_BYTE *)(BugCheckParameter2[5] + 26) & 8) != 0
        && v14 )
      {
        if ( gdwInAtomicOperation )
        {
          v17 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v19 = (void *)ReferenceDwmApiPort(v17, gdwInAtomicOperation, v18);
        LODWORD(v21) = 1;
        UserSessionSwitchLeaveCrit(v20);
        DwmSyncHitTestQuery(
          v19,
          *BugCheckParameter2,
          *(_DWORD *)v15,
          v7,
          *((_QWORD *)v15 + 1),
          *((_QWORD *)v15 + 2),
          -2,
          v16,
          &v21);
        EnterCrit(0LL, 1LL);
        v6 = v21;
      }
      if ( !*((_DWORD *)v15 + 21) || !v6 )
      {
        _InterlockedIncrement(&glSendMessage);
        *v16 = xxxSendTransformableMessageTimeout(
                 BugCheckParameter2,
                 0x84u,
                 0LL,
                 (struct _LARGE_STRING *)(LOWORD(v23.x) | (LOWORD(v23.y) << 16)),
                 0,
                 0,
                 0LL,
                 1u,
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
