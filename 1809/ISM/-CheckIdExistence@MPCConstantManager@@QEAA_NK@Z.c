/*
 * XREFs of ?CheckIdExistence@MPCConstantManager@@QEAA_NK@Z @ 0x180048778
 * Callers:
 *     ?RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180048404 (-RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z @ 0x180048458 (-RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z.c)
 *     ?CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKPEBG@Z @ 0x180048964 (-CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKPEBG@Z.c)
 *     ?SetAllConstantsForDeviceToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@IPEAVBamoAsyncHRESULTProxy@@@Z @ 0x180048EA0 (-SetAllConstantsForDeviceToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCConstantManager::CheckIdExistence(MPCConstantManager *this, unsigned int a2)
{
  __int64 *j; // rax
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r8
  __int64 v6; // r10
  char v7; // dl
  __int64 **v8; // rcx
  __int64 *v9; // r8
  __int64 *i; // rcx

  if ( !*((_QWORD *)this + 8) )
    return 0;
  j = (__int64 *)*((_QWORD *)this + 7);
  v3 = j;
  v4 = (__int64 *)j[1];
  v5 = v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *((_DWORD *)v5 + 8) >= a2 )
    {
      if ( *((_BYTE *)v3 + 25) && a2 < *((_DWORD *)v5 + 8) )
        v3 = v5;
      j = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( !*((_BYTE *)v3 + 25) )
    v4 = (__int64 *)*v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( a2 >= *((_DWORD *)v4 + 8) )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  v6 = 0LL;
  if ( j == v3 )
    return 0;
  v7 = 1;
  do
  {
    ++v6;
    if ( !*((_BYTE *)j + 25) )
    {
      v8 = (__int64 **)j[2];
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v9 = *v8;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
          j = v9;
      }
    }
  }
  while ( j != v3 );
  if ( !v6 )
    return 0;
  return v7;
}
