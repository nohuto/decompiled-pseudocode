/*
 * XREFs of sub_180073150 @ 0x180073150
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     LdrQueryImageFileExecutionOptionsEx @ 0x1800799E0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D4A28 @ 0x1800D4A28 (sub_1800D4A28.c)
 *     LdrOpenImageFileOptionsKey @ 0x1800E0AF0 (LdrOpenImageFileOptionsKey.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0BA0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800E1B98 @ 0x1800E1B98 (sub_1800E1B98.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     sub_1800732AC @ 0x1800732AC (sub_1800732AC.c)
 *     sub_18007330C @ 0x18007330C (sub_18007330C.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x18009CA80 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x18009E0B0 (ZwDeleteKey.c)
 *     sub_1800E1A7C @ 0x1800E1A7C (sub_1800E1A7C.c)
 */

__int64 __fastcall sub_180073150(unsigned __int16 *a1, __int64 a2, char a3, _QWORD *a4)
{
  ACCESS_MASK v5; // esi
  __int64 v6; // r11
  char v8; // r12
  _WORD *v9; // r8
  int v10; // r10d
  int v11; // r11d
  char v12; // r14
  __int64 result; // rax
  void *v14; // rdi
  NTSTATUS v15; // eax
  NTSTATUS inited; // ebx
  int v17; // eax
  void *v18; // rdi
  int v19; // eax
  _UNICODE_STRING Handle; // [rsp+40h] [rbp-29h] BYREF
  __int16 v21; // [rsp+50h] [rbp-19h] BYREF
  _WORD *v22; // [rsp+58h] [rbp-11h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+67h] BYREF
  int Data; // [rsp+E0h] [rbp+77h] BYREF
  _QWORD *v26; // [rsp+E8h] [rbp+7Fh]

  v26 = a4;
  *a4 = 0LL;
  v5 = a2;
  v6 = *a1;
  v8 = 0;
  v9 = (_WORD *)(v6 + *((_QWORD *)a1 + 1));
  *(_QWORD *)&Handle.Length = 0LL;
  KeyHandle = 0LL;
  v10 = v6;
  if ( a3 && (v6 + 2 > (unsigned __int64)a1[1] || *v9) )
    return 3221225485LL;
  if ( (_DWORD)v6 )
  {
    while ( *(v9 - 1) != 92 )
    {
      --v9;
      v10 -= 2;
      if ( !v10 )
        goto LABEL_7;
    }
    v8 = 1;
  }
LABEL_7:
  v11 = v6 - v10;
  v22 = v9;
  v21 = v11;
  if ( (unsigned __int16)v11 != v11 )
    return 3221225507LL;
  if ( a3 )
  {
    LOBYTE(v9) = a3;
    v12 = 1;
    result = sub_18007330C(&Handle, a2, v9);
  }
  else
  {
    v12 = 0;
    result = sub_1800732AC(&Handle);
  }
  if ( (int)result >= 0 )
  {
    v14 = *(void **)&Handle.Length;
    ObjectAttributes.RootDirectory = *(HANDLE *)&Handle.Length;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a3 )
      v15 = ZwCreateKey(&KeyHandle, v5, &ObjectAttributes, 0, 0LL, 0, 0LL);
    else
      v15 = ZwOpenKey(&KeyHandle, v5, &ObjectAttributes);
    inited = v15;
    if ( v12 )
      ZwClose(v14);
    if ( inited >= 0 )
    {
      *(_QWORD *)&Handle.Length = KeyHandle;
      v17 = sub_180073374(&Handle, v5, a1);
      v18 = *(void **)&Handle.Length;
      inited = v17;
      if ( v17 < 0 )
        goto LABEL_37;
      if ( *(HANDLE *)&Handle.Length == KeyHandle && v8 && a3 )
      {
        *(_QWORD *)&Handle.Length = 0LL;
        v19 = sub_1800E1A7C(&Handle, KeyHandle, v5 | 0x10000);
        v18 = *(void **)&Handle.Length;
        inited = v19;
        if ( v19 >= 0 )
        {
          inited = RtlInitUnicodeStringEx(&Handle, L"FilterFullPath");
          if ( inited < 0
            || (inited = ZwSetValueKey(v18, &Handle, 0, 1u, *((PVOID *)a1 + 1), a1[1]), inited < 0)
            || (Data = 1, inited = RtlInitUnicodeStringEx(&Handle, L"UseFilter"), inited < 0)
            || (inited = ZwSetValueKey(KeyHandle, &Handle, 0, 4u, &Data, 4u), inited < 0) )
          {
            ZwDeleteKey(v18);
          }
        }
        ZwClose(KeyHandle);
      }
      if ( inited < 0 )
      {
LABEL_37:
        if ( v18 )
          ZwClose(v18);
      }
      else
      {
        *v26 = v18;
      }
    }
    return (unsigned int)inited;
  }
  return result;
}
