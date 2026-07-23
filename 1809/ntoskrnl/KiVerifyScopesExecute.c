/*
 * XREFs of KiVerifyScopesExecute @ 0x1409D0900
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiVerifyPdata @ 0x1409D0FD0 (KiVerifyPdata.c)
 */

void __fastcall KiVerifyScopesExecute(PVOID Parameter)
{
  int v1; // ebx
  __int64 (__fastcall **v2)(); // rdi
  int v3; // esi
  __int64 (__fastcall *v4)(); // rax
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  BOOL v7; // [rsp+38h] [rbp-18h]
  int v8; // [rsp+3Ch] [rbp-14h]
  int v9; // [rsp+40h] [rbp-10h]
  ULONG_PTR v10; // [rsp+48h] [rbp-8h]

  v10 = 0LL;
  v1 = KiVerifyPass;
  v6 = 0xFEFFFFFFFFFFFFFFuLL;
  if ( !KiVerifyPass )
  {
    BugCheckParameter4 = v10;
    goto LABEL_10;
  }
  do
  {
    v2 = KiVerifyXcptRoutines;
    v7 = (v1 & 1) == 0;
    v3 = 0;
    do
    {
      v4 = *v2;
      v8 = 0;
      v9 = 0;
      ((void (__fastcall *)(unsigned __int64 *))v4)(&v6);
      if ( !v9 )
        KeBugCheckEx(0x14Du, v3, v1, v8, 0LL);
      ++v3;
      ++v2;
      BugCheckParameter4 = __ROL8__(v8 ^ v10, v8 & 0x3F);
      v10 = BugCheckParameter4;
    }
    while ( (__int64)v2 < (__int64)&qword_140A0B148 );
    --v1;
  }
  while ( v1 );
  if ( BugCheckParameter4 != 0x7493D5224FA9E69ALL )
LABEL_10:
    KeBugCheckEx(0x14Du, 0xFFFFFFFFuLL, 0LL, 0x7493D5224FA9E69AuLL, BugCheckParameter4);
  KiVerifyPdata((ULONG_PTR)PsNtosImageBase);
  KiVerifyPdata((ULONG_PTR)PsHalImageBase);
}
