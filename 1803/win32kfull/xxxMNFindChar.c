/*
 * XREFs of xxxMNFindChar @ 0x1C0206D70
 * Callers:
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 * Callees:
 *     xxxClientFindMnemChar @ 0x1C01E1818 (xxxClientFindMnemChar.c)
 *     MNFindNextValidItem @ 0x1C0206CB0 (MNFindNextValidItem.c)
 */

__int64 __fastcall xxxMNFindChar(__int64 **a1, int a2, int a3, unsigned int *a4)
{
  int v4; // r14d
  int v5; // ebx
  __int16 v6; // r13
  unsigned int MnemChar; // ebp
  unsigned int v10; // edi
  int ValidItem; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r12d
  int v16; // eax
  _QWORD *v17; // rax
  _WORD *v18; // rcx
  const WCHAR *v19; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    return 0LL;
  MnemChar = 0;
  v10 = -1;
  ValidItem = a3;
  if ( a3 < 0 )
  {
    v12 = *(_QWORD *)(**a1 + 40);
    v13 = (__int64)a1[2];
    if ( !v13 )
      v13 = **a1;
    ValidItem = MNFindNextValidItem(v13, *(_DWORD *)(v12 + 44), -1, 1);
  }
  do
  {
    v14 = (__int64)a1[2];
    v15 = v5;
    if ( !v14 )
      v14 = **a1;
    v16 = MNFindNextValidItem(v14, v5, 1, 1);
    v5 = v16;
    if ( v16 == -1 || v16 == v4 )
      break;
    if ( v4 == -1 )
      v4 = v16;
    v17 = (_QWORD *)(*(_QWORD *)(**a1 + 88) + 96LL * v16);
    v18 = (_WORD *)v17[3];
    if ( v18 && *(_DWORD *)(*v17 + 48LL) )
    {
      v19 = v18 + 1;
      if ( *v18 != 8 )
        v19 = (const WCHAR *)v17[3];
      RtlInitUnicodeString(&DestinationString, v19);
      MnemChar = (unsigned int)xxxClientFindMnemChar(&DestinationString.Length, v6);
      if ( MnemChar == 128 && v10 == -1 )
        v10 = v5;
    }
  }
  while ( v5 != v15 && MnemChar != 1 && ValidItem != v5 );
  if ( MnemChar == 1 )
    v10 = v5;
  *a4 = MnemChar;
  return v10;
}
