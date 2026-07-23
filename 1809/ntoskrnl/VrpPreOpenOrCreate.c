/*
 * XREFs of VrpPreOpenOrCreate @ 0x14080D4E0
 * Callers:
 *     VrpRegistryCallback @ 0x1408091F0 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     EtwActivityIdControl @ 0x1400A3A90 (EtwActivityIdControl.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     CmAllocateExtraParameter @ 0x1407ED708 (CmAllocateExtraParameter.c)
 *     CmpFindExtraParameterInBlock @ 0x1407ED7A4 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x1407ED7DC (CmpFreeExtraParameter.c)
 *     VrpTranslatePath @ 0x14080DD70 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x14080F1DC (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x14080F41C (VrpGetNextToken.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(PCUNICODE_STRING **a1, void *a2)
{
  PCUNICODE_STRING *v3; // rdi
  UNICODE_STRING *v4; // r14
  _QWORD *ExtraParameter; // rsi
  PCUNICODE_STRING v6; // rbx
  _OWORD *v7; // r15
  _OWORD *v8; // r13
  int v9; // ebx
  PCUNICODE_STRING v10; // rax
  unsigned __int16 *p_Length; // rdx
  bool v12; // zf
  int v13; // ecx
  int v15; // eax
  int v16; // r15d
  __int128 v17; // xmm0
  PCUNICODE_STRING **v18; // r15
  int ExtraParameterInBlock; // eax
  __int64 v20; // rcx
  _QWORD *v21; // r11
  _QWORD *v22; // rax
  UNICODE_STRING *v23; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING v26; // xmm1
  UNICODE_STRING v27; // xmm0
  const UNICODE_STRING *v28; // rax
  UNICODE_STRING v29; // xmm1
  PCUNICODE_STRING v30; // rax
  unsigned __int16 *v31; // rdx
  int v32; // ecx
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v34[2]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING **v38; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40[2]; // [rsp+90h] [rbp-70h] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h] BYREF
  int v47; // [rsp+ECh] [rbp-14h]
  __int64 *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]

  v38 = a1;
  v34[0] = 0LL;
  v34[1] = 0LL;
  v3 = *a1;
  P[0] = 0LL;
  v4 = 0LL;
  P[1] = 0LL;
  ExtraParameter = 0LL;
  v40[0] = 0LL;
  v6 = *v3;
  v7 = v3[11];
  v8 = v3[1];
  v40[1] = 0LL;
  LODWORD(v33) = 0;
  Object = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( v6->Length && *v6->Buffer == 92 )
  {
    v9 = VrpBuildKeyPath(0LL, *v3, (PUNICODE_STRING)v34);
    if ( v9 < 0 )
    {
LABEL_44:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_45;
    }
  }
  else
  {
    if ( !v7 )
      return 0;
    v9 = VrpBuildKeyPath(
           (PCUNICODE_STRING)((unsigned __int64)(v7 + 1) & -(__int64)(v7 != 0LL)),
           *v3,
           (PUNICODE_STRING)v34);
    if ( v9 < 0 )
      goto LABEL_45;
  }
  v37 = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  VrpGetNextToken(v34, &v37, &String1);
  if ( RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
    VrpGetNextToken(v34, &v37, &String1);
    if ( RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
    {
      v9 = -1073741790;
      goto LABEL_11;
    }
  }
  v15 = VrpTranslatePath(a2, (__int64)P, (__int64)&Object, (__int64)v40, (__int64)&v33);
  v9 = v15;
  if ( v15 == -1073741772 )
    return 0;
  if ( v15 >= 0 )
  {
    v16 = v33;
    if ( (v33 & 4) == 0 )
    {
      *((_WORD *)Object + 25) = *((_WORD *)v8 + 25);
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v26 = *(UNICODE_STRING *)v34;
        v3[10] = PoolWithTag;
        *(_QWORD *)&PoolWithTag->Length = v3[1];
        PoolWithTag[1] = **v3;
        v27 = *v3[14];
        v28 = (const UNICODE_STRING *)Object;
        v4[3] = v26;
        *(_DWORD *)&v4[4].Length = v16;
        v29 = *(UNICODE_STRING *)v40;
        v4->Buffer = (wchar_t *)a2;
        v4[2] = v27;
        v3[1] = v28;
        **v3 = *(PCUNICODE_STRING)P;
        *v3[14] = v29;
        goto LABEL_44;
      }
LABEL_31:
      v9 = -1073741670;
      goto LABEL_11;
    }
    ExtraParameter = CmAllocateExtraParameter();
    if ( !ExtraParameter )
      goto LABEL_31;
    ObfReferenceObjectWithTag(a2, 0x67655256u);
    v17 = *(_OWORD *)v34;
    *ExtraParameter = a2;
    *((_DWORD *)ExtraParameter + 2) = v16 & 0xFFFFFFFB;
    *((_OWORD *)ExtraParameter + 1) = v17;
    RtlInitUnicodeString((PUNICODE_STRING)v34, 0LL);
    v18 = v38;
    ExtraParameterInBlock = CmpFindExtraParameterInBlock(v38[2], ExtraParameter - 4, &v38);
    v9 = ExtraParameterInBlock;
    if ( ExtraParameterInBlock < 0 )
    {
      if ( ExtraParameterInBlock == -1073741772 )
      {
        v22 = *(_QWORD **)(v20 + 8);
        if ( *v22 != v20 )
          __fastfail(3u);
        *v21 = v20;
        v9 = 0;
        v21[1] = v22;
        *v22 = v21;
        *(_QWORD *)(v20 + 8) = v21;
      }
      if ( v9 >= 0 )
      {
        v23 = (UNICODE_STRING *)*v3;
        ExtraParameter = 0LL;
        Buffer = (*v3)->Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0x67655256u);
          v23 = (UNICODE_STRING *)*v3;
        }
        *v23 = *(UNICODE_STRING *)P;
        RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
        *((_DWORD *)v18 + 2) = 872;
        v9 = -1073740541;
        goto LABEL_46;
      }
    }
    else
    {
      v9 = -1073741771;
    }
  }
LABEL_45:
  if ( v9 != -1073740541 )
  {
LABEL_11:
    if ( stru_140400AD8.LevelPlus1 > 2 )
    {
      v10 = *v3;
      p_Length = (unsigned __int16 *)&EmptyUnicodeString;
      v12 = (*v3)->Buffer == 0LL;
      LODWORD(v33) = v9;
      if ( !v12 )
        p_Length = &v10->Length;
      v13 = *p_Length;
      v45 = *((_QWORD *)p_Length + 1);
      v48 = &v33;
      v43 = &v46;
      v44 = 2LL;
      v46 = v13;
      v47 = 0;
      v49 = 4LL;
      TlgWrite(&stru_140400AD8, &unk_14036DBC8, &ActivityId, 0LL, 5u, &pData);
    }
    goto LABEL_15;
  }
LABEL_46:
  if ( stru_140400AD8.LevelPlus1 > 5 )
  {
    v30 = *v3;
    v31 = (unsigned __int16 *)&EmptyUnicodeString;
    v12 = (*v3)->Buffer == 0LL;
    LODWORD(v33) = -1073740541;
    if ( !v12 )
      v31 = &v30->Length;
    v32 = *v31;
    v45 = *((_QWORD *)v31 + 1);
    v48 = &v33;
    v43 = &v46;
    v44 = 2LL;
    v46 = v32;
    v47 = 0;
    v49 = 4LL;
    TlgWrite(&stru_140400AD8, &unk_14036DD24, &ActivityId, 0LL, 5u, &pData);
  }
LABEL_15:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v34[1] )
    ExFreePoolWithTag(v34[1], 0x67655256u);
  if ( ExtraParameter )
    CmpFreeExtraParameter(ExtraParameter - 6);
  return (unsigned int)v9;
}
