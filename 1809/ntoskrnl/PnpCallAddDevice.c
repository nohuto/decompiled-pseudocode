/*
 * XREFs of PnpCallAddDevice @ 0x14070DEB0
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x14000EA6C (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x14016BE24 (PpvUtilCallAddDevice.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x14028B2EC (McTemplateK0q.c)
 *     McTemplateK0qhzr1z @ 0x14028B358 (McTemplateK0qhzr1z.c)
 */

__int64 __fastcall PnpCallAddDevice(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *),
        int a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r8
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  if ( (byte_140406847 & 8) != 0 )
    McTemplateK0qhzr1z(
      a1,
      a2,
      (__int64)a3,
      a4,
      *(_WORD *)(a2 + 56) >> 1,
      *(_QWORD *)(a2 + 64),
      *(const wchar_t **)(a1 + 48));
  v7 = PnpSetDeviceAffinityThread(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v10 = PpvUtilCallAddDevice(*(struct _DEVICE_OBJECT **)(a1 + 32), (struct _DRIVER_OBJECT *)a2, a3);
  if ( v7 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140406847 & 8) != 0 )
    McTemplateK0q(v9, v8, v11, v10);
  return v10;
}
