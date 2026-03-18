/*
 * XREFs of ?OnSpatialReady@CSpatialRemarshaler@@EEAAXPEAUIDwmSpatialCompositor@@@Z @ 0x1801CD230
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800518CC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

void __fastcall CSpatialRemarshaler::OnSpatialReady(CSpatialRemarshaler *this, struct IDwmSpatialCompositor *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r10
  unsigned int v5; // ecx
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( CNotificationResource::ShouldNotify((CSpatialRemarshaler *)((char *)this - 64)) )
  {
    v3 = *(_QWORD *)(v2 + 48);
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1208LL) + 56LL);
    if ( v3 )
      v5 = *(_DWORD *)(v3 + 68);
    else
      v5 = 0;
    v6[0] = v5;
    v6[1] = *(unsigned int *)(v2 + 56);
    CoreUICallSend(v4, v6, 2LL, 13LL, 0, &unk_1802763CE);
  }
}
