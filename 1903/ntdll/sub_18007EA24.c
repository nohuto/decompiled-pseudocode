/*
 * XREFs of sub_18007EA24 @ 0x18007EA24
 * Callers:
 *     RtlApplyRXactNoFlush @ 0x18007E9B0 (RtlApplyRXactNoFlush.c)
 *     RtlApplyRXact @ 0x1800895E0 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008A420 (RtlInitializeRXact.c)
 * Callees:
 *     sub_1800883AC @ 0x1800883AC (sub_1800883AC.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x18009E0B0 (ZwDeleteKey.c)
 */

__int64 __fastcall sub_18007EA24(__int64 *a1)
{
  unsigned int *v1; // rsi
  unsigned int v2; // r14d
  __int64 v3; // r13
  char v4; // r12
  unsigned int v5; // r15d
  unsigned int *i; // rbx
  HANDLE v7; // rcx
  char v8; // bp
  NTSTATUS v9; // eax
  int v10; // edi
  __int64 result; // rax
  HANDLE v12; // rcx
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v1 = (unsigned int *)a1[3];
  v2 = 0;
  v3 = *a1;
  v4 = *((_BYTE *)a1 + 16);
  v5 = *v1;
  for ( i = v1 + 4; v2 < v5; i = (unsigned int *)((char *)i + *i) )
  {
    *((_QWORD *)i + 2) += v1;
    *((_QWORD *)i + 4) += v1;
    *((_QWORD *)i + 7) += v1;
    if ( i[1] == 1 )
    {
      v12 = (HANDLE)*((_QWORD *)i + 5);
      if ( v12 == (HANDLE)-1LL || !v4 )
      {
        result = sub_1800883AC(v3, 1LL, i + 2, &Handle);
        if ( (int)result < 0 )
        {
          if ( (_DWORD)result != -1073741772 )
            return result;
          goto LABEL_11;
        }
        v12 = Handle;
        v8 = 1;
      }
      else
      {
        Handle = (HANDLE)*((_QWORD *)i + 5);
        v8 = 0;
      }
      v9 = ZwDeleteKey(v12);
    }
    else
    {
      if ( i[1] != 2 )
        return 3221225485LL;
      v7 = (HANDLE)*((_QWORD *)i + 5);
      if ( v7 == (HANDLE)-1LL || !v4 )
      {
        result = sub_1800883AC(v3, 2LL, i + 2, &Handle);
        if ( (int)result < 0 )
          return result;
        v7 = Handle;
        v8 = 1;
      }
      else
      {
        Handle = (HANDLE)*((_QWORD *)i + 5);
        v8 = 0;
      }
      v9 = ZwSetValueKey(v7, (PUNICODE_STRING)(i + 6), 0, i[12], *((PVOID *)i + 7), i[13]);
    }
    v10 = v9;
    if ( v8 )
      ZwClose(Handle);
    if ( v10 < 0 )
      return (unsigned int)v10;
LABEL_11:
    ++v2;
  }
  return 0LL;
}
