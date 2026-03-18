/*
 * XREFs of ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C0178248
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0178E10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     EtwTraceCopyPointerInputFrameStart @ 0x1C010AE10 (EtwTraceCopyPointerInputFrameStart.c)
 *     EtwTraceCopyPointerInputFrameStop @ 0x1C010AE40 (EtwTraceCopyPointerInputFrameStop.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0162218 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C0178144 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C0178904 (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 */

void __fastcall CPTPProcessor::CreateGestureCache(
        CPTPProcessor *this,
        unsigned int a2,
        const struct PTPEnginePointerNode *a3,
        char a4)
{
  struct CPointerInputFrame *v8; // rsi
  __int64 v9; // rcx
  CPTPProcessor *v10; // rcx
  __int64 v11; // r8
  int v12; // r10d
  int v13; // edx
  _DWORD *v14; // rcx

  EtwTraceCopyPointerInputFrameStart((__int64)this);
  v8 = (struct CPointerInputFrame *)CTouchProcessor::CopyPTPPointerInputFrame(
                                      (struct _KTHREAD **)this,
                                      *((struct CPointerInputFrame **)this + 75),
                                      *((_QWORD *)this + 74));
  EtwTraceCopyPointerInputFrameStop(v9);
  v12 = 0;
  if ( v8 )
  {
    *((_QWORD *)this + 72) = v8;
    if ( !a4 )
    {
      v13 = -1;
      if ( a2 )
      {
        v14 = (_DWORD *)((char *)a3 + 12);
        while ( (*v14 & 0x2000) == 0 )
        {
          v14 += 24;
          if ( ++v12 >= a2 )
            goto LABEL_9;
        }
        v13 = v12;
      }
LABEL_9:
      CPTPProcessor::HitTestPrimaryContact(this, (const struct PTPEnginePointerNode *)((char *)a3 + 96 * v13));
    }
    CPTPProcessor::CopyPointersIntoFrame(v10, v8, v11, a3, 1);
  }
}
