/*
 * XREFs of ?CrmpActivityContextStart@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_ACTIVITY_ID@@PAGPAKP6GXPAX5W4_CRM_NOTIFICATION_TYPE@@55@Z5@Z @ 0x1000A550
 * Callers:
 *     _CrmActivityAllocate@28 @ 0x1000A470 (_CrmActivityAllocate@28.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall CrmpActivityContextStart(int *a1, int a2, int a3, int a4, int *a5, int a6, int a7)
{
  HANDLE EventW; // eax
  CLIENT_CALL_RETURN result; // eax
  int v11; // [esp+10h] [ebp-30h] BYREF
  int v12; // [esp+14h] [ebp-2Ch]
  int *v13; // [esp+18h] [ebp-28h]
  int v14; // [esp+1Ch] [ebp-24h]
  CLIENT_CALL_RETURN v15; // [esp+20h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v14 = a2;
  v13 = a1;
  v11 = -1;
  v12 = -1;
  EventW = CreateEventW(0, 0, 0, 0);
  a1[11] = (int)EventW;
  if ( EventW )
  {
    ms_exc.registration.TryLevel = 0;
    result.Pointer = _NdrClientCall4(&stru_10001638, &byte_10002E88, &v11, *(_DWORD *)(a2 + 4), a3, a4, a1 + 7, a5).Pointer;
    v15.Pointer = result.Pointer;
    ms_exc.registration.TryLevel = -2;
    if ( result.Simple >= 0 )
    {
      a1[4] = a2;
      *a1 = a3;
      a1[5] = a6;
      a1[6] = a7;
      a1[2] = v11;
      a1[3] = v12;
      if ( a5 )
        a1[10] = *a5;
      else
        a1[10] = -1;
      return 0;
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    return (CLIENT_CALL_RETURN)((unsigned __int16)GetLastError() | 0xC0070000);
  }
  else
  {
    return (CLIENT_CALL_RETURN)GetLastError();
  }
  return result;
}
