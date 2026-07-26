/*
 * XREFs of ?ndisMpHookNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C00D20F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x1C0107DF4 (-Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS.c)
 */

__int64 __fastcall ndisMpHookNmrClientAttachProvider(void *a1, void *a2, const struct _NPI_REGISTRATION_INSTANCE *a3)
{
  const struct _NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS *NpiSpecificCharacteristics; // r8
  __int64 v5; // rdx

  if ( a3->Version == 1
    && a3->Size == 40
    && (NpiSpecificCharacteristics = (const struct _NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS *)a3->NpiSpecificCharacteristics) != 0LL
    && (v5 = *(int *)NpiSpecificCharacteristics, (_DWORD)v5 == 1) )
  {
    return MINIPORT_HOOK_DRIVER::Register(
             (struct MINIPORT_HOOK_DRIVER *)((char *)g_MiniportHookDrivers + 128 * v5),
             a1,
             NpiSpecificCharacteristics);
  }
  else
  {
    return 3221225485LL;
  }
}
