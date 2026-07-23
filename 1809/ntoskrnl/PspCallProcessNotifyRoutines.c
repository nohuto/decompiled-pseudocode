/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x1405F5C14
 * Callers:
 *     PspExitProcess @ 0x140609E0C (PspExitProcess.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExDereferenceCallBackBlock @ 0x140088A90 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140088AE0 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x140088EF0 (ExGetCallBackBlockContext.c)
 *     ExReleaseExtensionTable @ 0x14010DC6C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PsReferenceProcessFilePointer @ 0x14061DB90 (PsReferenceProcessFilePointer.c)
 *     PsTerminateProcess @ 0x1406CAB74 (PsTerminateProcess.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(_QWORD *a1, __int64 a2, char a3)
{
  void (__fastcall **ExtensionTable)(_QWORD, _QWORD, _QWORD); // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // r12d
  int v11; // eax
  __int128 v12; // xmm0
  char *v13; // rcx
  char *v14; // rax
  __int64 v15; // rax
  char *v16; // rax
  __int64 *v17; // rbx
  unsigned int v18; // esi
  struct _EX_RUNDOWN_REF *v19; // rax
  struct _EX_RUNDOWN_REF *v20; // r14
  char v22; // al
  __int64 v23; // rcx
  void (__fastcall *v24)(_QWORD *, _QWORD, __int64 *); // rax
  int v25; // eax
  void (__fastcall *v26)(_QWORD, _QWORD, __int64); // rax
  __int64 v27; // r8
  char **v28; // rcx
  void (__fastcall **v29)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-49h]
  __int64 v30; // [rsp+28h] [rbp-41h]
  void (__fastcall **v31)(_QWORD *, _QWORD, __int64 *); // [rsp+30h] [rbp-39h]
  __int64 v32; // [rsp+40h] [rbp-29h] BYREF
  int v33; // [rsp+48h] [rbp-21h]
  __int64 v34; // [rsp+50h] [rbp-19h]
  __int128 v35; // [rsp+58h] [rbp-11h]
  char *v36; // [rsp+68h] [rbp-1h]
  __int128 v37; // [rsp+70h] [rbp+7h]
  int v38; // [rsp+80h] [rbp+17h]
  char v39; // [rsp+D0h] [rbp+67h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  ExtensionTable = (void (__fastcall **)(_QWORD, _QWORD, _QWORD))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v29 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  v8 = a1[226];
  v9 = 0;
  v10 = ((unsigned int)PspNotifyEnableMask >> 2) & 1;
  v31 = (void (__fastcall **)(_QWORD *, _QWORD, __int64 *))v7;
  Object = 0LL;
  v39 = 0;
  v30 = v8;
  if ( !a3 || (PspNotifyEnableMask & 4) == 0 && !ExtensionTable && !v7 )
  {
    v17 = 0LL;
    goto LABEL_17;
  }
  v11 = 0;
  v32 = 72LL;
  if ( v8 )
    v11 = 2;
  v33 = v11;
  v34 = a1[124];
  v12 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v38 = 0;
  v35 = v12;
  if ( v8 )
  {
    v36 = 0LL;
    v37 = 0LL;
    if ( !a2 )
      goto LABEL_16;
    v28 = *(char ***)(a2 + 448);
    if ( !v28 )
      goto LABEL_16;
    v36 = *v28;
    *(_QWORD *)&v37 = v28[1];
    v16 = v28[2];
  }
  else
  {
    if ( a2 && (v13 = *(char **)(a2 + 176)) != 0LL )
    {
      Object = *(PVOID *)(a2 + 176);
    }
    else
    {
      v39 = 1;
      PsReferenceProcessFilePointer(a1, &Object);
      v13 = (char *)Object;
    }
    v36 = v13;
    if ( a2 && (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
    {
      v33 |= 1u;
      v14 = (char *)(a2 + 232);
    }
    else
    {
      v14 = v13 + 88;
    }
    *(_QWORD *)&v37 = v14;
    if ( !a2 || (v15 = *(_QWORD *)(a2 + 208)) == 0 )
    {
      *((_QWORD *)&v37 + 1) = 0LL;
      goto LABEL_16;
    }
    v16 = (char *)(v15 + 112);
  }
  *((_QWORD *)&v37 + 1) = v16;
LABEL_16:
  v17 = &v32;
LABEL_17:
  if ( (PspNotifyEnableMask & 2) != 0 || (_BYTE)v10 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v18);
      v20 = v19;
      if ( v19 )
      {
        v22 = ExGetCallBackBlockContext((__int64)v19);
        if ( !v30 || (v22 & 4) != 0 )
        {
          if ( (v22 & 2) != 0 )
          {
            if ( (_BYTE)v10 )
            {
              v24 = (void (__fastcall *)(_QWORD *, _QWORD, __int64 *))ExGetCallBackBlockRoutine(v23);
              v24(a1, a1[92], v17);
            }
          }
          else
          {
            v26 = (void (__fastcall *)(_QWORD, _QWORD, __int64))ExGetCallBackBlockRoutine(v23);
            LOBYTE(v27) = a3;
            v26(a1[124], a1[92], v27);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v18, v20);
        if ( v17 )
        {
          v25 = *((_DWORD *)v17 + 16);
          if ( v25 < 0 )
            break;
        }
      }
      if ( ++v18 >= 0x40 )
        goto LABEL_21;
    }
    v9 = *((_DWORD *)v17 + 16);
    PsTerminateProcess(a1, (unsigned int)v25);
LABEL_21:
    ExtensionTable = v29;
  }
  if ( v31 && (!v17 || *((int *)v17 + 16) >= 0) )
  {
    (*v31)(a1, a1[92], v17);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v17 || *((int *)v17 + 16) >= 0) )
  {
    (*ExtensionTable)(a1, a1[92], v17);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v39 )
    ObfDereferenceObject(Object);
  return v9;
}
