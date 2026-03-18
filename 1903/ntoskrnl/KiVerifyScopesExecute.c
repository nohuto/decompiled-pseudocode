/*
 * XREFs of KiVerifyScopesExecute @ 0x140A14430
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiVerifyPdata @ 0x140A14B10 (KiVerifyPdata.c)
 */

void __fastcall KiVerifyScopesExecute(PVOID Parameter)
{
  int v1; // ebx
  __int64 (__fastcall **v2)(); // rdi
  int v3; // esi
  __int64 (__fastcall *v4)(); // rax
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 v7; // [rsp+38h] [rbp-28h]
  ULONG_PTR v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  v10 = 0;
  v8 = 0LL;
  v9 = 0;
  v1 = KiVerifyPass;
  v6 = 0xFEFFFFFFFFFFFFFFuLL;
  v7 = 0LL;
  if ( !KiVerifyPass )
  {
    BugCheckParameter4 = v8;
    goto LABEL_10;
  }
  do
  {
    v2 = KiVerifyXcptRoutines;
    LODWORD(v7) = (v1 & 1) == 0;
    v3 = 0;
    do
    {
      v4 = *v2;
      *(_QWORD *)((char *)&v7 + 4) = 0LL;
      ((void (__fastcall *)(unsigned __int64 *))v4)(&v6);
      if ( !DWORD2(v7) )
        KeBugCheckEx(0x14Du, v3, v1, SDWORD1(v7), 0LL);
      ++v3;
      ++v2;
      BugCheckParameter4 = __ROL8__(SDWORD1(v7) ^ v8, BYTE4(v7) & 0x3F);
      v8 = BugCheckParameter4;
    }
    while ( (__int64)v2 < (__int64)&qword_140A50148 );
    --v1;
  }
  while ( v1 );
  if ( BugCheckParameter4 != 0x7493D5224FA9E69ALL )
LABEL_10:
    KeBugCheckEx(0x14Du, 0xFFFFFFFFuLL, 0LL, 0x7493D5224FA9E69AuLL, BugCheckParameter4);
  KiVerifyPdata((ULONG_PTR)PsNtosImageBase);
  KiVerifyPdata((ULONG_PTR)PsHalImageBase);
}
