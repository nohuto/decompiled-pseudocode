/*
 * XREFs of CmpLogHiveRundownEvent @ 0x1407ECEC4
 * Callers:
 *     CmEtwRunDown @ 0x1407EC8A0 (CmEtwRunDown.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x140310770 (EtwTraceSiloDcEvent.c)
 */

void __fastcall CmpLogHiveRundownEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  _WORD v14[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v16[6]; // [rsp+48h] [rbp-21h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  __int64 v19; // [rsp+D0h] [rbp+67h] BYREF

  v19 = a1;
  v16[0] = 8LL;
  v14[0] = 0;
  v16[2] = 8LL;
  v5 = *(_QWORD *)(a1 + 1840);
  v16[4] = 4LL;
  v7 = 3;
  v8 = *(_QWORD *)(a1 + 1856);
  v15 = a1 + 1792;
  v16[1] = &v19;
  v16[3] = a1 + 4820;
  if ( v5 )
  {
    v7 = 4;
    v17 = *(unsigned __int16 *)(a1 + 1832);
    v16[5] = v5;
    v18 = 0;
  }
  v9 = 2LL * v7;
  v10 = v7 + 1;
  v16[v9 - 1] = v14;
  v16[v9] = 2LL;
  if ( v8 )
  {
    v11 = *(unsigned __int16 *)(a1 + 1848);
    v12 = 2LL * v10++;
    v16[v12 - 1] = v8;
    LODWORD(v16[v12]) = v11;
    HIDWORD(v16[v12]) = 0;
  }
  v13 = 2LL * v10;
  v16[v13 - 1] = v14;
  v16[v13] = 2LL;
  EtwTraceSiloDcEvent((__int64)&v15, v10 + 1, a2, a3, 0x927u, 0x401802u);
}
