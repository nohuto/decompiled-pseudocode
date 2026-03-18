/*
 * XREFs of VrpPreOpenOrCreate @ 0x140845C84
 * Callers:
 *     VrpRegistryCallback @ 0x1408418A0 (VrpRegistryCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010AB90 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmAllocateExtraParameter @ 0x140827014 (CmAllocateExtraParameter.c)
 *     CmpFindExtraParameterInBlock @ 0x1408270B0 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x1408270E8 (CmpFreeExtraParameter.c)
 *     VrpTranslatePath @ 0x1408464A4 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x140847854 (VrpBuildKeyPath.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(PCUNICODE_STRING **a1, void *a2)
{
  PCUNICODE_STRING *v3; // rdi
  UNICODE_STRING *v4; // rsi
  _QWORD *ExtraParameter; // r14
  PCUNICODE_STRING v6; // rbx
  _OWORD *v7; // r15
  _OWORD *v8; // r13
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  int v15; // r15d
  PCUNICODE_STRING v16; // rax
  unsigned __int16 *p_Length; // rdx
  bool v18; // zf
  int v19; // ecx
  __int128 v21; // xmm0
  PCUNICODE_STRING **v22; // r15
  int ExtraParameterInBlock; // eax
  __int64 v24; // rcx
  _QWORD *v25; // r11
  _QWORD *v26; // rax
  UNICODE_STRING *v27; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING v30; // xmm1
  UNICODE_STRING v31; // xmm0
  const UNICODE_STRING *v32; // rax
  UNICODE_STRING v33; // xmm1
  PCUNICODE_STRING v34; // rax
  unsigned __int16 *v35; // rdx
  int v36; // ecx
  __int64 v37; // [rsp+40h] [rbp-99h] BYREF
  PVOID Object; // [rsp+48h] [rbp-91h] BYREF
  PVOID v39[2]; // [rsp+50h] [rbp-89h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-79h] BYREF
  PCUNICODE_STRING **v41; // [rsp+70h] [rbp-69h] BYREF
  __int64 v42[2]; // [rsp+78h] [rbp-61h] BYREF
  GUID ActivityId; // [rsp+88h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-39h] BYREF
  int *v45; // [rsp+C0h] [rbp-19h]
  __int64 v46; // [rsp+C8h] [rbp-11h]
  __int64 v47; // [rsp+D0h] [rbp-9h]
  int v48; // [rsp+D8h] [rbp-1h] BYREF
  int v49; // [rsp+DCh] [rbp+3h]
  __int64 *v50; // [rsp+E0h] [rbp+7h]
  __int64 v51; // [rsp+E8h] [rbp+Fh]

  v41 = a1;
  v39[0] = 0LL;
  v39[1] = 0LL;
  v3 = *a1;
  P[0] = 0LL;
  v4 = 0LL;
  P[1] = 0LL;
  ExtraParameter = 0LL;
  v42[0] = 0LL;
  v6 = *v3;
  v7 = v3[11];
  v8 = v3[1];
  v42[1] = 0LL;
  LODWORD(v37) = 0;
  Object = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( v6->Length && *v6->Buffer == 92 )
  {
    v9 = VrpBuildKeyPath(0LL, *v3, (PUNICODE_STRING)v39);
    if ( v9 < 0 )
    {
LABEL_41:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_42;
    }
  }
  else
  {
    if ( !v7 )
      return 0;
    v9 = VrpBuildKeyPath(
           (PCUNICODE_STRING)((unsigned __int64)(v7 + 1) & -(__int64)(v7 != 0LL)),
           *v3,
           (PUNICODE_STRING)v39);
    if ( v9 < 0 )
      goto LABEL_42;
  }
  v10 = VrpTranslatePath(a2, (__int64)P, (__int64)&Object, (__int64)v42, (__int64)&v37);
  v9 = v10;
  if ( v10 == -1073741772 )
    return 0;
  if ( v10 >= 0 )
  {
    v15 = v37;
    if ( (v37 & 4) == 0 )
    {
      *((_WORD *)Object + 25) = *((_WORD *)v8 + 25);
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v30 = *(UNICODE_STRING *)v39;
        v3[10] = PoolWithTag;
        *(_QWORD *)&PoolWithTag->Length = v3[1];
        PoolWithTag[1] = **v3;
        v31 = *v3[14];
        v32 = (const UNICODE_STRING *)Object;
        v4[3] = v30;
        *(_DWORD *)&v4[4].Length = v15;
        v33 = *(UNICODE_STRING *)v42;
        v4->Buffer = (wchar_t *)a2;
        v4[2] = v31;
        v3[1] = v32;
        **v3 = *(PCUNICODE_STRING)P;
        *v3[14] = v33;
        goto LABEL_41;
      }
LABEL_13:
      v9 = -1073741670;
      goto LABEL_14;
    }
    ExtraParameter = CmAllocateExtraParameter(v12, v11, v13, v14);
    if ( !ExtraParameter )
      goto LABEL_13;
    ObfReferenceObjectWithTag(a2, 0x67655256u);
    v21 = *(_OWORD *)v39;
    *ExtraParameter = a2;
    *((_DWORD *)ExtraParameter + 2) = v15 & 0xFFFFFFFB;
    *((_OWORD *)ExtraParameter + 1) = v21;
    RtlInitUnicodeString((PUNICODE_STRING)v39, 0LL);
    v22 = v41;
    ExtraParameterInBlock = CmpFindExtraParameterInBlock(v41[2], ExtraParameter - 4, &v41);
    v9 = ExtraParameterInBlock;
    if ( ExtraParameterInBlock < 0 )
    {
      if ( ExtraParameterInBlock == -1073741772 )
      {
        v26 = *(_QWORD **)(v24 + 8);
        if ( *v26 != v24 )
          __fastfail(3u);
        *v25 = v24;
        v9 = 0;
        v25[1] = v26;
        *v26 = v25;
        *(_QWORD *)(v24 + 8) = v25;
      }
      if ( v9 >= 0 )
      {
        v27 = (UNICODE_STRING *)*v3;
        ExtraParameter = 0LL;
        Buffer = (*v3)->Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0x67655256u);
          v27 = (UNICODE_STRING *)*v3;
        }
        *v27 = *(UNICODE_STRING *)P;
        RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
        *((_DWORD *)v22 + 2) = 872;
        v9 = -1073740541;
        goto LABEL_43;
      }
    }
    else
    {
      v9 = -1073741771;
    }
  }
LABEL_42:
  if ( v9 != -1073740541 )
  {
LABEL_14:
    if ( stru_140425BF8.LevelPlus1 > 2 )
    {
      v16 = *v3;
      p_Length = (unsigned __int16 *)&EmptyUnicodeString;
      v18 = (*v3)->Buffer == 0LL;
      LODWORD(v37) = v9;
      if ( !v18 )
        p_Length = &v16->Length;
      v19 = *p_Length;
      v47 = *((_QWORD *)p_Length + 1);
      v50 = &v37;
      v45 = &v48;
      v46 = 2LL;
      v48 = v19;
      v49 = 0;
      v51 = 4LL;
      TlgWrite(&stru_140425BF8, &unk_14038C5C1, &ActivityId, 0LL, 5u, &pData);
    }
    goto LABEL_18;
  }
LABEL_43:
  if ( stru_140425BF8.LevelPlus1 > 5 )
  {
    v34 = *v3;
    v35 = (unsigned __int16 *)&EmptyUnicodeString;
    v18 = (*v3)->Buffer == 0LL;
    LODWORD(v37) = -1073740541;
    if ( !v18 )
      v35 = &v34->Length;
    v36 = *v35;
    v47 = *((_QWORD *)v35 + 1);
    v50 = &v37;
    v45 = &v48;
    v46 = 2LL;
    v48 = v36;
    v49 = 0;
    v51 = 4LL;
    TlgWrite(&stru_140425BF8, &unk_14038C582, &ActivityId, 0LL, 5u, &pData);
  }
LABEL_18:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v39[1] )
    ExFreePoolWithTag(v39[1], 0x67655256u);
  if ( ExtraParameter )
    CmpFreeExtraParameter(ExtraParameter - 6);
  return (unsigned int)v9;
}
