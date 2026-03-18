/*
 * XREFs of ?RouteFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238D5C
 * Callers:
 *     ?RouteAllFrames@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238CC4 (-RouteAllFrames@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1802357F8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?CheckForBufferedDescendant@CGlobalManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180236A20 (-CheckForBufferedDescendant@CGlobalManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x1802390EC (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180239550 (-TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CGlobalManipulationManager::RouteFrameInput(
        CGlobalManipulationManager *this,
        struct CManipulationFrame *a2)
{
  int v3; // r12d
  __int64 v4; // rax
  char v5; // r14
  CGlobalManipulationManager *v6; // r9
  bool v7; // r14
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // r15
  __int64 v11; // r13
  void *v12; // r10
  unsigned int v13; // r15d
  int v14; // r12d
  __int64 v15; // rdx
  unsigned int *v16; // r9
  char v17; // al
  unsigned int v18; // [rsp+34h] [rbp-E4h]
  int v19; // [rsp+38h] [rbp-E0h]
  int v20; // [rsp+3Ch] [rbp-DCh] BYREF
  unsigned int *v21; // [rsp+40h] [rbp-D8h]
  void *v22; // [rsp+48h] [rbp-D0h] BYREF
  CGlobalManipulationManager *v23; // [rsp+50h] [rbp-C8h]
  CGlobalManipulationManager *v24; // [rsp+58h] [rbp-C0h]
  struct CManipulationFrame *v25; // [rsp+60h] [rbp-B8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-88h] BYREF
  int *v27; // [rsp+B0h] [rbp-68h]
  int v28; // [rsp+B8h] [rbp-60h]
  int v29; // [rsp+BCh] [rbp-5Ch]
  unsigned int *v30; // [rsp+C0h] [rbp-58h]
  int v31; // [rsp+C8h] [rbp-50h]
  int v32; // [rsp+CCh] [rbp-4Ch]
  void **v33; // [rsp+D0h] [rbp-48h]
  int v34; // [rsp+D8h] [rbp-40h]
  int v35; // [rsp+DCh] [rbp-3Ch]

  v23 = this;
  v24 = this;
  v25 = a2;
  v3 = 0;
  v19 = 0;
  v4 = 360LL;
  if ( *((_DWORD *)a2 + 36) != 5 )
    v4 = 352LL;
  if ( *(_QWORD *)((char *)this + v4) - *((_QWORD *)a2 + 28) > *((_QWORD *)this + 47) )
  {
    *((_BYTE *)a2 + 64) |= 2u;
    CGlobalManipulationManager::TargetFrameInput(this, a2);
  }
  v5 = *((_BYTE *)a2 + 64);
  if ( (v5 & 1) != 0 && !CManipulationFrame::IsMousewheelFrame(a2) )
  {
    v7 = (v5 & 4) != 0;
    v8 = 0;
    v18 = 0;
    v9 = *((_DWORD *)a2 + 4);
    while ( v8 < v9 )
    {
      v10 = 248LL * v8;
      v20 = v7;
      if ( (*((_BYTE *)a2 + v10 + 384) & 1) == v20 && *(_DWORD *)((char *)a2 + v10 + 152) )
      {
        if ( *(_QWORD *)((char *)a2 + v10 + 168) == -1LL
          || CGlobalManipulationManager::CheckForBufferedDescendant(v6, a2, v8) )
        {
          v19 = ++v3;
        }
        else
        {
          AcquireSRWLockExclusive(&CGlobalManipulationManager::s_rwPointerBufferLock);
          dword_18033D158 = GetCurrentThreadId();
          v11 = 0LL;
          v12 = *(void **)((char *)a2 + v10 + 168);
          v22 = v12;
          v13 = v8;
          v14 = v20;
          while ( v13 < *((_DWORD *)a2 + 4) )
          {
            v15 = 248LL * v13;
            if ( *(void **)((char *)a2 + v15 + 168) == v12
              && (*((_BYTE *)a2 + v15 + 384) & 1) == v14
              && *(_DWORD *)((char *)a2 + v15 + 152) )
            {
              v16 = (unsigned int *)((char *)a2 + v15 + 148);
              v21 = v16;
              CGlobalManipulationManager::s_rgPointerIds[v11] = *v16;
              v11 = (unsigned int)(v11 + 1);
              *(_DWORD *)((char *)a2 + v15 + 152) = 0;
              if ( dword_180337240 > 4u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
                {
                  v20 = *((_DWORD *)a2 + 6);
                  v27 = &v20;
                  v28 = 4;
                  v29 = 0;
                  v30 = v16;
                  v31 = 4;
                  v32 = 0;
                  v33 = &v22;
                  v34 = 8;
                  v35 = 0;
                  TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DDCCD, 0LL, 0LL, 5u, &pData);
                  v12 = v22;
                  v16 = v21;
                }
              }
              InputTraceLogging::GestureTargeting::RoutePointer(
                *((_QWORD *)a2 + 28),
                *((_QWORD *)a2 + 4),
                *((_DWORD *)a2 + 6),
                *v16,
                v12);
              v12 = v22;
            }
            ++v13;
          }
          LODWORD(v21) = v11;
          v8 = v18;
          v3 = v19;
          SetManipulationInputTarget(
            *((unsigned int *)a2 + 6),
            v12,
            (unsigned int)v11,
            CGlobalManipulationManager::s_rgPointerIds);
          *((_DWORD *)a2 + 5) += v11;
          dword_18033D158 = 0;
          ReleaseSRWLockExclusive(&CGlobalManipulationManager::s_rwPointerBufferLock);
        }
      }
      v18 = ++v8;
      v9 = *((_DWORD *)a2 + 4);
      if ( v8 == v9 && v7 )
      {
        v7 = 0;
        v8 = 0;
        v18 = 0;
      }
      v6 = v23;
    }
    v17 = *((_BYTE *)a2 + 64) & 0xFE;
    *((_BYTE *)a2 + 64) = v17;
    if ( !v3 )
      *((_BYTE *)a2 + 64) = v17 & 0xFB;
  }
}
