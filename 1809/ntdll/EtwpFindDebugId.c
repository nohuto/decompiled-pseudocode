/*
 * XREFs of EtwpFindDebugId @ 0x18010FD30
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x18010FE08 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall EtwpFindDebugId(unsigned __int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  int v6; // ebx
  NTSTATUS v8; // eax
  _DWORD *v9; // r8
  unsigned int v10; // r9d
  _DWORD *v11; // rcx
  unsigned int v13; // eax
  _DWORD *v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+5Ch] [rbp+14h]

  v16 = HIDWORD(a2);
  v6 = 0;
  v15 = 0;
  v8 = RtlpImageDirectoryEntryToDataEx(a1, 1, 6u, &v15, &v14);
  v9 = v14;
  if ( v8 < 0 )
    v9 = 0LL;
  if ( !v9 || v15 < 0x1C )
    return 87LL;
  v10 = v15 / 0x1C;
  if ( !(v15 / 0x1C) )
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
  v13 = v9[4];
  if ( v13 < 0x1C )
    return 87LL;
  *a4 = v13;
  return 0LL;
}
