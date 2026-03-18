/*
 * XREFs of ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C021B428
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C0266DB0 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C003C824 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 */

void __fastcall LPMDisplayUnregisterInternalDisplay(PFILE_OBJECT a1, struct _ERESOURCE *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  PFILE_OBJECT *v5; // rbx
  _QWORD *v6; // rax
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  v5 = FileObject;
  if ( FileObject[2] == a1 && *((_DWORD *)FileObject + 6) == (_DWORD)v3 )
  {
    FileObject[2] = 0LL;
    *((_DWORD *)v5 + 6) = -1;
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v6[3] = v5[2];
    v6[4] = *((unsigned int *)v5 + 6);
    v6[5] = a1;
    v6[6] = v3;
    WdLogEvent5_WdError(v6);
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
