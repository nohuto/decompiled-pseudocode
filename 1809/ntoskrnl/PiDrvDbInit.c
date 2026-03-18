/*
 * XREFs of PiDrvDbInit @ 0x14073A700
 * Callers:
 *     PiPnpRtlInit @ 0x14073A540 (PiPnpRtlInit.c)
 * Callees:
 *     PiDrvDbSetupNodes @ 0x14073A7E4 (PiDrvDbSetupNodes.c)
 *     PiDrvDbSuspendNodes @ 0x14073A974 (PiDrvDbSuspendNodes.c)
 *     PiDrvDbRegisterNode @ 0x14073AA70 (PiDrvDbRegisterNode.c)
 *     DrvDbOpenContext @ 0x14073B1B8 (DrvDbOpenContext.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073B598 (PiDrvDbEnumDriverStoreNodes.c)
 */

__int64 __fastcall PiDrvDbInit(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r8
  int v4; // edi
  wchar_t **i; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      v1 = PiDrvDbSetupNodes(a1, 0LL);
      if ( v1 >= 0 )
        return (unsigned int)PiDrvDbSuspendNodes(0LL);
    }
  }
  else
  {
    qword_140433168 = (__int64)&PiDrvDbNodeList;
    PiDrvDbNodeList = (__int64)&PiDrvDbNodeList;
    v1 = DrvDbOpenContext();
    if ( v1 >= 0 )
    {
      v4 = 0;
      for ( i = &PiDrvDbNodeDescriptors; ; i += 2 )
      {
        v6 = *((_DWORD *)i + 2);
        if ( (v6 & 4) == 0 || (MEMORY[0xFFFFF780000002F0] & 0x400) == 0 )
        {
          v1 = PiDrvDbRegisterNode(*i, v6, v3, 0LL);
          if ( v1 < 0 )
            break;
        }
        if ( (unsigned int)++v4 >= 2 )
        {
          v1 = PiDrvDbEnumDriverStoreNodes(PiDrvDbRegisterNodeCallback, &v10);
          if ( v1 >= 0 )
          {
            v1 = v10;
            if ( v10 >= 0 )
            {
              LOBYTE(v7) = 1;
              v8 = PiDrvDbSuspendNodes(v7);
              v1 = v8;
              if ( v8 >= 0 )
                return (unsigned int)PiDrvDbSetupNodes(0LL, (unsigned int)v8);
            }
          }
          return (unsigned int)v1;
        }
      }
    }
  }
  return (unsigned int)v1;
}
