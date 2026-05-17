/*
 * XREFs of sub_18007D494 @ 0x18007D494
 * Callers:
 *     sub_180031F48 @ 0x180031F48 (sub_180031F48.c)
 * Callees:
 *     sub_180007DE8 @ 0x180007DE8 (sub_180007DE8.c)
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800D0BA0 @ 0x1800D0BA0 (sub_1800D0BA0.c)
 */

__int64 __fastcall sub_18007D494(__int64 a1)
{
  struct _PEB *v1; // rax
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  wchar_t *Buffer; // rbx
  __int64 result; // rax
  int v6; // r8d
  int v7; // r9d
  char v8[32]; // [rsp+30h] [rbp-58h] BYREF
  char v9[16]; // [rsp+50h] [rbp-38h] BYREF
  char v10[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = (wchar_t *)&unk_18011C2FC;
  result = (unsigned int)_InterlockedCompareExchange(&dword_1801660C8, 1, 0);
  if ( !(_DWORD)result )
  {
    sub_180007DE8(&dword_18015F488);
    result = (unsigned int)_InterlockedExchange(&dword_1801660C8, 2);
  }
  if ( (unsigned int)dword_18015F488 > 5 && dword_1801660C8 == 2 )
  {
    sub_1800D0BA0(v9, a1);
    sub_1800D0BA0(v10, Buffer);
    return sub_18008935C((unsigned int)&dword_18015F488, (unsigned int)&unk_18012BC39, v6, v7, 4, (__int64)v8);
  }
  return result;
}
