/*
 * XREFs of SfnOUTCBOXSTRING @ 0x1C01567F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ClientGetListboxString @ 0x1C0156A2C (ClientGetListboxString.c)
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
  int v16; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int ListboxString; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+50h] [rbp-28h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-18h]

  v22 = 0LL;
  v23 = 0LL;
  v10 = a2;
  v24 = 0LL;
  v11 = a1;
  if ( a1 )
    a1 = (_QWORD *)*a1;
  v12 = 1;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure((unsigned __int64)a1, a2, a3);
  if ( result )
  {
    v16 = *(_DWORD *)(v11[5] + 28LL);
    if ( (v16 & 0x200) != 0 || (v16 & 0x30) == 0 )
      v12 = 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
    v22 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
    v23 = v11;
    HMLockObject(v11);
    ListboxString = ClientGetListboxString(v11, v10, a3, a4, a5, a6, a7, v12, a8);
    ThreadUnlock1(v20, v19, v21);
    return ListboxString;
  }
  return result;
}
