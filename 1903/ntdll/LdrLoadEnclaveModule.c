/*
 * XREFs of LdrLoadEnclaveModule @ 0x1800CD6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CD828 @ 0x1800CD828 (sub_1800CD828.c)
 *     sub_1800CD8F0 @ 0x1800CD8F0 (sub_1800CD8F0.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 *     sub_1800CE068 @ 0x1800CE068 (sub_1800CE068.c)
 *     sub_1800D07EC @ 0x1800D07EC (sub_1800D07EC.c)
 */

NTSTATUS __cdecl LdrLoadEnclaveModule(PVOID BaseAddress, PWSTR DllPath, PUNICODE_STRING DllName)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
  NTSTATUS v8; // ebx
  _QWORD *v9; // r14
  _QWORD *i; // rsi
  unsigned int v11; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v12[3]; // [rsp+44h] [rbp-BCh] BYREF
  PWSTR Path[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+CCh] [rbp-34h]
  int v15; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v16; // [rsp+D8h] [rbp-28h]
  __int16 v17; // [rsp+E0h] [rbp-20h] BYREF

  v5 = sub_18001B2F8((unsigned __int64)BaseAddress, 1);
  v6 = v5;
  if ( !v5 )
    return -1073741664;
  if ( *((_DWORD *)v5 + 14) == 16 )
  {
    sub_180021798((__int64)DllName->Buffer, (__int64)DllPath, (__int64 *)Path);
    if ( v6[11] || (v9 = v6 + 12, (_QWORD *)*v9 != v9) )
    {
      v8 = -1073741800;
    }
    else
    {
      v15 = 0x1000000;
      v16 = &v17;
      v17 = 0;
      v11 = 0x800000;
      v8 = sub_180025240(&DllName->Length, (unsigned __int16 *)&v15, 0LL, (int *)&v11);
      if ( v8 >= 0 )
      {
        v12[0] = 0;
        v8 = sub_1800CD8F0(v6, &v15, v11, 7LL, Path, 0LL, 0LL, v12);
        if ( v8 >= 0 )
        {
          for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
          {
            v8 = sub_1800CE068(i[22]);
            if ( v8 < 0 )
              goto LABEL_15;
          }
          v8 = v12[0];
        }
      }
    }
  }
  else
  {
    v8 = -1073741664;
  }
LABEL_15:
  sub_1800CD828(v6, (unsigned int)v8);
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
  sub_1800CDB44(v6);
  if ( v14 )
    RtlReleasePath(Path[0]);
  sub_1800D07EC((unsigned int)v8);
  return v8;
}
