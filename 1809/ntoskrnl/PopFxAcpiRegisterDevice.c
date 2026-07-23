/*
 * XREFs of PopFxAcpiRegisterDevice @ 0x1402E88A8
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1402E8420 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     PopFxCreateDeviceCommon @ 0x140179A58 (PopFxCreateDeviceCommon.c)
 *     PopFxDestroyDeviceCommon @ 0x1402D7EF0 (PopFxDestroyDeviceCommon.c)
 *     PopFxInsertAcpiDevice @ 0x1402D8414 (PopFxInsertAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x1402E9504 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiRegisterDevice(__int64 a1, ULONG_PTR a2, __int64 a3, PVOID **a4, _QWORD *a5)
{
  int v8; // eax
  PVOID *v9; // rbx
  int v10; // edi
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+38h] [rbp-28h] BYREF
  PVOID v18; // [rsp+48h] [rbp-18h]
  void *v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]

  P = 0LL;
  v8 = PopFxCreateDeviceCommon(a1, a2, a3, 4, &P);
  v9 = (PVOID *)P;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_7;
  v11 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)BugCheckParameter4 = *(_OWORD *)a3;
  v12 = *(_QWORD *)(a3 + 32);
  v19 = (void *)*((_QWORD *)&v11 + 1);
  v18 = P;
  v20 = v12;
  PopPluginAcpiNotificationStrict(a2, 3uLL, (ULONG_PTR)BugCheckParameter4);
  if ( !v19 )
    goto LABEL_5;
  PopFxInsertAcpiDevice(v14, v13, (__int64)v9);
  if ( v19 )
  {
    v9[10] = (PVOID)a2;
    v9[11] = v19;
    *a5 = v19;
    *a4 = v9;
  }
  else
  {
LABEL_5:
    v10 = -1073741823;
    *a4 = 0LL;
    *a5 = 0LL;
  }
  if ( v10 < 0 )
  {
LABEL_7:
    if ( v9 )
    {
      v9[10] = 0LL;
      v9[11] = 0LL;
      PopFxDestroyDeviceCommon(v9);
    }
  }
  return (unsigned int)v10;
}
