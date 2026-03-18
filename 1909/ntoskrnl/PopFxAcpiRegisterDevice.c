/*
 * XREFs of PopFxAcpiRegisterDevice @ 0x14030471C
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1403042E8 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     PopFxCreateDeviceCommon @ 0x1401924B0 (PopFxCreateDeviceCommon.c)
 *     PopFxDestroyDeviceCommon @ 0x14019D06C (PopFxDestroyDeviceCommon.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFxInsertAcpiDevice @ 0x1402F3258 (PopFxInsertAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x14030638C (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiRegisterDevice(__int64 a1, ULONG_PTR a2, __int64 a3, PVOID **a4, _QWORD *a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  PVOID *v12; // rbx
  int v13; // edi
  __int128 v14; // xmm1
  ULONG_PTR v15; // xmm0_8
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4[5]; // [rsp+38h] [rbp-28h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  P = 0LL;
  v11 = PopFxCreateDeviceCommon(a1, v9, v10, 4, &P);
  v12 = (PVOID *)P;
  v13 = v11;
  if ( v11 < 0 )
    goto LABEL_7;
  v14 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)BugCheckParameter4 = *(_OWORD *)a3;
  v15 = *(_QWORD *)(a3 + 32);
  BugCheckParameter4[3] = *((_QWORD *)&v14 + 1);
  BugCheckParameter4[2] = (ULONG_PTR)P;
  BugCheckParameter4[4] = v15;
  PopPluginAcpiNotificationStrict(a2, 3uLL, (ULONG_PTR)BugCheckParameter4);
  if ( !BugCheckParameter4[3] )
    goto LABEL_5;
  PopFxInsertAcpiDevice(v17, v16, (__int64)v12);
  if ( BugCheckParameter4[3] )
  {
    v12[10] = (PVOID)a2;
    v12[11] = (PVOID)BugCheckParameter4[3];
    *a5 = BugCheckParameter4[3];
    *a4 = v12;
  }
  else
  {
LABEL_5:
    v13 = -1073741823;
    *a4 = 0LL;
    *a5 = 0LL;
  }
  if ( v13 < 0 )
  {
LABEL_7:
    if ( v12 )
    {
      v12[10] = 0LL;
      v12[11] = 0LL;
      PopFxDestroyDeviceCommon(v12);
    }
  }
  return (unsigned int)v13;
}
