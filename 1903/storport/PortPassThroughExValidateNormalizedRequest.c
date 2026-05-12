/*
 * XREFs of PortPassThroughExValidateNormalizedRequest @ 0x1C0075644
 * Callers:
 *     PortPassThroughExValidate @ 0x1C0051650 (PortPassThroughExValidate.c)
 * Callees:
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall PortPassThroughExValidateNormalizedRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned int v10; // ecx
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // r9
  char v15; // r8
  bool v16; // zf
  unsigned __int64 v17; // r8
  bool v18; // cc
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  char v22; // al
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v6 = *(_QWORD *)(a2 + 184);
  v7 = *(unsigned int *)(v6 + 16);
  v8 = *(unsigned int *)(v6 + 8);
  if ( *(_BYTE *)(a1 + 56) == 72 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      return 3221225659LL;
    ZwClose(KeyHandle);
  }
  v10 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 24);
  v11 = *(_BYTE *)(a1 + 17);
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 28);
    if ( v12 < v10 )
      return 3221225485LL;
    v10 = v12 + v11;
    if ( v10 > (unsigned int)v7 || v10 > (unsigned int)v8 )
      return 3221225485LL;
  }
  v13 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v13 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      return 3221225485LL;
  }
  v14 = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)v14 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v15 = *(_BYTE *)(a1 + 18);
  if ( v15 == 2 )
  {
    if ( (_DWORD)v14 || (_DWORD)v13 || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    v16 = *(_QWORD *)(a1 + 40) == 0LL;
  }
  else
  {
    if ( (!v15 || v15 == 3) && !(_DWORD)v13 || ((v15 - 1) & 0xFD) == 0 && !(_DWORD)v14 )
      return 3221225485LL;
    if ( v15 )
    {
      if ( v15 == 1 && ((_DWORD)v13 || *(_QWORD *)(a1 + 40)) )
        return 3221225485LL;
      goto LABEL_31;
    }
    if ( (_DWORD)v14 )
      return 3221225485LL;
    v16 = *(_QWORD *)(a1 + 48) == 0LL;
  }
  if ( !v16 )
    return 3221225485LL;
LABEL_31:
  if ( a3 )
    goto LABEL_51;
  if ( v15 )
  {
    if ( v15 != 1 )
    {
      if ( v15 == 3 )
      {
        if ( !(_DWORD)v13 )
          return 3221225485LL;
        v20 = *(_QWORD *)(a1 + 40);
        if ( v20 < v10 )
          return 3221225485LL;
        if ( v20 + v13 > v7 )
          return 3221225485LL;
        if ( v20 + v13 > v8 )
          return 3221225485LL;
        if ( !(_DWORD)v14 )
          return 3221225485LL;
        v21 = *(_QWORD *)(a1 + 48);
        if ( v21 < (unsigned int)(v13 + *(_DWORD *)(a1 + 40)) || v21 + v14 > v8 || v21 + v14 > v7 )
          return 3221225485LL;
      }
      goto LABEL_51;
    }
    if ( !(_DWORD)v14 )
      return 3221225485LL;
    v19 = *(_QWORD *)(a1 + 48);
    if ( v19 < v10 )
      return 3221225485LL;
    v18 = v19 + v14 <= v8;
  }
  else
  {
    if ( !(_DWORD)v13 )
      return 3221225485LL;
    v17 = *(_QWORD *)(a1 + 40);
    if ( v17 < v10 )
      return 3221225485LL;
    v18 = v17 + v13 <= v7;
  }
  if ( !v18 )
    return 3221225485LL;
LABEL_51:
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) - 1) > 0x1A5DF )
    return 3221225485LL;
  v22 = *(_BYTE *)(a1 + 56);
  if ( v22 == 24 || (unsigned __int8)(v22 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
