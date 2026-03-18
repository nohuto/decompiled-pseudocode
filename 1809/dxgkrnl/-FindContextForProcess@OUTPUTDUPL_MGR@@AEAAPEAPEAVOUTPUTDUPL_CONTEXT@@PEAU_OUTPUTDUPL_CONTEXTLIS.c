/*
 * XREFs of ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C023CD5C
 * Callers:
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C023C794 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C023C8AC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C023D304 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 *     ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C023D424 (-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C023D600 (-GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C023F858 (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     <none>
 */

struct OUTPUTDUPL_CONTEXT **__fastcall OUTPUTDUPL_MGR::FindContextForProcess(
        OUTPUTDUPL_MGR *this,
        struct _OUTPUTDUPL_CONTEXTLIST *a2,
        struct _EPROCESS *a3,
        unsigned int *a4)
{
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // esi
  bool v11; // zf
  __int64 v12; // rbx

  if ( *(struct _KTHREAD **)(*(_QWORD *)a2 + 8LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1712LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a4 )
    *a4 = -1;
  v9 = *((_QWORD *)a2 + 1);
  v10 = 0;
  if ( !*((_DWORD *)this + 2) )
    return 0LL;
  while ( 1 )
  {
    if ( *(_QWORD *)v9 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
      v11 = v12 == PsGetCurrentProcess(this, a2);
    }
    else
    {
      v11 = a3 == 0LL;
    }
    if ( v11 )
      break;
    ++v10;
    v9 += 8LL;
    if ( v10 >= *((_DWORD *)this + 2) )
      return 0LL;
  }
  if ( a4 )
    *a4 = v10;
  return (struct OUTPUTDUPL_CONTEXT **)v9;
}
