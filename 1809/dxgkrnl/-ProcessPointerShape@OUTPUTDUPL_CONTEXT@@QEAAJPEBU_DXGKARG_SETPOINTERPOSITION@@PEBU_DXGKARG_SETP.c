/*
 * XREFs of ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0244708
 * Callers:
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C012C9F0 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C023C684 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C023E404 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0244908 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerShape(
        OUTPUTDUPL_CONTEXT *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const GUID *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  int updated; // ebx
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+30h] [rbp-28h]
  const GUID *v14; // [rsp+38h] [rbp-20h]
  const struct _DXGKARG_SETPOINTERPOSITION *v15; // [rsp+40h] [rbp-18h]

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 1993LL;
    return 0LL;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, a3);
    if ( updated >= 0 )
    {
      v12 = 0LL;
      v11 = 2;
      v14 = a3;
      v15 = a2;
      v13 = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)&v11);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, 0LL);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v10 + 24) = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      *(_QWORD *)(v10 + 32) = this;
      WdLogEvent5_WdError(v10);
    }
    return (unsigned int)updated;
  }
}
