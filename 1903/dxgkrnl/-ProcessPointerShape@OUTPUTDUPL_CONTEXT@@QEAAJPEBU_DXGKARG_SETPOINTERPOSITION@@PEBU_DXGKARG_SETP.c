/*
 * XREFs of ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0279B50
 * Callers:
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C0138430 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C02712DC (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C027371C (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0279D80 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerShape(
        OUTPUTDUPL_CONTEXT *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const GUID *a3)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  int updated; // ebx
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD v12[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 2006LL;
    return 0LL;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, a3);
    if ( updated >= 0 )
    {
      memset(v12, 0, 0x48uLL);
      v12[1] = 0LL;
      LODWORD(v12[0]) = 2;
      v12[3] = a3;
      v12[4] = a2;
      LODWORD(v12[2]) = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v12);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, 0LL);
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v8, v7, v10);
      *(_QWORD *)(v11 + 24) = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      *(_QWORD *)(v11 + 32) = this;
      WdLogEvent5_WdError(v11);
    }
    return (unsigned int)updated;
  }
}
