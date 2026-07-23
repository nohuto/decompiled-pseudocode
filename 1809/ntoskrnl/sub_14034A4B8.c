/*
 * XREFs of sub_14034A4B8 @ 0x14034A4B8
 * Callers:
 *     sub_140346BE8 @ 0x140346BE8 (sub_140346BE8.c)
 *     KiVerifyXcpt15 @ 0x14098F2F0 (KiVerifyXcpt15.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14034A4B8(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r11
  unsigned __int64 *v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  BOOL v9; // r10d
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1488);
  else
    v3 = MmPteBase;
  v4 = 4LL;
  v5 = v11;
  LODWORD(v6) = 4;
  v7 = v3 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  do
  {
    *v5 = v7;
    if ( a1 )
      v8 = *(_QWORD *)(a1 + 1488);
    else
      v8 = MmPteBase;
    ++v5;
    v7 = v8 + ((v7 >> 9) & 0x7FFFFFFFF8LL);
    --v4;
  }
  while ( v4 );
  v9 = 0;
  do
  {
    v6 = (unsigned int)(v6 - 1);
    if ( v9 )
    {
      v11[v6] = 0LL;
    }
    else
    {
      if ( !(_DWORD)v6 )
        break;
      v9 = *(char *)v11[v6] < 0;
    }
  }
  while ( (_DWORD)v6 );
  LOBYTE(v2) = v11[0] == 0LL;
  return v2;
}
