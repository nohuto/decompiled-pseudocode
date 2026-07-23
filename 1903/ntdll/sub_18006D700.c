/*
 * XREFs of sub_18006D700 @ 0x18006D700
 * Callers:
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_18006D83C @ 0x18006D83C (sub_18006D83C.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 */

void __fastcall sub_18006D700(_QWORD **a1)
{
  _QWORD *i; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rdx
  __int64 v7; // r15
  __int64 v8; // [rsp+60h] [rbp-68h] BYREF
  int v9; // [rsp+68h] [rbp-60h]
  _BYTE v10[56]; // [rsp+70h] [rbp-58h] BYREF

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v3 = i - 20;
    *((_WORD *)i - 26) = 0;
    sub_18006D83C(i - 20);
    v4 = i - 16;
    v5 = *v4;
    if ( *v4 )
    {
      v6 = (__int64 **)v3[5];
      if ( *(__int64 **)(v5 + 8) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      *v4 = 1LL;
    }
    v7 = v3[7];
    if ( v7 && (v3[13] & 0x80000) != 0 )
    {
      if ( (dword_18015FAB0 & 5) != 0 )
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          2060,
          (unsigned int)"LdrpProcessDetachNode",
          2,
          (__int64)"Uninitializing DLL \"%wZ\" (Init routine: %p)\n",
          v3 + 9,
          v3[7]);
      v8 = 72LL;
      v9 = 1;
      memset(v10, 0, sizeof(v10));
      RtlActivateActivationContextUnsafeFast((__int64)&v8, v3[17]);
      if ( *((_WORD *)v3 + 55) )
        sub_18002507C(0, (__int64)(i - 20));
      sub_180024FBC(v7, v3[6], 0);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v8);
    }
  }
}
