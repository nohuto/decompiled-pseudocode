/*
 * XREFs of sub_180115FEC @ 0x180115FEC
 * Callers:
 *     sub_18011746C @ 0x18011746C (sub_18011746C.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180116368 @ 0x180116368 (sub_180116368.c)
 *     sub_1801166D0 @ 0x1801166D0 (sub_1801166D0.c)
 *     sub_180117C3C @ 0x180117C3C (sub_180117C3C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180115FEC(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v12; // r10d
  int v13; // r11d
  _QWORD *v14; // r8
  int v15; // eax
  char v16; // bl
  __int64 result; // rax
  __int64 v18; // rdi
  unsigned int v19; // r15d
  unsigned int v20; // r12d
  unsigned int v21; // ebp
  unsigned int v22; // r14d
  int v23; // [rsp+40h] [rbp-D8h]
  unsigned int v24; // [rsp+44h] [rbp-D4h]
  _QWORD v26[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[120]; // [rsp+A0h] [rbp-78h] BYREF

  v12 = a1;
  v13 = a5;
  v14 = a7;
  v15 = 3;
  v16 = 1;
  if ( a6 == 1 )
    v15 = 1;
  v23 = v15;
  result = 0LL;
  if ( a6 == 1 )
    result = 2LL;
  v18 = 0LL;
  v19 = 0;
  v24 = a4 - result;
  if ( a4 != (_DWORD)result )
  {
    do
    {
      v20 = *(_DWORD *)(a3 + 4 * v18);
      v21 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v18 + 1));
      v22 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v18 + 2));
      if ( v20 >= a2 || v21 >= a2 || v22 >= a2 )
      {
        sub_18000E4E8(v26);
        sub_180116368(pExceptionObject, v26);
        throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
      }
      if ( *v14 && v19 == 100 * (v19 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 40LL))(*v14);
        v12 = a1;
        v13 = a5;
      }
      if ( a6 != 1 || (v18 & 1) == 0 )
        v16 = 0;
      sub_180117C3C(v12, v13, v20, v21, v22, v16, a9, a10);
      result = sub_1801166D0(a1, v20, v21, v22, v16, a8);
      v18 = (unsigned int)(v23 + v18);
      v16 = 1;
      ++v19;
      v14 = a7;
      v12 = a1;
      v13 = a5;
    }
    while ( (unsigned int)v18 < v24 );
  }
  return result;
}
