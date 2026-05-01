/*
 * XREFs of ?CrmpActivityContextStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_ACTIVITY_ID@@PEAGPEAKP6AXPEAX5W4_CRM_NOTIFICATION_TYPE@@55@Z5@Z @ 0x1800084F0
 * Callers:
 *     CrmActivityAllocate @ 0x180008420 (CrmActivityAllocate.c)
 * Callees:
 *     <none>
 */

int __fastcall CrmpActivityContextStart(__int64 a1, __int64 a2, int a3, __int64 a4, int *a5, __int64 a6, __int64 a7)
{
  HANDLE EventW; // rax
  CLIENT_CALL_RETURN v12; // rax
  int v13; // eax
  _QWORD v15[8]; // [rsp+58h] [rbp-40h] BYREF

  v15[0] = -1LL;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *(_QWORD *)(a1 + 64) = EventW;
  if ( EventW )
  {
    v12.Pointer = NdrClientCall3(
                    (MIDL_STUBLESS_PROXY_INFO *)&stru_180013BA0,
                    2u,
                    0LL,
                    v15,
                    *(_QWORD *)(a2 + 8),
                    a3,
                    a4,
                    a1 + 40,
                    a5).Pointer;
    v15[1] = v12.Pointer;
    if ( SLODWORD(v12.Simple) >= 0 )
    {
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)a1 = a3;
      *(_QWORD *)(a1 + 24) = a6;
      *(_QWORD *)(a1 + 32) = a7;
      *(_QWORD *)(a1 + 8) = v15[0];
      if ( a5 )
        v13 = *a5;
      else
        v13 = -1;
      *(_DWORD *)(a1 + 56) = v13;
      LODWORD(v12.Pointer) = 0;
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    LODWORD(v12.Pointer) = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LODWORD(v12.Pointer) = GetLastError();
  }
  return (int)v12.Pointer;
}
