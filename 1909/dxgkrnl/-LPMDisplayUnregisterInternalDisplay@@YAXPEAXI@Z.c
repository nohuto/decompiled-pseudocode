/*
 * XREFs of ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C02500B8
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C02A2A90 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C00431DC (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 */

void __fastcall LPMDisplayUnregisterInternalDisplay(PFILE_OBJECT a1, struct _ERESOURCE *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  PFILE_OBJECT *v7; // rbx
  _QWORD *v8; // rax
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  v7 = FileObject;
  if ( FileObject[2] == a1 && *((_DWORD *)FileObject + 6) == (_DWORD)v3 )
  {
    FileObject[2] = 0LL;
    *((_DWORD *)v7 + 6) = -1;
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4, v6);
    v8[3] = v7[2];
    v8[4] = *((unsigned int *)v7 + 6);
    v8[5] = a1;
    v8[6] = v3;
    WdLogEvent5_WdError(v8);
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
