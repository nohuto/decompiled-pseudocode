/*
 * XREFs of UmfdQueryTrueTypeTable @ 0x1C00415F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdQueryTrueTypeTable(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v12; // eax
  unsigned int v13; // ecx
  void **v15; // [rsp+38h] [rbp-79h] BYREF
  int v16; // [rsp+40h] [rbp-71h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-69h]
  __int64 v18; // [rsp+50h] [rbp-61h]
  char v19; // [rsp+58h] [rbp-59h]
  __int64 v20; // [rsp+60h] [rbp-51h]
  int v21; // [rsp+68h] [rbp-49h]
  int v22; // [rsp+6Ch] [rbp-45h]
  int v23; // [rsp+70h] [rbp-41h]
  int v24; // [rsp+74h] [rbp-3Dh]
  __int64 v25; // [rsp+78h] [rbp-39h]
  _QWORD *v26; // [rsp+80h] [rbp-31h]
  _DWORD *v27; // [rsp+88h] [rbp-29h]
  int v28; // [rsp+90h] [rbp-21h]
  __int128 v29; // [rsp+98h] [rbp-19h]
  __int64 v30; // [rsp+A8h] [rbp-9h]
  __int64 ThreadInformation; // [rsp+B8h] [rbp+7h] BYREF

  if ( a7 )
    *a7 = 0LL;
  if ( a8 )
    *a8 = 0;
  v15 = &FontDriverDdiRequest::`vftable';
  v16 = 10;
  CurrentThread = KeGetCurrentThread();
  v19 = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v18 = ThreadInformation;
    v19 = 1;
  }
  v30 = 0LL;
  v15 = &QueryTrueTypeTableRequest::`vftable';
  v24 = a5;
  v27 = a8;
  v25 = a6;
  v29 = 0LL;
  v20 = a1;
  v21 = a2;
  v22 = a3;
  v23 = a4;
  v26 = a7;
  v28 = -1;
  v12 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 8), &v15);
  v13 = v28;
  if ( v12 < 0 )
    return (unsigned int)-1;
  return v13;
}
