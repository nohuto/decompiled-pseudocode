/*
 * XREFs of PnpCallAddDevice @ 0x140739044
 * Callers:
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x140099884 (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x1401765F8 (PpvUtilCallAddDevice.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1402A1370 (McTemplateK0q.c)
 *     McTemplateK0qhzr1z @ 0x1402A13DC (McTemplateK0qhzr1z.c)
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

  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  if ( (byte_14042BDBB & 8) != 0 )
    McTemplateK0qhzr1z(
      *(_WORD *)(a2 + 56) >> 1,
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
  if ( (byte_14042BDBB & 8) != 0 )
    McTemplateK0q(v9, v8, v11, v10);
  return v10;
}
