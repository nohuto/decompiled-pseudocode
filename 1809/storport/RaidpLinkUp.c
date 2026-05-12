/*
 * XREFs of RaidpLinkUp @ 0x1C003E060
 * Callers:
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C003D868 (McTemplateK0pq.c)
 *     StorPortResume @ 0x1C003F340 (StorPortResume.c)
 */

char __fastcall RaidpLinkUp(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // di
  int v6; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 56);
    McTemplateK0pq((struct _MCGEN_TRACE_CONTEXT *)a1, &EventLinkUp, a3, *(_QWORD *)(a1 + 552) + 16LL, v6);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 2220), 1);
  v4 = StorPortResume(*(_QWORD *)(a1 + 552) + 16LL);
  if ( v4 )
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
  return v4;
}
