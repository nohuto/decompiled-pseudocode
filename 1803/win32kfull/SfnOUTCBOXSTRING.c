/*
 * XREFs of SfnOUTCBOXSTRING @ 0x1C012C900
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ClientGetListboxString @ 0x1C012CAF8 (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTCBOXSTRING(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  unsigned int v11; // r14d
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int ListboxString; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD v22[4]; // [rsp+50h] [rbp-28h] BYREF

  v8 = 0;
  v11 = a2;
  if ( a1 )
    v13 = *(_QWORD *)a1;
  else
    v13 = 0LL;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(v13, a2);
  if ( result )
  {
    v16 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    if ( (v16 & 0x200) == 0 && (v16 & 0x30) != 0 )
      v8 = 1;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
    v22[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v22;
    v22[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    ListboxString = ClientGetListboxString(a1, v11, a3, a4, a5, a6, a7, v8, a8);
    ThreadUnlock1(v20, v19, v21);
    return ListboxString;
  }
  return result;
}
