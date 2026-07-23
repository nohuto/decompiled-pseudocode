/*
 * XREFs of SeValidSecurityDescriptor @ 0x14069E910
 * Callers:
 *     EtwpGetGuidSecurityDescriptor @ 0x1405C7158 (EtwpGetGuidSecurityDescriptor.c)
 *     WmipSDRegistryQueryRoutine @ 0x14069E890 (WmipSDRegistryQueryRoutine.c)
 *     PiSwValidateCreateData @ 0x1406D8610 (PiSwValidateCreateData.c)
 *     SepReadAndPopulateCapes @ 0x140738268 (SepReadAndPopulateCapes.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     RtlValidAcl @ 0x140632720 (RtlValidAcl.c)
 */

BOOLEAN __stdcall SeValidSecurityDescriptor(ULONG Length, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  char *v4; // rsi
  char *v5; // r14
  char *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r9d
  UINT puResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( Length < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
    return 0;
  v7 = *((unsigned int *)SecurityDescriptor + 1);
  if ( !(_DWORD)v7 )
    return 0;
  v8 = (unsigned int)v7;
  if ( ((v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
    return 0;
  if ( (unsigned int)v7 > Length )
    return 0;
  if ( Length - (unsigned int)v7 < 0xC )
    return 0;
  if ( *((_BYTE *)SecurityDescriptor + v7) != 1 )
    return 0;
  v9 = *((_BYTE *)SecurityDescriptor + v7 + 1);
  if ( v9 > 0xFu )
    return 0;
  if ( Length - (unsigned int)v7 < 4 * (unsigned int)v9 + 8 )
    return 0;
  v10 = *((unsigned int *)SecurityDescriptor + 2);
  if ( (_DWORD)v10 )
  {
    if ( ((v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v10 )
      return 0;
    if ( (unsigned int)v10 > Length )
      return 0;
    if ( Length - (unsigned int)v10 < 0xC )
      return 0;
    v4 = (char *)SecurityDescriptor + v10;
    if ( *((_BYTE *)SecurityDescriptor + v10) != 1 )
      return 0;
    v11 = v4[1];
    if ( v11 > 0xFu || Length - (unsigned int)v10 < 4 * (unsigned int)v11 + 8 )
      return 0;
  }
  if ( ((v12 = *((unsigned int *)SecurityDescriptor + 4), !(_DWORD)v12)
     || ((v12 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v12
     && (unsigned int)v12 <= Length
     && Length - (unsigned int)v12 >= 8
     && (v5 = (char *)SecurityDescriptor + v12,
         Length - (unsigned int)v12 >= *(unsigned __int16 *)((char *)SecurityDescriptor + v12 + 2))
     && RtlValidAcl((PACL)((char *)SecurityDescriptor + v12)))
    && ((v13 = *((unsigned int *)SecurityDescriptor + 3), !(_DWORD)v13)
     || ((v13 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v13
     && (unsigned int)v13 <= Length
     && Length - (unsigned int)v13 >= 8
     && (v6 = (char *)SecurityDescriptor + v13,
         Length - (unsigned int)v13 >= *(unsigned __int16 *)((char *)SecurityDescriptor + v13 + 2))
     && RtlValidAcl((PACL)((char *)SecurityDescriptor + v13)))
    && (!EvaluateCurrentState((_DWORD **)&g_Feature_2479880507_60992954_FeatureDescriptorDetails)
     || (v14 = *((unsigned __int8 *)SecurityDescriptor + v8 + 1),
         puResult = 0,
         RtlUIntAdd(0x14u, (4 * v14 + 11) & 0xFFFFFFFC, &puResult) >= 0)
     && (!v4 || RtlUIntAdd(puResult, v15 & (4 * (unsigned __int8)v4[1] + 11), &puResult) >= 0)
     && (!v5 || RtlUIntAdd(puResult, v15 & (*((unsigned __int16 *)v5 + 1) + 3), &puResult) >= 0)
     && (!v6 || RtlUIntAdd(puResult, v15 & (*((unsigned __int16 *)v6 + 1) + 3), &puResult) >= 0)
     && puResult <= Length) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
