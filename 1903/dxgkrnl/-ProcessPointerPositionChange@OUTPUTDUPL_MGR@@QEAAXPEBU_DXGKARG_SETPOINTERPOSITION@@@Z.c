/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0142120
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D6BE8 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0272C78 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C027326C (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0279A64 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  OUTPUTDUPL_CONTEXT **v6; // rbx
  unsigned int v7; // ebp
  int v8; // r15d
  OUTPUTDUPL_CONTEXT *v9; // r8
  __int64 v10; // rax
  OUTPUTDUPL_MGR *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  _QWORD *v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2->VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v10 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v10 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v10 + 32) = this;
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    v5 = *((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, *(struct DXGFASTMUTEX *const *)v5, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    v6 = *(OUTPUTDUPL_CONTEXT ***)(v5 + 8);
    v7 = 0;
    v8 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        v9 = *v6;
        if ( *v6 && *((_DWORD *)v9 + 79) )
        {
          if ( v8 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v11, a2);
              v9 = *v6;
            }
            v8 = 0;
          }
          v12 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(v9, a2);
          v16 = v12;
          if ( v12 < 0 )
            break;
        }
        ++v7;
        ++v6;
        if ( v7 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
      v17[3] = a2->VidPnSourceId;
      v17[4] = v7;
      v17[5] = v16;
      WdLogEvent5_WdError(v17);
    }
LABEL_5:
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
}
