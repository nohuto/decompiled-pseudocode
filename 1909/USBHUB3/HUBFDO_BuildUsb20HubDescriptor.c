/*
 * XREFs of HUBFDO_BuildUsb20HubDescriptor @ 0x1C000C778
 * Callers:
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0071BAC (HUBFDO_IoctlGetNodeInformation.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C00811C0 (WMI_QueryInstanceHubNodeInfo.c)
 * Callees:
 *     memset @ 0x1C0041640 (memset.c)
 */

char __fastcall HUBFDO_BuildUsb20HubDescriptor(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx

  memset(a2, 0, 0x47uLL);
  if ( *(_BYTE *)(a1 + 240) )
  {
    LODWORD(v5) = *(_DWORD *)(a1 + 256);
    if ( (int)v5 > 0 )
    {
      if ( (int)v5 <= 2 )
      {
        *a2 = *(_OWORD *)(a1 + 1180);
        a2[1] = *(_OWORD *)(a1 + 1196);
        a2[2] = *(_OWORD *)(a1 + 1212);
        a2[3] = *(_OWORD *)(a1 + 1228);
        *((_DWORD *)a2 + 16) = *(_DWORD *)(a1 + 1244);
        *((_WORD *)a2 + 34) = *(_WORD *)(a1 + 1248);
        LOBYTE(v5) = *(_BYTE *)(a1 + 1250);
        *((_BYTE *)a2 + 70) = v5;
      }
      else if ( (_DWORD)v5 == 3 )
      {
        *(_WORD *)a2 = 10505;
        v7 = *(unsigned __int8 *)(a1 + 48);
        *((_BYTE *)a2 + 2) = v7;
        v8 = v7;
        v9 = 0;
        *(_WORD *)((char *)a2 + 3) = *(_WORD *)(a1 + 1183) & 0x1F;
        *((_BYTE *)a2 + 5) = *(_BYTE *)(a1 + 1185);
        LOBYTE(v5) = *(_BYTE *)(a1 + 1186);
        *((_BYTE *)a2 + 6) = v5;
        v10 = (v8 >> 3) + 1;
        if ( v10 )
        {
          v5 = 0LL;
          do
          {
            *((_BYTE *)a2 + v5 + 7) = 0;
            ++v9;
            *((_BYTE *)a2 + v10 + v5 + 7) = -1;
            v5 = v9;
          }
          while ( v9 < v10 );
        }
      }
    }
  }
  else
  {
    *(_WORD *)a2 = 10505;
    v4 = 0;
    LOBYTE(v5) = *(_BYTE *)(a1 + 48);
    *((_BYTE *)a2 + 2) = v5;
    *((_BYTE *)a2 + 5) = 2;
    v6 = ((unsigned __int64)(unsigned __int8)v5 >> 3) + 1;
    if ( (unsigned __int64)(unsigned __int8)v5 >> 3 != -1LL )
    {
      v5 = 0LL;
      do
      {
        *((_BYTE *)a2 + v5 + 7) = 0;
        ++v4;
        *((_BYTE *)a2 + v6 + v5 + 7) = -1;
        v5 = v4;
      }
      while ( v4 < v6 );
    }
  }
  return v5;
}
