/*
 * XREFs of ?OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F9110
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A7828 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialRemarshaler::OnSceneReady(CSpatialRemarshaler *this, struct ISpectreRenderer *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // ecx
  int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF

  if ( CNotificationResource::ShouldNotify((CSpatialRemarshaler *)((char *)this - 64)) )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 68);
    else
      v4 = 0;
    LOWORD(v6) = 0;
    CoreUICallSend(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1224LL) + 48LL),
      &v7,
      2LL,
      14LL,
      v6,
      &unk_1802B113E,
      v4,
      *(unsigned int *)(v2 + 56));
  }
  return 0LL;
}
