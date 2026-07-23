/*
 * XREFs of EtwpFindDebugId @ 0x18010E060
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x18010E134 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall EtwpFindDebugId(unsigned __int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // ebx
  NTSTATUS v8; // eax
  _DWORD *v9; // r8
  unsigned int v10; // r9d
  _DWORD *v11; // rcx
  _DWORD *v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+5Ch] [rbp+14h]

  v15 = HIDWORD(a2);
  v6 = 0;
  v14 = 0;
  v8 = RtlpImageDirectoryEntryToDataEx(a1, 1, 6u, &v14, &v13);
  v9 = v13;
  if ( v8 < 0 )
    v9 = 0LL;
  if ( !v9 || v14 < 0x1C )
    return 87LL;
  v10 = v14 / 0x1C;
  if ( !(v14 / 0x1C) )
    return 232LL;
  while ( 1 )
  {
    if ( v9[3] == 2 )
    {
      v11 = (_DWORD *)(a1 + (unsigned int)v9[5]);
      *a3 = v11;
      if ( *v11 == 1396986706 )
        break;
    }
    v9 += 7;
    if ( ++v6 >= v10 )
      return 232LL;
  }
  *a4 = v9[4];
  return 0LL;
}
