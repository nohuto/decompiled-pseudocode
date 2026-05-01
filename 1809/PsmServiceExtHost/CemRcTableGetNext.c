/*
 * XREFs of CemRcTableGetNext @ 0x18000858C
 * Callers:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800084E4 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x18000898C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B9B0 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800472C0 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18006DAC4 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18006DB10 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006F8DC (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006FA58 (-ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     CempRcTableGetFirstActiveObject @ 0x18000BA98 (CempRcTableGetFirstActiveObject.c)
 */

__int64 __fastcall CemRcTableGetNext(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  _QWORD **v3; // rcx
  _QWORD *v4; // rax
  __int64 j; // rcx
  _QWORD *v6; // rcx
  __int64 FirstActiveObject; // rbx
  _QWORD *i; // rdx

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  v3 = (_QWORD **)a1[1];
  v4 = a1;
  if ( v3 )
  {
    for ( i = *v3; i; i = (_QWORD *)*i )
      ;
  }
  else
  {
    for ( j = a1[2]; ; j = v6[2] )
    {
      v6 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v6 || (_QWORD *)*v6 == v4 )
        break;
      v4 = v6;
    }
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject();
  RtlReleaseSRWLockShared(v2 + 16);
  CemRcObjectDereference(a1);
  return FirstActiveObject;
}
