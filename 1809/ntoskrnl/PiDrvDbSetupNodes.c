/*
 * XREFs of PiDrvDbSetupNodes @ 0x14073B9B4
 * Callers:
 *     PiDrvDbInit @ 0x14073B8D0 (PiDrvDbInit.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     PiDrvDbSetupNodeHive @ 0x140840358 (PiDrvDbSetupNodeHive.c)
 */

__int64 __fastcall PiDrvDbSetupNodes(int a1)
{
  unsigned int ObjectProperty; // edi
  const wchar_t *v3; // rbp
  __int64 v4; // rbx
  _DWORD *v6; // r14
  int v7; // eax
  int v8; // [rsp+90h] [rbp+8h] BYREF
  int v9; // [rsp+98h] [rbp+10h] BYREF

  ObjectProperty = 0;
  if ( a1 )
  {
    if ( a1 != 2 )
      return ObjectProperty;
    v3 = L"SOFTWARE";
  }
  else
  {
    v3 = L"SYSTEM";
  }
  v4 = PiDrvDbNodeList;
  if ( (__int64 *)PiDrvDbNodeList != &PiDrvDbNodeList )
  {
    while ( (*(_DWORD *)(v4 + 64) & 4) != 0 )
    {
LABEL_7:
      v4 = *(_QWORD *)v4;
      if ( (__int64 *)v4 == &PiDrvDbNodeList )
        return ObjectProperty;
    }
    if ( a1 )
    {
LABEL_6:
      if ( (*(_DWORD *)(v4 + 64) & 0x10) != 0 )
      {
        v7 = PiDrvDbSetupNodeHive(v4, v3);
        ObjectProperty = v7;
        if ( v7 < 0 )
        {
          if ( *(int *)(v4 + 496) >= 0 )
            *(_DWORD *)(v4 + 496) = v7;
          ObjectProperty = 0;
        }
        if ( a1 == 2 )
        {
          PnpSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(v4 + 24),
            7u,
            *(_QWORD *)(v4 + 72),
            0LL,
            (__int64)&DEVPKEY_DriverDatabase_SetupStatus,
            24,
            v4 + 496,
            4u,
            0);
          *(_DWORD *)(v4 + 64) &= ~0x10u;
        }
      }
      goto LABEL_7;
    }
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(v4 + 24),
                7u,
                *(_QWORD *)(v4 + 72),
                0LL,
                (__int64)&DEVPKEY_DriverDatabase_SetupOptions,
                (__int64)&v8,
                v4 + 492,
                4,
                (__int64)&v9,
                0) < 0
      || v8 != 7
      || v9 != 4 )
    {
      *(_DWORD *)(v4 + 492) = 177;
    }
    v6 = (_DWORD *)(v4 + 496);
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(v4 + 24),
                       7u,
                       *(_QWORD *)(v4 + 72),
                       0LL,
                       (__int64)&DEVPKEY_DriverDatabase_SetupStatus,
                       (__int64)&v8,
                       v4 + 496,
                       4,
                       (__int64)&v9,
                       0);
    if ( (ObjectProperty & 0x80000000) == 0 && v8 == 24 && v9 == 4 )
    {
      if ( *v6 != 259 )
        goto LABEL_6;
    }
    else
    {
      *v6 = 259;
      ObjectProperty = 0;
    }
    *v6 = 0;
    *(_DWORD *)(v4 + 64) |= 0x10u;
    goto LABEL_6;
  }
  return ObjectProperty;
}
