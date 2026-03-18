/*
 * XREFs of VrpPostOpenOrCreate @ 0x1408447F8
 * Callers:
 *     VrpRegistryCallback @ 0x1408418A0 (VrpRegistryCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010AB90 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmSetCallbackObjectContext @ 0x140825930 (CmSetCallbackObjectContext.c)
 *     CmAllocateExtraParameter @ 0x140827014 (CmAllocateExtraParameter.c)
 *     CmRetrieveExtraParameter @ 0x140827074 (CmRetrieveExtraParameter.c)
 *     CmpFindExtraParameterInBlock @ 0x1408270B0 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x1408270E8 (CmpFreeExtraParameter.c)
 *     VrpAllocateKeyContext @ 0x140841C28 (VrpAllocateKeyContext.c)
 *     VrpFreeCallbackContext @ 0x140841D08 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x140841D50 (VrpFreeKeyContext.c)
 *     VrpBuildKeyPath @ 0x140847854 (VrpBuildKeyPath.c)
 *     VrpCountPathComponents @ 0x140847A0C (VrpCountPathComponents.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  UNICODE_STRING *v6; // rsi
  __int64 v7; // r14
  UNICODE_STRING *v8; // r13
  int v9; // ebx
  __int64 v10; // rdi
  unsigned __int16 **v11; // r15
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _LOOKASIDE_LIST_EX *v16; // r9
  UNICODE_STRING *ExtraParameter; // rax
  int ExtraParameterInBlock; // eax
  __int64 v19; // rcx
  _QWORD *v20; // r11
  _QWORD *v21; // rax
  UNICODE_STRING *KeyContext; // rax
  UNICODE_STRING *v23; // r12
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  int v28; // edx
  unsigned __int16 *v29; // rcx
  int v30; // eax
  unsigned __int16 *v31; // rax
  void *v32; // rcx
  unsigned __int16 *v33; // rax
  unsigned __int16 *v34; // rcx
  __int64 v35; // rax
  int v36; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v39; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v42; // [rsp+70h] [rbp-19h]
  int v43; // [rsp+78h] [rbp-11h]
  int v44; // [rsp+7Ch] [rbp-Dh]
  __int64 v45; // [rsp+80h] [rbp-9h]
  int v46; // [rsp+88h] [rbp-1h] BYREF
  int v47; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  int v49; // [rsp+98h] [rbp+Fh]
  int v50; // [rsp+9Ch] [rbp+13h]

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = *a1;
  v6 = 0LL;
  v7 = a1[1];
  v8 = 0LL;
  OldContext = 0LL;
  v39 = v5;
  v9 = *(_DWORD *)(v5 + 8);
  v10 = *(_QWORD *)(v5 + 32);
  v11 = *(unsigned __int16 ***)(v5 + 16);
  if ( v9 < 0 || (CmRetrieveExtraParameter(*(_QWORD *)(v7 + 16), v4), v9 == 260) )
  {
LABEL_2:
    v12 = 0;
    goto LABEL_29;
  }
  if ( v9 == 872 )
  {
    if ( !v10 )
      return 0;
    ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter(v14, v13, v15, v16);
    v8 = ExtraParameter;
    if ( !ExtraParameter )
      goto LABEL_8;
    v12 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v10 + 48), ExtraParameter + 1);
    if ( v12 < 0 )
      goto LABEL_21;
    ObfReferenceObjectWithTag(*(PVOID *)(v10 + 8), 0x67655256u);
    *(_QWORD *)&v8->Length = *(_QWORD *)(v10 + 8);
    LODWORD(v8->Buffer) = *(_DWORD *)(v10 + 64);
    ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD **)(v7 + 16), &v8[-2].Length, &OldContext);
    v12 = ExtraParameterInBlock;
    if ( ExtraParameterInBlock >= 0 )
    {
      v12 = -1073741771;
      goto LABEL_21;
    }
    if ( ExtraParameterInBlock == -1073741772 )
    {
      v21 = *(_QWORD **)(v19 + 8);
      if ( *v21 != v19 )
        __fastfail(3u);
      *v20 = v19;
      v12 = 0;
      v20[1] = v21;
      *v21 = v20;
      *(_QWORD *)(v19 + 8) = v20;
    }
    if ( v12 < 0 )
      goto LABEL_21;
    goto LABEL_2;
  }
  KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
  v6 = KeyContext;
  if ( !KeyContext )
  {
LABEL_8:
    v12 = -1073741670;
LABEL_21:
    if ( stru_140425BF8.LevelPlus1 > 2 )
    {
      v24 = *v11;
      v25 = (unsigned __int16 *)&EmptyUnicodeString;
      v26 = *((_QWORD *)*v11 + 1) == 0LL;
      LODWORD(OldContext) = v12;
      if ( !v26 )
        v25 = v24;
      v27 = *((_QWORD *)v25 + 1);
      v28 = *v25;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v45 = v27;
      p_OldContext = &OldContext;
      v42 = &v46;
      v43 = 2;
      v46 = v28;
      v49 = 4;
      TlgWrite(&stru_140425BF8, &unk_14038C7CC, &ActivityId, 0LL, 5u, &pData);
    }
    if ( v6 )
      VrpFreeKeyContext(v6);
    if ( v8 )
      CmpFreeExtraParameter(&v8[-3].Length);
    goto LABEL_29;
  }
  v23 = KeyContext + 1;
  v12 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v10 + 48), KeyContext + 1);
  if ( v12 < 0 )
    goto LABEL_21;
  *(_DWORD *)(&v6[2].MaximumLength + 1) = *(_DWORD *)(v10 + 64);
  v6[2].Length = VrpCountPathComponents(v23);
  v12 = CmSetCallbackObjectContext(*(PVOID *)v11[9], &VrpCallbackCookie, v6, &OldContext);
  if ( v12 < 0 )
    goto LABEL_21;
LABEL_29:
  if ( v10 )
  {
    v29 = v11[1];
    if ( v29 )
      ObfDereferenceObject(v29);
    v11[1] = *(unsigned __int16 **)v10;
    *(_QWORD *)v10 = 0LL;
    v30 = *(_DWORD *)(v39 + 8);
    if ( v30 == 260 || v30 == 872 )
    {
      if ( stru_140425BF8.LevelPlus1 > 5 )
      {
        v33 = *v11;
        v34 = (unsigned __int16 *)&EmptyUnicodeString;
        v26 = *((_QWORD *)*v11 + 1) == 0LL;
        LODWORD(OldContext) = v12;
        if ( !v26 )
          v34 = v33;
        v35 = *((_QWORD *)v34 + 1);
        v36 = *v34;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v45 = v35;
        p_OldContext = &OldContext;
        v42 = &v46;
        v43 = 2;
        v46 = v36;
        v49 = 4;
        TlgWrite(&stru_140425BF8, &unk_14038C4AE, &ActivityId, 0LL, 5u, &pData);
      }
    }
    else
    {
      v31 = *v11;
      v32 = (void *)*((_QWORD *)*v11 + 1);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        v31 = *v11;
      }
      *(_OWORD *)v31 = *(_OWORD *)(v10 + 16);
      *(_OWORD *)v11[14] = *(_OWORD *)(v10 + 32);
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_QWORD *)(v10 + 40) = 0LL;
    }
    VrpFreeCallbackContext((_QWORD *)v10);
  }
  return (unsigned int)v12;
}
