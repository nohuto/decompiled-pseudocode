/*
 * XREFs of ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C027A1C4
 * Callers:
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0145CE0 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0271A04 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0273E44 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C027A4E0 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerPosition(
        OUTPUTDUPL_CONTEXT *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const GUID *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int updated; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD v11[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 1973LL;
    return 0LL;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, a3);
    if ( updated >= 0 )
    {
      memset(v11, 0, 0x48uLL);
      v11[1] = 0LL;
      v11[3] = 0LL;
      LODWORD(v11[0]) = 1;
      v11[4] = a2;
      LODWORD(v11[2]) = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v11);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, 0LL);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v7, v6, v9);
      *(_QWORD *)(v10 + 24) = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      *(_QWORD *)(v10 + 32) = this;
      WdLogEvent5_WdError(v10);
    }
    return (unsigned int)updated;
  }
}
