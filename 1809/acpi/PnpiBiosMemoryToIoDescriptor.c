/*
 * XREFs of PnpiBiosMemoryToIoDescriptor @ 0x1C00995E8
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0099A10 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C009A060 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosMemoryToIoDescriptor(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  __int16 v4; // di
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-10h]
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+10h]

  HIDWORD(v13) = 0;
  HIDWORD(v11) = 0;
  v4 = (a1[3] & 1) == 0;
  v5 = *a1 - 129;
  if ( v5 )
  {
    v6 = v5 - 4;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 0LL;
      v7 = 1;
      v8 = *((_DWORD *)a1 + 2);
      LODWORD(v13) = *((_DWORD *)a1 + 1);
      LODWORD(v11) = v8 + v13 - 1;
    }
    else
    {
      v8 = *((_DWORD *)a1 + 4);
      v7 = *((_DWORD *)a1 + 3);
      LODWORD(v13) = *((_DWORD *)a1 + 1);
      LODWORD(v11) = *((_DWORD *)a1 + 2) + v8 - 1;
    }
  }
  else
  {
    v7 = *((unsigned __int16 *)a1 + 4);
    v4 |= 0x10u;
    LODWORD(v13) = *((unsigned __int16 *)a1 + 2) << 8;
    v8 = *((unsigned __int16 *)a1 + 5) << 8;
    LODWORD(v11) = v8 + (*((unsigned __int16 *)a1 + 3) << 8) - 1;
    if ( !*((_WORD *)a1 + 4) )
      v7 = 0x10000;
  }
  if ( v8 )
  {
    result = PnpiUpdateResourceList(a2 + 8LL * a3, &v12);
    if ( (int)result < 0 )
      return result;
    v10 = v12;
    *(_WORD *)(v12 + 1) = 259;
    *(_WORD *)(v10 + 4) = v4;
    *(_QWORD *)(v10 + 16) = v13;
    *(_QWORD *)(v10 + 24) = v11;
    *(_DWORD *)(v10 + 12) = v7;
    *(_DWORD *)(v10 + 8) = v8;
  }
  return 0LL;
}
