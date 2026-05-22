/*
 * XREFs of ?CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z @ 0x1800486A0
 * Callers:
 *     ?AddDeviceId@MPCConstantManager@@AEAAXW4InputType@@K@Z @ 0x1800482E4 (-AddDeviceId@MPCConstantManager@@AEAAXW4InputType@@K@Z.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x18004859C (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x180048850 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_f8d27b8d936a7adc219ade59e2fa9c02_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800FF0E0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_f8d27b8d936a7adc219ade59e2fa9c02_@@AEAVexception_ptr@st.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCConstantManager::CheckTypeExistence(__int64 a1, int a2)
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

  if ( !*(_QWORD *)(a1 + 80) )
    return 0;
  j = *(__int64 **)(a1 + 72);
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
