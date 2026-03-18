/*
 * XREFs of SfnOUTCBOXSTRING @ 0x1C0155A30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ClientGetListboxString @ 0x1C0155C6C (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTCBOXSTRING(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  _QWORD *v11; // rbx
  int v12; // edi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int ListboxString; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-18h]

  v23 = 0LL;
  v24 = 0LL;
  v10 = a2;
  v25 = 0LL;
  v11 = a1;
  if ( a1 )
    a1 = (_QWORD *)*a1;
  v12 = 1;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure((unsigned __int64)a1, a2, a3, a4);
  if ( result )
  {
    v17 = *(_DWORD *)(v11[5] + 28LL);
    if ( (v17 & 0x200) != 0 || (v17 & 0x30) == 0 )
      v12 = 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
    v23 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
    v24 = v11;
    HMLockObject(v11);
    ListboxString = ClientGetListboxString(v11, v10, a3, a4, a5, a6, a7, v12, a8);
    ThreadUnlock1(v21, v20, v22);
    return ListboxString;
  }
  return result;
}
